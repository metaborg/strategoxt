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
ATerm term_z_19;
ATerm term_u_19;
ATerm term_e_19;
ATerm term_y_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_f_18;
ATerm term_u_17;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_f_15;
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
ATerm term_r_11;
ATerm term_k_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_b_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_r_9;
ATerm term_n_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_z_6;
void init_constant_terms (void)
{
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_Op_2, term_y_8, (ATerm) ATempty);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_9);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_8);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Call_2, term_k_9, (ATerm) ATempty);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Call_2, term_w_10, (ATerm) ATempty);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Call_2, term_r_9, (ATerm) ATempty);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_stdout_0);
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
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym__3, term_o_18, term_p_18, term_z_6);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
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
ATerm Op_2_0 (ATerm y_79 (ATerm), ATerm z_79 (ATerm), ATerm);
ATerm OpDecl_2_0 (ATerm j_79 (ATerm), ATerm k_79 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm w_82 (ATerm), ATerm);
ATerm Var_1_0 (ATerm o_77 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm);
ATerm RDef_3_0 (ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm u_81 (ATerm), ATerm);
ATerm DefaultVarDec_1_0 (ATerm g_85 (ATerm), ATerm);
ATerm unescape_chars_0_0 (ATerm);
ATerm k_0 (ATerm);
ATerm l_0 (ATerm);
ATerm n_0 (ATerm);
ATerm r_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm z_0 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm DesugarOnce_0_0 (ATerm);
ATerm h_1 (ATerm);
ATerm at_last_1_0 (ATerm j_94 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm i_1 (ATerm);
ATerm unquote_chars_1_0 (ATerm k_102 (ATerm), ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm u_1 (ATerm);
ATerm w_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm Desugar_0_0 (ATerm);
ATerm repeat_1_0 (ATerm s_86 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm q_87 (ATerm), ATerm);
ATerm _2_0 (ATerm g_68 (ATerm), ATerm h_68 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm x_105 (ATerm), ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm h_2 (ATerm);
ATerm k_2 (ATerm);
ATerm p_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm z_108 (ATerm), ATerm);
ATerm n_16 (ATerm h_16, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm s_93 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm y_93 (ATerm), ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm g_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm b_107 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm u_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm b_4 (ATerm);
ATerm e_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm v_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm c_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm a_107 (ATerm), ATerm);
ATerm f_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm x_109 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_93 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm p_78 (ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm n_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm q_78 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm r_5 (ATerm);
ATerm t_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_72 (ATerm), ATerm w_72 (ATerm), ATerm);
ATerm x_5 (ATerm);
ATerm parse_options_p__1_0 (ATerm a_112 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm parse_options_1_0 (ATerm z_111 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm k_6 (ATerm);
ATerm iowrap_3_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm);
ATerm y_6 (ATerm);
ATerm x_6 (ATerm);
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
  t = term_z_6;
  t = whoami_0_0(t);
  e_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), e_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = c_0;
  return(t);
}
ATerm Op_2_0 (ATerm y_79 (ATerm), ATerm z_79 (ATerm), ATerm t)
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
  t = y_79(t);
  q_0 = t;
  t = p_0;
  t = z_79(t);
  s_0 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, q_0, s_0), m_0);
  return(t);
}
ATerm OpDecl_2_0 (ATerm j_79 (ATerm), ATerm k_79 (ATerm), ATerm t)
{
  ATerm w_0 = NULL,y_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL,k_1 = NULL;
  k_1 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      y_0 = ATgetArgument(t, 0);
      a_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_1);
  w_0 = t;
  t = y_0;
  t = j_79(t);
  b_1 = t;
  t = a_1;
  t = k_79(t);
  c_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, b_1, c_1), w_0);
  return(t);
}
ATerm SVar_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm s_1 = NULL,x_1 = NULL,b_2 = NULL,e_2 = NULL;
  e_2 = t;
  if(match_cons(t, sym_SVar_1))
    {
      x_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_2);
  s_1 = t;
  t = x_1;
  t = w_82(t);
  b_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, b_2), s_1);
  return(t);
}
ATerm Var_1_0 (ATerm o_77 (ATerm), ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL,l_2 = NULL,m_2 = NULL;
  m_2 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_2);
  i_2 = t;
  t = j_2;
  t = o_77(t);
  l_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, l_2), i_2);
  return(t);
}
ATerm VarDec_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,a_3 = NULL;
  a_3 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      s_2 = ATgetArgument(t, 0);
      t_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_3);
  r_2 = t;
  t = s_2;
  t = h_85(t);
  u_2 = t;
  t = t_2;
  t = i_85(t);
  v_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, u_2, v_2), r_2);
  return(t);
}
ATerm SDef_3_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm t)
{
  ATerm e_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL;
  o_3 = t;
  if(match_cons(t, sym_SDef_3))
    {
      i_3 = ATgetArgument(t, 0);
      j_3 = ATgetArgument(t, 1);
      k_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_3);
  e_3 = t;
  t = i_3;
  t = l_85(t);
  l_3 = t;
  t = j_3;
  t = m_85(t);
  m_3 = t;
  t = k_3;
  t = n_85(t);
  n_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, l_3, m_3, n_3), e_3);
  return(t);
}
ATerm RDef_3_0 (ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm u_81 (ATerm), ATerm t)
{
  ATerm t_3 = NULL,c_4 = NULL,d_4 = NULL,f_4 = NULL,l_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL;
  a_5 = t;
  if(match_cons(t, sym_RDef_3))
    {
      c_4 = ATgetArgument(t, 0);
      d_4 = ATgetArgument(t, 1);
      f_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_5);
  t_3 = t;
  t = c_4;
  t = s_81(t);
  l_4 = t;
  t = d_4;
  t = t_81(t);
  y_4 = t;
  t = f_4;
  t = u_81(t);
  z_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, l_4, y_4, z_4), t_3);
  return(t);
}
ATerm DefaultVarDec_1_0 (ATerm g_85 (ATerm), ATerm t)
{
  ATerm u_5 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL;
  d_6 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_6);
  u_5 = t;
  t = b_6;
  t = g_85(t);
  c_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, c_6), u_5);
  return(t);
}
ATerm unescape_chars_0_0 (ATerm t)
{
  ATerm a_7 = t;
  int b_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_7 = ATgetFirst((ATermList) t);
          k_7 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_7;
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
        _fail(t);
      t = k_7;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_7 = ATgetFirst((ATermList) t);
          m_7 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_7;
      if(match_int(t, 34))
        {
          t = (ATerm) ATinsert(CheckATermList(m_7), term_c_7);
        }
      else
        {
          if(match_int(t, 92))
            {
              t = (ATerm) ATinsert(CheckATermList(m_7), term_d_7);
            }
          else
            {
              if(match_int(t, 110))
                {
                  t = (ATerm) ATinsert(CheckATermList(m_7), term_e_7);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(m_7), term_f_7);
                }
            }
        }
      ;
      LocalPopChoice(b_7);
    }
  else
    {
      t = a_7;
    }
  {
    ATerm g_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, unescape_chars_0_0, t);
        ;
        LocalPopChoice(h_7);
      }
    else
      {
        t = g_7;
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
  ATerm z_2 = NULL,b_3 = NULL;
  z_2 = t;
  t = SSL_explode_string(z_2);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_7 = ATgetFirst((ATermList) t);
      if(((ATgetType(i_7) != AT_INT) || (ATgetInt((ATermInt) i_7) != 39)))
        _fail(t);
      b_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(b_3);
  return(t);
}
ATerm n_0 (ATerm t)
{
  ATerm h_3 = NULL,q_3 = NULL;
  h_3 = t;
  t = SSL_explode_string(h_3);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_7 = ATgetFirst((ATermList) t);
      if(((ATgetType(n_7) != AT_INT) || (ATgetInt((ATermInt) n_7) != 39)))
        _fail(t);
      q_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(q_3);
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL;
  v_3 = t;
  t = SSL_explode_string(v_3);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_7 = ATgetFirst((ATermList) t);
      if(((ATgetType(o_7) != AT_INT) || (ATgetInt((ATermInt) o_7) != 39)))
        _fail(t);
      w_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(w_3);
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL;
  z_3 = t;
  t = SSL_explode_string(z_3);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_7 = ATgetFirst((ATermList) t);
      if(((ATgetType(p_7) != AT_INT) || (ATgetInt((ATermInt) p_7) != 39)))
        _fail(t);
      a_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(a_4);
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL;
  g_4 = t;
  t = SSL_explode_string(g_4);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_7 = ATgetFirst((ATermList) t);
      if(((ATgetType(q_7) != AT_INT) || (ATgetInt((ATermInt) q_7) != 39)))
        _fail(t);
      h_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(h_4);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm k_4 = NULL,m_4 = NULL;
  k_4 = t;
  t = SSL_explode_string(k_4);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_7 = ATgetFirst((ATermList) t);
      if(((ATgetType(r_7) != AT_INT) || (ATgetInt((ATermInt) r_7) != 39)))
        _fail(t);
      m_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(m_4);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL;
  p_4 = t;
  t = SSL_explode_string(p_4);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_7 = ATgetFirst((ATermList) t);
      if(((ATgetType(s_7) != AT_INT) || (ATgetInt((ATermInt) s_7) != 39)))
        _fail(t);
      q_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(q_4);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL;
  t_4 = t;
  t = SSL_explode_string(t_4);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_7 = ATgetFirst((ATermList) t);
      if(((ATgetType(t_7) != AT_INT) || (ATgetInt((ATermInt) t_7) != 39)))
        _fail(t);
      u_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(u_4);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm v_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_9 = NULL,q_9 = NULL,s_9 = NULL,t_9 = NULL;
      p_9 = t;
      if(match_cons(t, sym_Str_1))
        {
          q_9 = ATgetArgument(t, 0);
          {
            ATerm v_9 = NULL,x_0 = NULL,d_1 = NULL,e_1 = NULL;
            t = SSL_explode_string(q_9);
            t = unquote_chars_1_0(k_0, t);
            x_0 = t;
            t = SSL_implode_string(x_0);
            d_1 = t;
            t = SSL_explode_string(d_1);
            t = unescape_chars_0_0(t);
            e_1 = t;
            t = SSL_implode_string(e_1);
            v_9 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, v_9);
          }
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              q_9 = ATgetArgument(t, 0);
              {
                ATerm j_1 = NULL;
                t = SSL_string_to_real(q_9);
                j_1 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, j_1);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  q_9 = ATgetArgument(t, 0);
                  {
                    ATerm t_1 = NULL;
                    t = SSL_string_to_int(q_9);
                    t_1 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, t_1);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Con_3))
                    {
                      q_9 = ATgetArgument(t, 0);
                      s_9 = ATgetArgument(t, 1);
                      t_9 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSL_is_string(t_9);
                  t = (ATerm) ATmakeAppl(sym_Con_3, q_9, s_9, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, t_9), (ATerm) ATempty));
                }
            }
        }
      ;
      LocalPopChoice(w_7);
    }
  else
    {
      t = v_7;
      {
        ATerm x_7 = t;
        int y_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1_0(l_0, t);
            ;
            LocalPopChoice(y_7);
          }
        else
          {
            t = x_7;
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
                    int d_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SDef_3_0(r_0, _id, _id, t);
                        ;
                        LocalPopChoice(d_8);
                      }
                    else
                      {
                        t = b_8;
                        {
                          ATerm e_8 = t;
                          int f_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = VarDec_2_0(u_0, _id, t);
                              ;
                              LocalPopChoice(f_8);
                            }
                          else
                            {
                              t = e_8;
                              {
                                ATerm g_8 = t;
                                int k_8 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Var_1_0(v_0, t);
                                    ;
                                    LocalPopChoice(k_8);
                                  }
                                else
                                  {
                                    t = g_8;
                                    {
                                      ATerm l_8 = t;
                                      int o_8 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = SVar_1_0(z_0, t);
                                          ;
                                          LocalPopChoice(o_8);
                                        }
                                      else
                                        {
                                          t = l_8;
                                          {
                                            ATerm p_8 = t;
                                            int q_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = OpDecl_2_0(f_1, _id, t);
                                                ;
                                                LocalPopChoice(q_8);
                                              }
                                            else
                                              {
                                                t = p_8;
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
ATerm h_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm j_94 (ATerm), ATerm t)
{
  ATerm z_9 (ATerm t)
  {
    ATerm r_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, h_1, t);
        t = j_94(t);
        ;
        LocalPopChoice(s_8);
      }
    else
      {
        t = r_8;
        t = Cons_2_0(_id, z_9, t);
      }
    return(t);
  }
  t = z_9(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_10 = ATgetFirst((ATermList) t);
      h_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_10;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm t_8 = t;
      int u_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_10;
          ;
          LocalPopChoice(u_8);
        }
      else
        {
          t = t_8;
          t = h_10;
          t = last_0_0(t);
        }
    }
  else
    {
      t = h_10;
      t = last_0_0(t);
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm u_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_8 = ATgetFirst((ATermList) t);
      u_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_10;
  return(t);
}
ATerm unquote_chars_1_0 (ATerm k_102 (ATerm), ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL,t_10 = NULL;
  q_10 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_10 = ATgetFirst((ATermList) t);
      {
        ATerm w_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_10;
  t = k_102(t);
  t = q_10;
  t = last_0_0(t);
  t = k_102(t);
  t = q_10;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_8 = ATgetFirst((ATermList) t);
      t_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_10;
  t = at_last_1_0(i_1, t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_z_8;
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm g_12 = NULL,b_5 = NULL,g_5 = NULL;
  g_12 = t;
  t = SSL_explode_term(g_12);
  if(match_cons(t, sym__2))
    {
      ATerm a_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_9 = ATgetArgument(t, 1);
        if(((ATgetType(b_9) == AT_LIST) && !(ATisEmpty(b_9))))
          {
            b_5 = ATgetFirst((ATermList) b_9);
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
  t = SSL_explode_term(g_12);
  if(match_cons(t, sym__2))
    {
      ATerm d_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_9 = ATgetArgument(t, 1);
        if(((ATgetType(e_9) == AT_LIST) && !(ATisEmpty(e_9))))
          {
            ATerm f_9 = ATgetFirst((ATermList) e_9);
            ATerm g_9 = (ATerm) ATgetNext((ATermList) e_9);
            if(((ATgetType(g_9) == AT_LIST) && !(ATisEmpty(g_9))))
              {
                g_5 = ATgetFirst((ATermList) g_9);
                {
                  ATerm h_9 = (ATerm) ATgetNext((ATermList) g_9);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, g_5), b_5));
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL;
  if(match_cons(t, sym__2))
    {
      u_12 = ATgetArgument(t, 0);
      v_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, v_12), u_12));
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_z_8;
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL;
  if(match_cons(t, sym__2))
    {
      x_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, y_12), x_12));
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL;
  if(match_cons(t, sym__2))
    {
      j_13 = ATgetArgument(t, 0);
      k_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_9, (ATerm) ATinsert(ATinsert(ATempty, k_13), j_13));
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL;
  if(match_cons(t, sym__2))
    {
      m_13 = ATgetArgument(t, 0);
      n_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_9, (ATerm) ATinsert(ATinsert(ATempty, n_13), m_13));
  return(t);
}
ATerm a_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm r_14 (ATerm p_11, ATerm q_11, ATerm t)
  {
    t = p_11;
    {
      ATerm m_9 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2_0(_id, l_1, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_9;
        }
      t = (ATerm) ATmakeAppl(sym_Op_2, term_n_9, p_11);
    }
    return(t);
  }
  ATerm s_14 (ATerm s_11, ATerm t_11, ATerm t)
  {
    t = s_11;
    {
      ATerm o_9 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2_0(_id, m_1, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = o_9;
        }
      t = (ATerm) ATmakeAppl(sym_Call_2, term_r_9, s_11);
    }
    return(t);
  }
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL;
  a_12 = t;
  if(match_cons(t, sym_Anno_2))
    {
      b_12 = ATgetArgument(t, 0);
      c_12 = ATgetArgument(t, 1);
      {
        ATerm f_12 = NULL;
        t = c_12;
        t = foldr_2_0(n_1, o_1, t);
        f_12 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, b_12, f_12);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          b_12 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, b_12, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              b_12 = ATgetArgument(t, 0);
              {
                ATerm k_5 = NULL;
                t = b_12;
                {
                  ATerm u_9 = t;
                  int w_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_x_9;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_y_9;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_f_7;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_e_7;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_b_10;
                                    }
                                }
                            }
                        }
                      ;
                      LocalPopChoice(w_9);
                    }
                  else
                    {
                      t = u_9;
                      {
                        ATerm m_5 = NULL;
                        t = SSL_explode_string(b_12);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm c_10 = ATgetFirst((ATermList) t);
                            if(((ATgetType(c_10) != AT_INT) || (ATgetInt((ATermInt) c_10) != 39)))
                              _fail(t);
                            {
                              ATerm d_10 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(d_10) == AT_LIST) && !(ATisEmpty(d_10))))
                                {
                                  m_5 = ATgetFirst((ATermList) d_10);
                                  {
                                    ATerm e_10 = (ATerm) ATgetNext((ATermList) d_10);
                                    if(((ATgetType(e_10) == AT_LIST) && !(ATisEmpty(e_10))))
                                      {
                                        ATerm i_10 = ATgetFirst((ATermList) e_10);
                                        if(((ATgetType(i_10) != AT_INT) || (ATgetInt((ATermInt) i_10) != 39)))
                                          _fail(t);
                                        {
                                          ATerm j_10 = (ATerm) ATgetNext((ATermList) e_10);
                                          if(((ATgetType(j_10) != AT_LIST) || !(ATisEmpty(j_10))))
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
                        t = m_5;
                      }
                    }
                  k_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, k_5);
                }
              }
            }
          else
            {
              ATerm k_10 = t;
              int l_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      b_12 = ATgetArgument(t, 0);
                      {
                        ATerm m_10 = ATgetArgument(t, 1);
                      }
                      z_11 = ATgetArgument(t, 2);
                      v_11 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(l_10);
                  t = (ATerm) ATmakeAppl(sym_Con_3, b_12, z_11, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, v_11), (ATerm) ATempty));
                }
              else
                {
                  t = k_10;
                  {
                    ATerm n_10 = t;
                    int o_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            b_12 = ATgetArgument(t, 0);
                            {
                              ATerm s_10 = ATgetArgument(t, 1);
                            }
                            z_11 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(o_10);
                        t = (ATerm) ATmakeAppl(sym_Con_3, b_12, z_11, term_x_10);
                      }
                    else
                      {
                        t = n_10;
                        if(match_cons(t, sym_Con1_2))
                          {
                            b_12 = ATgetArgument(t, 0);
                            c_12 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, b_12, c_12, term_x_10);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                b_12 = ATgetArgument(t, 0);
                                c_12 = ATgetArgument(t, 1);
                                {
                                  ATerm p_1 (ATerm t)
                                  {
                                    t = c_12;
                                    return(t);
                                  }
                                  t = b_12;
                                  t = foldr_2_0(p_1, q_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    b_12 = ATgetArgument(t, 0);
                                    t = b_12;
                                    t = foldr_2_0(r_1, u_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        b_12 = ATgetArgument(t, 0);
                                        t = b_12;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            w_11 = ATgetFirst((ATermList) t);
                                            x_11 = (ATerm) ATgetNext((ATermList) t);
                                            t = x_11;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm y_10 = t;
                                                int z_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = r_14(b_12, a_12, t);
                                                    ;
                                                    LocalPopChoice(z_10);
                                                  }
                                                else
                                                  {
                                                    t = y_10;
                                                    t = w_11;
                                                  }
                                              }
                                            else
                                              {
                                                t = r_14(b_12, a_12, t);
                                              }
                                          }
                                        else
                                          {
                                            t = r_14(b_12, a_12, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            b_12 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, b_12));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                b_12 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, b_12));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    b_12 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, b_12));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        b_12 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, b_12));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            b_12 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, b_12), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                b_12 = ATgetArgument(t, 0);
                                                                c_12 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, b_12), c_12);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    b_12 = ATgetArgument(t, 0);
                                                                    c_12 = ATgetArgument(t, 1);
                                                                    {
                                                                      ATerm v_1 (ATerm t)
                                                                      {
                                                                        t = c_12;
                                                                        return(t);
                                                                      }
                                                                      t = b_12;
                                                                      t = foldr_2_0(v_1, w_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        b_12 = ATgetArgument(t, 0);
                                                                        t = b_12;
                                                                        t = foldr_2_0(y_1, z_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            b_12 = ATgetArgument(t, 0);
                                                                            c_12 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_r_9, (ATerm) ATinsert(CheckATermList(c_12), b_12));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                b_12 = ATgetArgument(t, 0);
                                                                                t = b_12;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    w_11 = ATgetFirst((ATermList) t);
                                                                                    x_11 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = x_11;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm a_11 = t;
                                                                                        int c_11 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = s_14(b_12, a_12, t);
                                                                                            ;
                                                                                            LocalPopChoice(c_11);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = a_11;
                                                                                            t = w_11;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = s_14(b_12, a_12, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = s_14(b_12, a_12, t);
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
                                                                                        b_12 = ATgetArgument(t, 0);
                                                                                        c_12 = ATgetArgument(t, 1);
                                                                                        t = c_12;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            y_11 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_f_11, (ATerm) ATinsert(ATinsert(ATempty, y_11), b_12));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            b_12 = ATgetArgument(t, 0);
                                                                                            t = b_12;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                b_12 = ATgetArgument(t, 0);
                                                                                                c_12 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, b_12, c_12, term_g_11);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    b_12 = ATgetArgument(t, 0);
                                                                                                    c_12 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, b_12, c_12, term_g_11);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        b_12 = ATgetArgument(t, 0);
                                                                                                        c_12 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, b_12, (ATerm)ATempty, c_12);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            b_12 = ATgetArgument(t, 0);
                                                                                                            c_12 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, c_12, b_12);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                              {
                                                                                                                b_12 = ATgetArgument(t, 0);
                                                                                                                {
                                                                                                                  ATerm e_14 = NULL,q_5 = NULL;
                                                                                                                  t = SSL_explode_string(b_12);
                                                                                                                  t = unquote_chars_1_0(a_2, t);
                                                                                                                  q_5 = t;
                                                                                                                  t = SSL_implode_string(q_5);
                                                                                                                  e_14 = t;
                                                                                                                  t = (ATerm) ATmakeAppl(sym_Prim_2, e_14, (ATerm) ATempty);
                                                                                                                }
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    b_12 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Call_2, b_12, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                      {
                                                                                                                        b_12 = ATgetArgument(t, 0);
                                                                                                                        c_12 = ATgetArgument(t, 1);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDef_3, b_12, (ATerm)ATempty, c_12);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SRDef_3))
                                                                                                                          {
                                                                                                                            b_12 = ATgetArgument(t, 0);
                                                                                                                            c_12 = ATgetArgument(t, 1);
                                                                                                                            z_11 = ATgetArgument(t, 2);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDef_3, b_12, c_12, z_11);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                              {
                                                                                                                                b_12 = ATgetArgument(t, 0);
                                                                                                                                c_12 = ATgetArgument(t, 1);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDef_3, b_12, (ATerm)ATempty, c_12);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    b_12 = ATgetArgument(t, 0);
                                                                                                                                    c_12 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_RDef_3, b_12, (ATerm)ATempty, c_12);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_Module_2))
                                                                                                                                      {
                                                                                                                                        ATerm h_11 = ATgetArgument(t, 0);
                                                                                                                                        c_12 = ATgetArgument(t, 1);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      _fail(t);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Specification_1, c_12);
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm repeat_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm t_14 (ATerm t)
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_86(t);
        t = t_14(t);
        ;
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
      }
    return(t);
  }
  t = t_14(t);
  return(t);
}
ATerm topdown_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  t = q_87(t);
  {
    ATerm c_2 (ATerm t)
    {
      t = topdown_1_0(q_87, t);
      return(t);
    }
    t = SRTS_all(c_2, t);
  }
  return(t);
}
ATerm _2_0 (ATerm g_68 (ATerm), ATerm h_68 (ATerm), ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL;
  z_14 = t;
  if(match_cons(t, sym__2))
    {
      v_14 = ATgetArgument(t, 0);
      w_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_14);
  u_14 = t;
  t = v_14;
  t = g_68(t);
  x_14 = t;
  t = w_14;
  t = h_68(t);
  y_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, x_14, y_14), u_14);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm x_105 (ATerm), ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL;
  if(match_cons(t, sym__2))
    {
      c_15 = ATgetArgument(t, 0);
      d_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_15, term_k_11);
  t = open_stream_0_0(t);
  e_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_15, d_15);
  t = x_105(t);
  t = fclose_0_0(t);
  t = d_15;
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
  ATerm k_15 = NULL,l_15 = NULL,o_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_11 = ATgetArgument(t, 0);
      if(match_cons(l_11, sym_Stream_1))
        {
          k_15 = ATgetArgument(l_11, 0);
        }
      else
        _fail(t);
      l_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(k_15, l_15);
  o_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_15);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm p_15 = NULL,r_15 = NULL,t_15 = NULL,u_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_11 = ATgetArgument(t, 0);
      if(match_cons(m_11, sym_Stream_1))
        {
          p_15 = ATgetArgument(m_11, 0);
        }
      else
        _fail(t);
      r_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(p_15, r_15);
  t_15 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), t_15);
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_15);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = fetch_1_0(n_2, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = WriteToFile_1_0(o_2, t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = WriteToFile_1_0(q_2, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm h_15 = NULL,j_15 = NULL;
  h_15 = t;
  {
    ATerm d_2 (ATerm t)
    {
      ATerm n_11 = t;
      int o_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((j_15 != NULL) && (j_15 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_15 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(f_2, t);
          ;
          LocalPopChoice(o_11);
        }
      else
        {
          t = n_11;
          t = term_r_11;
          if(((j_15 != NULL) && (j_15 != t)))
            _fail(t);
          else
            j_15 = t;
        }
      return(t);
    }
    t = _2_0(d_2, _id, t);
    t = h_15;
    {
      ATerm g_2 (ATerm t)
      {
        ATerm s_5 = NULL;
        s_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_15), s_5);
        return(t);
      }
      t = _2_0(_id, g_2, t);
      {
        ATerm u_11 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(h_2, k_2, t);
            ;
            LocalPopChoice(d_12);
          }
        else
          {
            t = u_11;
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
ATerm apply_strategy_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL;
  v_15 = t;
  t = dtime_0_0(t);
  t = v_15;
  t = z_108(t);
  w_15 = t;
  t = dtime_0_0(t);
  x_15 = t;
  t = w_15;
  if(match_cons(t, sym__2))
    {
      y_15 = ATgetArgument(t, 0);
      z_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_15), (ATerm) ATmakeAppl(sym_Runtime_1, x_15)), z_15);
  return(t);
}
ATerm n_16 (ATerm h_16, ATerm t)
{
  t = SSL_fclose(h_16);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL;
  l_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_16 = ATgetArgument(t, 0);
      {
        ATerm e_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_16);
            ;
            LocalPopChoice(h_12);
          }
        else
          {
            t = e_12;
            t = n_16(l_16, t);
          }
      }
    }
  else
    {
      t = n_16(l_16, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_16 = NULL;
  t = SSL_stdin_stream();
  o_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_16);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_16 = NULL;
  t = SSL_stdout_stream();
  p_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_16);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_16 = NULL;
  t = SSL_stderr_stream();
  q_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_16);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm y_16 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      y_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_16;
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm c_17 = NULL;
  c_17 = t;
  t = SSL_is_string(c_17);
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
        ATerm m_6 = NULL,n_6 = NULL;
        m_6 = t;
        t = SSL_explode_term(m_6);
        if(match_cons(t, sym__2))
          {
            ATerm m_12 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_12) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm n_12 = ATgetArgument(t, 1);
              if(((ATgetType(n_12) == AT_LIST) && !(ATisEmpty(n_12))))
                {
                  n_6 = ATgetFirst((ATermList) n_12);
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
        t = n_6;
        if(match_cons(t, sym_stderr_0))
          {
            t = n_6;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = n_6;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = n_6;
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
              ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
              t = _2_0(w_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  v_16 = ATgetArgument(t, 0);
                  w_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(v_16, w_16);
              x_16 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, x_16);
              ;
              LocalPopChoice(q_12);
            }
          else
            {
              t = p_12;
              {
                ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
                t = _2_0(x_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    z_16 = ATgetArgument(t, 0);
                    a_17 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(z_16, a_17);
                b_17 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, b_17);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_17 = NULL;
      g_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_17, term_t_12);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_12);
    }
  else
    {
      t = r_12;
      {
        ATerm o_6 = NULL;
        o_6 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_6), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = o_6;
        _fail(t);
      }
    }
  d_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(f_17);
  e_17 = t;
  t = d_17;
  t = fclose_0_0(t);
  t = e_17;
  return(t);
}
ATerm fetch_1_0 (ATerm s_93 (ATerm), ATerm t)
{
  ATerm l_17 (ATerm t)
  {
    ATerm w_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_93, _id, t);
        ;
        LocalPopChoice(z_12);
      }
    else
      {
        t = w_12;
        t = Cons_2_0(_id, l_17, t);
      }
    return(t);
  }
  t = l_17(t);
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
        ATerm o_17 = NULL,p_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_17 = ATgetFirst((ATermList) t);
            p_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_17;
        {
          ATerm y_2 (ATerm t)
          {
            t = p_17;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(y_2, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm y_93 (ATerm), ATerm t)
{
  ATerm v_17 (ATerm t)
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, v_17, t);
        ;
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_93(t);
      }
    return(t);
  }
  t = v_17(t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm y_17 = NULL;
  y_17 = t;
  t = SSL_explode_string(y_17);
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm z_17 = NULL;
  z_17 = t;
  t = SSL_explode_string(z_17);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm x_17 = NULL;
  t = _2_0(c_3, d_3, t);
  {
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_18 = NULL,c_18 = NULL;
        if(match_cons(t, sym__2))
          {
            b_18 = ATgetArgument(t, 0);
            c_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_18;
        {
          ATerm f_3 (ATerm t)
          {
            t = c_18;
            return(t);
          }
          t = at_end_1_0(f_3, t);
        }
        ;
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
        {
          ATerm t_6 = NULL,u_6 = NULL;
          t_6 = t;
          t = SSL_explode_term(t_6);
          if(match_cons(t, sym__2))
            {
              ATerm g_13 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_13) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              u_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_6;
          t = concat_0_0(t);
        }
      }
    x_17 = t;
    t = SSL_implode_string(x_17);
  }
  return(t);
}
ATerm g_3 (ATerm t)
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
  ATerm l_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_18 = NULL;
      m_18 = t;
      t = SSL_is_string(m_18);
      ;
      LocalPopChoice(o_13);
    }
  else
    {
      t = l_13;
      {
        ATerm p_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_3, t);
            ;
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
            {
              ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
              q_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  r_18 = ATgetArgument(t, 0);
                  t = r_18;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      r_18 = ATgetArgument(t, 0);
                      t = r_18;
                      {
                        ATerm r_13 = t;
                        int s_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), r_18);
                            {
                              ATerm t_13 = t;
                              int u_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm u_7 = NULL;
                                  t = eval_config_0_0(t);
                                  u_7 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), r_18, u_7);
                                  t = u_7;
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
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_18), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = r_18;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm w_18 = NULL,x_18 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          r_18 = ATgetArgument(t, 0);
                          s_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = r_18;
                      t = eval_config_0_0(t);
                      w_18 = t;
                      t = s_18;
                      t = eval_config_0_0(t);
                      x_18 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_18, x_18);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_107 (ATerm), ATerm t)
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
            ATerm c_8 = NULL;
            t = eval_config_0_0(t);
            c_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_8);
            t = c_8;
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
        t = b_107(t);
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
ATerm p_3 (ATerm t)
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
ATerm r_3 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL;
  i_19 = t;
  t = SSL_string_to_int(i_19);
  j_19 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), j_19);
  t = i_19;
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_3, r_3, s_3, t);
  return(t);
}
ATerm u_3 (ATerm t)
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
ATerm x_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_c_14;
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm b_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL;
  m_19 = t;
  t = SSL_string_to_int(m_19);
  n_19 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_19);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_19);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_g_14;
  return(t);
}
ATerm o_4 (ATerm t)
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
      t = Option_3_0(u_3, x_3, y_3, t);
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
            t = ArgOption_3_0(b_4, e_4, i_4, t);
            ;
            LocalPopChoice(l_14);
          }
        else
          {
            t = k_14;
            t = Option_3_0(j_4, n_4, o_4, t);
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
      t = term_z_6;
      t = d_0(t);
      s_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_14, term_n_14, s_19);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm v_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_19 = ATgetFirst((ATermList) t);
          r_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_19;
      t = a_0(t);
      t = term_z_6;
      t = b_0(t);
      v_19 = t;
      t = (ATerm) ATinsert(CheckATermList(r_19), v_19);
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm x_19 = NULL;
  x_19 = t;
  if(match_string(t, "-o"))
    {
      t = x_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_19;
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm y_19 = NULL;
  y_19 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), y_19);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_19);
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_o_14;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, v_4, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL;
  if(match_cons(t, sym__3))
    {
      b_20 = ATgetArgument(t, 0);
      c_20 = ATgetArgument(t, 1);
      d_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_20, c_20);
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_15 = ATgetArgument(t, 0);
            ATerm b_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(b_20, c_20);
        ;
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        t = (ATerm) ATempty;
      }
    e_20 = t;
    t = SSL_table_put(b_20, c_20, (ATerm) ATinsert(CheckATermList(e_20), d_20));
    t = (ATerm) ATmakeAppl(sym__3, b_20, c_20, d_20);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_20 = NULL;
      t = term_z_6;
      t = j_0(t);
      s_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_14, term_n_14, s_20);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm w_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_20 = ATgetFirst((ATermList) t);
          p_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_20;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_20 = ATgetFirst((ATermList) t);
          r_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_20;
      t = h_0(t);
      t = q_20;
      t = i_0(t);
      w_20 = t;
      t = (ATerm) ATinsert(CheckATermList(r_20), w_20);
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm y_20 = NULL;
  y_20 = t;
  if(match_string(t, "-i"))
    {
      t = y_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_20;
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm z_20 = NULL;
  z_20 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), z_20);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_20);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_f_15;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_4, x_4, c_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_21 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_6;
  t = whoami_0_0(t);
  a_21 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), a_21));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm g_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_8 = NULL;
        t = eval_config_0_0(t);
        h_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_8);
        t = h_8;
        ;
        LocalPopChoice(i_15);
      }
    else
      {
        t = g_15;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm t)
{
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_99(t);
      ;
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      {
        ATerm d_21 = NULL,e_21 = NULL,h_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_21 = ATgetFirst((ATermList) t);
            e_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_21;
        t = foldr_2_0(j_99, k_99, t);
        h_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_21, h_21);
        t = k_99(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL;
  if(match_cons(t, sym__2))
    {
      m_8 = ATgetArgument(t, 0);
      n_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(m_8, n_8);
        ;
        LocalPopChoice(a_16);
      }
    else
      {
        t = q_15;
        t = SSL_addr(m_8, n_8);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_21 = NULL,i_8 = NULL,j_8 = NULL;
  t = times_0_0(t);
  i_8 = t;
  t = SSL_explode_term(i_8);
  if(match_cons(t, sym__2))
    {
      ATerm b_16 = ATgetArgument(t, 0);
      j_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8;
  t = foldr_2_0(d_5, e_5, t);
  m_21 = t;
  t = SSL_TicksToSeconds(m_21);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
  x_21 = t;
  if(match_cons(t, sym__2))
    {
      y_21 = ATgetArgument(t, 0);
      z_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_16 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_21;
        if((y_21 != t))
          {
            _fail(t);
          }
        t = x_21;
        ;
        LocalPopChoice(d_16);
      }
    else
      {
        t = c_16;
        t = x_21;
        {
          ATerm e_16 = t;
          int f_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_21, z_21);
              ;
              LocalPopChoice(f_16);
            }
          else
            {
              t = e_16;
              t = SSL_gtr(y_21, z_21);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_21, z_21);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_107 (ATerm), ATerm t)
{
  ATerm g_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_22 = NULL,f_22 = NULL;
      d_22 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm j_16 = t;
        int m_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_10 = NULL;
            t = eval_config_0_0(t);
            a_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), a_10);
            t = a_10;
            ;
            LocalPopChoice(m_16);
          }
        else
          {
            t = j_16;
          }
        f_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_22, term_r_16);
        t = geq_0_0(t);
        t = d_22;
        t = a_107(t);
      }
      ;
      LocalPopChoice(i_16);
    }
  else
    {
      t = g_16;
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL;
  t = run_time_0_0(t);
  h_22 = t;
  t = term_z_6;
  t = whoami_0_0(t);
  i_22 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), h_22), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), i_22));
  t = (ATerm) ATmakeAppl(sym__2, term_s_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_16), h_22), term_t_16), i_22));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm x_109 (ATerm), ATerm t)
{
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm j_17 = t;
        int k_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_10 = NULL;
            t = eval_config_0_0(t);
            f_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), f_10);
            t = f_10;
            ;
            LocalPopChoice(k_17);
          }
        else
          {
            t = j_17;
          }
      }
      ;
      LocalPopChoice(i_17);
    }
  else
    {
      t = h_17;
      {
        ATerm h_5 (ATerm t)
        {
          ATerm m_17 = t;
          int n_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(n_17);
            }
          else
            {
              t = m_17;
              {
                ATerm q_17 = t;
                int r_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(r_17);
                  }
                else
                  {
                    t = q_17;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(h_5, t);
      }
    }
  t = x_109(t);
  return(t);
}
ATerm map_1_0 (ATerm h_93 (ATerm), ATerm t)
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
        t = Cons_2_0(h_93, j_22, t);
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
          ATerm i_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(q_22), r_22);
            return(t);
          }
          t = reverse_acc_2_0(f_0, i_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_6;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm p_78 (ATerm), ATerm t)
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
  t = p_78(t);
  u_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, u_22), s_22);
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm y_22 = NULL;
  y_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_22), term_u_17);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm d_18 = t;
        int e_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_10 = NULL;
            t = eval_config_0_0(t);
            p_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), p_10);
            t = p_10;
            ;
            LocalPopChoice(e_18);
          }
        else
          {
            t = d_18;
          }
      }
      ;
      LocalPopChoice(a_18);
    }
  else
    {
      t = w_17;
      {
        ATerm j_5 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(j_5, t);
      }
    }
  t = term_f_18;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, l_5, t);
  t = map_1_0(n_5, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm q_78 (ATerm), ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL;
  c_23 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      a_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_23);
  z_22 = t;
  t = a_23;
  t = q_78(t);
  b_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, b_23), z_22);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL;
  g_23 = t;
  {
    ATerm g_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_23;
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
            t = g_23;
          }
        ;
        LocalPopChoice(i_18);
      }
    else
      {
        t = g_18;
        t = (ATerm) ATinsert(ATempty, g_23);
      }
    h_23 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), h_23);
    t = g_23;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm l_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_11 = NULL;
        t = eval_config_0_0(t);
        b_11 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), b_11);
        t = b_11;
        ;
        LocalPopChoice(n_18);
      }
    else
      {
        t = l_18;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm o_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_t_18;
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_u_18;
  return(t);
}
ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_v_18;
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_y_18;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_5, p_5, r_5, t);
      ;
      LocalPopChoice(a_19);
    }
  else
    {
      t = z_18;
      t = Option_3_0(t_5, v_5, w_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_72 (ATerm), ATerm w_72 (ATerm), ATerm t)
{
  ATerm m_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL;
  s_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_23 = ATgetFirst((ATermList) t);
      p_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_23);
  m_23 = t;
  t = o_23;
  t = v_72(t);
  q_23 = t;
  t = p_23;
  t = w_72(t);
  r_23 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(r_23), q_23), m_23);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm x_23 = NULL;
  x_23 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_23);
  t = (ATerm) ATmakeAppl(sym_Program_1, x_23);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_112 (ATerm), ATerm t)
{
  ATerm w_23 = NULL;
  w_23 = t;
  {
    ATerm b_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_19;
        t = a_112(t);
        ;
        LocalPopChoice(c_19);
      }
    else
      {
        t = b_19;
      }
    t = w_23;
    {
      ATerm y_5 (ATerm t)
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
                t = a_112(t);
                t = Cons_2_0(_id, y_5, t);
              }
            ;
            LocalPopChoice(o_19);
          }
        else
          {
            t = k_19;
            {
              ATerm z_23 = NULL,a_24 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_23 = ATgetFirst((ATermList) t);
                  a_24 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(a_24), (ATerm) ATmakeAppl(sym_Undefined_1, z_23));
            }
          }
        return(t);
      }
      t = Cons_2_0(x_5, y_5, t);
    }
  }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm m_24 = NULL;
  m_24 = t;
  if(match_string(t, "--help"))
    {
      t = m_24;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_24;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_24;
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
  t = term_z_19;
  return(t);
}
ATerm g_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm z_111 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
  h_24 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = h_24;
  {
    ATerm z_5 (ATerm t)
    {
      ATerm a_20 = t;
      int f_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_111(t);
          ;
          LocalPopChoice(f_20);
        }
      else
        {
          t = a_20;
          {
            ATerm g_20 = t;
            int h_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_6, e_6, f_6, t);
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
    t = parse_options_p__1_0(z_5, t);
    {
      ATerm i_20 = t;
      int j_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_24 = NULL;
          r_24 = t;
          {
            ATerm k_20 = t;
            int m_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = r_24;
                {
                  ATerm n_20 = t;
                  int t_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm u_20 = t;
                        int v_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm s_15 = NULL;
                            t = eval_config_0_0(t);
                            s_15 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), s_15);
                            t = s_15;
                            ;
                            LocalPopChoice(v_20);
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
                      t = n_20;
                      t = fetch_1_0(g_6, t);
                    }
                  t = r_24;
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
                  ATerm x_20 = t;
                  int b_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_18 = NULL;
                      t = eval_config_0_0(t);
                      h_18 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), h_18);
                      t = h_18;
                      ;
                      LocalPopChoice(b_21);
                    }
                  else
                    {
                      t = x_20;
                    }
                  t = r_24;
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
            ATerm c_21 = t;
            int f_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_6 (ATerm t)
                {
                  ATerm i_6 (ATerm t)
                  {
                    if(((i_24 != NULL) && (i_24 != t)))
                      _fail(t);
                    else
                      i_24 = t;
                    return(t);
                  }
                  t = Undefined_1_0(i_6, t);
                  return(t);
                }
                t = fetch_1_0(h_6, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(i_24)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_s_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_24)), term_g_21));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(f_21);
              }
            else
              {
                t = c_21;
              }
          }
        }
      j_24 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = j_24;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm t)
{
  ATerm u_24 = NULL;
  t = parse_options_1_0(z_109, t);
  u_24 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), u_24);
  t = u_24;
  t = b_110(t);
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_110, t);
        ;
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        {
          ATerm k_21 = t;
          int l_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_110(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(l_21);
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
ATerm p_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_n_21;
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_o_21;
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL;
  v_24 = t;
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
    w_24 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, w_24));
    t = v_24;
  }
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = if_verbose2_1_0(s_6, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_109(t);
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
                int w_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(w_21);
                  }
                else
                  {
                    t = v_21;
                    {
                      ATerm a_22 = t;
                      int b_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(p_6, q_6, r_6, t);
                          ;
                          LocalPopChoice(b_22);
                        }
                      else
                        {
                          t = a_22;
                          {
                            ATerm c_22 = t;
                            int e_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(e_22);
                              }
                            else
                              {
                                t = c_22;
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
  ATerm l_6 (ATerm t)
  {
    ATerm x_24 = NULL,y_24 = NULL,w_19 = NULL;
    x_24 = t;
    {
      ATerm g_22 = t;
      int k_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((y_24 != NULL) && (y_24 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_6, t);
          ;
          LocalPopChoice(k_22);
        }
      else
        {
          t = g_22;
          t = term_n_22;
          y_24 = t;
        }
      t = not_null(y_24);
      t = ReadFromFile_0_0(t);
      w_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_24, w_19);
      t = apply_strategy_1_0(i_109, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(j_6, k_109, k_6, l_6, t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = repeat_1_0(Desugar_0_0, t);
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        ;
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
      }
  }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_25 = NULL,l_20 = NULL;
      f_25 = t;
      t = SSL_explode_term(f_25);
      if(match_cons(t, sym__2))
        {
          ATerm d_23 = ATgetArgument(t, 0);
          ATerm e_23 = ATgetArgument(t, 1);
          if(((ATgetType(e_23) == AT_LIST) && !(ATisEmpty(e_23))))
            {
              l_20 = ATgetFirst((ATermList) e_23);
              {
                ATerm f_23 = (ATerm) ATgetNext((ATermList) e_23);
                if(((ATgetType(f_23) != AT_LIST) || !(ATisEmpty(f_23))))
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
      LocalPopChoice(x_22);
    }
  else
    {
      t = w_22;
    }
  t = topdown_1_0(y_6, t);
  return(t);
}
ATerm stratego_desugar_0_0 (ATerm t)
{
  ATerm w_6 (ATerm t)
  {
    t = _2_0(_id, x_6, t);
    return(t);
  }
  t = iowrap_3_0(w_6, _fail, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = stratego_desugar_0_0(t);
  return(t);
}
