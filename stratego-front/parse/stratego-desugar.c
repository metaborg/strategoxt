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
ATerm term_q_20;
ATerm term_c_19;
ATerm term_w_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_g_18;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_h_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_h_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_s_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_t_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_i_9;
ATerm term_f_9;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_p_8;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_m_6;
void init_constant_terms (void)
{
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_8);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_Op_2, term_s_8, (ATerm) ATempty);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_10);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Call_2, term_c_10, (ATerm) ATempty);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_9);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_8);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Call_2, term_j_10, (ATerm) ATempty);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Call_2, term_r_8, (ATerm) ATempty);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym__3, term_n_17, term_o_17, term_u_10);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Op_2_0 (ATerm m_73 (ATerm), ATerm n_73 (ATerm), ATerm);
ATerm OpDecl_2_0 (ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm k_76 (ATerm), ATerm);
ATerm Var_1_0 (ATerm c_71 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm v_78 (ATerm), ATerm w_78 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm b_79 (ATerm), ATerm);
ATerm RDef_3_0 (ATerm g_75 (ATerm), ATerm h_75 (ATerm), ATerm i_75 (ATerm), ATerm);
ATerm DefaultVarDec_1_0 (ATerm u_78 (ATerm), ATerm);
ATerm UnEscape_0_0 (ATerm);
ATerm unescape_chars_0_0 (ATerm);
ATerm unescape_0_0 (ATerm);
ATerm DesugarOnce_0_0 (ATerm);
ATerm try_1_0 (ATerm k_79 (ATerm), ATerm);
ATerm at_last_1_0 (ATerm x_87 (ATerm), ATerm);
ATerm init_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm unquote_chars_1_0 (ATerm y_95 (ATerm), ATerm);
ATerm un_double_quote_chars_0_0 (ATerm);
ATerm string_as_chars_1_0 (ATerm j_96 (ATerm), ATerm);
ATerm un_double_quote_0_0 (ATerm);
ATerm Desugar_0_0 (ATerm);
ATerm repeat_1_0 (ATerm g_80 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm e_81 (ATerm), ATerm);
ATerm _2_0 (ATerm a_65 (ATerm), ATerm b_65 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm m_87 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm p_100 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm l_99 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm n_102 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm x_98 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm);
ATerm crush_2_0 (ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm o_100 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm l_103 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_86 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm d_72 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm e_72 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm g_87 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm l_104 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm q_105 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm j_66 (ATerm), ATerm k_66 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm o_105 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm n_105 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm r_102 (ATerm), ATerm);
ATerm stratego_desugar_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Op_2_0 (ATerm m_73 (ATerm), ATerm n_73 (ATerm), ATerm t)
{
  ATerm k_0 = NULL,l_0 = NULL,m_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL;
  q_0 = t;
  if(match_cons(t, sym_Op_2))
    {
      l_0 = ATgetArgument(t, 0);
      m_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_0);
  k_0 = t;
  t = l_0;
  t = m_73(t);
  o_0 = t;
  t = m_0;
  t = n_73(t);
  p_0 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, o_0, p_0), k_0);
  return(t);
}
ATerm OpDecl_2_0 (ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm t)
{
  ATerm u_0 = NULL,v_0 = NULL,w_0 = NULL,y_0 = NULL,a_1 = NULL,b_1 = NULL;
  b_1 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      v_0 = ATgetArgument(t, 0);
      w_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_1);
  u_0 = t;
  t = v_0;
  t = x_72(t);
  y_0 = t;
  t = w_0;
  t = y_72(t);
  a_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, y_0, a_1), u_0);
  return(t);
}
ATerm SVar_1_0 (ATerm k_76 (ATerm), ATerm t)
{
  ATerm g_1 = NULL,j_1 = NULL,l_1 = NULL,r_1 = NULL;
  r_1 = t;
  if(match_cons(t, sym_SVar_1))
    {
      j_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_1);
  g_1 = t;
  t = j_1;
  t = k_76(t);
  l_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, l_1), g_1);
  return(t);
}
ATerm Var_1_0 (ATerm c_71 (ATerm), ATerm t)
{
  ATerm b_2 = NULL,e_2 = NULL,f_2 = NULL,h_2 = NULL;
  h_2 = t;
  if(match_cons(t, sym_Var_1))
    {
      e_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_2);
  b_2 = t;
  t = e_2;
  t = c_71(t);
  f_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, f_2), b_2);
  return(t);
}
ATerm VarDec_2_0 (ATerm v_78 (ATerm), ATerm w_78 (ATerm), ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,r_2 = NULL;
  r_2 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      m_2 = ATgetArgument(t, 0);
      n_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_2);
  l_2 = t;
  t = m_2;
  t = v_78(t);
  o_2 = t;
  t = n_2;
  t = w_78(t);
  p_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, o_2, p_2), l_2);
  return(t);
}
ATerm SDef_3_0 (ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm b_79 (ATerm), ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,y_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL;
  e_3 = t;
  if(match_cons(t, sym_SDef_3))
    {
      v_2 = ATgetArgument(t, 0);
      y_2 = ATgetArgument(t, 1);
      a_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_3);
  u_2 = t;
  t = v_2;
  t = z_78(t);
  b_3 = t;
  t = y_2;
  t = a_79(t);
  c_3 = t;
  t = a_3;
  t = b_79(t);
  d_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, b_3, c_3, d_3), u_2);
  return(t);
}
ATerm RDef_3_0 (ATerm g_75 (ATerm), ATerm h_75 (ATerm), ATerm i_75 (ATerm), ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,s_3 = NULL;
  s_3 = t;
  if(match_cons(t, sym_RDef_3))
    {
      k_3 = ATgetArgument(t, 0);
      l_3 = ATgetArgument(t, 1);
      m_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_3);
  j_3 = t;
  t = k_3;
  t = g_75(t);
  n_3 = t;
  t = l_3;
  t = h_75(t);
  o_3 = t;
  t = m_3;
  t = i_75(t);
  p_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, n_3, o_3, p_3), j_3);
  return(t);
}
ATerm DefaultVarDec_1_0 (ATerm u_78 (ATerm), ATerm t)
{
  ATerm b_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL;
  f_4 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_4);
  b_4 = t;
  t = d_4;
  t = u_78(t);
  e_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, e_4), b_4);
  return(t);
}
ATerm UnEscape_0_0 (ATerm t)
{
  ATerm q_5 = NULL,r_5 = NULL,t_5 = NULL,y_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_5 = ATgetFirst((ATermList) t);
      r_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_5;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = r_5;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_5 = ATgetFirst((ATermList) t);
      y_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_5;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(y_5), term_m_6);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(y_5), term_c_7);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(y_5), term_d_7);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(y_5), term_e_7);
            }
        }
    }
  return(t);
}
ATerm unescape_chars_0_0 (ATerm t)
{
  t = try_1_0(UnEscape_0_0, t);
  {
    ATerm f_7 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, unescape_chars_0_0, t);
        ;
        LocalPopChoice(g_7);
      }
    else
      {
        t = f_7;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
      }
  }
  return(t);
}
ATerm unescape_0_0 (ATerm t)
{
  t = string_as_chars_1_0(unescape_chars_0_0, t);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm h_7 = t;
  int i_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_8 = NULL,x_8 = NULL,j_9 = NULL,m_9 = NULL;
      w_8 = t;
      if(match_cons(t, sym_Str_1))
        {
          x_8 = ATgetArgument(t, 0);
          {
            ATerm o_9 = NULL;
            t = x_8;
            t = un_double_quote_0_0(t);
            t = unescape_0_0(t);
            o_9 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, o_9);
          }
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              x_8 = ATgetArgument(t, 0);
              {
                ATerm d_1 = NULL;
                t = SSL_string_to_real(x_8);
                d_1 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, d_1);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  x_8 = ATgetArgument(t, 0);
                  {
                    ATerm k_1 = NULL;
                    t = SSL_string_to_int(x_8);
                    k_1 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, k_1);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Con_3))
                    {
                      x_8 = ATgetArgument(t, 0);
                      j_9 = ATgetArgument(t, 1);
                      m_9 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSL_is_string(m_9);
                  t = (ATerm) ATmakeAppl(sym_Con_3, x_8, j_9, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, m_9), (ATerm) ATempty));
                }
            }
        }
      ;
      LocalPopChoice(i_7);
    }
  else
    {
      t = h_7;
      {
        ATerm j_7 = t;
        int k_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_0 (ATerm t)
            {
              ATerm y_1 = NULL,z_1 = NULL;
              y_1 = t;
              t = SSL_explode_string(y_1);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm l_7 = ATgetFirst((ATermList) t);
                  if(((ATgetType(l_7) != AT_INT) || (ATgetInt((ATermInt) l_7) != 39)))
                    _fail(t);
                  z_1 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSL_implode_string(z_1);
              return(t);
            }
            t = DefaultVarDec_1_0(b_0, t);
            ;
            LocalPopChoice(k_7);
          }
        else
          {
            t = j_7;
            {
              ATerm m_7 = t;
              int n_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_0 (ATerm t)
                  {
                    ATerm d_2 = NULL,g_2 = NULL;
                    d_2 = t;
                    t = SSL_explode_string(d_2);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm o_7 = ATgetFirst((ATermList) t);
                        if(((ATgetType(o_7) != AT_INT) || (ATgetInt((ATermInt) o_7) != 39)))
                          _fail(t);
                        g_2 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = SSL_implode_string(g_2);
                    return(t);
                  }
                  t = RDef_3_0(f_0, _id, _id, t);
                  ;
                  LocalPopChoice(n_7);
                }
              else
                {
                  t = m_7;
                  {
                    ATerm p_7 = t;
                    int q_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_0 (ATerm t)
                        {
                          ATerm w_2 = NULL,x_2 = NULL;
                          w_2 = t;
                          t = SSL_explode_string(w_2);
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm r_7 = ATgetFirst((ATermList) t);
                              if(((ATgetType(r_7) != AT_INT) || (ATgetInt((ATermInt) r_7) != 39)))
                                _fail(t);
                              x_2 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          t = SSL_implode_string(x_2);
                          return(t);
                        }
                        t = SDef_3_0(n_0, _id, _id, t);
                        ;
                        LocalPopChoice(q_7);
                      }
                    else
                      {
                        t = p_7;
                        {
                          ATerm s_7 = t;
                          int t_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_0 (ATerm t)
                              {
                                ATerm h_3 = NULL,q_3 = NULL;
                                h_3 = t;
                                t = SSL_explode_string(h_3);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm u_7 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(u_7) != AT_INT) || (ATgetInt((ATermInt) u_7) != 39)))
                                      _fail(t);
                                    q_3 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(q_3);
                                return(t);
                              }
                              t = VarDec_2_0(r_0, _id, t);
                              ;
                              LocalPopChoice(t_7);
                            }
                          else
                            {
                              t = s_7;
                              {
                                ATerm v_7 = t;
                                int w_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm s_0 (ATerm t)
                                    {
                                      ATerm v_3 = NULL,w_3 = NULL;
                                      v_3 = t;
                                      t = SSL_explode_string(v_3);
                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                        {
                                          ATerm x_7 = ATgetFirst((ATermList) t);
                                          if(((ATgetType(x_7) != AT_INT) || (ATgetInt((ATermInt) x_7) != 39)))
                                            _fail(t);
                                          w_3 = (ATerm) ATgetNext((ATermList) t);
                                        }
                                      else
                                        _fail(t);
                                      t = SSL_implode_string(w_3);
                                      return(t);
                                    }
                                    t = Var_1_0(s_0, t);
                                    ;
                                    LocalPopChoice(w_7);
                                  }
                                else
                                  {
                                    t = v_7;
                                    {
                                      ATerm y_7 = t;
                                      int z_7 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm t_0 (ATerm t)
                                          {
                                            ATerm z_3 = NULL,c_4 = NULL;
                                            z_3 = t;
                                            t = SSL_explode_string(z_3);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm a_8 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(a_8) != AT_INT) || (ATgetInt((ATermInt) a_8) != 39)))
                                                  _fail(t);
                                                c_4 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(c_4);
                                            return(t);
                                          }
                                          t = SVar_1_0(t_0, t);
                                          ;
                                          LocalPopChoice(z_7);
                                        }
                                      else
                                        {
                                          t = y_7;
                                          {
                                            ATerm b_8 = t;
                                            int c_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm x_0 (ATerm t)
                                                {
                                                  ATerm i_4 = NULL,j_4 = NULL;
                                                  i_4 = t;
                                                  t = SSL_explode_string(i_4);
                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                    {
                                                      ATerm d_8 = ATgetFirst((ATermList) t);
                                                      if(((ATgetType(d_8) != AT_INT) || (ATgetInt((ATermInt) d_8) != 39)))
                                                        _fail(t);
                                                      j_4 = (ATerm) ATgetNext((ATermList) t);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSL_implode_string(j_4);
                                                  return(t);
                                                }
                                                t = OpDecl_2_0(x_0, _id, t);
                                                ;
                                                LocalPopChoice(c_8);
                                              }
                                            else
                                              {
                                                t = b_8;
                                                {
                                                  ATerm z_0 (ATerm t)
                                                  {
                                                    ATerm m_4 = NULL,n_4 = NULL;
                                                    m_4 = t;
                                                    t = SSL_explode_string(m_4);
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        ATerm e_8 = ATgetFirst((ATermList) t);
                                                        if(((ATgetType(e_8) != AT_INT) || (ATgetInt((ATermInt) e_8) != 39)))
                                                          _fail(t);
                                                        n_4 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSL_implode_string(n_4);
                                                    return(t);
                                                  }
                                                  t = Op_2_0(z_0, _id, t);
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm try_1_0 (ATerm k_79 (ATerm), ATerm t)
{
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_79(t);
      ;
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
    }
  return(t);
}
ATerm at_last_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm y_9 (ATerm t)
  {
    ATerm h_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_1 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, c_1, t);
        t = x_87(t);
        ;
        LocalPopChoice(i_8);
      }
    else
      {
        t = h_8;
        t = Cons_2_0(_id, y_9, t);
      }
    return(t);
  }
  t = y_9(t);
  return(t);
}
ATerm init_0_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm z_9 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        ATerm j_8 = ATgetFirst((ATermList) t);
        z_9 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = z_9;
    return(t);
  }
  t = at_last_1_0(e_1, t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_10 = ATgetFirst((ATermList) t);
      g_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_10;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm k_8 = t;
      int l_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_10;
          ;
          LocalPopChoice(l_8);
        }
      else
        {
          t = k_8;
          t = g_10;
          t = last_0_0(t);
        }
    }
  else
    {
      t = g_10;
      t = last_0_0(t);
    }
  return(t);
}
ATerm unquote_chars_1_0 (ATerm y_95 (ATerm), ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL,w_10 = NULL;
  q_10 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_10 = ATgetFirst((ATermList) t);
      {
        ATerm m_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_10;
  t = y_95(t);
  t = q_10;
  t = last_0_0(t);
  t = y_95(t);
  t = q_10;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_8 = ATgetFirst((ATermList) t);
      w_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_10;
  t = init_0_0(t);
  return(t);
}
ATerm un_double_quote_chars_0_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
      _fail(t);
    return(t);
  }
  t = unquote_chars_1_0(f_1, t);
  return(t);
}
ATerm string_as_chars_1_0 (ATerm j_96 (ATerm), ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL;
  x_10 = t;
  t = SSL_explode_string(x_10);
  t = j_96(t);
  y_10 = t;
  t = SSL_implode_string(y_10);
  return(t);
}
ATerm un_double_quote_0_0 (ATerm t)
{
  t = string_as_chars_1_0(un_double_quote_chars_0_0, t);
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm x_14 (ATerm w_11, ATerm x_11, ATerm t)
  {
    t = w_11;
    {
      ATerm o_8 = t;
      if((PushChoice() == 0))
        {
          ATerm h_1 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(_id, h_1, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = o_8;
        }
      t = (ATerm) ATmakeAppl(sym_Op_2, term_p_8, w_11);
    }
    return(t);
  }
  ATerm y_14 (ATerm z_11, ATerm a_12, ATerm t)
  {
    t = z_11;
    {
      ATerm q_8 = t;
      if((PushChoice() == 0))
        {
          ATerm i_1 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(_id, i_1, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = q_8;
        }
      t = (ATerm) ATmakeAppl(sym_Call_2, term_r_8, z_11);
    }
    return(t);
  }
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL;
  h_12 = t;
  if(match_cons(t, sym_Anno_2))
    {
      i_12 = ATgetArgument(t, 0);
      j_12 = ATgetArgument(t, 1);
      {
        ATerm m_12 = NULL;
        t = j_12;
        {
          ATerm m_1 (ATerm t)
          {
            t = term_t_8;
            return(t);
          }
          ATerm n_1 (ATerm t)
          {
            ATerm n_12 = NULL,t_4 = NULL,x_4 = NULL;
            n_12 = t;
            t = SSL_explode_term(n_12);
            if(match_cons(t, sym__2))
              {
                ATerm u_8 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) u_8) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm v_8 = ATgetArgument(t, 1);
                  if(((ATgetType(v_8) == AT_LIST) && !(ATisEmpty(v_8))))
                    {
                      t_4 = ATgetFirst((ATermList) v_8);
                      {
                        ATerm y_8 = (ATerm) ATgetNext((ATermList) v_8);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = SSL_explode_term(n_12);
            if(match_cons(t, sym__2))
              {
                ATerm a_9 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) a_9) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm b_9 = ATgetArgument(t, 1);
                  if(((ATgetType(b_9) == AT_LIST) && !(ATisEmpty(b_9))))
                    {
                      ATerm c_9 = ATgetFirst((ATermList) b_9);
                      ATerm d_9 = (ATerm) ATgetNext((ATermList) b_9);
                      if(((ATgetType(d_9) == AT_LIST) && !(ATisEmpty(d_9))))
                        {
                          x_4 = ATgetFirst((ATermList) d_9);
                          {
                            ATerm e_9 = (ATerm) ATgetNext((ATermList) d_9);
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
            t = (ATerm) ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, x_4), t_4));
            return(t);
          }
          t = foldr_2_0(m_1, n_1, t);
          m_12 = t;
          t = (ATerm) ATmakeAppl(sym_Anno_2, i_12, m_12);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          i_12 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, i_12, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              i_12 = ATgetArgument(t, 0);
              {
                ATerm b_5 = NULL;
                t = i_12;
                {
                  ATerm g_9 = t;
                  int h_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_i_9;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_k_9;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_e_7;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_d_7;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_l_9;
                                    }
                                }
                            }
                        }
                      ;
                      LocalPopChoice(h_9);
                    }
                  else
                    {
                      t = g_9;
                      {
                        ATerm d_5 = NULL;
                        t = SSL_explode_string(i_12);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm n_9 = ATgetFirst((ATermList) t);
                            if(((ATgetType(n_9) != AT_INT) || (ATgetInt((ATermInt) n_9) != 39)))
                              _fail(t);
                            {
                              ATerm p_9 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(p_9) == AT_LIST) && !(ATisEmpty(p_9))))
                                {
                                  d_5 = ATgetFirst((ATermList) p_9);
                                  {
                                    ATerm q_9 = (ATerm) ATgetNext((ATermList) p_9);
                                    if(((ATgetType(q_9) == AT_LIST) && !(ATisEmpty(q_9))))
                                      {
                                        ATerm r_9 = ATgetFirst((ATermList) q_9);
                                        if(((ATgetType(r_9) != AT_INT) || (ATgetInt((ATermInt) r_9) != 39)))
                                          _fail(t);
                                        {
                                          ATerm s_9 = (ATerm) ATgetNext((ATermList) q_9);
                                          if(((ATgetType(s_9) != AT_LIST) || !(ATisEmpty(s_9))))
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
                        t = d_5;
                      }
                    }
                  b_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, b_5);
                }
              }
            }
          else
            {
              ATerm t_9 = t;
              int u_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      i_12 = ATgetArgument(t, 0);
                      {
                        ATerm v_9 = ATgetArgument(t, 1);
                      }
                      g_12 = ATgetArgument(t, 2);
                      c_12 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(u_9);
                  t = (ATerm) ATmakeAppl(sym_Con_3, i_12, g_12, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, c_12), (ATerm) ATempty));
                }
              else
                {
                  t = t_9;
                  {
                    ATerm w_9 = t;
                    int x_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            i_12 = ATgetArgument(t, 0);
                            {
                              ATerm a_10 = ATgetArgument(t, 1);
                            }
                            g_12 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(x_9);
                        t = (ATerm) ATmakeAppl(sym_Con_3, i_12, g_12, term_d_10);
                      }
                    else
                      {
                        t = w_9;
                        if(match_cons(t, sym_Con1_2))
                          {
                            i_12 = ATgetArgument(t, 0);
                            j_12 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, i_12, j_12, term_d_10);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                i_12 = ATgetArgument(t, 0);
                                j_12 = ATgetArgument(t, 1);
                                t = i_12;
                                {
                                  ATerm o_1 (ATerm t)
                                  {
                                    t = j_12;
                                    return(t);
                                  }
                                  ATerm p_1 (ATerm t)
                                  {
                                    ATerm b_13 = NULL,c_13 = NULL;
                                    if(match_cons(t, sym__2))
                                      {
                                        b_13 = ATgetArgument(t, 0);
                                        c_13 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, c_13), b_13));
                                    return(t);
                                  }
                                  t = foldr_2_0(o_1, p_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    i_12 = ATgetArgument(t, 0);
                                    t = i_12;
                                    {
                                      ATerm q_1 (ATerm t)
                                      {
                                        t = term_t_8;
                                        return(t);
                                      }
                                      ATerm s_1 (ATerm t)
                                      {
                                        ATerm e_13 = NULL,f_13 = NULL;
                                        if(match_cons(t, sym__2))
                                          {
                                            e_13 = ATgetArgument(t, 0);
                                            f_13 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, f_13), e_13));
                                        return(t);
                                      }
                                      t = foldr_2_0(q_1, s_1, t);
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        i_12 = ATgetArgument(t, 0);
                                        t = i_12;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            d_12 = ATgetFirst((ATermList) t);
                                            e_12 = (ATerm) ATgetNext((ATermList) t);
                                            t = e_12;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm e_10 = t;
                                                int h_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = x_14(i_12, h_12, t);
                                                    ;
                                                    LocalPopChoice(h_10);
                                                  }
                                                else
                                                  {
                                                    t = e_10;
                                                    t = d_12;
                                                  }
                                              }
                                            else
                                              {
                                                t = x_14(i_12, h_12, t);
                                              }
                                          }
                                        else
                                          {
                                            t = x_14(i_12, h_12, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            i_12 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, i_12));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                i_12 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, i_12));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    i_12 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, i_12));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        i_12 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, i_12));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            i_12 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, i_12), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                i_12 = ATgetArgument(t, 0);
                                                                j_12 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, i_12), j_12);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    i_12 = ATgetArgument(t, 0);
                                                                    j_12 = ATgetArgument(t, 1);
                                                                    t = i_12;
                                                                    {
                                                                      ATerm t_1 (ATerm t)
                                                                      {
                                                                        t = j_12;
                                                                        return(t);
                                                                      }
                                                                      ATerm u_1 (ATerm t)
                                                                      {
                                                                        ATerm q_13 = NULL,r_13 = NULL;
                                                                        if(match_cons(t, sym__2))
                                                                          {
                                                                            q_13 = ATgetArgument(t, 0);
                                                                            r_13 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_i_10, (ATerm) ATinsert(ATinsert(ATempty, r_13), q_13));
                                                                        return(t);
                                                                      }
                                                                      t = foldr_2_0(t_1, u_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        i_12 = ATgetArgument(t, 0);
                                                                        t = i_12;
                                                                        {
                                                                          ATerm v_1 (ATerm t)
                                                                          {
                                                                            t = term_k_10;
                                                                            return(t);
                                                                          }
                                                                          ATerm w_1 (ATerm t)
                                                                          {
                                                                            ATerm t_13 = NULL,u_13 = NULL;
                                                                            if(match_cons(t, sym__2))
                                                                              {
                                                                                t_13 = ATgetArgument(t, 0);
                                                                                u_13 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_i_10, (ATerm) ATinsert(ATinsert(ATempty, u_13), t_13));
                                                                            return(t);
                                                                          }
                                                                          t = foldr_2_0(v_1, w_1, t);
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            i_12 = ATgetArgument(t, 0);
                                                                            j_12 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_r_8, (ATerm) ATinsert(CheckATermList(j_12), i_12));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                i_12 = ATgetArgument(t, 0);
                                                                                t = i_12;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    d_12 = ATgetFirst((ATermList) t);
                                                                                    e_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = e_12;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm l_10 = t;
                                                                                        int m_10 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = y_14(i_12, h_12, t);
                                                                                            ;
                                                                                            LocalPopChoice(m_10);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = l_10;
                                                                                            t = d_12;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = y_14(i_12, h_12, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = y_14(i_12, h_12, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_n_10;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        i_12 = ATgetArgument(t, 0);
                                                                                        j_12 = ATgetArgument(t, 1);
                                                                                        t = j_12;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            f_12 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_p_10, (ATerm) ATinsert(ATinsert(ATempty, f_12), i_12));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            i_12 = ATgetArgument(t, 0);
                                                                                            t = i_12;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                i_12 = ATgetArgument(t, 0);
                                                                                                j_12 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, i_12, j_12, term_s_10);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    i_12 = ATgetArgument(t, 0);
                                                                                                    j_12 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, i_12, j_12, term_s_10);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        i_12 = ATgetArgument(t, 0);
                                                                                                        j_12 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, i_12, (ATerm)ATempty, j_12);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            i_12 = ATgetArgument(t, 0);
                                                                                                            j_12 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, j_12, i_12);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                              {
                                                                                                                i_12 = ATgetArgument(t, 0);
                                                                                                                {
                                                                                                                  ATerm k_14 = NULL;
                                                                                                                  t = i_12;
                                                                                                                  t = un_double_quote_0_0(t);
                                                                                                                  k_14 = t;
                                                                                                                  t = (ATerm) ATmakeAppl(sym_Prim_2, k_14, (ATerm) ATempty);
                                                                                                                }
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    i_12 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Call_2, i_12, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                      {
                                                                                                                        i_12 = ATgetArgument(t, 0);
                                                                                                                        j_12 = ATgetArgument(t, 1);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDef_3, i_12, (ATerm)ATempty, j_12);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SRDef_3))
                                                                                                                          {
                                                                                                                            i_12 = ATgetArgument(t, 0);
                                                                                                                            j_12 = ATgetArgument(t, 1);
                                                                                                                            g_12 = ATgetArgument(t, 2);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDef_3, i_12, j_12, g_12);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                              {
                                                                                                                                i_12 = ATgetArgument(t, 0);
                                                                                                                                j_12 = ATgetArgument(t, 1);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDef_3, i_12, (ATerm)ATempty, j_12);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    i_12 = ATgetArgument(t, 0);
                                                                                                                                    j_12 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_RDef_3, i_12, (ATerm)ATempty, j_12);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_Module_2))
                                                                                                                                      {
                                                                                                                                        ATerm t_10 = ATgetArgument(t, 0);
                                                                                                                                        j_12 = ATgetArgument(t, 1);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      _fail(t);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Specification_1, j_12);
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm repeat_1_0 (ATerm g_80 (ATerm), ATerm t)
{
  ATerm z_14 (ATerm t)
  {
    ATerm x_1 (ATerm t)
    {
      t = g_80(t);
      t = z_14(t);
      return(t);
    }
    t = try_1_0(x_1, t);
    return(t);
  }
  t = z_14(t);
  return(t);
}
ATerm topdown_1_0 (ATerm e_81 (ATerm), ATerm t)
{
  t = e_81(t);
  {
    ATerm a_2 (ATerm t)
    {
      t = topdown_1_0(e_81, t);
      return(t);
    }
    t = SRTS_all(a_2, t);
  }
  return(t);
}
ATerm _2_0 (ATerm a_65 (ATerm), ATerm b_65 (ATerm), ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL;
  f_15 = t;
  if(match_cons(t, sym__2))
    {
      b_15 = ATgetArgument(t, 0);
      c_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_15);
  a_15 = t;
  t = b_15;
  t = a_65(t);
  d_15 = t;
  t = c_15;
  t = b_65(t);
  e_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, d_15, e_15), a_15);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL;
  i_15 = t;
  t = term_u_10;
  t = whoami_0_0(t);
  j_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), j_15), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = i_15;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(z_10);
    }
  else
    {
      t = v_10;
      {
        ATerm m_15 = NULL,n_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_15 = ATgetFirst((ATermList) t);
            n_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_15;
        {
          ATerm c_2 (ATerm t)
          {
            t = n_15;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(c_2, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL;
  r_15 = t;
  t = SSL_explode_term(r_15);
  if(match_cons(t, sym__2))
    {
      ATerm a_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_15;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm m_87 (ATerm), ATerm t)
{
  ATerm t_15 (ATerm t)
  {
    ATerm b_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, t_15, t);
        ;
        LocalPopChoice(c_11);
      }
    else
      {
        t = b_11;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_87(t);
      }
    return(t);
  }
  t = t_15(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL;
  if(match_cons(t, sym__2))
    {
      v_15 = ATgetArgument(t, 0);
      u_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_15;
  {
    ATerm i_2 (ATerm t)
    {
      t = u_15;
      return(t);
    }
    t = at_end_1_0(i_2, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm w_15 = NULL;
  ATerm j_2 (ATerm t)
  {
    ATerm x_15 = NULL;
    x_15 = t;
    t = SSL_explode_string(x_15);
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    ATerm y_15 = NULL;
    y_15 = t;
    t = SSL_explode_string(y_15);
    return(t);
  }
  t = _2_0(j_2, k_2, t);
  t = conc_0_0(t);
  w_15 = t;
  t = SSL_implode_string(w_15);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_16 = NULL;
      e_16 = t;
      t = SSL_is_string(e_16);
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_2 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(q_2, t);
            ;
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
            {
              ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL;
              i_16 = t;
              if(match_cons(t, sym_Path_1))
                {
                  j_16 = ATgetArgument(t, 0);
                  t = j_16;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_16 = ATgetArgument(t, 0);
                      t = j_16;
                      {
                        ATerm j_11 = t;
                        int k_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(k_11);
                          }
                        else
                          {
                            t = j_11;
                            {
                              ATerm s_2 (ATerm t)
                              {
                                t = term_l_11;
                                return(t);
                              }
                              t = debug_1_0(s_2, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm o_16 = NULL,p_16 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_16 = ATgetArgument(t, 0);
                          k_16 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_16;
                      t = eval_config_0_0(t);
                      o_16 = t;
                      t = k_16;
                      t = eval_config_0_0(t);
                      p_16 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_16, p_16);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm s_16 = NULL;
  s_16 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), s_16);
  {
    ATerm t_2 (ATerm t)
    {
      ATerm t_16 = NULL;
      t = eval_config_0_0(t);
      t_16 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), s_16, t_16);
      t = t_16;
      return(t);
    }
    t = try_1_0(t_2, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm p_100 (ATerm), ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm u_16 = NULL,v_16 = NULL;
    u_16 = t;
    t = term_m_11;
    t = get_config_0_0(t);
    v_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_16, term_n_11);
    t = geq_0_0(t);
    t = u_16;
    t = p_100(t);
    return(t);
  }
  t = try_1_0(z_2, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm o_11 = ATgetArgument(t, 0);
        if(match_cons(o_11, sym_Stream_1))
          {
            w_16 = ATgetArgument(o_11, 0);
          }
        else
          _fail(t);
        x_16 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(w_16, x_16);
    y_16 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), y_16);
    z_16 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, z_16);
    return(t);
  }
  t = WriteToFile_1_0(f_3, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm l_99 (ATerm), ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
  if(match_cons(t, sym__2))
    {
      a_17 = ATgetArgument(t, 0);
      b_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_17, term_p_11);
  t = open_stream_0_0(t);
  c_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_17, b_17);
  t = l_99(t);
  t = fclose_0_0(t);
  t = b_17;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm q_11 = ATgetArgument(t, 0);
        if(match_cons(q_11, sym_Stream_1))
          {
            d_17 = ATgetArgument(q_11, 0);
          }
        else
          _fail(t);
        e_17 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(d_17, e_17);
    f_17 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, f_17);
    return(t);
  }
  t = WriteToFile_1_0(g_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  g_17 = t;
  {
    ATerm i_3 (ATerm t)
    {
      ATerm r_11 = t;
      int s_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_3 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((h_17 != NULL) && (h_17 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_17 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(r_3, t);
          ;
          LocalPopChoice(s_11);
        }
      else
        {
          t = r_11;
          t = term_t_11;
          if(((h_17 != NULL) && (h_17 != t)))
            _fail(t);
          else
            h_17 = t;
        }
      return(t);
    }
    t = _2_0(i_3, _id, t);
    t = g_17;
    {
      ATerm t_3 (ATerm t)
      {
        ATerm u_3 (ATerm t)
        {
          t = not_null(h_17);
          return(t);
        }
        t = split_2_0(u_3, _id, t);
        return(t);
      }
      t = _2_0(_id, t_3, t);
      {
        ATerm u_11 = t;
        int v_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_3 (ATerm t)
            {
              ATerm y_3 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(y_3, t);
              return(t);
            }
            t = _2_0(x_3, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(v_11);
          }
        else
          {
            t = u_11;
            t = _2_0(_id, WriteToTextFile_0_0, t);
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
ATerm apply_strategy_1_0 (ATerm n_102 (ATerm), ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
  i_17 = t;
  t = dtime_0_0(t);
  t = i_17;
  t = n_102(t);
  j_17 = t;
  t = dtime_0_0(t);
  k_17 = t;
  t = j_17;
  if(match_cons(t, sym__2))
    {
      l_17 = ATgetArgument(t, 0);
      m_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_17), (ATerm) ATmakeAppl(sym_Runtime_1, k_17)), m_17);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_18 (ATerm u_17, ATerm t)
  {
    t = SSL_fclose(u_17);
    return(t);
  }
  ATerm x_17 = NULL,y_17 = NULL;
  y_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_17 = ATgetArgument(t, 0);
      {
        ATerm y_11 = t;
        int b_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_17);
            ;
            LocalPopChoice(b_12);
          }
        else
          {
            t = y_11;
            t = a_18(y_17, t);
          }
      }
    }
  else
    {
      t = a_18(y_17, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm x_98 (ATerm), ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL;
  b_18 = t;
  t = x_98(t);
  c_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_18), c_18));
  t = b_18;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_18 = NULL;
  t = SSL_stdin_stream();
  d_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_18 = NULL;
  t = SSL_stdout_stream();
  e_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_18);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_18 = NULL;
  t = SSL_stderr_stream();
  f_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_18);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm h_18 = NULL;
  h_18 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_18;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_18;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_18;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_12 = ATgetArgument(t, 0);
      ATerm l_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_5 = NULL,u_5 = NULL;
        s_5 = t;
        t = SSL_explode_term(s_5);
        if(match_cons(t, sym__2))
          {
            ATerm q_12 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_12) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_12 = ATgetArgument(t, 1);
              if(((ATgetType(r_12) == AT_LIST) && !(ATisEmpty(r_12))))
                {
                  u_5 = ATgetFirst((ATermList) r_12);
                  {
                    ATerm s_12 = (ATerm) ATgetNext((ATermList) r_12);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = u_5;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = o_12;
        {
          ATerm t_12 = t;
          int u_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
              ATerm a_4 (ATerm t)
              {
                ATerm n_18 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    n_18 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = n_18;
                return(t);
              }
              t = _2_0(a_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  k_18 = ATgetArgument(t, 0);
                  l_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(k_18, l_18);
              m_18 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, m_18);
              ;
              LocalPopChoice(u_12);
            }
          else
            {
              t = t_12;
              {
                ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL;
                ATerm g_4 (ATerm t)
                {
                  ATerm r_18 = NULL;
                  r_18 = t;
                  t = SSL_is_string(r_18);
                  return(t);
                }
                t = _2_0(g_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    o_18 = ATgetArgument(t, 0);
                    p_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(o_18, p_18);
                q_18 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, q_18);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_18 = NULL;
      v_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_18, term_x_12);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      {
        ATerm h_4 (ATerm t)
        {
          t = term_y_12;
          return(t);
        }
        t = debug_1_0(h_4, t);
        _fail(t);
      }
    }
  s_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(u_18);
  t_18 = t;
  t = s_18;
  t = fclose_0_0(t);
  t = t_18;
  return(t);
}
ATerm split_2_0 (ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
  x_18 = t;
  t = m_94(t);
  y_18 = t;
  t = x_18;
  t = n_94(t);
  z_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_18, z_18);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL;
  a_19 = t;
  {
    ATerm z_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_4 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              if(((b_19 != NULL) && (b_19 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(k_4, t);
        ;
        LocalPopChoice(a_13);
      }
    else
      {
        t = z_12;
        t = term_d_13;
        b_19 = t;
      }
    t = a_19;
    {
      ATerm l_4 (ATerm t)
      {
        t = not_null(b_19);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, l_4, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    ATerm d_19 = NULL;
    d_19 = t;
    if(match_string(t, "-k"))
      {
        t = d_19;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = d_19;
      }
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    ATerm e_19 = NULL,f_19 = NULL;
    e_19 = t;
    t = SSL_string_to_int(e_19);
    f_19 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), f_19);
    t = e_19;
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    t = term_g_13;
    return(t);
  }
  t = ArgOption_3_0(o_4, p_4, q_4, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_4 (ATerm t)
      {
        ATerm h_19 = NULL;
        h_19 = t;
        if(match_string(t, "-S"))
          {
            t = h_19;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = h_19;
          }
        return(t);
      }
      ATerm s_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_k_13;
        return(t);
      }
      ATerm u_4 (ATerm t)
      {
        t = term_l_13;
        return(t);
      }
      t = Option_3_0(r_4, s_4, u_4, t);
      ;
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
      {
        ATerm m_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_4 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm w_4 (ATerm t)
            {
              ATerm i_19 = NULL,j_19 = NULL;
              i_19 = t;
              t = SSL_string_to_int(i_19);
              j_19 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_19);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, i_19);
              return(t);
            }
            ATerm y_4 (ATerm t)
            {
              t = term_o_13;
              return(t);
            }
            t = ArgOption_3_0(v_4, w_4, y_4, t);
            ;
            LocalPopChoice(n_13);
          }
        else
          {
            t = m_13;
            {
              ATerm z_4 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm a_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_p_13;
                return(t);
              }
              ATerm c_5 (ATerm t)
              {
                t = term_s_13;
                return(t);
              }
              t = Option_3_0(z_4, a_5, c_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm l_19 = NULL;
    l_19 = t;
    if(match_string(t, "-o"))
      {
        t = l_19;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = l_19;
      }
    return(t);
  }
  ATerm f_5 (ATerm t)
  {
    ATerm m_19 = NULL;
    m_19 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), m_19);
    t = (ATerm) ATmakeAppl(sym_Output_1, m_19);
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    t = term_x_13;
    return(t);
  }
  t = ArgOption_3_0(e_5, f_5, g_5, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(z_13);
    }
  else
    {
      t = y_13;
      {
        ATerm h_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm i_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_a_14;
          return(t);
        }
        ATerm j_5 (ATerm t)
        {
          t = term_b_14;
          return(t);
        }
        t = Option_3_0(h_5, i_5, j_5, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
  p_19 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = p_19;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm x_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_19 = ATgetFirst((ATermList) t);
          r_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_19;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_19 = ATgetFirst((ATermList) t);
          t_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_19;
      t = h_0(t);
      t = s_19;
      t = i_0(t);
      x_19 = t;
      t = (ATerm) ATinsert(CheckATermList(t_19), x_19);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm z_19 = NULL;
    z_19 = t;
    if(match_string(t, "-i"))
      {
        t = z_19;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = z_19;
      }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    ATerm a_20 = NULL;
    a_20 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), a_20);
    t = (ATerm) ATmakeAppl(sym_Input_1, a_20);
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = term_c_14;
    return(t);
  }
  t = ArgOption_3_0(k_5, l_5, m_5, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(e_14);
    }
  else
    {
      t = d_14;
      {
        ATerm f_14 = t;
        int g_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(g_14);
          }
        else
          {
            t = f_14;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_20 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_10;
  t = whoami_0_0(t);
  b_20 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), b_20));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_h_14;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm t)
{
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_92(t);
      ;
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
      {
        ATerm e_20 = NULL,f_20 = NULL,i_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_20 = ATgetFirst((ATermList) t);
            f_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_20;
        t = foldr_2_0(x_92, y_92, t);
        i_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_20, i_20);
        t = y_92(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL;
  j_20 = t;
  t = SSL_explode_term(j_20);
  if(match_cons(t, sym__2))
    {
      ATerm l_14 = ATgetArgument(t, 0);
      k_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_20;
  t = foldr_2_0(q_96, r_96, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_20 = NULL;
  t = times_0_0(t);
  {
    ATerm n_5 (ATerm t)
    {
      t = term_j_13;
      return(t);
    }
    ATerm o_5 (ATerm t)
    {
      ATerm m_20 = NULL,n_20 = NULL;
      if(match_cons(t, sym__2))
        {
          m_20 = ATgetArgument(t, 0);
          n_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm m_14 = t;
        int n_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(m_20, n_20);
            ;
            LocalPopChoice(n_14);
          }
        else
          {
            t = m_14;
            t = SSL_addr(m_20, n_20);
          }
      }
      return(t);
    }
    t = crush_2_0(n_5, o_5, t);
    l_20 = t;
    t = SSL_TicksToSeconds(l_20);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
  w_20 = t;
  if(match_cons(t, sym__2))
    {
      x_20 = ATgetArgument(t, 0);
      y_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_20;
        if((x_20 != t))
          {
            _fail(t);
          }
        t = w_20;
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        t = w_20;
        {
          ATerm q_14 = t;
          int r_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_20, y_20);
              ;
              LocalPopChoice(r_14);
            }
          else
            {
              t = q_14;
              t = SSL_gtr(x_20, y_20);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_20, y_20);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_100 (ATerm), ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm b_21 = NULL,c_21 = NULL;
    b_21 = t;
    t = term_m_11;
    t = get_config_0_0(t);
    c_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_21, term_s_14);
    t = geq_0_0(t);
    t = b_21;
    t = o_100(t);
    return(t);
  }
  t = try_1_0(p_5, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm e_21 = NULL,f_21 = NULL;
    t = run_time_0_0(t);
    e_21 = t;
    t = term_u_10;
    t = whoami_0_0(t);
    f_21 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), e_21), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), f_21));
    t = (ATerm) ATmakeAppl(sym__2, term_t_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_14), e_21), term_u_14), f_21));
    return(t);
  }
  t = if_verbose1_1_0(v_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm l_103 (ATerm), ATerm t)
{
  ATerm w_14 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_15);
    }
  else
    {
      t = w_14;
      {
        ATerm w_5 (ATerm t)
        {
          ATerm k_15 = t;
          int l_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(l_15);
            }
          else
            {
              t = k_15;
              {
                ATerm o_15 = t;
                int p_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(p_15);
                  }
                else
                  {
                    t = o_15;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(w_5, t);
      }
    }
  t = l_103(t);
  return(t);
}
ATerm map_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm h_21 (ATerm t)
  {
    ATerm q_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(z_15);
      }
    else
      {
        t = q_15;
        t = Cons_2_0(v_86, h_21, t);
      }
    return(t);
  }
  t = h_21(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_21 = ATgetFirst((ATermList) t);
      k_21 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_21 = NULL,p_21 = NULL;
        t = k_21;
        t = g_0(t);
        o_21 = t;
        t = j_21;
        t = e_0(t);
        p_21 = t;
        t = k_21;
        {
          ATerm x_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(o_21), p_21);
            return(t);
          }
          t = reverse_acc_2_0(e_0, x_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_10;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, z_5, t);
  return(t);
}
ATerm Program_1_0 (ATerm d_72 (ATerm), ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL;
  t_21 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_21);
  q_21 = t;
  t = r_21;
  t = d_72(t);
  s_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, s_21), q_21);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_16 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_16);
    }
  else
    {
      t = a_16;
      {
        ATerm a_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(a_6, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_c_16;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm b_6 (ATerm t)
    {
      ATerm w_21 = NULL;
      w_21 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, w_21), term_d_16);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(b_6, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm e_72 (ATerm), ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL;
  a_22 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      y_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_22);
  x_21 = t;
  t = y_21;
  t = e_72(t);
  z_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, z_21), x_21);
  return(t);
}
ATerm fetch_1_0 (ATerm g_87 (ATerm), ATerm t)
{
  ATerm d_22 (ATerm t)
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_87, _id, t);
        ;
        LocalPopChoice(g_16);
      }
    else
      {
        t = f_16;
        t = Cons_2_0(_id, d_22, t);
      }
    return(t);
  }
  t = d_22(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm l_104 (ATerm), ATerm t)
{
  t = fetch_1_0(l_104, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL;
  f_22 = t;
  {
    ATerm h_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_22;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_16 = ATgetFirst((ATermList) t);
                ATerm n_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_22;
          }
        ;
        LocalPopChoice(l_16);
      }
    else
      {
        t = h_16;
        t = (ATerm) ATinsert(ATempty, f_22);
      }
    g_22 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), g_22);
    t = f_22;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_h_14;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_6 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm d_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_p_17;
        return(t);
      }
      ATerm e_6 (ATerm t)
      {
        t = term_q_17;
        return(t);
      }
      t = Option_3_0(c_6, d_6, e_6, t);
      ;
      LocalPopChoice(r_16);
    }
  else
    {
      t = q_16;
      {
        ATerm f_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm g_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_r_17;
          return(t);
        }
        ATerm h_6 (ATerm t)
        {
          t = term_s_17;
          return(t);
        }
        t = Option_3_0(f_6, g_6, h_6, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL;
  if(match_cons(t, sym__3))
    {
      m_22 = ATgetArgument(t, 0);
      n_22 = ATgetArgument(t, 1);
      o_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_22, n_22);
  {
    ATerm t_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_17 = ATgetArgument(t, 0);
            ATerm z_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_22, n_22);
        ;
        LocalPopChoice(v_17);
      }
    else
      {
        t = t_17;
        t = (ATerm) ATempty;
      }
    p_22 = t;
    t = SSL_table_put(m_22, n_22, (ATerm) ATinsert(CheckATermList(p_22), o_22));
    t = (ATerm) ATmakeAppl(sym__3, m_22, n_22, o_22);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm q_105 (ATerm), ATerm t)
{
  ATerm u_22 = NULL;
  t = term_u_10;
  t = q_105(t);
  u_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_18, term_i_18, u_22);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL;
  w_22 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = w_22;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm b_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_22 = ATgetFirst((ATermList) t);
          y_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_22;
      t = a_0(t);
      t = term_u_10;
      t = c_0(t);
      b_23 = t;
      t = (ATerm) ATinsert(CheckATermList(y_22), b_23);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm i_6 (ATerm t)
  {
    ATerm d_23 = NULL;
    d_23 = t;
    if(match_string(t, "--help"))
      {
        t = d_23;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = d_23;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = d_23;
          }
      }
    return(t);
  }
  ATerm j_6 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_j_18;
    return(t);
  }
  ATerm k_6 (ATerm t)
  {
    t = term_w_18;
    return(t);
  }
  t = Option_3_0(i_6, j_6, k_6, t);
  return(t);
}
ATerm Cons_2_0 (ATerm j_66 (ATerm), ATerm k_66 (ATerm), ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL;
  j_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_23 = ATgetFirst((ATermList) t);
      g_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_23);
  e_23 = t;
  t = f_23;
  t = j_66(t);
  h_23 = t;
  t = g_23;
  t = k_66(t);
  i_23 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(i_23), h_23), e_23);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_105 (ATerm), ATerm t)
{
  ATerm p_23 = NULL;
  p_23 = t;
  {
    ATerm l_6 (ATerm t)
    {
      t = term_c_19;
      t = o_105(t);
      return(t);
    }
    t = try_1_0(l_6, t);
    t = p_23;
    {
      ATerm n_6 (ATerm t)
      {
        ATerm q_23 = NULL;
        q_23 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_23);
        t = (ATerm) ATmakeAppl(sym_Program_1, q_23);
        return(t);
      }
      ATerm o_6 (ATerm t)
      {
        ATerm g_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_19 = t;
            int o_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(o_19);
              }
            else
              {
                t = n_19;
                t = o_105(t);
                t = Cons_2_0(_id, o_6, t);
              }
            ;
            LocalPopChoice(k_19);
          }
        else
          {
            t = g_19;
            {
              ATerm s_23 = NULL,t_23 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_23 = ATgetFirst((ATermList) t);
                  t_23 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_23), (ATerm) ATmakeAppl(sym_Undefined_1, s_23));
            }
          }
        return(t);
      }
      t = Cons_2_0(n_6, o_6, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm n_105 (ATerm), ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL;
  z_23 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = z_23;
  {
    ATerm p_6 (ATerm t)
    {
      ATerm u_19 = t;
      int v_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_105(t);
          ;
          LocalPopChoice(v_19);
        }
      else
        {
          t = u_19;
          {
            ATerm w_19 = t;
            int y_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(y_19);
              }
            else
              {
                t = w_19;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_6, t);
    {
      ATerm q_6 (ATerm t)
      {
        ATerm c_20 = t;
        int d_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_24 = NULL;
            g_24 = t;
            {
              ATerm g_20 = t;
              int h_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_24;
                  {
                    ATerm o_20 = t;
                    int p_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_h_15;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(p_20);
                      }
                    else
                      {
                        t = o_20;
                        {
                          ATerm r_6 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(r_6, t);
                        }
                      }
                    t = g_24;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(h_20);
                }
              else
                {
                  t = g_20;
                  t = term_o_17;
                  t = get_config_0_0(t);
                  t = g_24;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(d_20);
          }
        else
          {
            t = c_20;
            {
              ATerm s_6 (ATerm t)
              {
                ATerm t_6 (ATerm t)
                {
                  if(((a_24 != NULL) && (a_24 != t)))
                    _fail(t);
                  else
                    a_24 = t;
                  return(t);
                }
                t = Undefined_1_0(t_6, t);
                return(t);
              }
              t = option_defined_1_0(s_6, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(a_24)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_24)), term_q_20));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(q_6, t);
      b_24 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = b_24;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm t)
{
  ATerm z_8 = NULL;
  t = parse_options_1_0(n_103, t);
  z_8 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), z_8);
  t = z_8;
  t = p_103(t);
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_103, t);
        ;
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        {
          ATerm t_20 = t;
          int u_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_103(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(u_20);
            }
          else
            {
              t = t_20;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    ATerm v_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_103(t);
        ;
        LocalPopChoice(z_20);
      }
    else
      {
        t = v_20;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm v_6 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(c_103, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(u_6, e_103, f_103, v_6, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm t)
{
  ATerm w_6 (ATerm t)
  {
    ATerm x_6 (ATerm t)
    {
      ATerm j_24 = NULL,k_24 = NULL;
      j_24 = t;
      t = term_h_14;
      t = get_config_0_0(t);
      k_24 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, k_24));
      t = j_24;
      return(t);
    }
    t = if_verbose2_1_0(x_6, t);
    return(t);
  }
  t = iowrap_4_0(w_102, x_102, y_102, w_6, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm t)
{
  t = iowrap_3_0(u_102, v_102, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm r_102 (ATerm), ATerm t)
{
  ATerm y_6 (ATerm t)
  {
    t = _2_0(_id, r_102, t);
    return(t);
  }
  t = iowrap_2_0(y_6, _fail, t);
  return(t);
}
ATerm stratego_desugar_0_0 (ATerm t)
{
  ATerm z_6 (ATerm t)
  {
    ATerm a_7 (ATerm t)
    {
      ATerm l_24 = NULL,m_24 = NULL;
      l_24 = t;
      t = SSL_explode_term(l_24);
      if(match_cons(t, sym__2))
        {
          ATerm a_21 = ATgetArgument(t, 0);
          ATerm d_21 = ATgetArgument(t, 1);
          if(((ATgetType(d_21) == AT_LIST) && !(ATisEmpty(d_21))))
            {
              m_24 = ATgetFirst((ATermList) d_21);
              {
                ATerm g_21 = (ATerm) ATgetNext((ATermList) d_21);
                if(((ATgetType(g_21) != AT_LIST) || !(ATisEmpty(g_21))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      t = m_24;
      return(t);
    }
    t = try_1_0(a_7, t);
    {
      ATerm b_7 (ATerm t)
      {
        t = repeat_1_0(Desugar_0_0, t);
        t = try_1_0(DesugarOnce_0_0, t);
        return(t);
      }
      t = topdown_1_0(b_7, t);
    }
    return(t);
  }
  t = iowrap_1_0(z_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = stratego_desugar_0_0(t);
  return(t);
}
