#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Con_3;
Symbol sym_TupleCong_1;
Symbol sym_TupleCong_0;
Symbol sym_Anno_2;
Symbol sym_Undefined_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_RDefNoArgs_2;
Symbol sym_RDef_3;
Symbol sym_OverlayNoArgs_2;
Symbol sym_Overlay_3;
Symbol sym_CallNoArgs_1;
Symbol sym_RChoice_2;
Symbol sym_ParenStrat_1;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_Match_1;
Symbol sym_LChoice_2;
Symbol sym_PrimNoArgs_1;
Symbol sym_Prim_2;
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
void init_constructors (void)
{
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_TupleCong_1 = ATmakeSymbol("TupleCong", 1, ATfalse);
  ATprotectSymbol(sym_TupleCong_1);
  sym_TupleCong_0 = ATmakeSymbol("TupleCong", 0, ATfalse);
  ATprotectSymbol(sym_TupleCong_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
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
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_PrimNoArgs_1 = ATmakeSymbol("PrimNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_PrimNoArgs_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_f_25;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_e_24;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_v_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_a_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_v_21;
ATerm term_o_21;
ATerm term_i_21;
ATerm term_f_21;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_k_19;
ATerm term_g_19;
ATerm term_e_19;
ATerm term_c_19;
ATerm term_s_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_s_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_g_17;
ATerm term_y_16;
ATerm term_p_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_k_15;
ATerm term_d_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_y_13;
ATerm term_e_13;
ATerm term_b_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_j_12;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_j_11;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_s_8;
ATerm term_o_8;
ATerm term_m_8;
void init_constant_terms (void)
{
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Op_2, term_q_11, (ATerm) ATempty);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_11);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Call_2, term_x_12, (ATerm) ATempty);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Call_2, term_l_14, (ATerm) ATempty);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Call_2, term_p_11, (ATerm) ATempty);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym__3, term_y_16, term_v_21, term_m_8);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm n_0 (ATerm c_0, ATerm);
ATerm b_1 (ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm y_0, ATerm u_0, ATerm v_0, ATerm);
ATerm d_1 (ATerm l_79 (ATerm), ATerm m_79 (ATerm), ATerm q_1, ATerm e_1, ATerm g_1, ATerm);
ATerm j_1 (ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm c_3, ATerm y_2, ATerm z_2, ATerm);
ATerm k_1 (ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm u_3, ATerm l_3, ATerm m_3, ATerm n_3, ATerm);
ATerm l_1 (ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm w_81 (ATerm), ATerm c_6, ATerm y_3, ATerm b_4, ATerm c_4, ATerm);
ATerm unescape_chars_0_0 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm w_2 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm DesugarOnce_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm at_last_1_0 (ATerm k_94 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm o_3 (ATerm);
ATerm n_1 (ATerm n_102 (ATerm), ATerm t_11, ATerm);
ATerm o_1 (ATerm y_102 (ATerm), ATerm b_12, ATerm);
ATerm c_17 (ATerm f_13, ATerm j_13, ATerm);
ATerm f_17 (ATerm l_13, ATerm m_13, ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm w_21 (ATerm l_21, ATerm);
ATerm a_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm Desugar_0_0 (ATerm);
ATerm repeat_1_0 (ATerm u_86 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm s_87 (ATerm), ATerm);
ATerm s_1 (ATerm i_68 (ATerm), ATerm j_68 (ATerm), ATerm n_17, ATerm j_17, ATerm k_17, ATerm);
ATerm t_1 (ATerm a_106 (ATerm), ATerm t_17, ATerm u_17, ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm u_1 (ATerm w_17, ATerm);
ATerm dtime_0_0 (ATerm);
ATerm v_1 (ATerm c_109 (ATerm), ATerm k_18, ATerm);
ATerm l_19 (ATerm f_19, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm a_5 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm z_1 (ATerm b_101 (ATerm), ATerm c_101 (ATerm), ATerm h_20, ATerm);
ATerm fetch_1_0 (ATerm t_93 (ATerm), ATerm);
ATerm a_2 (ATerm y_105 (ATerm), ATerm q_20, ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm b_2 (ATerm k_22, ATerm);
ATerm if_verbose2_1_0 (ATerm l_107 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm k_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm m_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm d_2 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm w_23, ATerm);
ATerm y_5 (ATerm);
ATerm b_6 (ATerm);
ATerm d_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm e_2 (ATerm s_24, ATerm t_24, ATerm u_24, ATerm);
ATerm f_2 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm m_25, ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm k_107 (ATerm), ATerm);
ATerm j_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm k_6 (ATerm);
ATerm need_help_1_0 (ATerm a_110 (ATerm), ATerm);
ATerm map_1_0 (ATerm j_93 (ATerm), ATerm);
ATerm i_2 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t_27, ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm s_2 (ATerm o_28, ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm q_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm w_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm);
ATerm v_2 (ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm j_29, ATerm f_29, ATerm g_29, ATerm);
ATerm b_7 (ATerm);
ATerm d_3 (ATerm d_112 (ATerm), ATerm n_29, ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm e_3 (ATerm c_112 (ATerm), ATerm b_30, ATerm);
ATerm option_wrap_4_0 (ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm);
ATerm o_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm iowrap_3_0 (ATerm l_109 (ATerm), ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm);
ATerm e_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm stratego_desugar_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm n_0 (ATerm c_0, ATerm t)
{
  ATerm e_0 = NULL,k_0 = NULL,l_0 = NULL,m_0 = NULL;
  t = term_m_8;
  t = whoami_0_0(t);
  e_0 = t;
  t = term_o_8;
  k_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_8), e_0), term_s_8);
  l_0 = t;
  t = SSL_printnl(k_0, l_0);
  t = term_x_8;
  m_0 = t;
  t = SSL_exit(m_0);
  t = c_0;
  return(t);
}
ATerm b_1 (ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm y_0, ATerm u_0, ATerm v_0, ATerm t)
{
  ATerm t_0 = NULL,w_0 = NULL,x_0 = NULL,o_0 = NULL,p_0 = NULL;
  t = SSLgetAnnotations(y_0);
  t_0 = t;
  t = u_0;
  t = a_80(t);
  w_0 = t;
  t = v_0;
  t = b_80(t);
  x_0 = t;
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, w_0, x_0);
  o_0 = t;
  t = SSLsetAnnotations(o_0, t_0);
  return(t);
}
ATerm d_1 (ATerm l_79 (ATerm), ATerm m_79 (ATerm), ATerm q_1, ATerm e_1, ATerm g_1, ATerm t)
{
  ATerm c_1 = NULL,h_1 = NULL,p_1 = NULL,q_0 = NULL,r_0 = NULL;
  t = SSLgetAnnotations(q_1);
  c_1 = t;
  t = e_1;
  t = l_79(t);
  h_1 = t;
  t = g_1;
  t = m_79(t);
  p_1 = t;
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym_OpDecl_2, h_1, p_1);
  q_0 = t;
  t = SSLsetAnnotations(q_0, c_1);
  return(t);
}
ATerm j_1 (ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm c_3, ATerm y_2, ATerm z_2, ATerm t)
{
  ATerm x_2 = NULL,a_3 = NULL,b_3 = NULL,s_0 = NULL,z_0 = NULL;
  t = SSLgetAnnotations(c_3);
  x_2 = t;
  t = y_2;
  t = j_85(t);
  a_3 = t;
  t = z_2;
  t = k_85(t);
  b_3 = t;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_3, b_3);
  s_0 = t;
  t = SSLsetAnnotations(s_0, x_2);
  return(t);
}
ATerm k_1 (ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm u_3, ATerm l_3, ATerm m_3, ATerm n_3, ATerm t)
{
  ATerm k_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,a_1 = NULL,f_1 = NULL;
  t = SSLgetAnnotations(u_3);
  k_3 = t;
  t = l_3;
  t = n_85(t);
  r_3 = t;
  t = m_3;
  t = o_85(t);
  s_3 = t;
  t = n_3;
  t = p_85(t);
  t_3 = t;
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, r_3, s_3, t_3);
  a_1 = t;
  t = SSLsetAnnotations(a_1, k_3);
  return(t);
}
ATerm l_1 (ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm w_81 (ATerm), ATerm c_6, ATerm y_3, ATerm b_4, ATerm c_4, ATerm t)
{
  ATerm x_3 = NULL,l_4 = NULL,u_4 = NULL,i_5 = NULL,i_1 = NULL,m_1 = NULL;
  t = SSLgetAnnotations(c_6);
  x_3 = t;
  t = y_3;
  t = u_81(t);
  l_4 = t;
  t = b_4;
  t = v_81(t);
  u_4 = t;
  t = c_4;
  t = w_81(t);
  i_5 = t;
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym_RDef_3, l_4, u_4, i_5);
  i_1 = t;
  t = SSLsetAnnotations(i_1, x_3);
  return(t);
}
ATerm unescape_chars_0_0 (ATerm t)
{
  ATerm y_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_9 = ATgetFirst((ATermList) t);
          c_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_9;
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
        _fail(t);
      t = c_9;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_9 = ATgetFirst((ATermList) t);
          e_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_9;
      if(match_int(t, 34))
        {
          t = (ATerm) ATinsert(CheckATermList(e_9), term_f_9);
        }
      else
        {
          if(match_int(t, 92))
            {
              t = (ATerm) ATinsert(CheckATermList(e_9), term_g_9);
            }
          else
            {
              if(match_int(t, 110))
                {
                  t = (ATerm) ATinsert(CheckATermList(e_9), term_h_9);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(e_9), term_i_9);
                }
            }
        }
      ;
      LocalPopChoice(z_8);
    }
  else
    {
      t = y_8;
    }
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
        d_5 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_5 = ATgetFirst((ATermList) t);
            f_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_2(_id, unescape_chars_0_0, d_5, e_5, f_5, t);
        ;
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
      }
  }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm l_5 = NULL;
  l_5 = t;
  t = n_1(u_2, l_5, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm z_7 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL;
  z_7 = t;
  c_8 = t;
  t = SSL_explode_string(c_8);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_9 = ATgetFirst((ATermList) t);
      if(((ATgetType(o_9) != AT_INT) || (ATgetInt((ATermInt) o_9) != 39)))
        _fail(t);
      b_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_8;
  d_8 = t;
  t = SSL_implode_string(d_8);
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm n_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL;
  n_8 = t;
  q_8 = t;
  t = SSL_explode_string(q_8);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_9 = ATgetFirst((ATermList) t);
      if(((ATgetType(r_9) != AT_INT) || (ATgetInt((ATermInt) r_9) != 39)))
        _fail(t);
      p_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_8;
  r_8 = t;
  t = SSL_implode_string(r_8);
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm a_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL;
  a_9 = t;
  m_9 = t;
  t = SSL_explode_string(m_9);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_9 = ATgetFirst((ATermList) t);
      if(((ATgetType(s_9) != AT_INT) || (ATgetInt((ATermInt) s_9) != 39)))
        _fail(t);
      l_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_9;
  n_9 = t;
  t = SSL_implode_string(n_9);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm i_13 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL;
  i_13 = t;
  i_14 = t;
  t = SSL_explode_string(i_14);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_9 = ATgetFirst((ATermList) t);
      if(((ATgetType(u_9) != AT_INT) || (ATgetInt((ATermInt) u_9) != 39)))
        _fail(t);
      h_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_14;
  j_14 = t;
  t = SSL_implode_string(j_14);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm q_15 = NULL,v_15 = NULL,z_15 = NULL,a_16 = NULL;
  q_15 = t;
  z_15 = t;
  t = SSL_explode_string(z_15);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_9 = ATgetFirst((ATermList) t);
      if(((ATgetType(v_9) != AT_INT) || (ATgetInt((ATermInt) v_9) != 39)))
        _fail(t);
      v_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_15;
  a_16 = t;
  t = SSL_implode_string(a_16);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm w_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_10 = NULL,x_10 = NULL,z_10 = NULL,a_11 = NULL;
      w_10 = t;
      if(match_cons(t, sym_Str_1))
        {
          x_10 = ATgetArgument(t, 0);
          {
            ATerm c_11 = NULL,j_5 = NULL,n_5 = NULL;
            t = x_10;
            j_5 = t;
            t = o_1(t_2, j_5, t);
            n_5 = t;
            t = o_1(unescape_chars_0_0, n_5, t);
            c_11 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, c_11);
          }
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              x_10 = ATgetArgument(t, 0);
              {
                ATerm s_5 = NULL,t_5 = NULL;
                t = x_10;
                t_5 = t;
                t = SSL_string_to_real(t_5);
                s_5 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, s_5);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  x_10 = ATgetArgument(t, 0);
                  {
                    ATerm z_5 = NULL,a_6 = NULL;
                    t = x_10;
                    a_6 = t;
                    t = SSL_string_to_int(a_6);
                    z_5 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, z_5);
                  }
                }
              else
                {
                  ATerm l_6 = NULL;
                  if(match_cons(t, sym_Con_3))
                    {
                      x_10 = ATgetArgument(t, 0);
                      z_10 = ATgetArgument(t, 1);
                      a_11 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = a_11;
                  l_6 = t;
                  t = SSL_is_string(l_6);
                  t = (ATerm) ATmakeAppl(sym_Con_3, x_10, z_10, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_11), (ATerm) ATempty));
                }
            }
        }
      ;
      LocalPopChoice(x_9);
    }
  else
    {
      t = w_9;
      {
        ATerm y_9 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_6 = NULL,s_6 = NULL,v_6 = NULL,c_7 = NULL,x_6 = NULL,y_6 = NULL,k_7 = NULL,l_7 = NULL,n_7 = NULL,r_1 = NULL,w_1 = NULL;
            r_6 = t;
            if(match_cons(t, sym_DefaultVarDec_1))
              {
                s_6 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            c_7 = t;
            t = r_6;
            v_6 = t;
            t = SSLgetAnnotations(v_6);
            x_6 = t;
            t = s_6;
            l_7 = t;
            t = SSL_explode_string(l_7);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_10 = ATgetFirst((ATermList) t);
                if(((ATgetType(c_10) != AT_INT) || (ATgetInt((ATermInt) c_10) != 39)))
                  _fail(t);
                k_7 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_7;
            n_7 = t;
            t = SSL_implode_string(n_7);
            y_6 = t;
            w_1 = t;
            t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_6);
            r_1 = t;
            t = SSLsetAnnotations(r_1, x_6);
            ;
            LocalPopChoice(b_10);
          }
        else
          {
            t = y_9;
            {
              ATerm d_10 = t;
              int e_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL,t_7 = NULL;
                  p_7 = t;
                  if(match_cons(t, sym_RDef_3))
                    {
                      q_7 = ATgetArgument(t, 0);
                      r_7 = ATgetArgument(t, 1);
                      t_7 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = l_1(w_2, _id, _id, p_7, q_7, r_7, t_7, t);
                  ;
                  LocalPopChoice(e_10);
                }
              else
                {
                  t = d_10;
                  {
                    ATerm f_10 = t;
                    int g_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL;
                        f_8 = t;
                        if(match_cons(t, sym_SDef_3))
                          {
                            g_8 = ATgetArgument(t, 0);
                            h_8 = ATgetArgument(t, 1);
                            i_8 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = k_1(f_3, _id, _id, f_8, g_8, h_8, i_8, t);
                        ;
                        LocalPopChoice(g_10);
                      }
                    else
                      {
                        t = f_10;
                        {
                          ATerm h_10 = t;
                          int i_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL;
                              t_8 = t;
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  u_8 = ATgetArgument(t, 0);
                                  v_8 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = j_1(g_3, _id, t_8, u_8, v_8, t);
                              ;
                              LocalPopChoice(i_10);
                            }
                          else
                            {
                              t = h_10;
                              {
                                ATerm j_10 = t;
                                int k_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_9 = NULL,q_9 = NULL,t_9 = NULL,l_10 = NULL,z_9 = NULL,a_10 = NULL,y_10 = NULL,h_11 = NULL,i_11 = NULL,x_1 = NULL,y_1 = NULL;
                                    p_9 = t;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        q_9 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    l_10 = t;
                                    t = p_9;
                                    t_9 = t;
                                    t = SSLgetAnnotations(t_9);
                                    z_9 = t;
                                    t = q_9;
                                    h_11 = t;
                                    t = SSL_explode_string(h_11);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm m_10 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(m_10) != AT_INT) || (ATgetInt((ATermInt) m_10) != 39)))
                                          _fail(t);
                                        y_10 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = y_10;
                                    i_11 = t;
                                    t = SSL_implode_string(i_11);
                                    a_10 = t;
                                    y_1 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, a_10);
                                    x_1 = t;
                                    t = SSLsetAnnotations(x_1, z_9);
                                    ;
                                    LocalPopChoice(k_10);
                                  }
                                else
                                  {
                                    t = j_10;
                                    {
                                      ATerm n_10 = t;
                                      int o_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm k_11 = NULL,l_11 = NULL,v_11 = NULL,k_12 = NULL,y_11 = NULL,g_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,c_2 = NULL,g_2 = NULL;
                                          k_11 = t;
                                          if(match_cons(t, sym_SVar_1))
                                            {
                                              l_11 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          k_12 = t;
                                          t = k_11;
                                          v_11 = t;
                                          t = SSLgetAnnotations(v_11);
                                          y_11 = t;
                                          t = l_11;
                                          q_12 = t;
                                          t = SSL_explode_string(q_12);
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              ATerm p_10 = ATgetFirst((ATermList) t);
                                              if(((ATgetType(p_10) != AT_INT) || (ATgetInt((ATermInt) p_10) != 39)))
                                                _fail(t);
                                              p_12 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = p_12;
                                          r_12 = t;
                                          t = SSL_implode_string(r_12);
                                          g_12 = t;
                                          g_2 = t;
                                          t = (ATerm) ATmakeAppl(sym_SVar_1, g_12);
                                          c_2 = t;
                                          t = SSLsetAnnotations(c_2, y_11);
                                          ;
                                          LocalPopChoice(o_10);
                                        }
                                      else
                                        {
                                          t = n_10;
                                          {
                                            ATerm q_10 = t;
                                            int r_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
                                                t_12 = t;
                                                if(match_cons(t, sym_OpDecl_2))
                                                  {
                                                    u_12 = ATgetArgument(t, 0);
                                                    v_12 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = d_1(h_3, _id, t_12, u_12, v_12, t);
                                                ;
                                                LocalPopChoice(r_10);
                                              }
                                            else
                                              {
                                                t = q_10;
                                                {
                                                  ATerm c_15 = NULL,f_15 = NULL,i_15 = NULL;
                                                  c_15 = t;
                                                  if(match_cons(t, sym_Op_2))
                                                    {
                                                      f_15 = ATgetArgument(t, 0);
                                                      i_15 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = b_1(i_3, _id, c_15, f_15, i_15, t);
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm j_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm k_94 (ATerm), ATerm t)
{
  ATerm g_11 (ATerm t)
  {
    ATerm s_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_16 = NULL,v_16 = NULL,d_17 = NULL;
        u_16 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_16 = ATgetFirst((ATermList) t);
            d_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_2(_id, j_3, u_16, v_16, d_17, t);
        t = k_94(t);
        ;
        LocalPopChoice(t_10);
      }
    else
      {
        t = s_10;
        {
          ATerm q_17 = NULL,r_17 = NULL,b_18 = NULL;
          q_17 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_17 = ATgetFirst((ATermList) t);
              b_18 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_2(_id, g_11, q_17, r_17, b_18, t);
        }
      }
    return(t);
  }
  t = g_11(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_11 = ATgetFirst((ATermList) t);
      o_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_11;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm u_10 = t;
      int v_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_11;
          ;
          LocalPopChoice(v_10);
        }
      else
        {
          t = u_10;
          t = o_11;
          t = last_0_0(t);
        }
    }
  else
    {
      t = o_11;
      t = last_0_0(t);
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm a_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_11 = ATgetFirst((ATermList) t);
      a_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_12;
  return(t);
}
ATerm n_1 (ATerm n_102 (ATerm), ATerm t_11, ATerm t)
{
  ATerm x_11 = NULL,z_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_11 = ATgetFirst((ATermList) t);
      {
        ATerm d_11 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_11;
  t = n_102(t);
  t = t_11;
  t = last_0_0(t);
  t = n_102(t);
  t = t_11;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_11 = ATgetFirst((ATermList) t);
      z_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_11;
  t = at_last_1_0(o_3, t);
  return(t);
}
ATerm o_1 (ATerm y_102 (ATerm), ATerm b_12, ATerm t)
{
  ATerm c_12 = NULL;
  t = SSL_explode_string(b_12);
  t = y_102(t);
  c_12 = t;
  t = SSL_implode_string(c_12);
  return(t);
}
ATerm c_17 (ATerm f_13, ATerm j_13, ATerm t)
{
  t = f_13;
  {
    ATerm f_11 = t;
    if((PushChoice() == 0))
      {
        ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
        t_18 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_18 = ATgetFirst((ATermList) t);
            v_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_2(_id, p_3, t_18, u_18, v_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_11;
      }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_j_11, f_13);
  }
  return(t);
}
ATerm f_17 (ATerm l_13, ATerm m_13, ATerm t)
{
  t = l_13;
  {
    ATerm m_11 = t;
    if((PushChoice() == 0))
      {
        ATerm a_19 = NULL,b_19 = NULL,d_19 = NULL;
        a_19 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_19 = ATgetFirst((ATermList) t);
            d_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_2(_id, q_3, a_19, b_19, d_19, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_11;
      }
    t = (ATerm) ATmakeAppl(sym_Call_2, term_p_11, l_13);
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_r_11;
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm a_14 = NULL,l_20 = NULL,o_20 = NULL,x_20 = NULL,y_20 = NULL;
  a_14 = t;
  l_20 = t;
  t = SSL_explode_term(l_20);
  if(match_cons(t, sym__2))
    {
      ATerm s_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_11 = ATgetArgument(t, 1);
        if(((ATgetType(u_11) == AT_LIST) && !(ATisEmpty(u_11))))
          {
            o_20 = ATgetFirst((ATermList) u_11);
            {
              ATerm w_11 = (ATerm) ATgetNext((ATermList) u_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_14;
  x_20 = t;
  t = SSL_explode_term(x_20);
  if(match_cons(t, sym__2))
    {
      ATerm d_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_12 = ATgetArgument(t, 1);
        if(((ATgetType(e_12) == AT_LIST) && !(ATisEmpty(e_12))))
          {
            ATerm f_12 = ATgetFirst((ATermList) e_12);
            ATerm h_12 = (ATerm) ATgetNext((ATermList) e_12);
            if(((ATgetType(h_12) == AT_LIST) && !(ATisEmpty(h_12))))
              {
                y_20 = ATgetFirst((ATermList) h_12);
                {
                  ATerm i_12 = (ATerm) ATgetNext((ATermList) h_12);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_j_12, (ATerm) ATinsert(ATinsert(ATempty, y_20), o_20));
  return(t);
}
ATerm w_21 (ATerm l_21, ATerm t)
{
  ATerm m_21 = NULL,p_21 = NULL;
  t = l_21;
  p_21 = t;
  t = SSL_explode_string(p_21);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_12 = ATgetFirst((ATermList) t);
      if(((ATgetType(l_12) != AT_INT) || (ATgetInt((ATermInt) l_12) != 39)))
        _fail(t);
      {
        ATerm m_12 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(m_12) == AT_LIST) && !(ATisEmpty(m_12))))
          {
            m_21 = ATgetFirst((ATermList) m_12);
            {
              ATerm n_12 = (ATerm) ATgetNext((ATermList) m_12);
              if(((ATgetType(n_12) == AT_LIST) && !(ATisEmpty(n_12))))
                {
                  ATerm o_12 = ATgetFirst((ATermList) n_12);
                  if(((ATgetType(o_12) != AT_INT) || (ATgetInt((ATermInt) o_12) != 39)))
                    _fail(t);
                  {
                    ATerm s_12 = (ATerm) ATgetNext((ATermList) n_12);
                    if(((ATgetType(s_12) != AT_LIST) || !(ATisEmpty(s_12))))
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
  t = m_21;
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL;
  if(match_cons(t, sym__2))
    {
      r_14 = ATgetArgument(t, 0);
      s_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_j_12, (ATerm) ATinsert(ATinsert(ATempty, s_14), r_14));
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_r_11;
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL;
  if(match_cons(t, sym__2))
    {
      u_14 = ATgetArgument(t, 0);
      v_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_j_12, (ATerm) ATinsert(ATinsert(ATempty, v_14), u_14));
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL;
  if(match_cons(t, sym__2))
    {
      m_15 = ATgetArgument(t, 0);
      n_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_12, (ATerm) ATinsert(ATinsert(ATempty, n_15), m_15));
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_y_12;
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL;
  if(match_cons(t, sym__2))
    {
      r_15 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_12, (ATerm) ATinsert(ATinsert(ATempty, s_15), r_15));
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm i_22 = NULL;
  i_22 = t;
  t = n_1(k_4, i_22, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL;
  t_13 = t;
  if(match_cons(t, sym_Anno_2))
    {
      u_13 = ATgetArgument(t, 0);
      v_13 = ATgetArgument(t, 1);
      {
        ATerm z_13 = NULL;
        t = v_13;
        t = foldr_2_0(v_3, w_3, t);
        z_13 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, u_13, z_13);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          u_13 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, u_13, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              u_13 = ATgetArgument(t, 0);
              {
                ATerm j_21 = NULL;
                t = u_13;
                {
                  ATerm r_21 = NULL;
                  r_21 = t;
                  if(match_string(t, "'\\ '"))
                    {
                      ATerm z_12 = t;
                      int a_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_b_13;
                          ;
                          LocalPopChoice(a_13);
                        }
                      else
                        {
                          t = z_12;
                          t = w_21(r_21, t);
                        }
                    }
                  else
                    {
                      if(match_string(t, "'\\r'"))
                        {
                          ATerm c_13 = t;
                          int d_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = term_e_13;
                              ;
                              LocalPopChoice(d_13);
                            }
                          else
                            {
                              t = c_13;
                              t = w_21(r_21, t);
                            }
                        }
                      else
                        {
                          if(match_string(t, "'\\t'"))
                            {
                              ATerm g_13 = t;
                              int h_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = term_i_9;
                                  ;
                                  LocalPopChoice(h_13);
                                }
                              else
                                {
                                  t = g_13;
                                  t = w_21(r_21, t);
                                }
                            }
                          else
                            {
                              if(match_string(t, "'\\n'"))
                                {
                                  ATerm k_13 = t;
                                  int n_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = term_h_9;
                                      ;
                                      LocalPopChoice(n_13);
                                    }
                                  else
                                    {
                                      t = k_13;
                                      t = w_21(r_21, t);
                                    }
                                }
                              else
                                {
                                  if(match_string(t, "'\\''"))
                                    {
                                      ATerm w_13 = t;
                                      int x_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = term_y_13;
                                          ;
                                          LocalPopChoice(x_13);
                                        }
                                      else
                                        {
                                          t = w_13;
                                          t = w_21(r_21, t);
                                        }
                                    }
                                  else
                                    {
                                      t = w_21(r_21, t);
                                    }
                                }
                            }
                        }
                    }
                  j_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, j_21);
                }
              }
            }
          else
            {
              ATerm b_14 = t;
              int c_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      u_13 = ATgetArgument(t, 0);
                      {
                        ATerm d_14 = ATgetArgument(t, 1);
                      }
                      s_13 = ATgetArgument(t, 2);
                      o_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(c_14);
                  t = (ATerm) ATmakeAppl(sym_Con_3, u_13, s_13, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, o_13), (ATerm) ATempty));
                }
              else
                {
                  t = b_14;
                  {
                    ATerm e_14 = t;
                    int f_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            u_13 = ATgetArgument(t, 0);
                            {
                              ATerm g_14 = ATgetArgument(t, 1);
                            }
                            s_13 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(f_14);
                        t = (ATerm) ATmakeAppl(sym_Con_3, u_13, s_13, term_m_14);
                      }
                    else
                      {
                        t = e_14;
                        if(match_cons(t, sym_Con1_2))
                          {
                            u_13 = ATgetArgument(t, 0);
                            v_13 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, u_13, v_13, term_m_14);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                u_13 = ATgetArgument(t, 0);
                                v_13 = ATgetArgument(t, 1);
                                {
                                  ATerm z_3 (ATerm t)
                                  {
                                    t = v_13;
                                    return(t);
                                  }
                                  t = u_13;
                                  t = foldr_2_0(z_3, a_4, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    u_13 = ATgetArgument(t, 0);
                                    t = u_13;
                                    t = foldr_2_0(d_4, e_4, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        u_13 = ATgetArgument(t, 0);
                                        t = u_13;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            p_13 = ATgetFirst((ATermList) t);
                                            q_13 = (ATerm) ATgetNext((ATermList) t);
                                            t = q_13;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm n_14 = t;
                                                int o_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = c_17(u_13, t_13, t);
                                                    ;
                                                    LocalPopChoice(o_14);
                                                  }
                                                else
                                                  {
                                                    t = n_14;
                                                    t = p_13;
                                                  }
                                              }
                                            else
                                              {
                                                t = c_17(u_13, t_13, t);
                                              }
                                          }
                                        else
                                          {
                                            t = c_17(u_13, t_13, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            u_13 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, u_13));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                u_13 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, u_13));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    u_13 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, u_13));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        u_13 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, u_13));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            u_13 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, u_13), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                u_13 = ATgetArgument(t, 0);
                                                                v_13 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, u_13), v_13);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    u_13 = ATgetArgument(t, 0);
                                                                    v_13 = ATgetArgument(t, 1);
                                                                    {
                                                                      ATerm f_4 (ATerm t)
                                                                      {
                                                                        t = v_13;
                                                                        return(t);
                                                                      }
                                                                      t = u_13;
                                                                      t = foldr_2_0(f_4, g_4, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        u_13 = ATgetArgument(t, 0);
                                                                        t = u_13;
                                                                        t = foldr_2_0(h_4, i_4, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            u_13 = ATgetArgument(t, 0);
                                                                            v_13 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_p_11, (ATerm) ATinsert(CheckATermList(v_13), u_13));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                u_13 = ATgetArgument(t, 0);
                                                                                t = u_13;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    p_13 = ATgetFirst((ATermList) t);
                                                                                    q_13 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = q_13;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm p_14 = t;
                                                                                        int q_14 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = f_17(u_13, t_13, t);
                                                                                            ;
                                                                                            LocalPopChoice(q_14);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = p_14;
                                                                                            t = p_13;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = f_17(u_13, t_13, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = f_17(u_13, t_13, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_t_14;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        u_13 = ATgetArgument(t, 0);
                                                                                        v_13 = ATgetArgument(t, 1);
                                                                                        t = v_13;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            r_13 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_x_14, (ATerm) ATinsert(ATinsert(ATempty, r_13), u_13));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            u_13 = ATgetArgument(t, 0);
                                                                                            t = u_13;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                u_13 = ATgetArgument(t, 0);
                                                                                                v_13 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, u_13, v_13, term_y_14);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    u_13 = ATgetArgument(t, 0);
                                                                                                    v_13 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, u_13, v_13, term_y_14);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        u_13 = ATgetArgument(t, 0);
                                                                                                        v_13 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, u_13, (ATerm)ATempty, v_13);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            u_13 = ATgetArgument(t, 0);
                                                                                                            v_13 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, v_13, u_13);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                              {
                                                                                                                u_13 = ATgetArgument(t, 0);
                                                                                                                {
                                                                                                                  ATerm n_16 = NULL,c_22 = NULL;
                                                                                                                  t = u_13;
                                                                                                                  c_22 = t;
                                                                                                                  t = o_1(j_4, c_22, t);
                                                                                                                  n_16 = t;
                                                                                                                  t = (ATerm) ATmakeAppl(sym_Prim_2, n_16, (ATerm) ATempty);
                                                                                                                }
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    u_13 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Call_2, u_13, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                      {
                                                                                                                        u_13 = ATgetArgument(t, 0);
                                                                                                                        v_13 = ATgetArgument(t, 1);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDef_3, u_13, (ATerm)ATempty, v_13);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SRDef_3))
                                                                                                                          {
                                                                                                                            u_13 = ATgetArgument(t, 0);
                                                                                                                            v_13 = ATgetArgument(t, 1);
                                                                                                                            s_13 = ATgetArgument(t, 2);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDef_3, u_13, v_13, s_13);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                              {
                                                                                                                                u_13 = ATgetArgument(t, 0);
                                                                                                                                v_13 = ATgetArgument(t, 1);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDef_3, u_13, (ATerm)ATempty, v_13);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    u_13 = ATgetArgument(t, 0);
                                                                                                                                    v_13 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_RDef_3, u_13, (ATerm)ATempty, v_13);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_Module_2))
                                                                                                                                      {
                                                                                                                                        ATerm z_14 = ATgetArgument(t, 0);
                                                                                                                                        v_13 = ATgetArgument(t, 1);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      _fail(t);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Specification_1, v_13);
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm repeat_1_0 (ATerm u_86 (ATerm), ATerm t)
{
  ATerm h_17 (ATerm t)
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_86(t);
        t = h_17(t);
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
      }
    return(t);
  }
  t = h_17(t);
  return(t);
}
ATerm topdown_1_0 (ATerm s_87 (ATerm), ATerm t)
{
  t = s_87(t);
  {
    ATerm m_4 (ATerm t)
    {
      t = topdown_1_0(s_87, t);
      return(t);
    }
    t = SRTS_all(m_4, t);
  }
  return(t);
}
ATerm s_1 (ATerm i_68 (ATerm), ATerm j_68 (ATerm), ATerm n_17, ATerm j_17, ATerm k_17, ATerm t)
{
  ATerm i_17 = NULL,l_17 = NULL,m_17 = NULL,h_2 = NULL,j_2 = NULL;
  t = SSLgetAnnotations(n_17);
  i_17 = t;
  t = j_17;
  t = i_68(t);
  l_17 = t;
  t = k_17;
  t = j_68(t);
  m_17 = t;
  j_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_17, m_17);
  h_2 = t;
  t = SSLsetAnnotations(h_2, i_17);
  return(t);
}
ATerm t_1 (ATerm a_106 (ATerm), ATerm t_17, ATerm u_17, ATerm t)
{
  ATerm v_17 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_17, term_d_15);
  t = open_stream_0_0(t);
  v_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_17, u_17);
  t = a_106(t);
  t = fclose_0_0(t);
  t = u_17;
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = fetch_1_0(t_4, t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm l_25 = NULL,w_25 = NULL;
  if(match_cons(t, sym__2))
    {
      l_25 = ATgetArgument(t, 0);
      w_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_1(v_4, l_25, w_25, t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,y_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_15 = ATgetArgument(t, 0);
      if(match_cons(e_15, sym_Stream_1))
        {
          t_26 = ATgetArgument(e_15, 0);
        }
      else
        _fail(t);
      u_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(t_26, u_26);
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_26);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL;
  if(match_cons(t, sym__2))
    {
      p_31 = ATgetArgument(t, 0);
      q_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_1(x_4, p_31, q_31, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_15 = ATgetArgument(t, 0);
      if(match_cons(g_15, sym_Stream_1))
        {
          s_31 = ATgetArgument(g_15, 0);
        }
      else
        _fail(t);
      t_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(s_31, t_31);
  u_31 = t;
  t = term_h_9;
  v_31 = t;
  t = u_31;
  w_31 = t;
  t = SSL_fputc(v_31, w_31);
  x_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_31);
  return(t);
}
ATerm u_1 (ATerm w_17, ATerm t)
{
  ATerm x_17 = NULL,p_22 = NULL,q_22 = NULL,x_22 = NULL,q_23 = NULL,v_23 = NULL,c_24 = NULL;
  p_22 = t;
  if(match_cons(t, sym__2))
    {
      q_22 = ATgetArgument(t, 0);
      x_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_4 (ATerm t)
    {
      ATerm h_15 = t;
      int j_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_4 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((x_17 != NULL) && (x_17 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_17 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_4, t);
          ;
          LocalPopChoice(j_15);
        }
      else
        {
          t = h_15;
          t = term_k_15;
          if(((x_17 != NULL) && (x_17 != t)))
            _fail(t);
          else
            x_17 = t;
        }
      return(t);
    }
    t = s_1(n_4, _id, p_22, q_22, x_22, t);
    t = w_17;
    q_23 = t;
    if(match_cons(t, sym__2))
      {
        v_23 = ATgetArgument(t, 0);
        c_24 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm p_4 (ATerm t)
      {
        ATerm g_24 = NULL;
        ATerm q_4 (ATerm t)
        {
          t = not_null(x_17);
          return(t);
        }
        if(((g_24 != NULL) && (g_24 != t)))
          _fail(t);
        else
          g_24 = t;
        t = z_1(q_4, _id, not_null(g_24), t);
        return(t);
      }
      t = s_1(_id, p_4, q_23, v_23, c_24, t);
      {
        ATerm l_15 = t;
        int o_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_24 = NULL,o_24 = NULL,q_24 = NULL;
            n_24 = t;
            if(match_cons(t, sym__2))
              {
                o_24 = ATgetArgument(t, 0);
                q_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = s_1(r_4, s_4, n_24, o_24, q_24, t);
            ;
            LocalPopChoice(o_15);
          }
        else
          {
            t = l_15;
            {
              ATerm q_27 = NULL,n_28 = NULL,m_29 = NULL;
              q_27 = t;
              if(match_cons(t, sym__2))
                {
                  n_28 = ATgetArgument(t, 0);
                  m_29 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_1(_id, w_4, q_27, n_28, m_29, t);
            }
          }
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
ATerm v_1 (ATerm c_109 (ATerm), ATerm k_18, ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,q_18 = NULL,r_18 = NULL;
  t = dtime_0_0(t);
  t = k_18;
  t = c_109(t);
  l_18 = t;
  t = dtime_0_0(t);
  m_18 = t;
  t = l_18;
  if(match_cons(t, sym__2))
    {
      q_18 = ATgetArgument(t, 0);
      r_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_18), (ATerm) ATmakeAppl(sym_Runtime_1, m_18)), r_18);
  return(t);
}
ATerm l_19 (ATerm f_19, ATerm t)
{
  ATerm h_19 = NULL;
  t = f_19;
  h_19 = t;
  t = SSL_fclose(h_19);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL;
  j_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_19 = ATgetArgument(t, 0);
      {
        ATerm p_15 = t;
        int t_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_32 = NULL;
            t = i_19;
            a_32 = t;
            t = SSL_fclose(a_32);
            ;
            LocalPopChoice(t_15);
          }
        else
          {
            t = p_15;
            t = l_19(j_19, t);
          }
      }
    }
  else
    {
      t = l_19(j_19, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_19 = NULL;
  t = SSL_stdin_stream();
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_19);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_19 = NULL;
  t = SSL_stdout_stream();
  n_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_19);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_19 = NULL;
  t = SSL_stderr_stream();
  o_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_19);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm s_32 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      s_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_32;
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm y_32 = NULL;
  y_32 = t;
  t = SSL_is_string(y_32);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_15 = ATgetArgument(t, 0);
      ATerm w_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_32 = NULL,k_32 = NULL,l_32 = NULL;
        i_32 = t;
        k_32 = t;
        t = SSL_explode_term(k_32);
        if(match_cons(t, sym__2))
          {
            ATerm b_16 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_16) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm c_16 = ATgetArgument(t, 1);
              if(((ATgetType(c_16) == AT_LIST) && !(ATisEmpty(c_16))))
                {
                  l_32 = ATgetFirst((ATermList) c_16);
                  {
                    ATerm d_16 = (ATerm) ATgetNext((ATermList) c_16);
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
        ;
        LocalPopChoice(y_15);
      }
    else
      {
        t = x_15;
        {
          ATerm e_16 = t;
          int f_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL;
              n_32 = t;
              if(match_cons(t, sym__2))
                {
                  o_32 = ATgetArgument(t, 0);
                  p_32 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_1(y_4, _id, n_32, o_32, p_32, t);
              if(match_cons(t, sym__2))
                {
                  u_19 = ATgetArgument(t, 0);
                  v_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(u_19, v_19);
              w_19 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, w_19);
              ;
              LocalPopChoice(f_16);
            }
          else
            {
              t = e_16;
              {
                ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL;
                t_32 = t;
                if(match_cons(t, sym__2))
                  {
                    u_32 = ATgetArgument(t, 0);
                    v_32 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_1(z_4, _id, t_32, u_32, v_32, t);
                if(match_cons(t, sym__2))
                  {
                    y_19 = ATgetArgument(t, 0);
                    z_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(y_19, z_19);
                a_20 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, a_20);
              }
            }
        }
      }
  }
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_g_16;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL;
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_20 = NULL;
      f_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_20, term_j_16);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(i_16);
    }
  else
    {
      t = h_16;
      {
        ATerm z_32 = NULL;
        z_32 = t;
        t = a_2(a_5, z_32, t);
        _fail(t);
      }
    }
  c_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(e_20);
  d_20 = t;
  t = c_20;
  t = fclose_0_0(t);
  t = d_20;
  return(t);
}
ATerm z_1 (ATerm b_101 (ATerm), ATerm c_101 (ATerm), ATerm h_20, ATerm t)
{
  ATerm i_20 = NULL,m_20 = NULL;
  t = b_101(t);
  i_20 = t;
  t = h_20;
  t = c_101(t);
  m_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_20, m_20);
  return(t);
}
ATerm fetch_1_0 (ATerm t_93 (ATerm), ATerm t)
{
  ATerm n_20 (ATerm t)
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
        b_33 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_33 = ATgetFirst((ATermList) t);
            d_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_2(t_93, _id, b_33, c_33, d_33, t);
        ;
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        {
          ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
          g_33 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_33 = ATgetFirst((ATermList) t);
              i_33 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_2(_id, n_20, g_33, h_33, i_33, t);
        }
      }
    return(t);
  }
  t = n_20(t);
  return(t);
}
ATerm a_2 (ATerm y_105 (ATerm), ATerm q_20, ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
  t = y_105(t);
  r_20 = t;
  t = term_o_8;
  s_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_20), r_20);
  t_20 = t;
  t = SSL_printnl(s_20, t_20);
  t = q_20;
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm m_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(o_16);
    }
  else
    {
      t = m_16;
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_21 = NULL,m_33 = NULL;
      d_21 = t;
      m_33 = t;
      t = SSL_is_string(m_33);
      ;
      LocalPopChoice(r_16);
    }
  else
    {
      t = q_16;
      {
        ATerm s_16 = t;
        int t_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(b_5, t);
            ;
            LocalPopChoice(t_16);
          }
        else
          {
            t = s_16;
            {
              ATerm z_21 = NULL,b_22 = NULL,d_22 = NULL;
              z_21 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_22 = ATgetArgument(t, 0);
                  t = b_22;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_22 = ATgetArgument(t, 0);
                      t = b_22;
                      {
                        ATerm w_16 = t;
                        int x_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm z_33 = NULL;
                            z_33 = t;
                            t = b_2(z_33, t);
                            ;
                            LocalPopChoice(x_16);
                          }
                        else
                          {
                            t = w_16;
                            {
                              ATerm a_34 = NULL;
                              a_34 = t;
                              t = a_2(c_5, a_34, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm i_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_22 = ATgetArgument(t, 0);
                          d_22 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_22;
                      t = eval_config_0_0(t);
                      i_34 = t;
                      t = d_22;
                      t = eval_config_0_0(t);
                      p_34 = t;
                      t = i_34;
                      q_34 = t;
                      t = p_34;
                      r_34 = t;
                      t = SSL_strcat(q_34, r_34);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm b_2 (ATerm k_22, ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  t = term_y_16;
  l_22 = t;
  t = k_22;
  m_22 = t;
  t = SSL_table_get(l_22, m_22);
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL;
        t = eval_config_0_0(t);
        n_22 = t;
        t = term_y_16;
        r_22 = t;
        t = k_22;
        s_22 = t;
        t = n_22;
        t_22 = t;
        t = SSL_table_put(r_22, s_22, t_22);
        t = n_22;
        ;
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm l_107 (ATerm), ATerm t)
{
  ATerm b_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_22 = NULL,w_22 = NULL,w_34 = NULL;
      u_22 = t;
      t = term_g_17;
      w_34 = t;
      t = b_2(w_34, t);
      w_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_22, term_o_17);
      t = geq_0_0(t);
      t = u_22;
      t = l_107(t);
      ;
      LocalPopChoice(e_17);
    }
  else
    {
      t = b_17;
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm b_35 = NULL;
  b_35 = t;
  if(match_string(t, "-k"))
    {
      t = b_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_35;
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL;
  c_35 = t;
  e_35 = t;
  t = SSL_string_to_int(e_35);
  d_35 = t;
  t = term_y_16;
  f_35 = t;
  t = term_p_17;
  g_35 = t;
  t = d_35;
  h_35 = t;
  t = SSL_table_put(f_35, g_35, h_35);
  t = c_35;
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_s_17;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm x_34 = NULL;
  x_34 = t;
  t = f_2(g_5, h_5, k_5, x_34, t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm m_35 = NULL;
  m_35 = t;
  if(match_string(t, "-S"))
    {
      t = m_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_35;
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
  t = term_y_16;
  n_35 = t;
  t = term_g_17;
  o_35 = t;
  t = term_y_17;
  p_35 = t;
  t = SSL_table_put(n_35, o_35, p_35);
  t = term_z_17;
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_a_18;
  return(t);
}
ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL;
  u_35 = t;
  w_35 = t;
  t = SSL_string_to_int(w_35);
  v_35 = t;
  t = term_y_16;
  x_35 = t;
  t = term_g_17;
  y_35 = t;
  t = v_35;
  z_35 = t;
  t = SSL_table_put(x_35, y_35, z_35);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_35);
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_c_18;
  return(t);
}
ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
  t = term_y_16;
  e_36 = t;
  t = term_d_18;
  f_36 = t;
  t = term_m_8;
  g_36 = t;
  t = SSL_table_put(e_36, f_36, g_36);
  t = term_e_18;
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_f_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_35 = NULL;
      i_35 = t;
      t = d_2(m_5, o_5, p_5, i_35, t);
      ;
      LocalPopChoice(h_18);
    }
  else
    {
      t = g_18;
      {
        ATerm i_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_35 = NULL;
            q_35 = t;
            t = f_2(q_5, r_5, u_5, q_35, t);
            ;
            LocalPopChoice(j_18);
          }
        else
          {
            t = i_18;
            {
              ATerm a_36 = NULL;
              a_36 = t;
              t = d_2(v_5, w_5, x_5, a_36, t);
            }
          }
      }
    }
  return(t);
}
ATerm d_2 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm w_23, ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_23 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL;
      t = term_m_8;
      t = d_0(t);
      z_23 = t;
      t = term_n_18;
      k_36 = t;
      t = term_o_18;
      l_36 = t;
      t = z_23;
      m_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_18, term_o_18, z_23);
      t = e_2(k_36, l_36, m_36, t);
      _fail(t);
    }
  else
    {
      ATerm f_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_23 = ATgetFirst((ATermList) t);
          y_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_23;
      t = a_0(t);
      t = term_m_8;
      t = b_0(t);
      f_24 = t;
      t = (ATerm) ATinsert(CheckATermList(y_23), f_24);
    }
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm r_36 = NULL;
  r_36 = t;
  if(match_string(t, "-o"))
    {
      t = r_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_36;
    }
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL;
  s_36 = t;
  t = term_y_16;
  t_36 = t;
  t = term_p_18;
  u_36 = t;
  t = s_36;
  v_36 = t;
  t = SSL_table_put(t_36, u_36, v_36);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_36);
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_s_18;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm n_36 = NULL;
  n_36 = t;
  t = f_2(y_5, b_6, d_6, n_36, t);
  return(t);
}
ATerm e_2 (ATerm s_24, ATerm t_24, ATerm u_24, ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_24, t_24);
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_36 = NULL,z_36 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_18 = ATgetArgument(t, 0);
            ATerm z_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_24;
        y_36 = t;
        t = t_24;
        z_36 = t;
        t = SSL_table_get(y_36, z_36);
        ;
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        t = (ATerm) ATempty;
      }
    v_24 = t;
    t = s_24;
    w_24 = t;
    t = t_24;
    x_24 = t;
    t = (ATerm) ATinsert(CheckATermList(v_24), u_24);
    y_24 = t;
    t = SSL_table_put(w_24, x_24, y_24);
    t = (ATerm) ATmakeAppl(sym__3, s_24, t_24, u_24);
  }
  return(t);
}
ATerm f_2 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm m_25, ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_25 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL;
      t = term_m_8;
      t = j_0(t);
      r_25 = t;
      t = term_n_18;
      f_37 = t;
      t = term_o_18;
      g_37 = t;
      t = r_25;
      h_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_18, term_o_18, r_25);
      t = e_2(f_37, g_37, h_37, t);
      _fail(t);
    }
  else
    {
      ATerm v_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_25 = ATgetFirst((ATermList) t);
          o_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_25;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_25 = ATgetFirst((ATermList) t);
          q_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_25;
      t = h_0(t);
      t = p_25;
      t = i_0(t);
      v_25 = t;
      t = (ATerm) ATinsert(CheckATermList(q_25), v_25);
    }
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm m_37 = NULL;
  m_37 = t;
  if(match_string(t, "-i"))
    {
      t = m_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_37;
    }
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL;
  n_37 = t;
  t = term_y_16;
  o_37 = t;
  t = term_c_19;
  p_37 = t;
  t = n_37;
  q_37 = t;
  t = SSL_table_put(o_37, p_37, q_37);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_37);
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_e_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm i_37 = NULL;
  i_37 = t;
  t = f_2(e_6, f_6, g_6, i_37, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_8;
  t = whoami_0_0(t);
  c_26 = t;
  t = term_o_8;
  d_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_19), c_26);
  e_26 = t;
  t = SSL_printnl(d_26, e_26);
  t = term_x_8;
  f_26 = t;
  t = SSL_exit(f_26);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm s_37 = NULL;
  t = term_k_19;
  s_37 = t;
  t = b_2(s_37, t);
  return(t);
}
ATerm foldr_2_0 (ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm t)
{
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_99(t);
      ;
      LocalPopChoice(q_19);
    }
  else
    {
      t = p_19;
      {
        ATerm i_26 = NULL,j_26 = NULL,m_26 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_26 = ATgetFirst((ATermList) t);
            j_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_26;
        t = foldr_2_0(m_99, n_99, t);
        m_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_26, m_26);
        t = n_99(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL;
  if(match_cons(t, sym__2))
    {
      j_38 = ATgetArgument(t, 0);
      k_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(j_38, k_38);
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        t = SSL_addr(j_38, k_38);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_26 = NULL,z_37 = NULL,f_38 = NULL,g_38 = NULL;
  t = times_0_0(t);
  z_37 = t;
  f_38 = t;
  t = SSL_explode_term(f_38);
  if(match_cons(t, sym__2))
    {
      ATerm t_19 = ATgetArgument(t, 0);
      g_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_38;
  t = foldr_2_0(h_6, i_6, t);
  q_26 = t;
  t = SSL_TicksToSeconds(q_26);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
  b_27 = t;
  if(match_cons(t, sym__2))
    {
      c_27 = ATgetArgument(t, 0);
      d_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_19 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_27;
        if((c_27 != t))
          {
            _fail(t);
          }
        t = b_27;
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = x_19;
        {
          ATerm p_38 = NULL,q_38 = NULL;
          t = c_27;
          p_38 = t;
          t = d_27;
          q_38 = t;
          t = b_27;
          {
            ATerm g_20 = t;
            int j_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_gti(p_38, q_38);
                ;
                LocalPopChoice(j_20);
              }
            else
              {
                t = g_20;
                t = SSL_gtr(p_38, q_38);
              }
            t = (ATerm) ATmakeAppl(sym__2, c_27, d_27);
          }
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_107 (ATerm), ATerm t)
{
  ATerm k_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_27 = NULL,i_27 = NULL,v_38 = NULL;
      g_27 = t;
      t = term_g_17;
      v_38 = t;
      t = b_2(v_38, t);
      i_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_27, term_x_8);
      t = geq_0_0(t);
      t = g_27;
      t = k_107(t);
      ;
      LocalPopChoice(p_20);
    }
  else
    {
      t = k_20;
    }
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
  t = run_time_0_0(t);
  k_27 = t;
  t = term_m_8;
  t = whoami_0_0(t);
  l_27 = t;
  t = term_o_8;
  m_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_20), k_27), term_u_20), l_27);
  n_27 = t;
  t = SSL_printnl(m_27, n_27);
  t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_20), k_27), term_u_20), l_27));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_17;
  o_27 = t;
  t = SSL_exit(o_27);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm w_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(z_20);
    }
  else
    {
      t = w_20;
      {
        ATerm a_21 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_38 = NULL,z_38 = NULL,b_39 = NULL,i_39 = NULL,d_39 = NULL,e_39 = NULL,k_2 = NULL,l_2 = NULL;
            y_38 = t;
            if(match_cons(t, sym_Undefined_1))
              {
                z_38 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            i_39 = t;
            t = y_38;
            b_39 = t;
            t = SSLgetAnnotations(b_39);
            d_39 = t;
            t = z_38;
            e_39 = t;
            l_2 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_39);
            k_2 = t;
            t = SSLsetAnnotations(k_2, d_39);
            ;
            LocalPopChoice(b_21);
          }
        else
          {
            t = a_21;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_110 (ATerm), ATerm t)
{
  ATerm c_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_38 = NULL;
      t = term_f_21;
      x_38 = t;
      t = b_2(x_38, t);
      ;
      LocalPopChoice(e_21);
    }
  else
    {
      t = c_21;
      t = fetch_1_0(k_6, t);
    }
  t = a_110(t);
  return(t);
}
ATerm map_1_0 (ATerm j_93 (ATerm), ATerm t)
{
  ATerm p_27 (ATerm t)
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        {
          ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL;
          k_39 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_39 = ATgetFirst((ATermList) t);
              m_39 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_2(j_93, p_27, k_39, l_39, m_39, t);
        }
      }
    return(t);
  }
  t = p_27(t);
  return(t);
}
ATerm i_2 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t_27, ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_27 = ATgetFirst((ATermList) t);
      s_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_27 = NULL,x_27 = NULL,p_39 = NULL;
        t = s_27;
        t = g_0(t);
        w_27 = t;
        t = r_27;
        t = f_0(t);
        x_27 = t;
        t = s_27;
        p_39 = t;
        {
          ATerm m_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(w_27), x_27);
            return(t);
          }
          t = i_2(f_0, m_6, p_39, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_8;
      t = g_0(t);
    }
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,g_40 = NULL,n_40 = NULL,i_40 = NULL,j_40 = NULL,m_2 = NULL,n_2 = NULL;
  d_40 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  n_40 = t;
  t = d_40;
  g_40 = t;
  t = SSLgetAnnotations(g_40);
  i_40 = t;
  t = e_40;
  j_40 = t;
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_40);
  m_2 = t;
  t = SSLsetAnnotations(m_2, i_40);
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm g_28 = NULL,v_40 = NULL;
  g_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_28), term_i_21);
  v_40 = t;
  t = s_2(v_40, t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,q_40 = NULL,r_40 = NULL;
  ATerm k_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_40 = NULL;
      t = term_k_19;
      c_40 = t;
      t = b_2(c_40, t);
      ;
      LocalPopChoice(n_21);
    }
  else
    {
      t = k_21;
      t = fetch_1_0(n_6, t);
    }
  t = term_o_21;
  q_40 = t;
  t = s_2(q_40, t);
  t = term_n_18;
  e_28 = t;
  t = term_o_18;
  f_28 = t;
  t = SSL_table_get(e_28, f_28);
  r_40 = t;
  t = i_2(_id, o_6, r_40, t);
  t = map_1_0(p_6, t);
  return(t);
}
ATerm s_2 (ATerm o_28, ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
  ATerm q_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_28 = NULL;
      s_28 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = s_28;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm t_21 = ATgetFirst((ATermList) t);
              ATerm u_21 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = s_28;
        }
      ;
      LocalPopChoice(s_21);
    }
  else
    {
      t = q_21;
      t = (ATerm) ATinsert(ATempty, o_28);
    }
  p_28 = t;
  t = term_k_15;
  q_28 = t;
  t = p_28;
  r_28 = t;
  t = SSL_printnl(q_28, r_28);
  t = o_28;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm i_41 = NULL,g_41 = NULL;
  t = term_k_19;
  g_41 = t;
  t = b_2(g_41, t);
  i_41 = t;
  t = s_2(i_41, t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
  t = term_y_16;
  n_41 = t;
  t = term_v_21;
  o_41 = t;
  t = term_m_8;
  p_41 = t;
  t = SSL_table_put(n_41, o_41, p_41);
  t = term_x_21;
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_y_21;
  return(t);
}
ATerm w_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL;
  t = term_y_16;
  u_41 = t;
  t = term_v_21;
  v_41 = t;
  t = term_m_8;
  w_41 = t;
  t = SSL_table_put(u_41, v_41, w_41);
  t = term_y_16;
  x_41 = t;
  t = term_a_22;
  y_41 = t;
  t = term_m_8;
  z_41 = t;
  t = SSL_table_put(x_41, y_41, z_41);
  t = term_e_22;
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_f_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_41 = NULL;
      j_41 = t;
      t = d_2(q_6, t_6, u_6, j_41, t);
      ;
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
      {
        ATerm q_41 = NULL;
        q_41 = t;
        t = d_2(w_6, z_6, a_7, q_41, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm t)
{
  ATerm j_29 = NULL,f_29 = NULL,g_29 = NULL;
  j_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_29 = ATgetFirst((ATermList) t);
      g_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_2(x_72, y_72, j_29, f_29, g_29, t);
  return(t);
}
ATerm v_2 (ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm j_29, ATerm f_29, ATerm g_29, ATerm t)
{
  ATerm e_29 = NULL,h_29 = NULL,i_29 = NULL,o_2 = NULL,p_2 = NULL;
  t = SSLgetAnnotations(j_29);
  e_29 = t;
  t = f_29;
  t = x_72(t);
  h_29 = t;
  t = g_29;
  t = y_72(t);
  i_29 = t;
  p_2 = t;
  t = (ATerm) ATinsert(CheckATermList(i_29), h_29);
  o_2 = t;
  t = SSLsetAnnotations(o_2, e_29);
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL;
  f_42 = t;
  t = term_y_16;
  g_42 = t;
  t = term_k_19;
  h_42 = t;
  t = f_42;
  i_42 = t;
  t = SSL_table_put(g_42, h_42, i_42);
  t = (ATerm) ATmakeAppl(sym_Program_1, f_42);
  return(t);
}
ATerm d_3 (ATerm d_112 (ATerm), ATerm n_29, ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL;
  ATerm j_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_22;
      t = d_112(t);
      ;
      LocalPopChoice(o_22);
    }
  else
    {
      t = j_22;
    }
  t = n_29;
  a_42 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_42 = ATgetFirst((ATermList) t);
      c_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm d_7 (ATerm t)
    {
      ATerm y_22 = t;
      int z_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_23 = t;
          int b_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              ;
              LocalPopChoice(b_23);
            }
          else
            {
              t = a_23;
              t = d_112(t);
              t = Cons_2_0(_id, d_7, t);
            }
          ;
          LocalPopChoice(z_22);
        }
      else
        {
          t = y_22;
          {
            ATerm k_42 = NULL,l_42 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_42 = ATgetFirst((ATermList) t);
                l_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_42), (ATerm) ATmakeAppl(sym_Undefined_1, k_42));
          }
        }
      return(t);
    }
    t = v_2(b_7, d_7, a_42, b_42, c_42, t);
  }
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm z_42 = NULL;
  z_42 = t;
  if(match_string(t, "--help"))
    {
      t = z_42;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_42;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_42;
        }
    }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL;
  t = term_y_16;
  a_43 = t;
  t = term_f_21;
  b_43 = t;
  t = term_m_8;
  c_43 = t;
  t = SSL_table_put(a_43, b_43, c_43);
  t = term_c_23;
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_d_23;
  return(t);
}
ATerm i_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm e_3 (ATerm c_112 (ATerm), ATerm b_30, ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,p_42 = NULL;
  t = term_n_18;
  c_30 = t;
  t = term_o_18;
  d_30 = t;
  t = (ATerm) ATempty;
  e_30 = t;
  t = SSL_table_put(c_30, d_30, e_30);
  t = b_30;
  p_42 = t;
  {
    ATerm e_7 (ATerm t)
    {
      ATerm e_23 = t;
      int f_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_112(t);
          ;
          LocalPopChoice(f_23);
        }
      else
        {
          t = e_23;
          {
            ATerm g_23 = t;
            int h_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_42 = NULL;
                v_42 = t;
                t = d_2(f_7, g_7, h_7, v_42, t);
                ;
                LocalPopChoice(h_23);
              }
            else
              {
                t = g_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = d_3(e_7, p_42, t);
    {
      ATerm i_23 = t;
      int j_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_30 = NULL;
          s_30 = t;
          {
            ATerm k_23 = t;
            int l_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_43 = NULL;
                t = s_30;
                {
                  ATerm m_23 = t;
                  int n_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_43 = NULL;
                      t = term_f_21;
                      m_43 = t;
                      t = b_2(m_43, t);
                      ;
                      LocalPopChoice(n_23);
                    }
                  else
                    {
                      t = m_23;
                      t = fetch_1_0(i_7, t);
                    }
                  t = s_30;
                  t = default_system_usage_0_0(t);
                  t = term_y_17;
                  j_43 = t;
                  t = SSL_exit(j_43);
                }
                ;
                LocalPopChoice(l_23);
              }
            else
              {
                t = k_23;
                {
                  ATerm p_43 = NULL,s_43 = NULL;
                  t = term_v_21;
                  s_43 = t;
                  t = b_2(s_43, t);
                  t = s_30;
                  t = default_system_about_0_0(t);
                  t = term_y_17;
                  p_43 = t;
                  t = SSL_exit(p_43);
                }
              }
          }
          ;
          LocalPopChoice(j_23);
        }
      else
        {
          t = i_23;
          {
            ATerm o_23 = t;
            int p_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
                ATerm j_7 (ATerm t)
                {
                  ATerm t_43 = NULL,u_43 = NULL,w_43 = NULL,d_44 = NULL,y_43 = NULL,z_43 = NULL,q_2 = NULL,r_2 = NULL;
                  t_43 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      u_43 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  d_44 = t;
                  t = t_43;
                  w_43 = t;
                  t = SSLgetAnnotations(w_43);
                  y_43 = t;
                  t = u_43;
                  if(((f_30 != NULL) && (f_30 != t)))
                    _fail(t);
                  else
                    f_30 = t;
                  z_43 = t;
                  r_2 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, z_43);
                  q_2 = t;
                  t = SSLsetAnnotations(q_2, y_43);
                  return(t);
                }
                t = fetch_1_0(j_7, t);
                t = term_o_8;
                t_30 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_30)), term_r_23);
                u_30 = t;
                t = SSL_printnl(t_30, u_30);
                t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_30)), term_r_23));
                t = default_system_usage_0_0(t);
                t = term_x_8;
                v_30 = t;
                t = SSL_exit(v_30);
                ;
                LocalPopChoice(p_23);
              }
            else
              {
                t = o_23;
              }
          }
        }
      g_30 = t;
      t = term_n_18;
      h_30 = t;
      t = SSL_table_destroy(h_30);
      t = g_30;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,f_44 = NULL;
  f_44 = t;
  t = e_3(c_110, f_44, t);
  y_30 = t;
  t = term_s_23;
  z_30 = t;
  t = SSL_table_create(z_30);
  t = term_s_23;
  a_31 = t;
  t = term_t_23;
  b_31 = t;
  t = y_30;
  c_31 = t;
  t = SSL_table_put(a_31, b_31, c_31);
  t = y_30;
  t = e_110(t);
  {
    ATerm u_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_110, t);
        ;
        LocalPopChoice(a_24);
      }
    else
      {
        t = u_23;
        {
          ATerm b_24 = t;
          int d_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_110(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_24);
            }
          else
            {
              t = b_24;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = if_verbose2_1_0(x_7, t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL;
  t = term_y_16;
  l_44 = t;
  t = term_e_24;
  m_44 = t;
  t = term_m_8;
  n_44 = t;
  t = SSL_table_put(l_44, m_44, n_44);
  t = term_h_24;
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_i_24;
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,k_31 = NULL,l_31 = NULL,p_44 = NULL;
  g_31 = t;
  t = term_k_19;
  p_44 = t;
  t = b_2(p_44, t);
  h_31 = t;
  t = term_o_8;
  k_31 = t;
  t = (ATerm) ATinsert(ATempty, h_31);
  l_31 = t;
  t = SSL_printnl(k_31, l_31);
  t = g_31;
  return(t);
}
ATerm iowrap_3_0 (ATerm l_109 (ATerm), ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t)
{
  ATerm m_7 (ATerm t)
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_109(t);
        ;
        LocalPopChoice(k_24);
      }
    else
      {
        t = j_24;
        {
          ATerm l_24 = t;
          int m_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(m_24);
            }
          else
            {
              t = l_24;
              {
                ATerm p_24 = t;
                int r_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(r_24);
                  }
                else
                  {
                    t = p_24;
                    {
                      ATerm z_24 = t;
                      int a_25 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm h_44 = NULL;
                          h_44 = t;
                          t = d_2(u_7, v_7, w_7, h_44, t);
                          ;
                          LocalPopChoice(a_25);
                        }
                      else
                        {
                          t = z_24;
                          {
                            ATerm b_25 = t;
                            int c_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(c_25);
                              }
                            else
                              {
                                t = b_25;
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
  ATerm s_7 (ATerm t)
  {
    ATerm x_33 = NULL,h_34 = NULL,q_44 = NULL,w_44 = NULL,t_44 = NULL;
    x_33 = t;
    {
      ATerm d_25 = t;
      int e_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((h_34 != NULL) && (h_34 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_34 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(y_7, t);
          ;
          LocalPopChoice(e_25);
        }
      else
        {
          t = d_25;
          t = term_f_25;
          h_34 = t;
        }
      t = x_33;
      q_44 = t;
      {
        ATerm a_8 (ATerm t)
        {
          t = not_null(h_34);
          t = ReadFromFile_0_0(t);
          return(t);
        }
        t = z_1(_id, a_8, q_44, t);
        t_44 = t;
        t = v_1(l_109, t_44, t);
        w_44 = t;
        t = u_1(w_44, t);
      }
    }
    return(t);
  }
  t = option_wrap_4_0(m_7, n_109, o_7, s_7, t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL;
  x_44 = t;
  if(match_cons(t, sym__2))
    {
      y_44 = ATgetArgument(t, 0);
      z_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_1(_id, k_8, x_44, y_44, z_44, t);
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm o_45 = NULL;
  o_45 = t;
  t = n_0(o_45, t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_45 = NULL,k_45 = NULL,l_45 = NULL;
      g_45 = t;
      k_45 = t;
      t = SSL_explode_term(k_45);
      if(match_cons(t, sym__2))
        {
          ATerm i_25 = ATgetArgument(t, 0);
          ATerm j_25 = ATgetArgument(t, 1);
          if(((ATgetType(j_25) == AT_LIST) && !(ATisEmpty(j_25))))
            {
              l_45 = ATgetFirst((ATermList) j_25);
              {
                ATerm k_25 = (ATerm) ATgetNext((ATermList) j_25);
                if(((ATgetType(k_25) != AT_LIST) || !(ATisEmpty(k_25))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      t = l_45;
      ;
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
    }
  t = topdown_1_0(l_8, t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  t = repeat_1_0(Desugar_0_0, t);
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        ;
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
      }
  }
  return(t);
}
ATerm stratego_desugar_0_0 (ATerm t)
{
  t = iowrap_3_0(e_8, _fail, j_8, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = stratego_desugar_0_0(t);
  return(t);
}
