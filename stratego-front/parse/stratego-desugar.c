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
ATerm term_n_22;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_g_21;
ATerm term_x_19;
ATerm term_u_19;
ATerm term_e_19;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_g_18;
ATerm term_u_17;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_n_16;
ATerm term_c_15;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_t_12;
ATerm term_p_11;
ATerm term_k_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_z_8;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_d_7;
void init_constant_terms (void)
{
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_8);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_Op_2, term_c_9, (ATerm) ATempty);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_Call_2, term_t_9, (ATerm) ATempty);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Call_2, term_v_10, (ATerm) ATempty);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Call_2, term_b_9, (ATerm) ATempty);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym__3, term_o_18, term_p_18, term_d_7);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm Op_2_0 (ATerm x_79 (ATerm), ATerm y_79 (ATerm), ATerm);
ATerm OpDecl_2_0 (ATerm i_79 (ATerm), ATerm j_79 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm v_82 (ATerm), ATerm);
ATerm Var_1_0 (ATerm n_77 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm k_85 (ATerm), ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm);
ATerm RDef_3_0 (ATerm r_81 (ATerm), ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm);
ATerm DefaultVarDec_1_0 (ATerm f_85 (ATerm), ATerm);
ATerm unescape_chars_0_0 (ATerm);
ATerm k_0 (ATerm);
ATerm l_0 (ATerm);
ATerm n_0 (ATerm);
ATerm r_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm g_1 (ATerm);
ATerm DesugarOnce_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm at_last_1_0 (ATerm i_94 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm n_1 (ATerm);
ATerm unquote_chars_1_0 (ATerm j_102 (ATerm), ATerm);
ATerm s_14 (ATerm q_11, ATerm r_11, ATerm);
ATerm t_14 (ATerm t_11, ATerm u_11, ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm z_1 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm Desugar_0_0 (ATerm);
ATerm repeat_1_0 (ATerm r_86 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm p_87 (ATerm), ATerm);
ATerm _2_0 (ATerm f_68 (ATerm), ATerm g_68 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm w_105 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm t_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm y_108 (ATerm), ATerm);
ATerm o_16 (ATerm e_16, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm w_2 (ATerm);
ATerm y_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm r_93 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_93 (ATerm), ATerm);
ATerm a_3 (ATerm);
ATerm h_3 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm h_107 (ATerm), ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm a_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm u_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm g_107 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm k_5 (ATerm);
ATerm need_help_1_0 (ATerm w_109 (ATerm), ATerm);
ATerm map_1_0 (ATerm g_93 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm o_78 (ATerm), ATerm);
ATerm m_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm p_78 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm y_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm u_72 (ATerm), ATerm v_72 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm parse_options_p__1_0 (ATerm z_111 (ATerm), ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm parse_options_1_0 (ATerm y_111 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm);
ATerm l_6 (ATerm);
ATerm n_6 (ATerm);
ATerm s_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm iowrap_3_0 (ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm c_7 (ATerm);
ATerm stratego_desugar_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL;
  c_0 = t;
  t = term_d_7;
  t = whoami_0_0(t);
  e_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), e_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = c_0;
  return(t);
}
ATerm Op_2_0 (ATerm x_79 (ATerm), ATerm y_79 (ATerm), ATerm t)
{
  ATerm m_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL,s_0 = NULL,t_0 = NULL;
  t_0 = t;
  if(match_cons(t, sym_Op_2))
    {
      o_0 = ATgetArgument(t, 0);
      p_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_0);
  m_0 = t;
  t = o_0;
  t = x_79(t);
  q_0 = t;
  t = p_0;
  t = y_79(t);
  s_0 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, q_0, s_0), m_0);
  return(t);
}
ATerm OpDecl_2_0 (ATerm i_79 (ATerm), ATerm j_79 (ATerm), ATerm t)
{
  ATerm w_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL,c_1 = NULL;
  c_1 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      x_0 = ATgetArgument(t, 0);
      y_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_1);
  w_0 = t;
  t = x_0;
  t = i_79(t);
  z_0 = t;
  t = y_0;
  t = j_79(t);
  a_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, z_0, a_1), w_0);
  return(t);
}
ATerm SVar_1_0 (ATerm v_82 (ATerm), ATerm t)
{
  ATerm i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL;
  l_1 = t;
  if(match_cons(t, sym_SVar_1))
    {
      j_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_1);
  i_1 = t;
  t = j_1;
  t = v_82(t);
  k_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, k_1), i_1);
  return(t);
}
ATerm Var_1_0 (ATerm n_77 (ATerm), ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL,g_2 = NULL,k_2 = NULL;
  k_2 = t;
  if(match_cons(t, sym_Var_1))
    {
      b_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_2);
  a_2 = t;
  t = b_2;
  t = n_77(t);
  g_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, g_2), a_2);
  return(t);
}
ATerm VarDec_2_0 (ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL,u_2 = NULL,v_2 = NULL,x_2 = NULL;
  x_2 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      r_2 = ATgetArgument(t, 0);
      s_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_2);
  q_2 = t;
  t = r_2;
  t = g_85(t);
  u_2 = t;
  t = s_2;
  t = h_85(t);
  v_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, u_2, v_2), q_2);
  return(t);
}
ATerm SDef_3_0 (ATerm k_85 (ATerm), ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,l_3 = NULL,n_3 = NULL;
  n_3 = t;
  if(match_cons(t, sym_SDef_3))
    {
      c_3 = ATgetArgument(t, 0);
      d_3 = ATgetArgument(t, 1);
      e_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_3);
  b_3 = t;
  t = c_3;
  t = k_85(t);
  f_3 = t;
  t = d_3;
  t = l_85(t);
  g_3 = t;
  t = e_3;
  t = m_85(t);
  l_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, f_3, g_3, l_3), b_3);
  return(t);
}
ATerm RDef_3_0 (ATerm r_81 (ATerm), ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL,t_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL;
  z_3 = t;
  if(match_cons(t, sym_RDef_3))
    {
      r_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
      v_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_3);
  q_3 = t;
  t = r_3;
  t = r_81(t);
  w_3 = t;
  t = t_3;
  t = s_81(t);
  x_3 = t;
  t = v_3;
  t = t_81(t);
  y_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, w_3, x_3, y_3), q_3);
  return(t);
}
ATerm DefaultVarDec_1_0 (ATerm f_85 (ATerm), ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL,o_4 = NULL,q_4 = NULL;
  q_4 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      g_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_4);
  f_4 = t;
  t = g_4;
  t = f_85(t);
  o_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, o_4), f_4);
  return(t);
}
ATerm unescape_chars_0_0 (ATerm t)
{
  ATerm e_7 = t;
  int f_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_6 = ATgetFirst((ATermList) t);
          o_6 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_6;
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
        _fail(t);
      t = o_6;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_6 = ATgetFirst((ATermList) t);
          q_6 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_6;
      if(match_int(t, 34))
        {
          t = (ATerm) ATinsert(CheckATermList(q_6), term_g_7);
        }
      else
        {
          if(match_int(t, 92))
            {
              t = (ATerm) ATinsert(CheckATermList(q_6), term_h_7);
            }
          else
            {
              if(match_int(t, 110))
                {
                  t = (ATerm) ATinsert(CheckATermList(q_6), term_i_7);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(q_6), term_j_7);
                }
            }
        }
      ;
      LocalPopChoice(f_7);
    }
  else
    {
      t = e_7;
    }
  {
    ATerm k_7 = t;
    int l_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, unescape_chars_0_0, t);
        ;
        LocalPopChoice(l_7);
      }
    else
      {
        t = k_7;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
      }
  }
  return(t);
}
ATerm k_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm l_0 (ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL;
  i_3 = t;
  t = SSL_explode_string(i_3);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_7 = ATgetFirst((ATermList) t);
      if(((ATgetType(m_7) != AT_INT) || (ATgetInt((ATermInt) m_7) != 39)))
        _fail(t);
      j_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(j_3);
  return(t);
}
ATerm n_0 (ATerm t)
{
  ATerm s_3 = NULL,u_3 = NULL;
  s_3 = t;
  t = SSL_explode_string(s_3);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_7 = ATgetFirst((ATermList) t);
      if(((ATgetType(n_7) != AT_INT) || (ATgetInt((ATermInt) n_7) != 39)))
        _fail(t);
      u_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(u_3);
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm e_4 = NULL,h_4 = NULL;
  e_4 = t;
  t = SSL_explode_string(e_4);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_7 = ATgetFirst((ATermList) t);
      if(((ATgetType(o_7) != AT_INT) || (ATgetInt((ATermInt) o_7) != 39)))
        _fail(t);
      h_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(h_4);
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm k_4 = NULL,l_4 = NULL;
  k_4 = t;
  t = SSL_explode_string(k_4);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_7 = ATgetFirst((ATermList) t);
      if(((ATgetType(p_7) != AT_INT) || (ATgetInt((ATermInt) p_7) != 39)))
        _fail(t);
      l_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(l_4);
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm p_4 = NULL,r_4 = NULL;
  p_4 = t;
  t = SSL_explode_string(p_4);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_7 = ATgetFirst((ATermList) t);
      if(((ATgetType(q_7) != AT_INT) || (ATgetInt((ATermInt) q_7) != 39)))
        _fail(t);
      r_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(r_4);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL;
  v_4 = t;
  t = SSL_explode_string(v_4);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_7 = ATgetFirst((ATermList) t);
      if(((ATgetType(r_7) != AT_INT) || (ATgetInt((ATermInt) r_7) != 39)))
        _fail(t);
      w_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(w_4);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL;
  a_5 = t;
  t = SSL_explode_string(a_5);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_7 = ATgetFirst((ATermList) t);
      if(((ATgetType(s_7) != AT_INT) || (ATgetInt((ATermInt) s_7) != 39)))
        _fail(t);
      b_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(b_5);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL;
  e_5 = t;
  t = SSL_explode_string(e_5);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_7 = ATgetFirst((ATermList) t);
      if(((ATgetType(t_7) != AT_INT) || (ATgetInt((ATermInt) t_7) != 39)))
        _fail(t);
      f_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(f_5);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm u_7 = t;
  int v_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL;
      k_9 = t;
      if(match_cons(t, sym_Str_1))
        {
          l_9 = ATgetArgument(t, 0);
          {
            ATerm p_9 = NULL,b_1 = NULL,f_1 = NULL,h_1 = NULL;
            t = SSL_explode_string(l_9);
            t = unquote_chars_1_0(k_0, t);
            b_1 = t;
            t = SSL_implode_string(b_1);
            f_1 = t;
            t = SSL_explode_string(f_1);
            t = unescape_chars_0_0(t);
            h_1 = t;
            t = SSL_implode_string(h_1);
            p_9 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, p_9);
          }
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              l_9 = ATgetArgument(t, 0);
              {
                ATerm q_1 = NULL;
                t = SSL_string_to_real(l_9);
                q_1 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, q_1);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  l_9 = ATgetArgument(t, 0);
                  {
                    ATerm y_1 = NULL;
                    t = SSL_string_to_int(l_9);
                    y_1 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, y_1);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Con_3))
                    {
                      l_9 = ATgetArgument(t, 0);
                      m_9 = ATgetArgument(t, 1);
                      n_9 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSL_is_string(n_9);
                  t = (ATerm) ATmakeAppl(sym_Con_3, l_9, m_9, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, n_9), (ATerm) ATempty));
                }
            }
        }
      ;
      LocalPopChoice(v_7);
    }
  else
    {
      t = u_7;
      {
        ATerm w_7 = t;
        int y_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1_0(l_0, t);
            ;
            LocalPopChoice(y_7);
          }
        else
          {
            t = w_7;
            {
              ATerm z_7 = t;
              int a_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDef_3_0(n_0, _id, _id, t);
                  ;
                  LocalPopChoice(a_8);
                }
              else
                {
                  t = z_7;
                  {
                    ATerm b_8 = t;
                    int c_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SDef_3_0(r_0, _id, _id, t);
                        ;
                        LocalPopChoice(c_8);
                      }
                    else
                      {
                        t = b_8;
                        {
                          ATerm d_8 = t;
                          int e_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = VarDec_2_0(u_0, _id, t);
                              ;
                              LocalPopChoice(e_8);
                            }
                          else
                            {
                              t = d_8;
                              {
                                ATerm f_8 = t;
                                int g_8 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Var_1_0(v_0, t);
                                    ;
                                    LocalPopChoice(g_8);
                                  }
                                else
                                  {
                                    t = f_8;
                                    {
                                      ATerm h_8 = t;
                                      int i_8 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = SVar_1_0(d_1, t);
                                          ;
                                          LocalPopChoice(i_8);
                                        }
                                      else
                                        {
                                          t = h_8;
                                          {
                                            ATerm k_8 = t;
                                            int l_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = OpDecl_2_0(e_1, _id, t);
                                                ;
                                                LocalPopChoice(l_8);
                                              }
                                            else
                                              {
                                                t = k_8;
                                                t = Op_2_0(g_1, _id, t);
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm m_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm i_94 (ATerm), ATerm t)
{
  ATerm w_9 (ATerm t)
  {
    ATerm m_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, m_1, t);
        t = i_94(t);
        ;
        LocalPopChoice(n_8);
      }
    else
      {
        t = m_8;
        t = Cons_2_0(_id, w_9, t);
      }
    return(t);
  }
  t = w_9(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_10 = ATgetFirst((ATermList) t);
      b_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_10;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm o_8 = t;
      int s_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_10;
          ;
          LocalPopChoice(s_8);
        }
      else
        {
          t = o_8;
          t = b_10;
          t = last_0_0(t);
        }
    }
  else
    {
      t = b_10;
      t = last_0_0(t);
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm n_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_8 = ATgetFirst((ATermList) t);
      n_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_10;
  return(t);
}
ATerm unquote_chars_1_0 (ATerm j_102 (ATerm), ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
  j_10 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_10 = ATgetFirst((ATermList) t);
      {
        ATerm u_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_10;
  t = j_102(t);
  t = j_10;
  t = last_0_0(t);
  t = j_102(t);
  t = j_10;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_8 = ATgetFirst((ATermList) t);
      l_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_10;
  t = at_last_1_0(n_1, t);
  return(t);
}
ATerm s_14 (ATerm q_11, ATerm r_11, ATerm t)
{
  t = q_11;
  {
    ATerm y_8 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, o_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_8;
      }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_z_8, q_11);
  }
  return(t);
}
ATerm t_14 (ATerm t_11, ATerm u_11, ATerm t)
{
  t = t_11;
  {
    ATerm a_9 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, p_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_9;
      }
    t = (ATerm) ATmakeAppl(sym_Call_2, term_b_9, t_11);
  }
  return(t);
}
ATerm o_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_d_9;
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm h_12 = NULL,j_5 = NULL,n_5 = NULL;
  h_12 = t;
  t = SSL_explode_term(h_12);
  if(match_cons(t, sym__2))
    {
      ATerm e_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_9 = ATgetArgument(t, 1);
        if(((ATgetType(f_9) == AT_LIST) && !(ATisEmpty(f_9))))
          {
            j_5 = ATgetFirst((ATermList) f_9);
            {
              ATerm g_9 = (ATerm) ATgetNext((ATermList) f_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(h_12);
  if(match_cons(t, sym__2))
    {
      ATerm h_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_9 = ATgetArgument(t, 1);
        if(((ATgetType(i_9) == AT_LIST) && !(ATisEmpty(i_9))))
          {
            ATerm j_9 = ATgetFirst((ATermList) i_9);
            ATerm o_9 = (ATerm) ATgetNext((ATermList) i_9);
            if(((ATgetType(o_9) == AT_LIST) && !(ATisEmpty(o_9))))
              {
                n_5 = ATgetFirst((ATermList) o_9);
                {
                  ATerm q_9 = (ATerm) ATgetNext((ATermList) o_9);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_r_9, (ATerm) ATinsert(ATinsert(ATempty, n_5), j_5));
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL;
  if(match_cons(t, sym__2))
    {
      v_12 = ATgetArgument(t, 0);
      w_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_r_9, (ATerm) ATinsert(ATinsert(ATempty, w_12), v_12));
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_d_9;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL;
  if(match_cons(t, sym__2))
    {
      y_12 = ATgetArgument(t, 0);
      z_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_r_9, (ATerm) ATinsert(ATinsert(ATempty, z_12), y_12));
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL;
  if(match_cons(t, sym__2))
    {
      k_13 = ATgetArgument(t, 0);
      l_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, l_13), k_13));
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_u_9;
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL;
  if(match_cons(t, sym__2))
    {
      n_13 = ATgetArgument(t, 0);
      o_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, o_13), n_13));
  return(t);
}
ATerm e_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
  b_12 = t;
  if(match_cons(t, sym_Anno_2))
    {
      c_12 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
      {
        ATerm g_12 = NULL;
        t = d_12;
        t = foldr_2_0(r_1, s_1, t);
        g_12 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, c_12, g_12);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          c_12 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, c_12, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              c_12 = ATgetArgument(t, 0);
              {
                ATerm r_5 = NULL;
                t = c_12;
                {
                  ATerm v_9 = t;
                  int x_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_y_9;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_z_9;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_j_7;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_i_7;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_c_10;
                                    }
                                }
                            }
                        }
                      ;
                      LocalPopChoice(x_9);
                    }
                  else
                    {
                      t = v_9;
                      {
                        ATerm t_5 = NULL;
                        t = SSL_explode_string(c_12);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm e_10 = ATgetFirst((ATermList) t);
                            if(((ATgetType(e_10) != AT_INT) || (ATgetInt((ATermInt) e_10) != 39)))
                              _fail(t);
                            {
                              ATerm f_10 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(f_10) == AT_LIST) && !(ATisEmpty(f_10))))
                                {
                                  t_5 = ATgetFirst((ATermList) f_10);
                                  {
                                    ATerm g_10 = (ATerm) ATgetNext((ATermList) f_10);
                                    if(((ATgetType(g_10) == AT_LIST) && !(ATisEmpty(g_10))))
                                      {
                                        ATerm h_10 = ATgetFirst((ATermList) g_10);
                                        if(((ATgetType(h_10) != AT_INT) || (ATgetInt((ATermInt) h_10) != 39)))
                                          _fail(t);
                                        {
                                          ATerm i_10 = (ATerm) ATgetNext((ATermList) g_10);
                                          if(((ATgetType(i_10) != AT_LIST) || !(ATisEmpty(i_10))))
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
                        t = t_5;
                      }
                    }
                  r_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, r_5);
                }
              }
            }
          else
            {
              ATerm m_10 = t;
              int o_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      c_12 = ATgetArgument(t, 0);
                      {
                        ATerm p_10 = ATgetArgument(t, 1);
                      }
                      a_12 = ATgetArgument(t, 2);
                      w_11 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(o_10);
                  t = (ATerm) ATmakeAppl(sym_Con_3, c_12, a_12, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, w_11), (ATerm) ATempty));
                }
              else
                {
                  t = m_10;
                  {
                    ATerm q_10 = t;
                    int r_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            c_12 = ATgetArgument(t, 0);
                            {
                              ATerm s_10 = ATgetArgument(t, 1);
                            }
                            a_12 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(r_10);
                        t = (ATerm) ATmakeAppl(sym_Con_3, c_12, a_12, term_w_10);
                      }
                    else
                      {
                        t = q_10;
                        if(match_cons(t, sym_Con1_2))
                          {
                            c_12 = ATgetArgument(t, 0);
                            d_12 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, c_12, d_12, term_w_10);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                c_12 = ATgetArgument(t, 0);
                                d_12 = ATgetArgument(t, 1);
                                {
                                  ATerm t_1 (ATerm t)
                                  {
                                    t = d_12;
                                    return(t);
                                  }
                                  t = c_12;
                                  t = foldr_2_0(t_1, u_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    c_12 = ATgetArgument(t, 0);
                                    t = c_12;
                                    t = foldr_2_0(v_1, w_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        c_12 = ATgetArgument(t, 0);
                                        t = c_12;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            x_11 = ATgetFirst((ATermList) t);
                                            y_11 = (ATerm) ATgetNext((ATermList) t);
                                            t = y_11;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm y_10 = t;
                                                int z_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = s_14(c_12, b_12, t);
                                                    ;
                                                    LocalPopChoice(z_10);
                                                  }
                                                else
                                                  {
                                                    t = y_10;
                                                    t = x_11;
                                                  }
                                              }
                                            else
                                              {
                                                t = s_14(c_12, b_12, t);
                                              }
                                          }
                                        else
                                          {
                                            t = s_14(c_12, b_12, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            c_12 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, c_12));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                c_12 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, c_12));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    c_12 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, c_12));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        c_12 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, c_12));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            c_12 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, c_12), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                c_12 = ATgetArgument(t, 0);
                                                                d_12 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, c_12), d_12);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    c_12 = ATgetArgument(t, 0);
                                                                    d_12 = ATgetArgument(t, 1);
                                                                    {
                                                                      ATerm x_1 (ATerm t)
                                                                      {
                                                                        t = d_12;
                                                                        return(t);
                                                                      }
                                                                      t = c_12;
                                                                      t = foldr_2_0(x_1, z_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        c_12 = ATgetArgument(t, 0);
                                                                        t = c_12;
                                                                        t = foldr_2_0(c_2, d_2, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            c_12 = ATgetArgument(t, 0);
                                                                            d_12 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_b_9, (ATerm) ATinsert(CheckATermList(d_12), c_12));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                c_12 = ATgetArgument(t, 0);
                                                                                t = c_12;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    x_11 = ATgetFirst((ATermList) t);
                                                                                    y_11 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = y_11;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm a_11 = t;
                                                                                        int c_11 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = t_14(c_12, b_12, t);
                                                                                            ;
                                                                                            LocalPopChoice(c_11);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = a_11;
                                                                                            t = x_11;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = t_14(c_12, b_12, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = t_14(c_12, b_12, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_d_11;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        c_12 = ATgetArgument(t, 0);
                                                                                        d_12 = ATgetArgument(t, 1);
                                                                                        t = d_12;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            z_11 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_f_11, (ATerm) ATinsert(ATinsert(ATempty, z_11), c_12));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            c_12 = ATgetArgument(t, 0);
                                                                                            t = c_12;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                c_12 = ATgetArgument(t, 0);
                                                                                                d_12 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, c_12, d_12, term_g_11);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    c_12 = ATgetArgument(t, 0);
                                                                                                    d_12 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, c_12, d_12, term_g_11);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        c_12 = ATgetArgument(t, 0);
                                                                                                        d_12 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, c_12, (ATerm)ATempty, d_12);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            c_12 = ATgetArgument(t, 0);
                                                                                                            d_12 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, d_12, c_12);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                              {
                                                                                                                c_12 = ATgetArgument(t, 0);
                                                                                                                {
                                                                                                                  ATerm e_14 = NULL,x_5 = NULL;
                                                                                                                  t = SSL_explode_string(c_12);
                                                                                                                  t = unquote_chars_1_0(e_2, t);
                                                                                                                  x_5 = t;
                                                                                                                  t = SSL_implode_string(x_5);
                                                                                                                  e_14 = t;
                                                                                                                  t = (ATerm) ATmakeAppl(sym_Prim_2, e_14, (ATerm) ATempty);
                                                                                                                }
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    c_12 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Call_2, c_12, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                      {
                                                                                                                        c_12 = ATgetArgument(t, 0);
                                                                                                                        d_12 = ATgetArgument(t, 1);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDef_3, c_12, (ATerm)ATempty, d_12);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SRDef_3))
                                                                                                                          {
                                                                                                                            c_12 = ATgetArgument(t, 0);
                                                                                                                            d_12 = ATgetArgument(t, 1);
                                                                                                                            a_12 = ATgetArgument(t, 2);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDef_3, c_12, d_12, a_12);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                              {
                                                                                                                                c_12 = ATgetArgument(t, 0);
                                                                                                                                d_12 = ATgetArgument(t, 1);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDef_3, c_12, (ATerm)ATempty, d_12);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    c_12 = ATgetArgument(t, 0);
                                                                                                                                    d_12 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_RDef_3, c_12, (ATerm)ATempty, d_12);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_Module_2))
                                                                                                                                      {
                                                                                                                                        ATerm h_11 = ATgetArgument(t, 0);
                                                                                                                                        d_12 = ATgetArgument(t, 1);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      _fail(t);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Specification_1, d_12);
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm repeat_1_0 (ATerm r_86 (ATerm), ATerm t)
{
  ATerm u_14 (ATerm t)
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_86(t);
        t = u_14(t);
        ;
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
      }
    return(t);
  }
  t = u_14(t);
  return(t);
}
ATerm topdown_1_0 (ATerm p_87 (ATerm), ATerm t)
{
  t = p_87(t);
  {
    ATerm f_2 (ATerm t)
    {
      t = topdown_1_0(p_87, t);
      return(t);
    }
    t = SRTS_all(f_2, t);
  }
  return(t);
}
ATerm _2_0 (ATerm f_68 (ATerm), ATerm g_68 (ATerm), ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL;
  a_15 = t;
  if(match_cons(t, sym__2))
    {
      w_14 = ATgetArgument(t, 0);
      x_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_15);
  v_14 = t;
  t = w_14;
  t = f_68(t);
  y_14 = t;
  t = x_14;
  t = g_68(t);
  z_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, y_14, z_14), v_14);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm w_105 (ATerm), ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
  if(match_cons(t, sym__2))
    {
      d_15 = ATgetArgument(t, 0);
      e_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_15, term_k_11);
  t = open_stream_0_0(t);
  f_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_15, e_15);
  t = w_105(t);
  t = fclose_0_0(t);
  t = e_15;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = fetch_1_0(n_2, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = WriteToFile_1_0(o_2, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_11 = ATgetArgument(t, 0);
      if(match_cons(l_11, sym_Stream_1))
        {
          i_15 = ATgetArgument(l_11, 0);
        }
      else
        _fail(t);
      j_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(i_15, j_15);
  k_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_15);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = WriteToFile_1_0(t_2, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_11 = ATgetArgument(t, 0);
      if(match_cons(m_11, sym_Stream_1))
        {
          l_15 = ATgetArgument(m_11, 0);
        }
      else
        _fail(t);
      m_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(l_15, m_15);
  n_15 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), n_15);
  o_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_15);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL;
  g_15 = t;
  {
    ATerm h_2 (ATerm t)
    {
      ATerm n_11 = t;
      int o_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((h_15 != NULL) && (h_15 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_15 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_2, t);
          ;
          LocalPopChoice(o_11);
        }
      else
        {
          t = n_11;
          t = term_p_11;
          if(((h_15 != NULL) && (h_15 != t)))
            _fail(t);
          else
            h_15 = t;
        }
      return(t);
    }
    t = _2_0(h_2, _id, t);
    t = g_15;
    {
      ATerm j_2 (ATerm t)
      {
        ATerm z_5 = NULL;
        z_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_15), z_5);
        return(t);
      }
      t = _2_0(_id, j_2, t);
      {
        ATerm s_11 = t;
        int v_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(l_2, m_2, t);
            ;
            LocalPopChoice(v_11);
          }
        else
          {
            t = s_11;
            t = _2_0(_id, p_2, t);
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
ATerm apply_strategy_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL;
  p_15 = t;
  t = dtime_0_0(t);
  t = p_15;
  t = y_108(t);
  q_15 = t;
  t = dtime_0_0(t);
  r_15 = t;
  t = q_15;
  if(match_cons(t, sym__2))
    {
      s_15 = ATgetArgument(t, 0);
      t_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_15), (ATerm) ATmakeAppl(sym_Runtime_1, r_15)), t_15);
  return(t);
}
ATerm o_16 (ATerm e_16, ATerm t)
{
  t = SSL_fclose(e_16);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL;
  k_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_16 = ATgetArgument(t, 0);
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_16);
            ;
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            t = o_16(k_16, t);
          }
      }
    }
  else
    {
      t = o_16(k_16, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_16 = NULL;
  t = SSL_stdin_stream();
  p_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_16);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_16 = NULL;
  t = SSL_stdout_stream();
  q_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_16);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_16 = NULL;
  t = SSL_stderr_stream();
  r_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_16);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm z_16 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      z_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_16;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm d_17 = NULL;
  d_17 = t;
  t = SSL_is_string(d_17);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_12 = ATgetArgument(t, 0);
      ATerm j_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_6 = NULL,t_6 = NULL;
        r_6 = t;
        t = SSL_explode_term(r_6);
        if(match_cons(t, sym__2))
          {
            ATerm m_12 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_12) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm n_12 = ATgetArgument(t, 1);
              if(((ATgetType(n_12) == AT_LIST) && !(ATisEmpty(n_12))))
                {
                  t_6 = ATgetFirst((ATermList) n_12);
                  {
                    ATerm o_12 = (ATerm) ATgetNext((ATermList) n_12);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = t_6;
        if(match_cons(t, sym_stderr_0))
          {
            t = t_6;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = t_6;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = t_6;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        {
          ATerm p_12 = t;
          int q_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
              t = _2_0(w_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  w_16 = ATgetArgument(t, 0);
                  x_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(w_16, x_16);
              y_16 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, y_16);
              ;
              LocalPopChoice(q_12);
            }
          else
            {
              t = p_12;
              {
                ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
                t = _2_0(y_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    a_17 = ATgetArgument(t, 0);
                    b_17 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(a_17, b_17);
                c_17 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, c_17);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_17 = NULL;
      h_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_17, term_t_12);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_12);
    }
  else
    {
      t = r_12;
      {
        ATerm u_6 = NULL;
        u_6 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_6), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = u_6;
        _fail(t);
      }
    }
  e_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(g_17);
  f_17 = t;
  t = e_17;
  t = fclose_0_0(t);
  t = f_17;
  return(t);
}
ATerm fetch_1_0 (ATerm r_93 (ATerm), ATerm t)
{
  ATerm m_17 (ATerm t)
  {
    ATerm u_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(r_93, _id, t);
        ;
        LocalPopChoice(x_12);
      }
    else
      {
        t = u_12;
        t = Cons_2_0(_id, m_17, t);
      }
    return(t);
  }
  t = m_17(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
      {
        ATerm p_17 = NULL,q_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_17 = ATgetFirst((ATermList) t);
            q_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_17;
        {
          ATerm z_2 (ATerm t)
          {
            t = q_17;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(z_2, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  ATerm w_17 (ATerm t)
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, w_17, t);
        ;
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_93(t);
      }
    return(t);
  }
  t = w_17(t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm z_17 = NULL;
  z_17 = t;
  t = SSL_explode_string(z_17);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm a_18 = NULL;
  a_18 = t;
  t = SSL_explode_string(a_18);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm y_17 = NULL;
  t = _2_0(a_3, h_3, t);
  {
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_18 = NULL,d_18 = NULL;
        if(match_cons(t, sym__2))
          {
            c_18 = ATgetArgument(t, 0);
            d_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_18;
        {
          ATerm k_3 (ATerm t)
          {
            t = d_18;
            return(t);
          }
          t = at_end_1_0(k_3, t);
        }
        ;
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
        {
          ATerm a_7 = NULL,b_7 = NULL;
          a_7 = t;
          t = SSL_explode_term(a_7);
          if(match_cons(t, sym__2))
            {
              ATerm g_13 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_13) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              b_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_7;
          t = concat_0_0(t);
        }
      }
    y_17 = t;
    t = SSL_implode_string(y_17);
  }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm j_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_18 = NULL;
      n_18 = t;
      t = SSL_is_string(n_18);
      ;
      LocalPopChoice(m_13);
    }
  else
    {
      t = j_13;
      {
        ATerm p_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(m_3, t);
            ;
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
            {
              ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
              r_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_18 = ATgetArgument(t, 0);
                  t = s_18;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_18 = ATgetArgument(t, 0);
                      t = s_18;
                      {
                        ATerm r_13 = t;
                        int s_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), s_18);
                            {
                              ATerm t_13 = t;
                              int u_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm x_7 = NULL;
                                  t = eval_config_0_0(t);
                                  x_7 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), s_18, x_7);
                                  t = x_7;
                                  ;
                                  LocalPopChoice(u_13);
                                }
                              else
                                {
                                  t = t_13;
                                }
                            }
                            ;
                            LocalPopChoice(s_13);
                          }
                        else
                          {
                            t = r_13;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_18), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = s_18;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm x_18 = NULL,y_18 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_18 = ATgetArgument(t, 0);
                          t_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_18;
                      t = eval_config_0_0(t);
                      x_18 = t;
                      t = t_18;
                      t = eval_config_0_0(t);
                      y_18 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_18, y_18);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm h_107 (ATerm), ATerm t)
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_19 = NULL,f_19 = NULL;
      d_19 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm x_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_8 = NULL;
            t = eval_config_0_0(t);
            j_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_8);
            t = j_8;
            ;
            LocalPopChoice(y_13);
          }
        else
          {
            t = x_13;
          }
        f_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_19, term_z_13);
        t = geq_0_0(t);
        t = d_19;
        t = h_107(t);
      }
      ;
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm h_19 = NULL;
  h_19 = t;
  if(match_string(t, "-k"))
    {
      t = h_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_19;
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL;
  i_19 = t;
  t = SSL_string_to_int(i_19);
  j_19 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), j_19);
  t = i_19;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_3, p_3, a_4, t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm l_19 = NULL;
  l_19 = t;
  if(match_string(t, "-S"))
    {
      t = l_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_19;
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_c_14;
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL;
  m_19 = t;
  t = SSL_string_to_int(m_19);
  n_19 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_19);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_19);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm n_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_g_14;
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_h_14;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_4, c_4, d_4, t);
      ;
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
            t = ArgOption_3_0(i_4, j_4, m_4, t);
            ;
            LocalPopChoice(l_14);
          }
        else
          {
            t = k_14;
            t = Option_3_0(n_4, s_4, t_4, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_19 = NULL;
      t = term_d_7;
      t = d_0(t);
      s_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_14, term_n_14, s_19);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm w_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_19 = ATgetFirst((ATermList) t);
          r_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_19;
      t = a_0(t);
      t = term_d_7;
      t = b_0(t);
      w_19 = t;
      t = (ATerm) ATinsert(CheckATermList(r_19), w_19);
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm y_19 = NULL;
  y_19 = t;
  if(match_string(t, "-o"))
    {
      t = y_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_19;
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm z_19 = NULL;
  z_19 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), z_19);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_19);
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_o_14;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, x_4, y_4, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL;
  if(match_cons(t, sym__3))
    {
      c_20 = ATgetArgument(t, 0);
      d_20 = ATgetArgument(t, 1);
      e_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_20, d_20);
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_14 = ATgetArgument(t, 0);
            ATerm b_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(c_20, d_20);
        ;
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        t = (ATerm) ATempty;
      }
    f_20 = t;
    t = SSL_table_put(c_20, d_20, (ATerm) ATinsert(CheckATermList(f_20), e_20));
    t = (ATerm) ATmakeAppl(sym__3, c_20, d_20, e_20);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_20 = NULL;
      t = term_d_7;
      t = j_0(t);
      r_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_14, term_n_14, r_20);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm v_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_20 = ATgetFirst((ATermList) t);
          o_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_20;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_20 = ATgetFirst((ATermList) t);
          q_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_20;
      t = h_0(t);
      t = p_20;
      t = i_0(t);
      v_20 = t;
      t = (ATerm) ATinsert(CheckATermList(q_20), v_20);
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm x_20 = NULL;
  x_20 = t;
  if(match_string(t, "-i"))
    {
      t = x_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_20;
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm y_20 = NULL;
  y_20 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), y_20);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_20);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_c_15;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_4, c_5, d_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_20 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_7;
  t = whoami_0_0(t);
  z_20 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), z_20));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_8 = NULL;
        t = eval_config_0_0(t);
        p_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), p_8);
        t = p_8;
        ;
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm t)
{
  ATerm w_15 = t;
  int x_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_99(t);
      ;
      LocalPopChoice(x_15);
    }
  else
    {
      t = w_15;
      {
        ATerm c_21 = NULL,d_21 = NULL,i_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_21 = ATgetFirst((ATermList) t);
            d_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_21;
        t = foldr_2_0(i_99, j_99, t);
        i_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_21, i_21);
        t = j_99(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL;
  if(match_cons(t, sym__2))
    {
      v_8 = ATgetArgument(t, 0);
      w_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(v_8, w_8);
        ;
        LocalPopChoice(z_15);
      }
    else
      {
        t = y_15;
        t = SSL_addr(v_8, w_8);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_21 = NULL,q_8 = NULL,r_8 = NULL;
  t = times_0_0(t);
  q_8 = t;
  t = SSL_explode_term(q_8);
  if(match_cons(t, sym__2))
    {
      ATerm a_16 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8;
  t = foldr_2_0(g_5, h_5, t);
  l_21 = t;
  t = SSL_TicksToSeconds(l_21);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  w_21 = t;
  if(match_cons(t, sym__2))
    {
      x_21 = ATgetArgument(t, 0);
      y_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_21;
        if((x_21 != t))
          {
            _fail(t);
          }
        t = w_21;
        ;
        LocalPopChoice(c_16);
      }
    else
      {
        t = b_16;
        t = w_21;
        {
          ATerm f_16 = t;
          int g_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_21, y_21);
              ;
              LocalPopChoice(g_16);
            }
          else
            {
              t = f_16;
              t = SSL_gtr(x_21, y_21);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_21, y_21);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_107 (ATerm), ATerm t)
{
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_22 = NULL,f_22 = NULL;
      b_22 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm l_16 = t;
        int m_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_10 = NULL;
            t = eval_config_0_0(t);
            d_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), d_10);
            t = d_10;
            ;
            LocalPopChoice(m_16);
          }
        else
          {
            t = l_16;
          }
        f_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_22, term_n_16);
        t = geq_0_0(t);
        t = b_22;
        t = g_107(t);
      }
      ;
      LocalPopChoice(i_16);
    }
  else
    {
      t = h_16;
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL;
  t = run_time_0_0(t);
  h_22 = t;
  t = term_d_7;
  t = whoami_0_0(t);
  i_22 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), h_22), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), i_22));
  t = (ATerm) ATmakeAppl(sym__2, term_s_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_16), h_22), term_t_16), i_22));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm v_16 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(i_17);
    }
  else
    {
      t = v_16;
      {
        ATerm j_17 = t;
        int k_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(k_17);
          }
        else
          {
            t = j_17;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_109 (ATerm), ATerm t)
{
  ATerm l_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm o_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_10 = NULL;
            t = eval_config_0_0(t);
            t_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), t_10);
            t = t_10;
            ;
            LocalPopChoice(r_17);
          }
        else
          {
            t = o_17;
          }
      }
      ;
      LocalPopChoice(n_17);
    }
  else
    {
      t = l_17;
      t = fetch_1_0(k_5, t);
    }
  t = w_109(t);
  return(t);
}
ATerm map_1_0 (ATerm g_93 (ATerm), ATerm t)
{
  ATerm j_22 (ATerm t)
  {
    ATerm s_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(t_17);
      }
    else
      {
        t = s_17;
        t = Cons_2_0(g_93, j_22, t);
      }
    return(t);
  }
  t = j_22(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_22 = ATgetFirst((ATermList) t);
      m_22 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_22 = NULL,r_22 = NULL;
        t = m_22;
        t = g_0(t);
        q_22 = t;
        t = l_22;
        t = f_0(t);
        r_22 = t;
        t = m_22;
        {
          ATerm l_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(q_22), r_22);
            return(t);
          }
          t = reverse_acc_2_0(f_0, l_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_7;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm o_78 (ATerm), ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL;
  v_22 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_22);
  s_22 = t;
  t = t_22;
  t = o_78(t);
  u_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, u_22), s_22);
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm z_22 = NULL;
  z_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_22), term_u_17);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_17 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm e_18 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_10 = NULL;
            t = eval_config_0_0(t);
            x_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_10);
            t = x_10;
            ;
            LocalPopChoice(f_18);
          }
        else
          {
            t = e_18;
          }
      }
      ;
      LocalPopChoice(b_18);
    }
  else
    {
      t = v_17;
      t = fetch_1_0(m_5, t);
    }
  t = term_g_18;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, o_5, t);
  t = map_1_0(p_5, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm p_78 (ATerm), ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL;
  d_23 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      b_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_23);
  a_23 = t;
  t = b_23;
  t = p_78(t);
  c_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, c_23), a_23);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL;
  h_23 = t;
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_23;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_18 = ATgetFirst((ATermList) t);
                ATerm k_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_23;
          }
        ;
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        t = (ATerm) ATinsert(ATempty, h_23);
      }
    i_23 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), i_23);
    t = h_23;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_11 = NULL;
        t = eval_config_0_0(t);
        b_11 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), b_11);
        t = b_11;
        ;
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_q_18;
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_u_18;
  return(t);
}
ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_v_18;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_w_18;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_5, s_5, u_5, t);
      ;
      LocalPopChoice(a_19);
    }
  else
    {
      t = z_18;
      t = Option_3_0(v_5, w_5, y_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_72 (ATerm), ATerm v_72 (ATerm), ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL;
  r_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_23 = ATgetFirst((ATermList) t);
      o_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_23);
  m_23 = t;
  t = n_23;
  t = u_72(t);
  p_23 = t;
  t = o_23;
  t = v_72(t);
  q_23 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(q_23), p_23), m_23);
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm w_23 = NULL;
  w_23 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_23);
  t = (ATerm) ATmakeAppl(sym_Program_1, w_23);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_111 (ATerm), ATerm t)
{
  ATerm v_23 = NULL;
  v_23 = t;
  {
    ATerm b_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_19;
        t = z_111(t);
        ;
        LocalPopChoice(c_19);
      }
    else
      {
        t = b_19;
      }
    t = v_23;
    {
      ATerm b_6 (ATerm t)
      {
        ATerm k_19 = t;
        int o_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_19 = t;
            int t_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(t_19);
              }
            else
              {
                t = p_19;
                t = z_111(t);
                t = Cons_2_0(_id, b_6, t);
              }
            ;
            LocalPopChoice(o_19);
          }
        else
          {
            t = k_19;
            {
              ATerm y_23 = NULL,z_23 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_23 = ATgetFirst((ATermList) t);
                  z_23 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(z_23), (ATerm) ATmakeAppl(sym_Undefined_1, y_23));
            }
          }
        return(t);
      }
      t = Cons_2_0(a_6, b_6, t);
    }
  }
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm l_24 = NULL;
  l_24 = t;
  if(match_string(t, "--help"))
    {
      t = l_24;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_24;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_24;
        }
    }
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_u_19;
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_x_19;
  return(t);
}
ATerm g_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_111 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,j_24 = NULL,k_24 = NULL;
  h_24 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = h_24;
  {
    ATerm c_6 (ATerm t)
    {
      ATerm a_20 = t;
      int b_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_111(t);
          ;
          LocalPopChoice(b_20);
        }
      else
        {
          t = a_20;
          {
            ATerm g_20 = t;
            int h_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_6, e_6, f_6, t);
                ;
                LocalPopChoice(h_20);
              }
            else
              {
                t = g_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_6, t);
    {
      ATerm i_20 = t;
      int j_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_24 = NULL;
          q_24 = t;
          {
            ATerm k_20 = t;
            int m_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = q_24;
                {
                  ATerm s_20 = t;
                  int t_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm u_20 = t;
                        int w_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm d_16 = NULL;
                            t = eval_config_0_0(t);
                            d_16 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), d_16);
                            t = d_16;
                            ;
                            LocalPopChoice(w_20);
                          }
                        else
                          {
                            t = u_20;
                          }
                      }
                      ;
                      LocalPopChoice(t_20);
                    }
                  else
                    {
                      t = s_20;
                      t = fetch_1_0(g_6, t);
                    }
                  t = q_24;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(m_20);
              }
            else
              {
                t = k_20;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm a_21 = t;
                  int b_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_17 = NULL;
                      t = eval_config_0_0(t);
                      x_17 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), x_17);
                      t = x_17;
                      ;
                      LocalPopChoice(b_21);
                    }
                  else
                    {
                      t = a_21;
                    }
                  t = q_24;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(j_20);
        }
      else
        {
          t = i_20;
          {
            ATerm e_21 = t;
            int f_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_6 (ATerm t)
                {
                  ATerm j_6 (ATerm t)
                  {
                    if(((j_24 != NULL) && (j_24 != t)))
                      _fail(t);
                    else
                      j_24 = t;
                    return(t);
                  }
                  t = Undefined_1_0(j_6, t);
                  return(t);
                }
                t = fetch_1_0(i_6, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(j_24)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_s_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_24)), term_g_21));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(f_21);
              }
            else
              {
                t = e_21;
              }
          }
        }
      k_24 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = k_24;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm t)
{
  ATerm t_24 = NULL;
  t = parse_options_1_0(y_109, t);
  t_24 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), t_24);
  t = t_24;
  t = a_110(t);
  {
    ATerm h_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_109, t);
        ;
        LocalPopChoice(j_21);
      }
    else
      {
        t = h_21;
        {
          ATerm k_21 = t;
          int m_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_110(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(m_21);
            }
          else
            {
              t = k_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = if_verbose2_1_0(w_6, t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_n_21;
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = term_o_21;
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL;
  u_24 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_19 = NULL;
        t = eval_config_0_0(t);
        g_19 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_19);
        t = g_19;
        ;
        LocalPopChoice(q_21);
      }
    else
      {
        t = p_21;
      }
    v_24 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, v_24));
    t = u_24;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm t)
{
  ATerm k_6 (ATerm t)
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_109(t);
        ;
        LocalPopChoice(s_21);
      }
    else
      {
        t = r_21;
        {
          ATerm t_21 = t;
          int u_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(u_21);
            }
          else
            {
              t = t_21;
              {
                ATerm v_21 = t;
                int z_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(z_21);
                  }
                else
                  {
                    t = v_21;
                    {
                      ATerm a_22 = t;
                      int c_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(n_6, s_6, v_6, t);
                          ;
                          LocalPopChoice(c_22);
                        }
                      else
                        {
                          t = a_22;
                          {
                            ATerm d_22 = t;
                            int e_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(e_22);
                              }
                            else
                              {
                                t = d_22;
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
  ATerm m_6 (ATerm t)
  {
    ATerm w_24 = NULL,x_24 = NULL,v_19 = NULL;
    w_24 = t;
    {
      ATerm g_22 = t;
      int k_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((x_24 != NULL) && (x_24 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(x_6, t);
          ;
          LocalPopChoice(k_22);
        }
      else
        {
          t = g_22;
          t = term_n_22;
          x_24 = t;
        }
      t = not_null(x_24);
      t = ReadFromFile_0_0(t);
      v_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_24, v_19);
      t = apply_strategy_1_0(h_109, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(k_6, j_109, l_6, m_6, t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = _2_0(_id, z_6, t);
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_25 = NULL,l_20 = NULL;
      c_25 = t;
      t = SSL_explode_term(c_25);
      if(match_cons(t, sym__2))
        {
          ATerm w_22 = ATgetArgument(t, 0);
          ATerm x_22 = ATgetArgument(t, 1);
          if(((ATgetType(x_22) == AT_LIST) && !(ATisEmpty(x_22))))
            {
              l_20 = ATgetFirst((ATermList) x_22);
              {
                ATerm y_22 = (ATerm) ATgetNext((ATermList) x_22);
                if(((ATgetType(y_22) != AT_LIST) || !(ATisEmpty(y_22))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      t = l_20;
      ;
      LocalPopChoice(p_22);
    }
  else
    {
      t = o_22;
    }
  t = topdown_1_0(c_7, t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = repeat_1_0(Desugar_0_0, t);
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        ;
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
      }
  }
  return(t);
}
ATerm stratego_desugar_0_0 (ATerm t)
{
  t = iowrap_3_0(y_6, _fail, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = stratego_desugar_0_0(t);
  return(t);
}
