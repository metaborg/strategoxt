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
ATerm term_r_18;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_d_14;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_p_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_v_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_m_11;
ATerm term_i_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_w_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_i_8;
ATerm term_g_8;
ATerm term_o_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
void init_constant_terms (void)
{
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_8);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATempty);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Call_2, term_r_9, (ATerm) ATempty);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_8);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_8);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Call_2, term_a_10, (ATerm) ATempty);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Call_2, term_i_8, (ATerm) ATempty);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_10);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_12);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__3, term_a_16, term_b_16, term_j_10);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Op_2_0 (ATerm f_73 (ATerm), ATerm g_73 (ATerm), ATerm);
ATerm OpDecl_2_0 (ATerm q_72 (ATerm), ATerm r_72 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm d_76 (ATerm), ATerm);
ATerm Var_1_0 (ATerm v_70 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm o_78 (ATerm), ATerm p_78 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm);
ATerm RDef_3_0 (ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm);
ATerm DefaultVarDec_1_0 (ATerm n_78 (ATerm), ATerm);
ATerm UnEscape_0_0 (ATerm);
ATerm unescape_chars_0_0 (ATerm);
ATerm unescape_0_0 (ATerm);
ATerm DesugarOnce_0_0 (ATerm);
ATerm try_1_0 (ATerm d_79 (ATerm), ATerm);
ATerm at_last_1_0 (ATerm p_87 (ATerm), ATerm);
ATerm init_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm unquote_chars_1_0 (ATerm q_95 (ATerm), ATerm);
ATerm un_double_quote_chars_0_0 (ATerm);
ATerm string_as_chars_1_0 (ATerm b_96 (ATerm), ATerm);
ATerm un_double_quote_0_0 (ATerm);
ATerm Desugar_0_0 (ATerm);
ATerm repeat_1_0 (ATerm z_79 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm x_80 (ATerm), ATerm);
ATerm _2_0 (ATerm t_64 (ATerm), ATerm u_64 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm e_87 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_100 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm a_99 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm c_102 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm m_98 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm p_92 (ATerm), ATerm q_92 (ATerm), ATerm);
ATerm crush_2_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_100 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm a_103 (ATerm), ATerm);
ATerm map_1_0 (ATerm o_86 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm w_71 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm x_71 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm y_86 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm a_104 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm f_105 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm c_66 (ATerm), ATerm d_66 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm d_105 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm c_105 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm j_102 (ATerm), ATerm k_102 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm g_102 (ATerm), ATerm);
ATerm stratego_desugar_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Op_2_0 (ATerm f_73 (ATerm), ATerm g_73 (ATerm), ATerm t)
{
  ATerm f_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,l_2 = NULL,m_2 = NULL;
  m_2 = t;
  if(match_cons(t, sym_Op_2))
    {
      h_2 = ATgetArgument(t, 0);
      i_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_2);
  f_2 = t;
  t = h_2;
  t = f_73(t);
  j_2 = t;
  t = i_2;
  t = g_73(t);
  l_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, j_2, l_2), f_2);
  return(t);
}
ATerm OpDecl_2_0 (ATerm q_72 (ATerm), ATerm r_72 (ATerm), ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,y_2 = NULL;
  y_2 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      s_2 = ATgetArgument(t, 0);
      t_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_2);
  r_2 = t;
  t = s_2;
  t = q_72(t);
  u_2 = t;
  t = t_2;
  t = r_72(t);
  v_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, u_2, v_2), r_2);
  return(t);
}
ATerm SVar_1_0 (ATerm d_76 (ATerm), ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,g_3 = NULL,i_3 = NULL;
  i_3 = t;
  if(match_cons(t, sym_SVar_1))
    {
      e_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_3);
  d_3 = t;
  t = e_3;
  t = d_76(t);
  g_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, g_3), d_3);
  return(t);
}
ATerm Var_1_0 (ATerm v_70 (ATerm), ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL;
  p_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      n_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_3);
  m_3 = t;
  t = n_3;
  t = v_70(t);
  o_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, o_3), m_3);
  return(t);
}
ATerm VarDec_2_0 (ATerm o_78 (ATerm), ATerm p_78 (ATerm), ATerm t)
{
  ATerm b_4 = NULL,d_4 = NULL,f_4 = NULL,p_4 = NULL,r_4 = NULL,t_4 = NULL;
  t_4 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      d_4 = ATgetArgument(t, 0);
      f_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_4);
  b_4 = t;
  t = d_4;
  t = o_78(t);
  p_4 = t;
  t = f_4;
  t = p_78(t);
  r_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, p_4, r_4), b_4);
  return(t);
}
ATerm SDef_3_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm t)
{
  ATerm r_5 = NULL,t_5 = NULL,e_6 = NULL,f_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL;
  n_6 = t;
  if(match_cons(t, sym_SDef_3))
    {
      t_5 = ATgetArgument(t, 0);
      e_6 = ATgetArgument(t, 1);
      f_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_6);
  r_5 = t;
  t = t_5;
  t = s_78(t);
  k_6 = t;
  t = e_6;
  t = t_78(t);
  l_6 = t;
  t = f_6;
  t = u_78(t);
  m_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, k_6, l_6, m_6), r_5);
  return(t);
}
ATerm RDef_3_0 (ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm t)
{
  ATerm d_7 = NULL,l_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,z_7 = NULL,j_8 = NULL,n_8 = NULL;
  n_8 = t;
  if(match_cons(t, sym_RDef_3))
    {
      l_7 = ATgetArgument(t, 0);
      p_7 = ATgetArgument(t, 1);
      q_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_8);
  d_7 = t;
  t = l_7;
  t = z_74(t);
  r_7 = t;
  t = p_7;
  t = a_75(t);
  z_7 = t;
  t = q_7;
  t = b_75(t);
  j_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, r_7, z_7, j_8), d_7);
  return(t);
}
ATerm DefaultVarDec_1_0 (ATerm n_78 (ATerm), ATerm t)
{
  ATerm v_8 = NULL,x_8 = NULL,j_9 = NULL,m_9 = NULL;
  m_9 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      x_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_9);
  v_8 = t;
  t = x_8;
  t = n_78(t);
  j_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, j_9), v_8);
  return(t);
}
ATerm UnEscape_0_0 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_9 = ATgetFirst((ATermList) t);
      w_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_9;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = w_9;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_9 = ATgetFirst((ATermList) t);
      y_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_9;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(y_9), term_h_6);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(y_9), term_i_6);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(y_9), term_j_6);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(y_9), term_o_6);
            }
        }
    }
  return(t);
}
ATerm unescape_chars_0_0 (ATerm t)
{
  t = try_1_0(UnEscape_0_0, t);
  {
    ATerm p_6 = t;
    int q_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, unescape_chars_0_0, t);
        ;
        LocalPopChoice(q_6);
      }
    else
      {
        t = p_6;
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
  ATerm r_6 = t;
  int s_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL;
      x_10 = t;
      if(match_cons(t, sym_Str_1))
        {
          y_10 = ATgetArgument(t, 0);
          {
            ATerm c_11 = NULL;
            t = y_10;
            t = un_double_quote_0_0(t);
            t = unescape_0_0(t);
            c_11 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, c_11);
          }
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              y_10 = ATgetArgument(t, 0);
              {
                ATerm m_0 = NULL;
                t = SSL_string_to_real(y_10);
                m_0 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, m_0);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  y_10 = ATgetArgument(t, 0);
                  {
                    ATerm r_0 = NULL;
                    t = SSL_string_to_int(y_10);
                    r_0 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, r_0);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Con_3))
                    {
                      y_10 = ATgetArgument(t, 0);
                      z_10 = ATgetArgument(t, 1);
                      a_11 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSL_is_string(a_11);
                  t = (ATerm) ATmakeAppl(sym_Con_3, y_10, z_10, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_11), (ATerm) ATempty));
                }
            }
        }
      ;
      LocalPopChoice(s_6);
    }
  else
    {
      t = r_6;
      {
        ATerm t_6 = t;
        int u_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              ATerm b_1 = NULL,c_1 = NULL;
              b_1 = t;
              t = SSL_explode_string(b_1);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm v_6 = ATgetFirst((ATermList) t);
                  if(((ATgetType(v_6) != AT_INT) || (ATgetInt((ATermInt) v_6) != 39)))
                    _fail(t);
                  c_1 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSL_implode_string(c_1);
              return(t);
            }
            t = DefaultVarDec_1_0(c_0, t);
            ;
            LocalPopChoice(u_6);
          }
        else
          {
            t = t_6;
            {
              ATerm w_6 = t;
              int x_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_0 (ATerm t)
                  {
                    ATerm f_1 = NULL,g_1 = NULL;
                    f_1 = t;
                    t = SSL_explode_string(f_1);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm y_6 = ATgetFirst((ATermList) t);
                        if(((ATgetType(y_6) != AT_INT) || (ATgetInt((ATermInt) y_6) != 39)))
                          _fail(t);
                        g_1 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = SSL_implode_string(g_1);
                    return(t);
                  }
                  t = RDef_3_0(e_0, _id, _id, t);
                  ;
                  LocalPopChoice(x_6);
                }
              else
                {
                  t = w_6;
                  {
                    ATerm z_6 = t;
                    int a_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_0 (ATerm t)
                        {
                          ATerm j_1 = NULL,k_1 = NULL;
                          j_1 = t;
                          t = SSL_explode_string(j_1);
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm b_7 = ATgetFirst((ATermList) t);
                              if(((ATgetType(b_7) != AT_INT) || (ATgetInt((ATermInt) b_7) != 39)))
                                _fail(t);
                              k_1 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          t = SSL_implode_string(k_1);
                          return(t);
                        }
                        t = SDef_3_0(k_0, _id, _id, t);
                        ;
                        LocalPopChoice(a_7);
                      }
                    else
                      {
                        t = z_6;
                        {
                          ATerm c_7 = t;
                          int e_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm l_0 (ATerm t)
                              {
                                ATerm n_1 = NULL,o_1 = NULL;
                                n_1 = t;
                                t = SSL_explode_string(n_1);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm f_7 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(f_7) != AT_INT) || (ATgetInt((ATermInt) f_7) != 39)))
                                      _fail(t);
                                    o_1 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(o_1);
                                return(t);
                              }
                              t = VarDec_2_0(l_0, _id, t);
                              ;
                              LocalPopChoice(e_7);
                            }
                          else
                            {
                              t = c_7;
                              {
                                ATerm g_7 = t;
                                int h_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm n_0 (ATerm t)
                                    {
                                      ATerm r_1 = NULL,s_1 = NULL;
                                      r_1 = t;
                                      t = SSL_explode_string(r_1);
                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                        {
                                          ATerm i_7 = ATgetFirst((ATermList) t);
                                          if(((ATgetType(i_7) != AT_INT) || (ATgetInt((ATermInt) i_7) != 39)))
                                            _fail(t);
                                          s_1 = (ATerm) ATgetNext((ATermList) t);
                                        }
                                      else
                                        _fail(t);
                                      t = SSL_implode_string(s_1);
                                      return(t);
                                    }
                                    t = Var_1_0(n_0, t);
                                    ;
                                    LocalPopChoice(h_7);
                                  }
                                else
                                  {
                                    t = g_7;
                                    {
                                      ATerm j_7 = t;
                                      int k_7 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm o_0 (ATerm t)
                                          {
                                            ATerm v_1 = NULL,w_1 = NULL;
                                            v_1 = t;
                                            t = SSL_explode_string(v_1);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm m_7 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(m_7) != AT_INT) || (ATgetInt((ATermInt) m_7) != 39)))
                                                  _fail(t);
                                                w_1 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(w_1);
                                            return(t);
                                          }
                                          t = SVar_1_0(o_0, t);
                                          ;
                                          LocalPopChoice(k_7);
                                        }
                                      else
                                        {
                                          t = j_7;
                                          {
                                            ATerm n_7 = t;
                                            int o_7 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm p_0 (ATerm t)
                                                {
                                                  ATerm z_1 = NULL,a_2 = NULL;
                                                  z_1 = t;
                                                  t = SSL_explode_string(z_1);
                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                    {
                                                      ATerm s_7 = ATgetFirst((ATermList) t);
                                                      if(((ATgetType(s_7) != AT_INT) || (ATgetInt((ATermInt) s_7) != 39)))
                                                        _fail(t);
                                                      a_2 = (ATerm) ATgetNext((ATermList) t);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSL_implode_string(a_2);
                                                  return(t);
                                                }
                                                t = OpDecl_2_0(p_0, _id, t);
                                                ;
                                                LocalPopChoice(o_7);
                                              }
                                            else
                                              {
                                                t = n_7;
                                                {
                                                  ATerm q_0 (ATerm t)
                                                  {
                                                    ATerm g_2 = NULL,k_2 = NULL;
                                                    g_2 = t;
                                                    t = SSL_explode_string(g_2);
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        ATerm t_7 = ATgetFirst((ATermList) t);
                                                        if(((ATgetType(t_7) != AT_INT) || (ATgetInt((ATermInt) t_7) != 39)))
                                                          _fail(t);
                                                        k_2 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSL_implode_string(k_2);
                                                    return(t);
                                                  }
                                                  t = Op_2_0(q_0, _id, t);
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm try_1_0 (ATerm d_79 (ATerm), ATerm t)
{
  ATerm v_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_79(t);
      ;
      LocalPopChoice(w_7);
    }
  else
    {
      t = v_7;
    }
  return(t);
}
ATerm at_last_1_0 (ATerm p_87 (ATerm), ATerm t)
{
  ATerm g_11 (ATerm t)
  {
    ATerm x_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_0 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, s_0, t);
        t = p_87(t);
        ;
        LocalPopChoice(y_7);
      }
    else
      {
        t = x_7;
        t = Cons_2_0(_id, g_11, t);
      }
    return(t);
  }
  t = g_11(t);
  return(t);
}
ATerm init_0_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm h_11 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        ATerm a_8 = ATgetFirst((ATermList) t);
        h_11 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = h_11;
    return(t);
  }
  t = at_last_1_0(t_0, t);
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
      ATerm b_8 = t;
      int c_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_11;
          ;
          LocalPopChoice(c_8);
        }
      else
        {
          t = b_8;
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
ATerm unquote_chars_1_0 (ATerm q_95 (ATerm), ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
  t_11 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_11 = ATgetFirst((ATermList) t);
      {
        ATerm d_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_11;
  t = q_95(t);
  t = t_11;
  t = last_0_0(t);
  t = q_95(t);
  t = t_11;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_8 = ATgetFirst((ATermList) t);
      v_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_11;
  t = init_0_0(t);
  return(t);
}
ATerm un_double_quote_chars_0_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
      _fail(t);
    return(t);
  }
  t = unquote_chars_1_0(u_0, t);
  return(t);
}
ATerm string_as_chars_1_0 (ATerm b_96 (ATerm), ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL;
  w_11 = t;
  t = SSL_explode_string(w_11);
  t = b_96(t);
  x_11 = t;
  t = SSL_implode_string(x_11);
  return(t);
}
ATerm un_double_quote_0_0 (ATerm t)
{
  t = string_as_chars_1_0(un_double_quote_chars_0_0, t);
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm r_15 (ATerm q_12, ATerm r_12, ATerm t)
  {
    t = q_12;
    {
      ATerm f_8 = t;
      if((PushChoice() == 0))
        {
          ATerm v_0 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(_id, v_0, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_8;
        }
      t = (ATerm) ATmakeAppl(sym_Op_2, term_g_8, q_12);
    }
    return(t);
  }
  ATerm s_15 (ATerm t_12, ATerm u_12, ATerm t)
  {
    t = t_12;
    {
      ATerm h_8 = t;
      if((PushChoice() == 0))
        {
          ATerm w_0 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(_id, w_0, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = h_8;
        }
      t = (ATerm) ATmakeAppl(sym_Call_2, term_i_8, t_12);
    }
    return(t);
  }
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
  b_13 = t;
  if(match_cons(t, sym_Anno_2))
    {
      c_13 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
      {
        ATerm g_13 = NULL;
        t = d_13;
        {
          ATerm x_0 (ATerm t)
          {
            t = term_l_8;
            return(t);
          }
          ATerm y_0 (ATerm t)
          {
            ATerm h_13 = NULL,z_2 = NULL,r_3 = NULL;
            h_13 = t;
            t = SSL_explode_term(h_13);
            if(match_cons(t, sym__2))
              {
                ATerm m_8 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) m_8) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm o_8 = ATgetArgument(t, 1);
                  if(((ATgetType(o_8) == AT_LIST) && !(ATisEmpty(o_8))))
                    {
                      z_2 = ATgetFirst((ATermList) o_8);
                      {
                        ATerm p_8 = (ATerm) ATgetNext((ATermList) o_8);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = SSL_explode_term(h_13);
            if(match_cons(t, sym__2))
              {
                ATerm q_8 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) q_8) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm r_8 = ATgetArgument(t, 1);
                  if(((ATgetType(r_8) == AT_LIST) && !(ATisEmpty(r_8))))
                    {
                      ATerm s_8 = ATgetFirst((ATermList) r_8);
                      ATerm t_8 = (ATerm) ATgetNext((ATermList) r_8);
                      if(((ATgetType(t_8) == AT_LIST) && !(ATisEmpty(t_8))))
                        {
                          r_3 = ATgetFirst((ATermList) t_8);
                          {
                            ATerm u_8 = (ATerm) ATgetNext((ATermList) t_8);
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
            t = (ATerm) ATmakeAppl(sym_Op_2, term_w_8, (ATerm) ATinsert(ATinsert(ATempty, r_3), z_2));
            return(t);
          }
          t = foldr_2_0(x_0, y_0, t);
          g_13 = t;
          t = (ATerm) ATmakeAppl(sym_Anno_2, c_13, g_13);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          c_13 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, c_13, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              c_13 = ATgetArgument(t, 0);
              {
                ATerm x_3 = NULL;
                t = c_13;
                {
                  ATerm y_8 = t;
                  int z_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_a_9;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_b_9;
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
                                      t = term_j_6;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_c_9;
                                    }
                                }
                            }
                        }
                      ;
                      LocalPopChoice(z_8);
                    }
                  else
                    {
                      t = y_8;
                      {
                        ATerm z_3 = NULL;
                        t = SSL_explode_string(c_13);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm d_9 = ATgetFirst((ATermList) t);
                            if(((ATgetType(d_9) != AT_INT) || (ATgetInt((ATermInt) d_9) != 39)))
                              _fail(t);
                            {
                              ATerm e_9 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(e_9) == AT_LIST) && !(ATisEmpty(e_9))))
                                {
                                  z_3 = ATgetFirst((ATermList) e_9);
                                  {
                                    ATerm f_9 = (ATerm) ATgetNext((ATermList) e_9);
                                    if(((ATgetType(f_9) == AT_LIST) && !(ATisEmpty(f_9))))
                                      {
                                        ATerm g_9 = ATgetFirst((ATermList) f_9);
                                        if(((ATgetType(g_9) != AT_INT) || (ATgetInt((ATermInt) g_9) != 39)))
                                          _fail(t);
                                        {
                                          ATerm h_9 = (ATerm) ATgetNext((ATermList) f_9);
                                          if(((ATgetType(h_9) != AT_LIST) || !(ATisEmpty(h_9))))
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
                        t = z_3;
                      }
                    }
                  x_3 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, x_3);
                }
              }
            }
          else
            {
              ATerm i_9 = t;
              int k_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      c_13 = ATgetArgument(t, 0);
                      {
                        ATerm l_9 = ATgetArgument(t, 1);
                      }
                      a_13 = ATgetArgument(t, 2);
                      w_12 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(k_9);
                  t = (ATerm) ATmakeAppl(sym_Con_3, c_13, a_13, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, w_12), (ATerm) ATempty));
                }
              else
                {
                  t = i_9;
                  {
                    ATerm n_9 = t;
                    int o_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            c_13 = ATgetArgument(t, 0);
                            {
                              ATerm p_9 = ATgetArgument(t, 1);
                            }
                            a_13 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(o_9);
                        t = (ATerm) ATmakeAppl(sym_Con_3, c_13, a_13, term_s_9);
                      }
                    else
                      {
                        t = n_9;
                        if(match_cons(t, sym_Con1_2))
                          {
                            c_13 = ATgetArgument(t, 0);
                            d_13 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, c_13, d_13, term_s_9);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                c_13 = ATgetArgument(t, 0);
                                d_13 = ATgetArgument(t, 1);
                                t = c_13;
                                {
                                  ATerm z_0 (ATerm t)
                                  {
                                    t = d_13;
                                    return(t);
                                  }
                                  ATerm a_1 (ATerm t)
                                  {
                                    ATerm v_13 = NULL,w_13 = NULL;
                                    if(match_cons(t, sym__2))
                                      {
                                        v_13 = ATgetArgument(t, 0);
                                        w_13 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_Op_2, term_w_8, (ATerm) ATinsert(ATinsert(ATempty, w_13), v_13));
                                    return(t);
                                  }
                                  t = foldr_2_0(z_0, a_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    c_13 = ATgetArgument(t, 0);
                                    t = c_13;
                                    {
                                      ATerm d_1 (ATerm t)
                                      {
                                        t = term_l_8;
                                        return(t);
                                      }
                                      ATerm e_1 (ATerm t)
                                      {
                                        ATerm y_13 = NULL,z_13 = NULL;
                                        if(match_cons(t, sym__2))
                                          {
                                            y_13 = ATgetArgument(t, 0);
                                            z_13 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_Op_2, term_w_8, (ATerm) ATinsert(ATinsert(ATempty, z_13), y_13));
                                        return(t);
                                      }
                                      t = foldr_2_0(d_1, e_1, t);
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        c_13 = ATgetArgument(t, 0);
                                        t = c_13;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            x_12 = ATgetFirst((ATermList) t);
                                            y_12 = (ATerm) ATgetNext((ATermList) t);
                                            t = y_12;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm t_9 = t;
                                                int u_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = r_15(c_13, b_13, t);
                                                    ;
                                                    LocalPopChoice(u_9);
                                                  }
                                                else
                                                  {
                                                    t = t_9;
                                                    t = x_12;
                                                  }
                                              }
                                            else
                                              {
                                                t = r_15(c_13, b_13, t);
                                              }
                                          }
                                        else
                                          {
                                            t = r_15(c_13, b_13, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            c_13 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, c_13));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                c_13 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, c_13));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    c_13 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, c_13));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        c_13 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, c_13));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            c_13 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, c_13), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                c_13 = ATgetArgument(t, 0);
                                                                d_13 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, c_13), d_13);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    c_13 = ATgetArgument(t, 0);
                                                                    d_13 = ATgetArgument(t, 1);
                                                                    t = c_13;
                                                                    {
                                                                      ATerm h_1 (ATerm t)
                                                                      {
                                                                        t = d_13;
                                                                        return(t);
                                                                      }
                                                                      ATerm i_1 (ATerm t)
                                                                      {
                                                                        ATerm k_14 = NULL,l_14 = NULL;
                                                                        if(match_cons(t, sym__2))
                                                                          {
                                                                            k_14 = ATgetArgument(t, 0);
                                                                            l_14 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, l_14), k_14));
                                                                        return(t);
                                                                      }
                                                                      t = foldr_2_0(h_1, i_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        c_13 = ATgetArgument(t, 0);
                                                                        t = c_13;
                                                                        {
                                                                          ATerm l_1 (ATerm t)
                                                                          {
                                                                            t = term_b_10;
                                                                            return(t);
                                                                          }
                                                                          ATerm m_1 (ATerm t)
                                                                          {
                                                                            ATerm n_14 = NULL,o_14 = NULL;
                                                                            if(match_cons(t, sym__2))
                                                                              {
                                                                                n_14 = ATgetArgument(t, 0);
                                                                                o_14 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, o_14), n_14));
                                                                            return(t);
                                                                          }
                                                                          t = foldr_2_0(l_1, m_1, t);
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            c_13 = ATgetArgument(t, 0);
                                                                            d_13 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_i_8, (ATerm) ATinsert(CheckATermList(d_13), c_13));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                c_13 = ATgetArgument(t, 0);
                                                                                t = c_13;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    x_12 = ATgetFirst((ATermList) t);
                                                                                    y_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = y_12;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm c_10 = t;
                                                                                        int d_10 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = s_15(c_13, b_13, t);
                                                                                            ;
                                                                                            LocalPopChoice(d_10);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = c_10;
                                                                                            t = x_12;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = s_15(c_13, b_13, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = s_15(c_13, b_13, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_e_10;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        c_13 = ATgetArgument(t, 0);
                                                                                        d_13 = ATgetArgument(t, 1);
                                                                                        t = d_13;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            z_12 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_g_10, (ATerm) ATinsert(ATinsert(ATempty, z_12), c_13));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            c_13 = ATgetArgument(t, 0);
                                                                                            t = c_13;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                c_13 = ATgetArgument(t, 0);
                                                                                                d_13 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, c_13, d_13, term_h_10);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    c_13 = ATgetArgument(t, 0);
                                                                                                    d_13 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, c_13, d_13, term_h_10);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        c_13 = ATgetArgument(t, 0);
                                                                                                        d_13 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, c_13, (ATerm)ATempty, d_13);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            c_13 = ATgetArgument(t, 0);
                                                                                                            d_13 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, d_13, c_13);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                              {
                                                                                                                c_13 = ATgetArgument(t, 0);
                                                                                                                {
                                                                                                                  ATerm e_15 = NULL;
                                                                                                                  t = c_13;
                                                                                                                  t = un_double_quote_0_0(t);
                                                                                                                  e_15 = t;
                                                                                                                  t = (ATerm) ATmakeAppl(sym_Prim_2, e_15, (ATerm) ATempty);
                                                                                                                }
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    c_13 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Call_2, c_13, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                      {
                                                                                                                        c_13 = ATgetArgument(t, 0);
                                                                                                                        d_13 = ATgetArgument(t, 1);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDef_3, c_13, (ATerm)ATempty, d_13);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SRDef_3))
                                                                                                                          {
                                                                                                                            c_13 = ATgetArgument(t, 0);
                                                                                                                            d_13 = ATgetArgument(t, 1);
                                                                                                                            a_13 = ATgetArgument(t, 2);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDef_3, c_13, d_13, a_13);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                              {
                                                                                                                                c_13 = ATgetArgument(t, 0);
                                                                                                                                d_13 = ATgetArgument(t, 1);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDef_3, c_13, (ATerm)ATempty, d_13);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    c_13 = ATgetArgument(t, 0);
                                                                                                                                    d_13 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_RDef_3, c_13, (ATerm)ATempty, d_13);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_Module_2))
                                                                                                                                      {
                                                                                                                                        ATerm i_10 = ATgetArgument(t, 0);
                                                                                                                                        d_13 = ATgetArgument(t, 1);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      _fail(t);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Specification_1, d_13);
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm repeat_1_0 (ATerm z_79 (ATerm), ATerm t)
{
  ATerm t_15 (ATerm t)
  {
    ATerm p_1 (ATerm t)
    {
      t = z_79(t);
      t = t_15(t);
      return(t);
    }
    t = try_1_0(p_1, t);
    return(t);
  }
  t = t_15(t);
  return(t);
}
ATerm topdown_1_0 (ATerm x_80 (ATerm), ATerm t)
{
  t = x_80(t);
  {
    ATerm q_1 (ATerm t)
    {
      t = topdown_1_0(x_80, t);
      return(t);
    }
    t = SRTS_all(q_1, t);
  }
  return(t);
}
ATerm _2_0 (ATerm t_64 (ATerm), ATerm u_64 (ATerm), ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL;
  z_15 = t;
  if(match_cons(t, sym__2))
    {
      v_15 = ATgetArgument(t, 0);
      w_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_15);
  u_15 = t;
  t = v_15;
  t = t_64(t);
  x_15 = t;
  t = w_15;
  t = u_64(t);
  y_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, x_15, y_15), u_15);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL;
  d_16 = t;
  t = term_j_10;
  t = whoami_0_0(t);
  e_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), e_16), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = d_16;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_10);
    }
  else
    {
      t = k_10;
      {
        ATerm h_16 = NULL,i_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_16 = ATgetFirst((ATermList) t);
            i_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_16;
        {
          ATerm t_1 (ATerm t)
          {
            t = i_16;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(t_1, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL;
  m_16 = t;
  t = SSL_explode_term(m_16);
  if(match_cons(t, sym__2))
    {
      ATerm m_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      n_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_16;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm e_87 (ATerm), ATerm t)
{
  ATerm o_16 (ATerm t)
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, o_16, t);
        ;
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_87(t);
      }
    return(t);
  }
  t = o_16(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL;
  if(match_cons(t, sym__2))
    {
      q_16 = ATgetArgument(t, 0);
      p_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_16;
  {
    ATerm u_1 (ATerm t)
    {
      t = p_16;
      return(t);
    }
    t = at_end_1_0(u_1, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm r_16 = NULL;
  ATerm x_1 (ATerm t)
  {
    ATerm s_16 = NULL;
    s_16 = t;
    t = SSL_explode_string(s_16);
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    ATerm t_16 = NULL;
    t_16 = t;
    t = SSL_explode_string(t_16);
    return(t);
  }
  t = _2_0(x_1, y_1, t);
  t = conc_0_0(t);
  r_16 = t;
  t = SSL_implode_string(r_16);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_16 = NULL;
      z_16 = t;
      t = SSL_is_string(z_16);
      ;
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(b_2, t);
            ;
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
            {
              ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
              d_17 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_17 = ATgetArgument(t, 0);
                  t = e_17;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_17 = ATgetArgument(t, 0);
                      t = e_17;
                      {
                        ATerm v_10 = t;
                        int w_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(w_10);
                          }
                        else
                          {
                            t = v_10;
                            {
                              ATerm c_2 (ATerm t)
                              {
                                t = term_b_11;
                                return(t);
                              }
                              t = debug_1_0(c_2, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm j_17 = NULL,k_17 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_17 = ATgetArgument(t, 0);
                          f_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_17;
                      t = eval_config_0_0(t);
                      j_17 = t;
                      t = f_17;
                      t = eval_config_0_0(t);
                      k_17 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_17, k_17);
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
  ATerm n_17 = NULL;
  n_17 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_17);
  {
    ATerm d_2 (ATerm t)
    {
      ATerm o_17 = NULL;
      t = eval_config_0_0(t);
      o_17 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_17, o_17);
      t = o_17;
      return(t);
    }
    t = try_1_0(d_2, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_100 (ATerm), ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm p_17 = NULL,q_17 = NULL;
    p_17 = t;
    t = term_d_11;
    t = get_config_0_0(t);
    q_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_17, term_e_11);
    t = geq_0_0(t);
    t = p_17;
    t = e_100(t);
    return(t);
  }
  t = try_1_0(e_2, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm f_11 = ATgetArgument(t, 0);
        if(match_cons(f_11, sym_Stream_1))
          {
            r_17 = ATgetArgument(f_11, 0);
          }
        else
          _fail(t);
        s_17 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(r_17, s_17);
    t_17 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), t_17);
    u_17 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, u_17);
    return(t);
  }
  t = WriteToFile_1_0(n_2, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm a_99 (ATerm), ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL;
  if(match_cons(t, sym__2))
    {
      v_17 = ATgetArgument(t, 0);
      w_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_17, term_i_11);
  t = open_stream_0_0(t);
  x_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_17, w_17);
  t = a_99(t);
  t = fclose_0_0(t);
  t = w_17;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm j_11 = ATgetArgument(t, 0);
        if(match_cons(j_11, sym_Stream_1))
          {
            y_17 = ATgetArgument(j_11, 0);
          }
        else
          _fail(t);
        z_17 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(y_17, z_17);
    a_18 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, a_18);
    return(t);
  }
  t = WriteToFile_1_0(o_2, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL;
  b_18 = t;
  {
    ATerm p_2 (ATerm t)
    {
      ATerm k_11 = t;
      int l_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                c_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(q_2, t);
          ;
          LocalPopChoice(l_11);
        }
      else
        {
          t = k_11;
          t = term_m_11;
          c_18 = t;
        }
      return(t);
    }
    t = _2_0(p_2, _id, t);
    t = b_18;
    {
      ATerm w_2 (ATerm t)
      {
        ATerm x_2 (ATerm t)
        {
          t = not_null(c_18);
          return(t);
        }
        t = split_2_0(x_2, _id, t);
        return(t);
      }
      t = _2_0(_id, w_2, t);
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_3 (ATerm t)
            {
              ATerm b_3 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(b_3, t);
              return(t);
            }
            t = _2_0(a_3, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
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
ATerm apply_strategy_1_0 (ATerm c_102 (ATerm), ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
  d_18 = t;
  t = dtime_0_0(t);
  t = d_18;
  t = c_102(t);
  e_18 = t;
  t = dtime_0_0(t);
  f_18 = t;
  t = e_18;
  if(match_cons(t, sym__2))
    {
      g_18 = ATgetArgument(t, 0);
      h_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_18), (ATerm) ATmakeAppl(sym_Runtime_1, f_18)), h_18);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_18 (ATerm p_18, ATerm t)
  {
    t = SSL_fclose(p_18);
    return(t);
  }
  ATerm s_18 = NULL,t_18 = NULL;
  t_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_18 = ATgetArgument(t, 0);
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_18);
            ;
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            t = v_18(t_18, t);
          }
      }
    }
  else
    {
      t = v_18(t_18, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm m_98 (ATerm), ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL;
  w_18 = t;
  t = m_98(t);
  x_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_18), x_18));
  t = w_18;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_18 = NULL;
  t = SSL_stdin_stream();
  y_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_18 = NULL;
  t = SSL_stdout_stream();
  z_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_18);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_19 = NULL;
  t = SSL_stderr_stream();
  a_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_19);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm c_19 = NULL;
  c_19 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_19;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_19;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_19;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_11 = ATgetArgument(t, 0);
      ATerm z_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_4 = NULL,s_4 = NULL;
        q_4 = t;
        t = SSL_explode_term(q_4);
        if(match_cons(t, sym__2))
          {
            ATerm c_12 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_12) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm d_12 = ATgetArgument(t, 1);
              if(((ATgetType(d_12) == AT_LIST) && !(ATisEmpty(d_12))))
                {
                  s_4 = ATgetFirst((ATermList) d_12);
                  {
                    ATerm e_12 = (ATerm) ATgetNext((ATermList) d_12);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = s_4;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(b_12);
      }
    else
      {
        t = a_12;
        {
          ATerm f_12 = t;
          int g_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL;
              ATerm c_3 (ATerm t)
              {
                ATerm i_19 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    i_19 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = i_19;
                return(t);
              }
              t = _2_0(c_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  f_19 = ATgetArgument(t, 0);
                  g_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(f_19, g_19);
              h_19 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, h_19);
              ;
              LocalPopChoice(g_12);
            }
          else
            {
              t = f_12;
              {
                ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
                ATerm f_3 (ATerm t)
                {
                  ATerm m_19 = NULL;
                  m_19 = t;
                  t = SSL_is_string(m_19);
                  return(t);
                }
                t = _2_0(f_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    j_19 = ATgetArgument(t, 0);
                    k_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(j_19, k_19);
                l_19 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, l_19);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL;
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_19 = NULL;
      q_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_19, term_j_12);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(i_12);
    }
  else
    {
      t = h_12;
      {
        ATerm h_3 (ATerm t)
        {
          t = term_k_12;
          return(t);
        }
        t = debug_1_0(h_3, t);
        _fail(t);
      }
    }
  n_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(p_19);
  o_19 = t;
  t = n_19;
  t = fclose_0_0(t);
  t = o_19;
  return(t);
}
ATerm split_2_0 (ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  s_19 = t;
  t = e_94(t);
  t_19 = t;
  t = s_19;
  t = f_94(t);
  u_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_19, u_19);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL;
  v_19 = t;
  {
    ATerm l_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_3 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              w_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(j_3, t);
        ;
        LocalPopChoice(m_12);
      }
    else
      {
        t = l_12;
        t = term_n_12;
        w_19 = t;
      }
    t = v_19;
    {
      ATerm k_3 (ATerm t)
      {
        t = not_null(w_19);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, k_3, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm y_19 = NULL;
    y_19 = t;
    if(match_string(t, "-k"))
      {
        t = y_19;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = y_19;
      }
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    ATerm z_19 = NULL,a_20 = NULL;
    z_19 = t;
    t = SSL_string_to_int(z_19);
    a_20 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), a_20);
    t = z_19;
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    t = term_o_12;
    return(t);
  }
  t = ArgOption_3_0(l_3, q_3, s_3, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_3 (ATerm t)
      {
        ATerm c_20 = NULL;
        c_20 = t;
        if(match_string(t, "-S"))
          {
            t = c_20;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = c_20;
          }
        return(t);
      }
      ATerm u_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_e_13;
        return(t);
      }
      ATerm v_3 (ATerm t)
      {
        t = term_f_13;
        return(t);
      }
      t = Option_3_0(t_3, u_3, v_3, t);
      ;
      LocalPopChoice(s_12);
    }
  else
    {
      t = p_12;
      {
        ATerm i_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm y_3 (ATerm t)
            {
              ATerm d_20 = NULL,e_20 = NULL;
              d_20 = t;
              t = SSL_string_to_int(d_20);
              e_20 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_20);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, d_20);
              return(t);
            }
            ATerm a_4 (ATerm t)
            {
              t = term_k_13;
              return(t);
            }
            t = ArgOption_3_0(w_3, y_3, a_4, t);
            ;
            LocalPopChoice(j_13);
          }
        else
          {
            t = i_13;
            {
              ATerm c_4 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm e_4 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_l_13;
                return(t);
              }
              ATerm g_4 (ATerm t)
              {
                t = term_m_13;
                return(t);
              }
              t = Option_3_0(c_4, e_4, g_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    ATerm g_20 = NULL;
    g_20 = t;
    if(match_string(t, "-o"))
      {
        t = g_20;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = g_20;
      }
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    ATerm h_20 = NULL;
    h_20 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), h_20);
    t = (ATerm) ATmakeAppl(sym_Output_1, h_20);
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = term_p_13;
    return(t);
  }
  t = ArgOption_3_0(h_4, i_4, j_4, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      {
        ATerm k_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm l_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_s_13;
          return(t);
        }
        ATerm m_4 (ATerm t)
        {
          t = term_t_13;
          return(t);
        }
        t = Option_3_0(k_4, l_4, m_4, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL;
  k_20 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = k_20;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm s_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_20 = ATgetFirst((ATermList) t);
          m_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_20;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_20 = ATgetFirst((ATermList) t);
          o_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_20;
      t = h_0(t);
      t = n_20;
      t = i_0(t);
      s_20 = t;
      t = (ATerm) ATinsert(CheckATermList(o_20), s_20);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm u_20 = NULL;
    u_20 = t;
    if(match_string(t, "-i"))
      {
        t = u_20;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = u_20;
      }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    ATerm v_20 = NULL;
    v_20 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), v_20);
    t = (ATerm) ATmakeAppl(sym_Input_1, v_20);
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = term_u_13;
    return(t);
  }
  t = ArgOption_3_0(n_4, o_4, u_4, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm x_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(a_14);
    }
  else
    {
      t = x_13;
      {
        ATerm b_14 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(c_14);
          }
        else
          {
            t = b_14;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_20 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_10;
  t = whoami_0_0(t);
  w_20 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), w_20));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_14;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm p_92 (ATerm), ATerm q_92 (ATerm), ATerm t)
{
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_92(t);
      ;
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      {
        ATerm z_20 = NULL,a_21 = NULL,d_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_20 = ATgetFirst((ATermList) t);
            a_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_21;
        t = foldr_2_0(p_92, q_92, t);
        d_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_20, d_21);
        t = q_92(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL;
  e_21 = t;
  t = SSL_explode_term(e_21);
  if(match_cons(t, sym__2))
    {
      ATerm g_14 = ATgetArgument(t, 0);
      f_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_21;
  t = foldr_2_0(i_96, j_96, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_21 = NULL;
  t = times_0_0(t);
  {
    ATerm v_4 (ATerm t)
    {
      t = term_v_12;
      return(t);
    }
    ATerm w_4 (ATerm t)
    {
      ATerm h_21 = NULL,i_21 = NULL;
      if(match_cons(t, sym__2))
        {
          h_21 = ATgetArgument(t, 0);
          i_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm h_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(h_21, i_21);
            ;
            LocalPopChoice(i_14);
          }
        else
          {
            t = h_14;
            t = SSL_addr(h_21, i_21);
          }
      }
      return(t);
    }
    t = crush_2_0(v_4, w_4, t);
    g_21 = t;
    t = SSL_TicksToSeconds(g_21);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
  r_21 = t;
  if(match_cons(t, sym__2))
    {
      s_21 = ATgetArgument(t, 0);
      t_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_21;
        if((s_21 != t))
          {
            _fail(t);
          }
        t = r_21;
        ;
        LocalPopChoice(m_14);
      }
    else
      {
        t = j_14;
        t = r_21;
        {
          ATerm p_14 = t;
          int q_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_21, t_21);
              ;
              LocalPopChoice(q_14);
            }
          else
            {
              t = p_14;
              t = SSL_gtr(s_21, t_21);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_21, t_21);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_100 (ATerm), ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm w_21 = NULL,x_21 = NULL;
    w_21 = t;
    t = term_d_11;
    t = get_config_0_0(t);
    x_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_21, term_r_14);
    t = geq_0_0(t);
    t = w_21;
    t = d_100(t);
    return(t);
  }
  t = try_1_0(x_4, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm z_21 = NULL,a_22 = NULL;
    t = run_time_0_0(t);
    z_21 = t;
    t = term_j_10;
    t = whoami_0_0(t);
    a_22 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), z_21), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), a_22));
    t = (ATerm) ATmakeAppl(sym__2, term_s_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_14), z_21), term_t_14), a_22));
    return(t);
  }
  t = if_verbose1_1_0(y_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm a_103 (ATerm), ATerm t)
{
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      {
        ATerm z_4 (ATerm t)
        {
          ATerm y_14 = t;
          int z_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(z_14);
            }
          else
            {
              t = y_14;
              {
                ATerm a_15 = t;
                int b_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(b_15);
                  }
                else
                  {
                    t = a_15;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(z_4, t);
      }
    }
  t = a_103(t);
  return(t);
}
ATerm map_1_0 (ATerm o_86 (ATerm), ATerm t)
{
  ATerm c_22 (ATerm t)
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(d_15);
      }
    else
      {
        t = c_15;
        t = Cons_2_0(o_86, c_22, t);
      }
    return(t);
  }
  t = c_22(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_22 = ATgetFirst((ATermList) t);
      f_22 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_22 = NULL,k_22 = NULL;
        t = f_22;
        t = g_0(t);
        j_22 = t;
        t = e_22;
        t = f_0(t);
        k_22 = t;
        t = f_22;
        {
          ATerm a_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(j_22), k_22);
            return(t);
          }
          t = reverse_acc_2_0(f_0, a_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_10;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, b_5, t);
  return(t);
}
ATerm Program_1_0 (ATerm w_71 (ATerm), ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL;
  o_22 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_22);
  l_22 = t;
  t = m_22;
  t = w_71(t);
  n_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, n_22), l_22);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_15);
    }
  else
    {
      t = f_15;
      {
        ATerm c_5 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(c_5, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_h_15;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm d_5 (ATerm t)
    {
      ATerm s_22 = NULL;
      s_22 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, s_22), term_i_15);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(d_5, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm x_71 (ATerm), ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL;
  w_22 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      u_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_22);
  t_22 = t;
  t = u_22;
  t = x_71(t);
  v_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, v_22), t_22);
  return(t);
}
ATerm fetch_1_0 (ATerm y_86 (ATerm), ATerm t)
{
  ATerm a_23 (ATerm t)
  {
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(y_86, _id, t);
        ;
        LocalPopChoice(k_15);
      }
    else
      {
        t = j_15;
        t = Cons_2_0(_id, a_23, t);
      }
    return(t);
  }
  t = a_23(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm a_104 (ATerm), ATerm t)
{
  t = fetch_1_0(a_104, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL;
  c_23 = t;
  {
    ATerm l_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_23;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_15 = ATgetFirst((ATermList) t);
                ATerm o_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_23;
          }
        ;
        LocalPopChoice(m_15);
      }
    else
      {
        t = l_15;
        t = (ATerm) ATinsert(ATempty, c_23);
      }
    d_23 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), d_23);
    t = c_23;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_14;
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
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_5 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm f_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_c_16;
        return(t);
      }
      ATerm g_5 (ATerm t)
      {
        t = term_f_16;
        return(t);
      }
      t = Option_3_0(e_5, f_5, g_5, t);
      ;
      LocalPopChoice(q_15);
    }
  else
    {
      t = p_15;
      {
        ATerm h_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm i_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_g_16;
          return(t);
        }
        ATerm j_5 (ATerm t)
        {
          t = term_j_16;
          return(t);
        }
        t = Option_3_0(h_5, i_5, j_5, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL;
  if(match_cons(t, sym__3))
    {
      j_23 = ATgetArgument(t, 0);
      k_23 = ATgetArgument(t, 1);
      l_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_23, k_23);
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_16 = ATgetArgument(t, 0);
            ATerm v_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_23, k_23);
        ;
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        t = (ATerm) ATempty;
      }
    m_23 = t;
    t = SSL_table_put(j_23, k_23, (ATerm) ATinsert(CheckATermList(m_23), l_23));
    t = (ATerm) ATmakeAppl(sym__3, j_23, k_23, l_23);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm f_105 (ATerm), ATerm t)
{
  ATerm r_23 = NULL;
  t = term_j_10;
  t = f_105(t);
  r_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_16, term_x_16, r_23);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
  t_23 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = t_23;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm y_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_23 = ATgetFirst((ATermList) t);
          v_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_23;
      t = a_0(t);
      t = term_j_10;
      t = b_0(t);
      y_23 = t;
      t = (ATerm) ATinsert(CheckATermList(v_23), y_23);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm a_24 = NULL;
    a_24 = t;
    if(match_string(t, "--help"))
      {
        t = a_24;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = a_24;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = a_24;
          }
      }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_y_16;
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = term_a_17;
    return(t);
  }
  t = Option_3_0(k_5, l_5, m_5, t);
  return(t);
}
ATerm Cons_2_0 (ATerm c_66 (ATerm), ATerm d_66 (ATerm), ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL;
  g_24 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_24 = ATgetFirst((ATermList) t);
      d_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_24);
  b_24 = t;
  t = c_24;
  t = c_66(t);
  e_24 = t;
  t = d_24;
  t = d_66(t);
  f_24 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(f_24), e_24), b_24);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_105 (ATerm), ATerm t)
{
  ATerm n_24 = NULL;
  n_24 = t;
  {
    ATerm n_5 (ATerm t)
    {
      t = term_b_17;
      t = d_105(t);
      return(t);
    }
    t = try_1_0(n_5, t);
    t = n_24;
    {
      ATerm o_5 (ATerm t)
      {
        ATerm o_24 = NULL;
        o_24 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_24);
        t = (ATerm) ATmakeAppl(sym_Program_1, o_24);
        return(t);
      }
      ATerm p_5 (ATerm t)
      {
        ATerm c_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_17 = t;
            int i_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(i_17);
              }
            else
              {
                t = h_17;
                t = d_105(t);
                t = Cons_2_0(_id, p_5, t);
              }
            ;
            LocalPopChoice(g_17);
          }
        else
          {
            t = c_17;
            {
              ATerm q_24 = NULL,r_24 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_24 = ATgetFirst((ATermList) t);
                  r_24 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_24), (ATerm) ATmakeAppl(sym_Undefined_1, q_24));
            }
          }
        return(t);
      }
      t = Cons_2_0(o_5, p_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm c_105 (ATerm), ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
  x_24 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = x_24;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm l_17 = t;
      int m_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_105(t);
          ;
          LocalPopChoice(m_17);
        }
      else
        {
          t = l_17;
          {
            ATerm i_18 = t;
            int j_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(j_18);
              }
            else
              {
                t = i_18;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_5, t);
    {
      ATerm s_5 (ATerm t)
      {
        ATerm k_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_25 = NULL;
            e_25 = t;
            {
              ATerm m_18 = t;
              int n_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_25;
                  {
                    ATerm o_18 = t;
                    int q_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_x_14;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(q_18);
                      }
                    else
                      {
                        t = o_18;
                        {
                          ATerm u_5 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(u_5, t);
                        }
                      }
                    t = e_25;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(n_18);
                }
              else
                {
                  t = m_18;
                  t = term_b_16;
                  t = get_config_0_0(t);
                  t = e_25;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(l_18);
          }
        else
          {
            t = k_18;
            {
              ATerm v_5 (ATerm t)
              {
                ATerm w_5 (ATerm t)
                {
                  y_24 = t;
                  return(t);
                }
                t = Undefined_1_0(w_5, t);
                return(t);
              }
              t = option_defined_1_0(v_5, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(y_24)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_s_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_24)), term_r_18));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(s_5, t);
      z_24 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = z_24;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm t)
{
  ATerm u_7 = NULL;
  t = parse_options_1_0(c_103, t);
  u_7 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), u_7);
  t = u_7;
  t = e_103(t);
  {
    ATerm u_18 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_103, t);
        ;
        LocalPopChoice(b_19);
      }
    else
      {
        t = u_18;
        {
          ATerm d_19 = t;
          int e_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_103(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(e_19);
            }
          else
            {
              t = d_19;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm r_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_102(t);
        ;
        LocalPopChoice(x_19);
      }
    else
      {
        t = r_19;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(r_102, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(x_5, t_102, u_102, y_5, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm a_6 (ATerm t)
    {
      ATerm h_25 = NULL,i_25 = NULL;
      h_25 = t;
      t = term_d_14;
      t = get_config_0_0(t);
      i_25 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, i_25));
      t = h_25;
      return(t);
    }
    t = if_verbose2_1_0(a_6, t);
    return(t);
  }
  t = iowrap_4_0(l_102, m_102, n_102, z_5, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm j_102 (ATerm), ATerm k_102 (ATerm), ATerm t)
{
  t = iowrap_3_0(j_102, k_102, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm g_102 (ATerm), ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    t = _2_0(_id, g_102, t);
    return(t);
  }
  t = iowrap_2_0(b_6, _fail, t);
  return(t);
}
ATerm stratego_desugar_0_0 (ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm d_6 (ATerm t)
    {
      ATerm j_25 = NULL,k_25 = NULL;
      j_25 = t;
      t = SSL_explode_term(j_25);
      if(match_cons(t, sym__2))
        {
          ATerm b_20 = ATgetArgument(t, 0);
          ATerm f_20 = ATgetArgument(t, 1);
          if(((ATgetType(f_20) == AT_LIST) && !(ATisEmpty(f_20))))
            {
              k_25 = ATgetFirst((ATermList) f_20);
              {
                ATerm i_20 = (ATerm) ATgetNext((ATermList) f_20);
                if(((ATgetType(i_20) != AT_LIST) || !(ATisEmpty(i_20))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      t = k_25;
      return(t);
    }
    t = try_1_0(d_6, t);
    {
      ATerm g_6 (ATerm t)
      {
        t = repeat_1_0(Desugar_0_0, t);
        t = try_1_0(DesugarOnce_0_0, t);
        return(t);
      }
      t = topdown_1_0(g_6, t);
    }
    return(t);
  }
  t = iowrap_1_0(c_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = stratego_desugar_0_0(t);
  return(t);
}
