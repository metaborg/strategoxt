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
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_App_2;
Symbol sym_As_2;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_DynamicRules_1;
Symbol sym_LRule_1;
Symbol sym_Choice_2;
Symbol sym_AM_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Not_1;
Symbol sym_Where_1;
Symbol sym_Test_1;
Symbol sym_Prim_2;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_Some_1;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
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
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
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
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_n_34;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_h_32;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_a_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_h_30;
ATerm term_e_30;
ATerm term_i_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_l_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_e_26;
ATerm term_v_25;
ATerm term_q_25;
ATerm term_n_25;
ATerm term_z_24;
ATerm term_w_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_t_22;
ATerm term_f_16;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_i_11;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_w_0;
void init_constant_terms (void)
{
  ATprotect(&(term_w_0));
  term_w_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Sort_2, term_a_13, (ATerm) ATempty);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_ConstType_1, term_b_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TopLevel", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_23);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_24);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_26);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym__3, term_e_26, term_v_30, term_w_0);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm g_121 (ATerm), ATerm);
ATerm q_1 (ATerm a_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm TestSavesCurrentTerm_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm WhereSavesCurrentTerm_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm o_13 (ATerm x_10, ATerm e_11, ATerm f_11, ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm t_115 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm m_131 (ATerm), ATerm);
ATerm downup_1_0 (ATerm r_114 (ATerm), ATerm);
ATerm TopLevel_0_0 (ATerm);
ATerm filter_1_0 (ATerm g_127 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm);
ATerm Let_2_0 (ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm foldr_3_0 (ATerm t_125 (ATerm), ATerm u_125 (ATerm), ATerm v_125 (ATerm), ATerm);
ATerm diff_1_0 (ATerm y_122 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm b_132 (ATerm), ATerm c_132 (ATerm), ATerm);
ATerm for_3_0 (ATerm e_132 (ATerm), ATerm f_132 (ATerm), ATerm g_132 (ATerm), ATerm);
ATerm s_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm a_4 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm i_4 (ATerm);
ATerm m_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm free_vars_3_0 (ATerm v_129 (ATerm), ATerm w_129 (ATerm), ATerm x_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm l_102 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm e_102 (ATerm), ATerm f_102 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm w_105 (ATerm), ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm o_103 (ATerm), ATerm p_103 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm x_4 (ATerm);
ATerm a_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm g_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm SuperCombinator_0_0 (ATerm);
ATerm partition_1_0 (ATerm o_127 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm f_6 (ATerm);
ATerm LiftFromLet_0_0 (ATerm);
ATerm union_1_0 (ATerm d_123 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm b_119 (ATerm), ATerm c_119 (ATerm), ATerm d_119 (ATerm), ATerm e_119 (ATerm), ATerm);
ATerm p_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm CollectSplit_2_0 (ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm);
ATerm collect_split_1_0 (ATerm n_124 (ATerm), ATerm);
ATerm lift_sdefs_0_0 (ATerm);
ATerm assert_1_0 (ATerm c_127 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm r_98 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm w_98 (ATerm), ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm declare_standard_strategies_0_0 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm lift_definitions_0_0 (ATerm);
ATerm _2_0 (ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm j_136 (ATerm), ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm l_139 (ATerm), ATerm);
ATerm q_42 (ATerm k_42, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm u_7 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm a_121 (ATerm), ATerm);
ATerm debug_1_0 (ATerm h_136 (ATerm), ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm u_137 (ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm b_8 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_137 (ATerm), ATerm);
ATerm x_8 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm y_8 (ATerm);
ATerm need_help_1_0 (ATerm j_140 (ATerm), ATerm);
ATerm map_1_0 (ATerm q_120 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm k_111 (ATerm), ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm l_111 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm);
ATerm l_9 (ATerm);
ATerm parse_options_p__1_0 (ATerm m_142 (ATerm), ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm parse_options_1_0 (ATerm l_142 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_140 (ATerm), ATerm m_140 (ATerm), ATerm n_140 (ATerm), ATerm o_140 (ATerm), ATerm);
ATerm w_9 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm iowrap_3_0 (ATerm u_139 (ATerm), ATerm v_139 (ATerm), ATerm w_139 (ATerm), ATerm);
ATerm d_10 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_0 = NULL,j_0 = NULL,l_0 = NULL,o_0 = NULL,p_0 = NULL;
  h_0 = t;
  t = term_w_0;
  t = whoami_0_0(t);
  j_0 = t;
  t = term_e_10;
  l_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_10), j_0), term_f_10);
  o_0 = t;
  t = SSL_printnl(l_0, o_0);
  t = term_h_10;
  p_0 = t;
  t = SSL_exit(p_0);
  t = h_0;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(j_10);
    }
  else
    {
      t = i_10;
      {
        ATerm s_0 = NULL,t_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_0 = ATgetFirst((ATermList) t);
            t_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_0;
        {
          ATerm m_2 (ATerm t)
          {
            t = t_0;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(m_2, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm g_121 (ATerm), ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, x_0, t);
        ;
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_10;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_121(t);
      }
    return(t);
  }
  t = x_0(t);
  return(t);
}
ATerm q_1 (ATerm a_1, ATerm t)
{
  ATerm d_1 = NULL;
  t = SSL_explode_term(a_1);
  if(match_cons(t, sym__2))
    {
      ATerm m_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_1 = NULL,j_1 = NULL,n_1 = NULL;
  n_1 = t;
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      j_1 = ATgetArgument(t, 1);
      {
        ATerm n_10 = t;
        int o_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_2 (ATerm t)
            {
              t = j_1;
              return(t);
            }
            t = e_1;
            t = at_end_1_0(s_2, t);
            ;
            LocalPopChoice(o_10);
          }
        else
          {
            t = n_10;
            t = q_1(n_1, t);
          }
      }
    }
  else
    {
      t = q_1(n_1, t);
    }
  return(t);
}
ATerm TestSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm r_1 = NULL,s_1 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      r_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_1)), (ATerm) ATmakeAppl(sym_Seq_2, r_1, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, s_1)))));
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm WhereSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      t_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_1)), (ATerm) ATmakeAppl(sym_Seq_2, t_1, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, u_1)))));
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,l_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL;
  if(match_cons(t, sym__2))
    {
      l_2 = ATgetArgument(t, 0);
      n_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_2;
  if(match_cons(t, sym_Build_1))
    {
      ATerm p_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_2;
  if(match_cons(t, sym_Where_1))
    {
      o_2 = ATgetArgument(t, 0);
      t = o_2;
      if(match_cons(t, sym_Prim_2))
        {
          h_2 = ATgetArgument(t, 0);
          i_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Prim_2, h_2, i_2);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          o_2 = ATgetArgument(t, 0);
          p_2 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, o_2, p_2);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              o_2 = ATgetArgument(t, 0);
              p_2 = ATgetArgument(t, 1);
              q_2 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_PrimT_3, o_2, p_2, q_2);
        }
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_10 = ATgetArgument(t, 0);
      if(((ATgetType(q_10) != AT_LIST) || !(ATisEmpty(q_10))))
        _fail(t);
      {
        ATerm r_10 = ATgetArgument(t, 1);
        if(((ATgetType(r_10) != AT_LIST) || !(ATisEmpty(r_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL,z_3 = NULL,d_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_10 = ATgetArgument(t, 0);
      if(((ATgetType(s_10) == AT_LIST) && !(ATisEmpty(s_10))))
        {
          t_3 = ATgetFirst((ATermList) s_10);
          z_3 = (ATerm) ATgetNext((ATermList) s_10);
        }
      else
        _fail(t);
      {
        ATerm t_10 = ATgetArgument(t, 1);
        if(((ATgetType(t_10) == AT_LIST) && !(ATisEmpty(t_10))))
          {
            u_3 = ATgetFirst((ATermList) t_10);
            d_4 = (ATerm) ATgetNext((ATermList) t_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_3, u_3), (ATerm) ATmakeAppl(sym__2, z_3, d_4));
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL;
  if(match_cons(t, sym__2))
    {
      g_4 = ATgetArgument(t, 0);
      h_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_4), g_4);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL;
  if(match_cons(t, sym__2))
    {
      j_4 = ATgetArgument(t, 0);
      k_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_4), (ATerm) ATmakeAppl(sym_Match_1, k_4));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_10 = ATgetArgument(t, 0);
      if(match_cons(u_10, sym_Build_1))
        {
          ATerm w_10 = ATgetArgument(u_10, 0);
          if(match_cons(w_10, sym_Op_2))
            {
              d_3 = ATgetArgument(w_10, 0);
              c_3 = ATgetArgument(w_10, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm v_10 = ATgetArgument(t, 1);
        if(match_cons(v_10, sym_Match_1))
          {
            ATerm y_10 = ATgetArgument(v_10, 0);
            if(match_cons(y_10, sym_Op_2))
              {
                if((d_3 != ATgetArgument(y_10, 0)))
                  {
                    _fail(ATgetArgument(y_10, 0));
                  }
                e_3 = ATgetArgument(y_10, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, c_3, e_3);
  t = genzip_4_0(t_2, u_2, v_2, w_2, t);
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_3), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, d_3, c_3)));
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm l_4 = NULL,n_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_10 = ATgetArgument(t, 0);
      if(match_cons(z_10, sym_Build_1))
        {
          ATerm b_11 = ATgetArgument(z_10, 0);
          if(match_cons(b_11, sym_Op_2))
            {
              l_4 = ATgetArgument(b_11, 0);
              {
                ATerm c_11 = ATgetArgument(b_11, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm a_11 = ATgetArgument(t, 1);
        if(match_cons(a_11, sym_Match_1))
          {
            ATerm d_11 = ATgetArgument(a_11, 0);
            if(match_cons(d_11, sym_Op_2))
              {
                n_4 = ATgetArgument(d_11, 0);
                {
                  ATerm g_11 = ATgetArgument(d_11, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, l_4, n_4);
  {
    ATerm h_11 = t;
    if((PushChoice() == 0))
      {
        ATerm o_4 = NULL;
        if(match_cons(t, sym__2))
          {
            o_4 = ATgetArgument(t, 0);
            if((o_4 != ATgetArgument(t, 1)))
              {
                _fail(ATgetArgument(t, 1));
              }
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_11;
      }
    t = term_i_11;
  }
  return(t);
}
ATerm o_13 (ATerm x_10, ATerm e_11, ATerm f_11, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, x_10, e_11);
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = MisMatch_0_0(t);
        ;
        LocalPopChoice(k_11);
      }
    else
      {
        t = j_11;
        {
          ATerm l_11 = t;
          int m_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = BuildMatchFusion_0_0(t);
              ;
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
                    ATerm p_11 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm q_11 = ATgetArgument(t, 0);
                        ATerm r_11 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = x_10;
                    if(match_cons(t, sym_Build_1))
                      {
                        ATerm s_11 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = e_11;
                    if(match_cons(t, sym_Build_1))
                      {
                        p_11 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Build_1, p_11);
                    ;
                    LocalPopChoice(o_11);
                  }
                else
                  {
                    t = n_11;
                    {
                      ATerm t_11 = t;
                      int u_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = BuildPrim_0_0(t);
                          ;
                          LocalPopChoice(u_11);
                        }
                      else
                        {
                          t = t_11;
                          {
                            ATerm y_11 = NULL,t_12 = NULL,v_12 = NULL,w_12 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                ATerm v_11 = ATgetArgument(t, 0);
                                ATerm w_11 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = x_10;
                            if(match_cons(t, sym_Match_1))
                              {
                                y_11 = ATgetArgument(t, 0);
                                t = e_11;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    v_12 = ATgetArgument(t, 0);
                                    t = v_12;
                                    if((y_11 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, y_11);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        v_12 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = y_11;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        t_12 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = v_12;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        w_12 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = w_12;
                                    if((t_12 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, t_12));
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Build_1))
                                  {
                                    y_11 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = e_11;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    v_12 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = v_12;
                                if((y_11 != t))
                                  {
                                    _fail(t);
                                  }
                                t = (ATerm) ATmakeAppl(sym_Build_1, y_11);
                              }
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
ATerm BuildMatch_0_0 (ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL;
  g_13 = t;
  if(match_cons(t, sym_Seq_2))
    {
      h_13 = ATgetArgument(t, 0);
      i_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_13;
  if(match_cons(t, sym_Seq_2))
    {
      d_13 = ATgetArgument(t, 0);
      e_13 = ATgetArgument(t, 1);
      {
        ATerm x_11 = t;
        int z_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_1 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, h_13, d_13);
            {
              ATerm a_12 = t;
              int b_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(b_12);
                }
              else
                {
                  t = a_12;
                  {
                    ATerm c_12 = t;
                    int d_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
                        ;
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
                              ATerm z_1 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm g_12 = ATgetArgument(t, 0);
                                  ATerm h_12 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = h_13;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm i_12 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = d_13;
                              if(match_cons(t, sym_Build_1))
                                {
                                  z_1 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Build_1, z_1);
                              ;
                              LocalPopChoice(f_12);
                            }
                          else
                            {
                              t = e_12;
                              {
                                ATerm j_12 = t;
                                int k_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(k_12);
                                  }
                                else
                                  {
                                    t = j_12;
                                    {
                                      ATerm e_2 = NULL,f_2 = NULL,k_2 = NULL,r_2 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm l_12 = ATgetArgument(t, 0);
                                          ATerm m_12 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = h_13;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          e_2 = ATgetArgument(t, 0);
                                          t = d_13;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              k_2 = ATgetArgument(t, 0);
                                              t = k_2;
                                              if((e_2 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, e_2);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  k_2 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = e_2;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  f_2 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = k_2;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  r_2 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = r_2;
                                              if((f_2 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_2));
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              e_2 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = d_13;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              k_2 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = k_2;
                                          if((e_2 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, e_2);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              i_1 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, i_1, e_13);
            }
            ;
            LocalPopChoice(z_11);
          }
        else
          {
            t = x_11;
            t = o_13(h_13, i_13, g_13, t);
          }
      }
    }
  else
    {
      t = o_13(h_13, i_13, g_13, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm t_115 (ATerm), ATerm t)
{
  ATerm p_13 (ATerm t)
  {
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_115(t);
        ;
        LocalPopChoice(o_12);
      }
    else
      {
        t = n_12;
        t = SRTS_one(p_13, t);
      }
    return(t);
  }
  t = p_13(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm u_14 = NULL,x_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,j_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL;
  u_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      x_14 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_15;
  if(match_cons(t, sym_Let_2))
    {
      t_15 = ATgetArgument(t, 0);
      v_15 = ATgetArgument(t, 1);
      {
        ATerm j_16 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, x_14, t_15);
        t = conc_0_0(t);
        j_16 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, j_16, v_15);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          t_15 = ATgetArgument(t, 0);
          v_15 = ATgetArgument(t, 1);
          w_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_14 = ATgetFirst((ATermList) t);
          r_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_14;
      if(match_cons(t, sym_SDefT_4))
        {
          a_15 = ATgetArgument(t, 0);
          b_15 = ATgetArgument(t, 1);
          c_15 = ATgetArgument(t, 2);
          j_15 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = b_15;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_15;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_15;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_15;
      if(match_cons(t, sym_SVar_1))
        {
          u_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_15;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_15;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_15;
      if((a_15 != t))
        {
          _fail(t);
        }
      t = j_15;
      {
        ATerm p_12 = t;
        if((PushChoice() == 0))
          {
            ATerm x_2 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm q_12 = ATgetArgument(t, 0);
                  if(match_cons(q_12, sym_SVar_1))
                    {
                      if((a_15 != ATgetArgument(q_12, 0)))
                        {
                          _fail(ATgetArgument(q_12, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm r_12 = ATgetArgument(t, 1);
                    if(((ATgetType(r_12) != AT_LIST) || !(ATisEmpty(r_12))))
                      _fail(t);
                  }
                  {
                    ATerm s_12 = ATgetArgument(t, 2);
                    if(((ATgetType(s_12) != AT_LIST) || !(ATisEmpty(s_12))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(x_2, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_12;
          }
        t = j_15;
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm d_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,j_17 = NULL,k_17 = NULL,n_17 = NULL,p_17 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      n_17 = ATgetArgument(t, 0);
      t = n_17;
      if(match_cons(t, sym_Seq_2))
        {
          k_17 = ATgetArgument(t, 0);
          f_17 = ATgetArgument(t, 1);
          t = k_17;
          if(match_cons(t, sym_Where_1))
            {
              d_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_17;
          if(match_cons(t, sym_Seq_2))
            {
              g_17 = ATgetArgument(t, 0);
              j_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_17;
          if(match_cons(t, sym_Build_1))
            {
              h_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, d_17, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_17), j_17)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              k_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, k_17);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          n_17 = ATgetArgument(t, 0);
          t = n_17;
          if(match_cons(t, sym_Test_1))
            {
              k_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, k_17);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              n_17 = ATgetArgument(t, 0);
              t = n_17;
              if(match_cons(t, sym_Not_1))
                {
                  k_17 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, k_17);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  n_17 = ATgetArgument(t, 0);
                  p_17 = ATgetArgument(t, 1);
                  t = p_17;
                  if((n_17 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      n_17 = ATgetArgument(t, 0);
                      p_17 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = p_17;
                  if((n_17 != t))
                    {
                      _fail(t);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm AssociateR_0_0 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL,m_18 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      g_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
      t = g_18;
      if(match_cons(t, sym_LChoice_2))
        {
          h_18 = ATgetArgument(t, 0);
          i_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, h_18, (ATerm) ATmakeAppl(sym_LChoice_2, i_18, m_18));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          g_18 = ATgetArgument(t, 0);
          m_18 = ATgetArgument(t, 1);
          t = g_18;
          if(match_cons(t, sym_Seq_2))
            {
              h_18 = ATgetArgument(t, 0);
              i_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, h_18, (ATerm) ATmakeAppl(sym_Seq_2, i_18, m_18));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              g_18 = ATgetArgument(t, 0);
              m_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_18;
          if(match_cons(t, sym_Choice_2))
            {
              h_18 = ATgetArgument(t, 0);
              i_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, h_18, (ATerm) ATmakeAppl(sym_Choice_2, i_18, m_18));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm u_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm y_2 (ATerm t)
        {
          ATerm y_12 = t;
          int z_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(z_12);
            }
          else
            {
              t = y_12;
            }
          return(t);
        }
        t = Cons_2_0(_id, y_2, t);
      }
      ;
      LocalPopChoice(x_12);
    }
  else
    {
      t = u_12;
      {
        ATerm z_2 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, z_2, t);
      }
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm z_20 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_20, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_13), term_c_13));
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm f_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_21 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, b_21, term_c_13);
      ;
      LocalPopChoice(j_13);
    }
  else
    {
      t = f_13;
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm r_21 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      r_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_21, term_c_13);
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_21 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, x_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_13), term_c_13));
      ;
      LocalPopChoice(l_13);
    }
  else
    {
      t = k_13;
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm g_22 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      g_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_22, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_13), term_c_13));
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_22 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, k_22, term_c_13);
      ;
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,y_19 = NULL,z_19 = NULL,b_20 = NULL,f_20 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      b_20 = ATgetArgument(t, 0);
      f_20 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, b_20, f_20);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          b_20 = ATgetArgument(t, 0);
          t = b_20;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_19 = ATgetFirst((ATermList) t);
              v_19 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, u_19, (ATerm) ATmakeAppl(sym_LChoices_1, v_19));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_i_11;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              b_20 = ATgetArgument(t, 0);
              t = b_20;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_19 = ATgetFirst((ATermList) t);
                  v_19 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, u_19, (ATerm) ATmakeAppl(sym_Choices_1, v_19));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_i_11;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  b_20 = ATgetArgument(t, 0);
                  t = b_20;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      u_19 = ATgetFirst((ATermList) t);
                      v_19 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_19, (ATerm) ATmakeAppl(sym_Seqs_1, v_19));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_q_13;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_20 = ATgetArgument(t, 0);
                      f_20 = ATgetArgument(t, 1);
                      z_19 = ATgetArgument(t, 2);
                      y_19 = ATgetArgument(t, 3);
                      {
                        ATerm v_20 = NULL,w_20 = NULL;
                        t = f_20;
                        t = map1_1_0(a_3, t);
                        v_20 = t;
                        t = z_19;
                        t = map1_1_0(b_3, t);
                        w_20 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, b_20, v_20, w_20, y_19);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          b_20 = ATgetArgument(t, 0);
                          f_20 = ATgetArgument(t, 1);
                          z_19 = ATgetArgument(t, 2);
                          y_19 = ATgetArgument(t, 3);
                          {
                            ATerm r_13 = t;
                            int s_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm j_21 = NULL,q_21 = NULL;
                                t = z_19;
                                t = map1_1_0(f_3, t);
                                j_21 = t;
                                t = f_20;
                                t = map_1_0(g_3, t);
                                q_21 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, b_20, q_21, j_21, y_19);
                                ;
                                LocalPopChoice(s_13);
                              }
                            else
                              {
                                t = r_13;
                                {
                                  ATerm e_22 = NULL,f_22 = NULL;
                                  t = f_20;
                                  t = map1_1_0(h_3, t);
                                  e_22 = t;
                                  t = z_19;
                                  t = map_1_0(i_3, t);
                                  f_22 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, b_20, e_22, f_22, y_19);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              b_20 = ATgetArgument(t, 0);
                              f_20 = ATgetArgument(t, 1);
                              z_19 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, f_20, (ATerm) ATmakeAppl(sym_Op_2, term_t_13, (ATerm) ATinsert(ATinsert(ATempty, z_19), b_20)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  b_20 = ATgetArgument(t, 0);
                                  f_20 = ATgetArgument(t, 1);
                                  z_19 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, z_19)), b_20), (ATerm) ATmakeAppl(sym_Build_1, f_20)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      b_20 = ATgetArgument(t, 0);
                                      f_20 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_20, (ATerm) ATmakeAppl(sym_Match_1, f_20));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          b_20 = ATgetArgument(t, 0);
                                          f_20 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_20), f_20);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              b_20 = ATgetArgument(t, 0);
                                              f_20 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_20), b_20);
                                        }
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
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      c_24 = ATgetArgument(t, 0);
      t = c_24;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_i_11;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          c_24 = ATgetArgument(t, 0);
          t = c_24;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_q_13;
        }
      else
        {
          ATerm u_13 = t;
          int v_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  c_24 = ATgetArgument(t, 0);
                  {
                    ATerm w_13 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(v_13);
              t = c_24;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_i_11;
            }
          else
            {
              t = u_13;
              {
                ATerm x_13 = t;
                int y_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm z_13 = ATgetArgument(t, 0);
                        d_24 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(y_13);
                    t = d_24;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                    t = term_i_11;
                  }
                else
                  {
                    t = x_13;
                    {
                      ATerm a_14 = t;
                      int b_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm c_14 = ATgetArgument(t, 0);
                              d_24 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(b_14);
                          t = d_24;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_i_11;
                        }
                      else
                        {
                          t = a_14;
                          if(match_cons(t, sym_Some_1))
                            {
                              c_24 = ATgetArgument(t, 0);
                              t = c_24;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_i_11;
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  c_24 = ATgetArgument(t, 0);
                                  t = c_24;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_i_11;
                                }
                              else
                                {
                                  ATerm d_14 = t;
                                  int e_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm f_14 = ATgetArgument(t, 0);
                                          d_24 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(e_14);
                                      t = d_24;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                      t = term_i_11;
                                    }
                                  else
                                    {
                                      t = d_14;
                                      {
                                        ATerm g_14 = t;
                                        int h_14 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm i_14 = ATgetArgument(t, 0);
                                                d_24 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(h_14);
                                            t = d_24;
                                            t = fetch_1_0(j_3, t);
                                            t = term_i_11;
                                          }
                                        else
                                          {
                                            t = g_14;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                c_24 = ATgetArgument(t, 0);
                                                d_24 = ATgetArgument(t, 1);
                                                t = d_24;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = c_24;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm j_14 = t;
                                                        int k_14 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = d_24;
                                                            ;
                                                            LocalPopChoice(k_14);
                                                          }
                                                        else
                                                          {
                                                            t = j_14;
                                                            t = c_24;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = c_24;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = c_24;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = d_24;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    c_24 = ATgetArgument(t, 0);
                                                    d_24 = ATgetArgument(t, 1);
                                                    t = d_24;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = c_24;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm l_14 = t;
                                                            int m_14 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = d_24;
                                                                ;
                                                                LocalPopChoice(m_14);
                                                              }
                                                            else
                                                              {
                                                                t = l_14;
                                                                t = c_24;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = c_24;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = c_24;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = d_24;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        c_24 = ATgetArgument(t, 0);
                                                        t = c_24;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = term_i_11;
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            c_24 = ATgetArgument(t, 0);
                                                            d_24 = ATgetArgument(t, 1);
                                                            e_24 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = e_24;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, c_24, d_24);
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                    }
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
ATerm ElimId_0_0 (ATerm t)
{
  ATerm y_25 = NULL,a_26 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      a_26 = ATgetArgument(t, 0);
      t = a_26;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_q_13;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          a_26 = ATgetArgument(t, 0);
          t = a_26;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_i_11;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              a_26 = ATgetArgument(t, 0);
              y_25 = ATgetArgument(t, 1);
              t = y_25;
              if(match_cons(t, sym_Id_0))
                {
                  t = a_26;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm n_14 = t;
                      int o_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = y_25;
                          ;
                          LocalPopChoice(o_14);
                        }
                      else
                        {
                          t = n_14;
                          t = a_26;
                        }
                    }
                  else
                    {
                      t = a_26;
                    }
                }
              else
                {
                  t = a_26;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = y_25;
                }
            }
          else
            {
              ATerm p_14 = t;
              int q_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      a_26 = ATgetArgument(t, 0);
                      {
                        ATerm r_14 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(q_14);
                  t = a_26;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_q_13;
                }
              else
                {
                  t = p_14;
                  {
                    ATerm s_14 = t;
                    int t_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm v_14 = ATgetArgument(t, 0);
                            y_25 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(t_14);
                        t = y_25;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        t = term_q_13;
                      }
                    else
                      {
                        t = s_14;
                        {
                          ATerm w_14 = t;
                          int y_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm d_15 = ATgetArgument(t, 0);
                                  y_25 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(y_14);
                              t = y_25;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_q_13;
                            }
                          else
                            {
                              t = w_14;
                              if(match_cons(t, sym_All_1))
                                {
                                  a_26 = ATgetArgument(t, 0);
                                  t = a_26;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_q_13;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      a_26 = ATgetArgument(t, 0);
                                      t = a_26;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                      t = term_q_13;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          a_26 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = a_26;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_q_13;
                                    }
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
ATerm Simplify_0_0 (ATerm t)
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(f_15);
    }
  else
    {
      t = e_15;
      {
        ATerm g_15 = t;
        int h_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(h_15);
          }
        else
          {
            t = g_15;
            {
              ATerm i_15 = t;
              int k_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(k_15);
                }
              else
                {
                  t = i_15;
                  {
                    ATerm l_15 = t;
                    int m_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(m_15);
                      }
                    else
                      {
                        t = l_15;
                        {
                          ATerm n_15 = t;
                          int o_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(o_15);
                            }
                          else
                            {
                              t = n_15;
                              {
                                ATerm p_15 = t;
                                int q_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_26 = NULL,v_26 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        u_26 = ATgetArgument(t, 0);
                                        v_26 = ATgetArgument(t, 1);
                                        t = u_26;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = v_26;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            u_26 = ATgetArgument(t, 0);
                                            v_26 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = u_26;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = v_26;
                                      }
                                    ;
                                    LocalPopChoice(q_15);
                                  }
                                else
                                  {
                                    t = p_15;
                                    {
                                      ATerm x_15 = t;
                                      int y_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(y_15);
                                        }
                                      else
                                        {
                                          t = x_15;
                                          {
                                            ATerm z_15 = t;
                                            int a_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(a_16);
                                              }
                                            else
                                              {
                                                t = z_15;
                                                {
                                                  ATerm z_26 = NULL,a_27 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      z_26 = ATgetArgument(t, 0);
                                                      a_27 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = z_26;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = a_27;
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_1_0 (ATerm m_131 (ATerm), ATerm t)
{
  ATerm c_27 (ATerm t)
  {
    ATerm b_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_131(t);
        t = c_27(t);
        ;
        LocalPopChoice(c_16);
      }
    else
      {
        t = b_16;
      }
    return(t);
  }
  t = c_27(t);
  return(t);
}
ATerm downup_1_0 (ATerm r_114 (ATerm), ATerm t)
{
  t = r_114(t);
  {
    ATerm k_3 (ATerm t)
    {
      t = downup_1_0(r_114, t);
      return(t);
    }
    t = SRTS_all(k_3, t);
    t = r_114(t);
  }
  return(t);
}
ATerm TopLevel_0_0 (ATerm t)
{
  ATerm m_27 = NULL;
  m_27 = t;
  {
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_4 = NULL,s_4 = NULL;
        t = term_f_16;
        r_4 = t;
        t = SSL_table_get(r_4, m_27);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_4 = ATgetFirst((ATermList) t);
            {
              ATerm g_16 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = s_4;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm h_16 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_16) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = term_w_0;
        ;
        LocalPopChoice(e_16);
      }
    else
      {
        t = d_16;
        {
          ATerm y_4 = NULL,z_4 = NULL;
          t = term_f_16;
          y_4 = t;
          t = SSL_table_get(y_4, m_27);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_4 = ATgetFirst((ATermList) t);
              {
                ATerm i_16 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = z_4;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm k_16 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) k_16) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = term_w_0;
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm g_127 (ATerm), ATerm t)
{
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(m_16);
    }
  else
    {
      t = l_16;
      {
        ATerm n_16 = t;
        int o_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              t = filter_1_0(g_127, t);
              return(t);
            }
            t = Cons_2_0(g_127, l_3, t);
            ;
            LocalPopChoice(o_16);
          }
        else
          {
            t = n_16;
            {
              ATerm s_27 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm p_16 = ATgetFirst((ATermList) t);
                  s_27 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = s_27;
              t = filter_1_0(g_127, t);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2_0 (ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,q_0 = NULL,r_0 = NULL;
  z_27 = t;
  if(match_cons(t, sym_Rec_2))
    {
      v_27 = ATgetArgument(t, 0);
      w_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_27);
  u_27 = t;
  t = v_27;
  t = b_104(t);
  x_27 = t;
  t = w_27;
  t = c_104(t);
  y_27 = t;
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, x_27, y_27);
  q_0 = t;
  t = SSLsetAnnotations(q_0, u_27);
  return(t);
}
ATerm SDef_3_0 (ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,u_0 = NULL,v_0 = NULL;
  j_28 = t;
  if(match_cons(t, sym_SDef_3))
    {
      d_28 = ATgetArgument(t, 0);
      e_28 = ATgetArgument(t, 1);
      f_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_28);
  c_28 = t;
  t = d_28;
  t = t_105(t);
  g_28 = t;
  t = e_28;
  t = u_105(t);
  h_28 = t;
  t = f_28;
  t = v_105(t);
  i_28 = t;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, g_28, h_28, i_28);
  u_0 = t;
  t = SSLsetAnnotations(u_0, c_28);
  return(t);
}
ATerm Let_2_0 (ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,y_0 = NULL,z_0 = NULL;
  r_28 = t;
  if(match_cons(t, sym_Let_2))
    {
      n_28 = ATgetArgument(t, 0);
      o_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_28);
  m_28 = t;
  t = n_28;
  t = e_103(t);
  p_28 = t;
  t = o_28;
  t = f_103(t);
  q_28 = t;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, p_28, q_28);
  y_0 = t;
  t = SSLsetAnnotations(y_0, m_28);
  return(t);
}
ATerm sboundin_3_0 (ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm t)
{
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(u_113, u_113, t);
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
            t = SDef_3_0(w_113, w_113, u_113, t);
            ;
            LocalPopChoice(t_16);
          }
        else
          {
            t = s_16;
            {
              ATerm u_16 = t;
              int v_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(w_113, w_113, w_113, u_113, t);
                  ;
                  LocalPopChoice(v_16);
                }
              else
                {
                  t = u_16;
                  t = Rec_2_0(w_113, u_113, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm x_28 = NULL;
  ATerm w_16 = t;
  int x_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          x_28 = ATgetArgument(t, 0);
          {
            ATerm y_16 = ATgetArgument(t, 1);
          }
          {
            ATerm z_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_16);
      t = x_28;
    }
  else
    {
      t = w_16;
      if(match_cons(t, sym_SDefT_4))
        {
          x_28 = ATgetArgument(t, 0);
          {
            ATerm a_17 = ATgetArgument(t, 1);
          }
          {
            ATerm b_17 = ATgetArgument(t, 2);
          }
          {
            ATerm c_17 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = x_28;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm v_28 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      v_28 = ATgetArgument(t, 0);
      {
        ATerm e_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_28;
  t = map_1_0(m_3, t);
  return(t);
}
ATerm foldr_3_0 (ATerm t_125 (ATerm), ATerm u_125 (ATerm), ATerm v_125 (ATerm), ATerm t)
{
  ATerm i_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_125(t);
      ;
      LocalPopChoice(l_17);
    }
  else
    {
      t = i_17;
      {
        ATerm f_29 = NULL,g_29 = NULL,j_29 = NULL,k_29 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_29 = ATgetFirst((ATermList) t);
            g_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_29;
        t = v_125(t);
        j_29 = t;
        t = g_29;
        t = foldr_3_0(t_125, u_125, v_125, t);
        k_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_29, k_29);
        t = u_125(t);
      }
    }
  return(t);
}
ATerm diff_1_0 (ATerm y_122 (ATerm), ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL;
  if(match_cons(t, sym__2))
    {
      n_29 = ATgetArgument(t, 0);
      o_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_29;
  {
    ATerm p_29 (ATerm t)
    {
      ATerm m_17 = t;
      int o_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(o_17);
        }
      else
        {
          t = m_17;
          {
            ATerm q_17 = t;
            int r_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_5 = NULL,c_5 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    b_5 = ATgetFirst((ATermList) t);
                    c_5 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = o_29;
                {
                  ATerm o_3 (ATerm t)
                  {
                    ATerm d_5 = NULL;
                    d_5 = t;
                    t = (ATerm) ATmakeAppl(sym__2, b_5, d_5);
                    t = y_122(t);
                    return(t);
                  }
                  t = fetch_1_0(o_3, t);
                  t = c_5;
                  t = p_29(t);
                }
                ;
                LocalPopChoice(r_17);
              }
            else
              {
                t = q_17;
                t = Cons_2_0(_id, p_29, t);
              }
          }
        }
      return(t);
    }
    t = p_29(t);
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_17 = ATgetArgument(t, 0);
      if(((ATgetType(s_17) != AT_LIST) || !(ATisEmpty(s_17))))
        _fail(t);
      {
        ATerm t_17 = ATgetArgument(t, 1);
        if(((ATgetType(t_17) != AT_LIST) || !(ATisEmpty(t_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_17 = ATgetArgument(t, 0);
      if(((ATgetType(u_17) == AT_LIST) && !(ATisEmpty(u_17))))
        {
          x_29 = ATgetFirst((ATermList) u_17);
          z_29 = (ATerm) ATgetNext((ATermList) u_17);
        }
      else
        _fail(t);
      {
        ATerm v_17 = ATgetArgument(t, 1);
        if(((ATgetType(v_17) == AT_LIST) && !(ATisEmpty(v_17))))
          {
            y_29 = ATgetFirst((ATermList) v_17);
            a_30 = (ATerm) ATgetNext((ATermList) v_17);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_29, y_29), (ATerm) ATmakeAppl(sym__2, z_29, a_30));
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL;
  if(match_cons(t, sym__2))
    {
      b_30 = ATgetArgument(t, 0);
      c_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_30), b_30);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_17 = ATgetFirst((ATermList) t);
      if(match_cons(w_17, sym__2))
        {
          q_29 = ATgetArgument(w_17, 0);
          r_29 = ATgetArgument(w_17, 1);
        }
      else
        _fail(t);
      s_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(r_29);
  if(match_cons(t, sym__2))
    {
      t_29 = ATgetArgument(t, 0);
      u_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_29);
  if(match_cons(t, sym__2))
    {
      if((t_29 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      v_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_29, u_29);
  t = genzip_4_0(p_3, q_3, r_3, _id, t);
  w_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_29, s_29);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm b_132 (ATerm), ATerm c_132 (ATerm), ATerm t)
{
  ATerm d_30 (ATerm t)
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_132(t);
        ;
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        t = c_132(t);
        t = d_30(t);
      }
    return(t);
  }
  t = d_30(t);
  return(t);
}
ATerm for_3_0 (ATerm e_132 (ATerm), ATerm f_132 (ATerm), ATerm g_132 (ATerm), ATerm t)
{
  t = e_132(t);
  t = while_not_2_0(f_132, g_132, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm i_30 = NULL;
  i_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, i_30);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = _2_0(_id, x_3, t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, y_3, t);
      ;
      LocalPopChoice(a_18);
    }
  else
    {
      t = z_17;
      {
        ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL;
        if(match_cons(t, sym__2))
          {
            r_30 = ATgetArgument(t, 0);
            s_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_30;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_30 = ATgetFirst((ATermList) t);
            u_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_30), t_30), u_30);
      }
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm b_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_30 = ATgetFirst((ATermList) t);
          n_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_30;
      if(match_cons(t, sym__2))
        {
          l_30 = ATgetArgument(t, 0);
          m_30 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_30;
      if((l_30 != t))
        {
          _fail(t);
        }
      t = n_30;
      ;
      LocalPopChoice(c_18);
    }
  else
    {
      t = b_18;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm y_30 = NULL;
  if(match_cons(t, sym__2))
    {
      y_30 = ATgetArgument(t, 0);
      if((y_30 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(s_3, v_3, w_3, t);
      ;
      LocalPopChoice(e_18);
    }
  else
    {
      t = d_18;
      t = diff_1_0(a_4, t);
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = union_1_0(i_4, t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm q_5 = NULL;
  if(match_cons(t, sym__2))
    {
      q_5 = ATgetArgument(t, 0);
      if((q_5 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = union_1_0(q_4, t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm w_5 = NULL;
  if(match_cons(t, sym__2))
    {
      w_5 = ATgetArgument(t, 0);
      if((w_5 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm v_129 (ATerm), ATerm w_129 (ATerm), ATerm x_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm e_31 (ATerm t)
  {
    ATerm f_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_129(t);
        ;
        LocalPopChoice(j_18);
      }
    else
      {
        t = f_18;
        {
          ATerm k_18 = t;
          int l_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_30 = NULL,b_31 = NULL,l_5 = NULL,m_5 = NULL;
              z_30 = t;
              t = w_129(t);
              b_31 = t;
              t = z_30;
              {
                ATerm b_4 (ATerm t)
                {
                  ATerm h_5 = NULL;
                  t = e_31(t);
                  h_5 = t;
                  t = (ATerm) ATmakeAppl(sym__2, h_5, b_31);
                  t = diff_0_0(t);
                  return(t);
                }
                t = x_129(b_4, e_31, c_4, t);
                l_5 = t;
                t = SSL_explode_term(l_5);
                if(match_cons(t, sym__2))
                  {
                    ATerm n_18 = ATgetArgument(t, 0);
                    m_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_5;
                t = foldr_3_0(e_4, f_4, _id, t);
              }
              ;
              LocalPopChoice(l_18);
            }
          else
            {
              t = k_18;
              {
                ATerm r_5 = NULL,s_5 = NULL;
                r_5 = t;
                t = SSL_explode_term(r_5);
                if(match_cons(t, sym__2))
                  {
                    ATerm o_18 = ATgetArgument(t, 0);
                    s_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_5;
                t = foldr_3_0(m_4, p_4, e_31, t);
              }
            }
        }
      }
    return(t);
  }
  t = e_31(t);
  return(t);
}
ATerm DynamicRules_1_0 (ATerm l_102 (ATerm), ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,b_1 = NULL,c_1 = NULL;
  i_31 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      g_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_31);
  f_31 = t;
  t = g_31;
  t = l_102(t);
  h_31 = t;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym_DynamicRules_1, h_31);
  b_1 = t;
  t = SSLsetAnnotations(b_1, f_31);
  return(t);
}
ATerm RDefT_4_0 (ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm e_102 (ATerm), ATerm f_102 (ATerm), ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,f_1 = NULL,g_1 = NULL;
  u_31 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      m_31 = ATgetArgument(t, 0);
      n_31 = ATgetArgument(t, 1);
      o_31 = ATgetArgument(t, 2);
      p_31 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_31);
  l_31 = t;
  t = m_31;
  t = c_102(t);
  q_31 = t;
  t = n_31;
  t = d_102(t);
  r_31 = t;
  t = o_31;
  t = e_102(t);
  s_31 = t;
  t = p_31;
  t = f_102(t);
  t_31 = t;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_RDefT_4, q_31, r_31, s_31, t_31);
  f_1 = t;
  t = SSLsetAnnotations(f_1, l_31);
  return(t);
}
ATerm SDefT_4_0 (ATerm w_105 (ATerm), ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_1 = NULL,k_1 = NULL;
  g_32 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      y_31 = ATgetArgument(t, 0);
      z_31 = ATgetArgument(t, 1);
      a_32 = ATgetArgument(t, 2);
      b_32 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_32);
  x_31 = t;
  t = y_31;
  t = w_105(t);
  c_32 = t;
  t = z_31;
  t = x_105(t);
  d_32 = t;
  t = a_32;
  t = y_105(t);
  e_32 = t;
  t = b_32;
  t = z_105(t);
  f_32 = t;
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, c_32, d_32, e_32, f_32);
  h_1 = t;
  t = SSLsetAnnotations(h_1, x_31);
  return(t);
}
ATerm Scope_2_0 (ATerm o_103 (ATerm), ATerm p_103 (ATerm), ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,l_1 = NULL,m_1 = NULL;
  o_32 = t;
  if(match_cons(t, sym_Scope_2))
    {
      k_32 = ATgetArgument(t, 0);
      l_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_32);
  j_32 = t;
  t = k_32;
  t = o_103(t);
  m_32 = t;
  t = l_32;
  t = p_103(t);
  n_32 = t;
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, m_32, n_32);
  l_1 = t;
  t = SSLsetAnnotations(l_1, j_32);
  return(t);
}
ATerm tboundin_3_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm t)
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(s_113, q_113, t);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      {
        ATerm r_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(s_113, s_113, s_113, q_113, t);
            ;
            LocalPopChoice(s_18);
          }
        else
          {
            t = r_18;
            {
              ATerm t_18 = t;
              int u_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(s_113, s_113, s_113, q_113, t);
                  ;
                  LocalPopChoice(u_18);
                }
              else
                {
                  t = t_18;
                  t = DynamicRules_1_0(q_113, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm u_32 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_32);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(w_18);
    }
  else
    {
      t = v_18;
      {
        ATerm w_32 = NULL,y_32 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            w_32 = ATgetArgument(t, 0);
            t = w_32;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm x_18 = t;
            int y_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm z_18 = ATgetArgument(t, 0);
                    ATerm a_19 = ATgetArgument(t, 1);
                    y_32 = ATgetArgument(t, 2);
                    {
                      ATerm b_19 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(y_18);
                t = y_32;
                t = map_1_0(v_4, t);
              }
            else
              {
                t = x_18;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm c_19 = ATgetArgument(t, 0);
                    ATerm d_19 = ATgetArgument(t, 1);
                    y_32 = ATgetArgument(t, 2);
                    {
                      ATerm e_19 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = y_32;
                t = map_1_0(w_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm e_33 = NULL;
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_33 = ATgetArgument(t, 0);
          {
            ATerm h_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_19);
      t = e_33;
    }
  else
    {
      t = f_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_33;
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm k_33 = NULL;
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_33 = ATgetArgument(t, 0);
          {
            ATerm k_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_19);
      t = k_33;
    }
  else
    {
      t = i_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_33;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(t_4, u_4, tboundin_3_0, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm z_33 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_33);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      {
        ATerm b_34 = NULL,d_34 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            b_34 = ATgetArgument(t, 0);
            t = b_34;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm n_19 = t;
            int o_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm p_19 = ATgetArgument(t, 0);
                    ATerm q_19 = ATgetArgument(t, 1);
                    d_34 = ATgetArgument(t, 2);
                    {
                      ATerm r_19 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(o_19);
                t = d_34;
                t = map_1_0(e_5, t);
              }
            else
              {
                t = n_19;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm s_19 = ATgetArgument(t, 0);
                    ATerm t_19 = ATgetArgument(t, 1);
                    d_34 = ATgetArgument(t, 2);
                    {
                      ATerm w_19 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = d_34;
                t = map_1_0(f_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm j_34 = NULL;
  ATerm x_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_34 = ATgetArgument(t, 0);
          {
            ATerm c_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_20);
      t = j_34;
    }
  else
    {
      t = x_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_34;
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm p_34 = NULL;
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_34 = ATgetArgument(t, 0);
          {
            ATerm g_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_20);
      t = p_34;
    }
  else
    {
      t = d_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_34;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm s_33 = NULL,w_33 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      w_33 = ATgetArgument(t, 0);
      t = w_33;
      if(match_cons(t, sym_Rule_3))
        {
          s_33 = ATgetArgument(t, 0);
          {
            ATerm h_20 = ATgetArgument(t, 1);
          }
          {
            ATerm i_20 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = s_33;
      t = free_vars_3_0(x_4, a_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          w_33 = ATgetArgument(t, 0);
          {
            ATerm j_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = w_33;
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm c_35 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_35);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm k_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(l_20);
    }
  else
    {
      t = k_20;
      {
        ATerm e_35 = NULL,g_35 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            e_35 = ATgetArgument(t, 0);
            t = e_35;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm m_20 = t;
            int n_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm o_20 = ATgetArgument(t, 0);
                    ATerm p_20 = ATgetArgument(t, 1);
                    g_35 = ATgetArgument(t, 2);
                    {
                      ATerm q_20 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(n_20);
                t = g_35;
                t = map_1_0(j_5, t);
              }
            else
              {
                t = m_20;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm r_20 = ATgetArgument(t, 0);
                    ATerm s_20 = ATgetArgument(t, 1);
                    g_35 = ATgetArgument(t, 2);
                    {
                      ATerm t_20 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = g_35;
                t = map_1_0(k_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm m_35 = NULL;
  ATerm u_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_35 = ATgetArgument(t, 0);
          {
            ATerm y_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_20);
      t = m_35;
    }
  else
    {
      t = u_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_35;
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm s_35 = NULL;
  ATerm a_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_35 = ATgetArgument(t, 0);
          {
            ATerm d_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_21);
      t = s_35;
    }
  else
    {
      t = a_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_35;
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm v_35 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      v_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_35);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(f_21);
    }
  else
    {
      t = e_21;
      {
        ATerm x_35 = NULL,y_35 = NULL;
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm i_21 = ATgetArgument(t, 0);
                y_35 = ATgetArgument(t, 1);
                {
                  ATerm k_21 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(h_21);
            t = y_35;
            t = map_1_0(p_5, t);
          }
        else
          {
            t = g_21;
            {
              ATerm l_21 = t;
              int m_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      x_35 = ATgetArgument(t, 0);
                      {
                        ATerm n_21 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(m_21);
                  t = (ATerm) ATinsert(ATempty, x_35);
                }
              else
                {
                  t = l_21;
                  {
                    ATerm o_21 = t;
                    int p_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm s_21 = ATgetArgument(t, 0);
                            y_35 = ATgetArgument(t, 1);
                            {
                              ATerm t_21 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm u_21 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(p_21);
                        t = y_35;
                        t = map_1_0(t_5, t);
                      }
                    else
                      {
                        t = o_21;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm v_21 = ATgetArgument(t, 0);
                            y_35 = ATgetArgument(t, 1);
                            {
                              ATerm w_21 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm y_21 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = y_35;
                        t = map_1_0(u_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm e_36 = NULL;
  ATerm z_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_36 = ATgetArgument(t, 0);
          {
            ATerm b_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_22);
      t = e_36;
    }
  else
    {
      t = z_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_36;
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm l_36 = NULL;
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_36 = ATgetArgument(t, 0);
          {
            ATerm h_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_22);
      t = l_36;
    }
  else
    {
      t = c_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_36;
    }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm r_36 = NULL;
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_36 = ATgetArgument(t, 0);
          {
            ATerm l_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_22);
      t = r_36;
    }
  else
    {
      t = i_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_36;
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm m_22 = t;
  if((PushChoice() == 0))
    {
      t = TopLevel_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_22;
    }
  return(t);
}
ATerm SuperCombinator_0_0 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL;
  a_35 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm n_22 = ATgetArgument(t, 0);
      ATerm o_22 = ATgetArgument(t, 1);
      ATerm p_22 = ATgetArgument(t, 2);
      ATerm q_22 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  b_35 = t;
  t = a_35;
  t = free_vars_3_0(g_5, i_5, tboundin_3_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = a_35;
  t = free_vars_3_0(n_5, o_5, sboundin_3_0, t);
  t = filter_1_0(v_5, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = b_35;
  return(t);
}
ATerm partition_1_0 (ATerm o_127 (ATerm), ATerm t)
{
  ATerm i_37 (ATerm t)
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = term_t_22;
        ;
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
        {
          ATerm u_22 = t;
          int v_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,y_5 = NULL,b_6 = NULL;
              ATerm x_5 (ATerm t)
              {
                t = o_127(t);
                if(((y_36 != NULL) && (y_36 != t)))
                  _fail(t);
                else
                  y_36 = t;
                return(t);
              }
              t = Cons_2_0(x_5, _id, t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm w_22 = ATgetFirst((ATermList) t);
                  z_36 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = z_36;
              t = i_37(t);
              a_37 = t;
              t = SSL_explode_term(a_37);
              if(match_cons(t, sym__2))
                {
                  ATerm x_22 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) x_22) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm y_22 = ATgetArgument(t, 1);
                    if(((ATgetType(y_22) == AT_LIST) && !(ATisEmpty(y_22))))
                      {
                        y_5 = ATgetFirst((ATermList) y_22);
                        {
                          ATerm z_22 = (ATerm) ATgetNext((ATermList) y_22);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(a_37);
              if(match_cons(t, sym__2))
                {
                  ATerm a_23 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) a_23) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm b_23 = ATgetArgument(t, 1);
                    if(((ATgetType(b_23) == AT_LIST) && !(ATisEmpty(b_23))))
                      {
                        ATerm c_23 = ATgetFirst((ATermList) b_23);
                        ATerm d_23 = (ATerm) ATgetNext((ATermList) b_23);
                        if(((ATgetType(d_23) == AT_LIST) && !(ATisEmpty(d_23))))
                          {
                            b_6 = ATgetFirst((ATermList) d_23);
                            {
                              ATerm e_23 = (ATerm) ATgetNext((ATermList) d_23);
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_5), not_null(y_36)), b_6);
              ;
              LocalPopChoice(v_22);
            }
          else
            {
              t = u_22;
              {
                ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,e_6 = NULL,g_6 = NULL;
                ATerm z_5 (ATerm t)
                {
                  if(((d_37 != NULL) && (d_37 != t)))
                    _fail(t);
                  else
                    d_37 = t;
                  return(t);
                }
                t = Cons_2_0(z_5, _id, t);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm f_23 = ATgetFirst((ATermList) t);
                    e_37 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = e_37;
                t = i_37(t);
                f_37 = t;
                t = SSL_explode_term(f_37);
                if(match_cons(t, sym__2))
                  {
                    ATerm g_23 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) g_23) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm h_23 = ATgetArgument(t, 1);
                      if(((ATgetType(h_23) == AT_LIST) && !(ATisEmpty(h_23))))
                        {
                          e_6 = ATgetFirst((ATermList) h_23);
                          {
                            ATerm i_23 = (ATerm) ATgetNext((ATermList) h_23);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(f_37);
                if(match_cons(t, sym__2))
                  {
                    ATerm j_23 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) j_23) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm k_23 = ATgetArgument(t, 1);
                      if(((ATgetType(k_23) == AT_LIST) && !(ATisEmpty(k_23))))
                        {
                          ATerm l_23 = ATgetFirst((ATermList) k_23);
                          ATerm m_23 = (ATerm) ATgetNext((ATermList) k_23);
                          if(((ATgetType(m_23) == AT_LIST) && !(ATisEmpty(m_23))))
                            {
                              g_6 = ATgetFirst((ATermList) m_23);
                              {
                                ATerm n_23 = (ATerm) ATgetNext((ATermList) m_23);
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
                t = (ATerm) ATmakeAppl(sym__2, e_6, (ATerm) ATinsert(CheckATermList(g_6), not_null(d_37)));
              }
            }
        }
      }
    return(t);
  }
  t = i_37(t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      p_37 = ATgetArgument(t, 0);
      q_37 = ATgetArgument(t, 1);
      r_37 = ATgetArgument(t, 2);
      s_37 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_37, term_p_23);
  t = assert_1_0(c_6, t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, p_37, q_37, r_37, s_37);
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_f_16;
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = repeat_1_0(f_6, t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      {
        ATerm s_23 = t;
        int t_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                u_37 = ATgetArgument(t, 0);
                v_37 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = v_37;
            if(match_cons(t, sym_Let_2))
              {
                w_37 = ATgetArgument(t, 0);
                x_37 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, w_37, (ATerm) ATmakeAppl(sym_Seq_2, u_37, x_37));
            ;
            LocalPopChoice(t_23);
          }
        else
          {
            t = s_23;
            {
              ATerm u_23 = t;
              int v_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL;
                  if(match_cons(t, sym_Scope_2))
                    {
                      h_6 = ATgetArgument(t, 0);
                      {
                        ATerm w_23 = ATgetArgument(t, 1);
                        if(match_cons(w_23, sym_Scope_2))
                          {
                            i_6 = ATgetArgument(w_23, 0);
                            j_6 = ATgetArgument(w_23, 1);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, h_6, i_6);
                  t = conc_0_0(t);
                  k_6 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, k_6, j_6);
                  ;
                  LocalPopChoice(v_23);
                }
              else
                {
                  t = u_23;
                  {
                    ATerm x_23 = t;
                    int y_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(y_23);
                      }
                    else
                      {
                        t = x_23;
                        t = TestSavesCurrentTerm_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm LiftFromLet_0_0 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      l_37 = ATgetArgument(t, 0);
      m_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_37;
  t = partition_1_0(SuperCombinator_0_0, t);
  if(match_cons(t, sym__2))
    {
      n_37 = ATgetArgument(t, 0);
      o_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_37;
  t = map_1_0(a_6, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Let_2, o_37, m_37), n_37);
  t = downup_1_0(d_6, t);
  return(t);
}
ATerm union_1_0 (ATerm d_123 (ATerm), ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL;
  if(match_cons(t, sym__2))
    {
      e_38 = ATgetArgument(t, 0);
      f_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_38;
  {
    ATerm g_38 (ATerm t)
    {
      ATerm z_23 = t;
      int a_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = f_38;
          ;
          LocalPopChoice(a_24);
        }
      else
        {
          t = z_23;
          {
            ATerm b_24 = t;
            int f_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_6 = NULL,m_6 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    l_6 = ATgetFirst((ATermList) t);
                    m_6 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = f_38;
                {
                  ATerm o_6 (ATerm t)
                  {
                    ATerm n_6 = NULL;
                    n_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, l_6, n_6);
                    t = d_123(t);
                    return(t);
                  }
                  t = fetch_1_0(o_6, t);
                  t = m_6;
                  t = g_38(t);
                }
                ;
                LocalPopChoice(f_24);
              }
            else
              {
                t = b_24;
                t = Cons_2_0(_id, g_38, t);
              }
          }
        }
      return(t);
    }
    t = g_38(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm b_119 (ATerm), ATerm c_119 (ATerm), ATerm d_119 (ATerm), ATerm e_119 (ATerm), ATerm t)
{
  ATerm h_38 (ATerm t)
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_119(t);
        ;
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        t = c_119(t);
        t = _2_0(e_119, h_38, t);
        t = d_119(t);
      }
    return(t);
  }
  t = h_38(t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_t_22;
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_38 = ATgetFirst((ATermList) t);
      w_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_38, w_38);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_24 = ATgetArgument(t, 0);
      if(match_cons(i_24, sym__2))
        {
          x_38 = ATgetArgument(i_24, 0);
          z_38 = ATgetArgument(i_24, 1);
        }
      else
        _fail(t);
      {
        ATerm j_24 = ATgetArgument(t, 1);
        if(match_cons(j_24, sym__2))
          {
            y_38 = ATgetArgument(j_24, 0);
            a_39 = ATgetArgument(j_24, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_38), x_38), (ATerm) ATinsert(CheckATermList(a_39), z_38));
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = union_1_0(v_6, t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm b_39 = NULL;
  if(match_cons(t, sym__2))
    {
      b_39 = ATgetArgument(t, 0);
      if((b_39 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm c_39 = NULL;
  if(match_cons(t, sym__2))
    {
      c_39 = ATgetArgument(t, 0);
      if((c_39 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL;
  i_38 = t;
  j_38 = t;
  t = SSL_explode_term(j_38);
  if(match_cons(t, sym__2))
    {
      l_38 = ATgetArgument(t, 0);
      m_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_38);
  n_38 = t;
  t = m_38;
  t = genzip_4_0(p_6, r_6, s_6, a_124, t);
  if(match_cons(t, sym__2))
    {
      o_38 = ATgetArgument(t, 0);
      p_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(l_38, o_38);
  q_38 = t;
  t = SSLsetAnnotations(q_38, n_38);
  t = b_124(t);
  if(match_cons(t, sym__2))
    {
      r_38 = ATgetArgument(t, 0);
      s_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_38;
  t = foldr_2_0(t_6, u_6, t);
  t_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_38, t_38);
  t = union_1_0(w_6, t);
  u_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_38, u_38);
  return(t);
}
ATerm collect_split_1_0 (ATerm n_124 (ATerm), ATerm t)
{
  ATerm f_39 (ATerm t)
  {
    ATerm x_6 (ATerm t)
    {
      ATerm k_24 = t;
      int l_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_124(t);
          ;
          LocalPopChoice(l_24);
        }
      else
        {
          t = k_24;
          {
            ATerm d_39 = NULL;
            d_39 = t;
            t = (ATerm) ATmakeAppl(sym__2, d_39, (ATerm) ATempty);
          }
        }
      return(t);
    }
    t = CollectSplit_2_0(f_39, x_6, t);
    return(t);
  }
  t = f_39(t);
  return(t);
}
ATerm lift_sdefs_0_0 (ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      g_39 = ATgetArgument(t, 0);
      h_39 = ATgetArgument(t, 1);
      i_39 = ATgetArgument(t, 2);
      j_39 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = j_39;
  t = collect_split_1_0(LiftFromLet_0_0, t);
  if(match_cons(t, sym__2))
    {
      k_39 = ATgetArgument(t, 0);
      l_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_39, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, g_39, h_39, i_39, k_39)));
  t = conc_0_0(t);
  return(t);
}
ATerm assert_1_0 (ATerm c_127 (ATerm), ATerm t)
{
  ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  if(match_cons(t, sym__2))
    {
      m_39 = ATgetArgument(t, 0);
      n_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_127(t);
  o_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_39, m_39, n_39);
  t = table_push_0_0(t);
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_39 = NULL;
        t = term_o_24;
        t_39 = t;
        t = SSL_table_get(o_39, t_39);
        ;
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_39 = ATgetFirst((ATermList) t);
        q_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_o_24;
    r_39 = t;
    t = (ATerm) ATinsert(CheckATermList(q_39), (ATerm) ATinsert(CheckATermList(p_39), m_39));
    s_39 = t;
    t = SSL_table_put(o_39, r_39, s_39);
    t = (ATerm) ATmakeAppl(sym__2, m_39, n_39);
  }
  return(t);
}
ATerm Strategies_1_0 (ATerm r_98 (ATerm), ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,o_1 = NULL,p_1 = NULL;
  x_39 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_39);
  u_39 = t;
  t = v_39;
  t = r_98(t);
  w_39 = t;
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, w_39);
  o_1 = t;
  t = SSLsetAnnotations(o_1, u_39);
  return(t);
}
ATerm Specification_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  ATerm b_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,v_1 = NULL,w_1 = NULL;
  f_40 = t;
  if(match_cons(t, sym_Specification_1))
    {
      d_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_40);
  b_40 = t;
  t = d_40;
  t = w_98(t);
  e_40 = t;
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, e_40);
  v_1 = t;
  t = SSLsetAnnotations(v_1, b_40);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm u_40 = NULL;
  u_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_40, term_q_24);
  t = assert_1_0(z_6, t);
  t = u_40;
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_f_16;
  return(t);
}
ATerm declare_standard_strategies_0_0 (ATerm t)
{
  ATerm t_40 = NULL;
  t_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_24), term_r_24);
  t = map_1_0(y_6, t);
  t = t_40;
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = Cons_2_0(_id, b_7, t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = Cons_2_0(c_7, d_7, t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = Strategies_1_0(g_7, t);
  return(t);
}
ATerm d_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = map_1_0(h_7, t);
  t = map_1_0(lift_sdefs_0_0, t);
  t = concat_0_0(t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,y_40 = NULL,z_40 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      v_40 = ATgetArgument(t, 0);
      w_40 = ATgetArgument(t, 1);
      y_40 = ATgetArgument(t, 2);
      z_40 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_40, term_p_23);
  t = assert_1_0(i_7, t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, v_40, w_40, y_40, z_40);
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_f_16;
  return(t);
}
ATerm lift_definitions_0_0 (ATerm t)
{
  t = declare_standard_strategies_0_0(t);
  t = Specification_1_0(a_7, t);
  return(t);
}
ATerm _2_0 (ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,x_1 = NULL,y_1 = NULL;
  f_41 = t;
  if(match_cons(t, sym__2))
    {
      b_41 = ATgetArgument(t, 0);
      c_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_41);
  a_41 = t;
  t = b_41;
  t = y_93(t);
  d_41 = t;
  t = c_41;
  t = z_93(t);
  e_41 = t;
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_41, e_41);
  x_1 = t;
  t = SSLsetAnnotations(x_1, a_41);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm j_136 (ATerm), ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL;
  if(match_cons(t, sym__2))
    {
      i_41 = ATgetArgument(t, 0);
      j_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_41, term_t_24);
  t = open_stream_0_0(t);
  k_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_41, j_41);
  t = j_136(t);
  t = fclose_0_0(t);
  t = j_41;
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = fetch_1_0(o_7, t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = WriteToFile_1_0(p_7, t);
  return(t);
}
ATerm o_7 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,q_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_24 = ATgetArgument(t, 0);
      if(match_cons(u_24, sym_Stream_1))
        {
          n_41 = ATgetArgument(u_24, 0);
        }
      else
        _fail(t);
      o_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(n_41, o_41);
  q_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_41);
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = WriteToFile_1_0(r_7, t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm r_41 = NULL,t_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_24 = ATgetArgument(t, 0);
      if(match_cons(v_24, sym_Stream_1))
        {
          r_41 = ATgetArgument(v_24, 0);
        }
      else
        _fail(t);
      t_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(r_41, t_41);
  v_41 = t;
  t = term_w_24;
  w_41 = t;
  t = SSL_fputc(w_41, v_41);
  x_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_41);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL;
  l_41 = t;
  {
    ATerm j_7 (ATerm t)
    {
      ATerm x_24 = t;
      int y_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_7 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((m_41 != NULL) && (m_41 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_41 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(k_7, t);
          ;
          LocalPopChoice(y_24);
        }
      else
        {
          t = x_24;
          t = term_z_24;
          if(((m_41 != NULL) && (m_41 != t)))
            _fail(t);
          else
            m_41 = t;
        }
      return(t);
    }
    t = _2_0(j_7, _id, t);
    t = l_41;
    {
      ATerm l_7 (ATerm t)
      {
        ATerm q_6 = NULL;
        q_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_41), q_6);
        return(t);
      }
      t = _2_0(_id, l_7, t);
      {
        ATerm a_25 = t;
        int b_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(m_7, n_7, t);
            ;
            LocalPopChoice(b_25);
          }
        else
          {
            t = a_25;
            t = _2_0(_id, q_7, t);
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
ATerm apply_strategy_1_0 (ATerm l_139 (ATerm), ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL;
  y_41 = t;
  t = dtime_0_0(t);
  t = y_41;
  t = l_139(t);
  z_41 = t;
  t = dtime_0_0(t);
  a_42 = t;
  t = z_41;
  if(match_cons(t, sym__2))
    {
      b_42 = ATgetArgument(t, 0);
      c_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_42), (ATerm) ATmakeAppl(sym_Runtime_1, a_42)), c_42);
  return(t);
}
ATerm q_42 (ATerm k_42, ATerm t)
{
  t = SSL_fclose(k_42);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL;
  o_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_42 = ATgetArgument(t, 0);
      {
        ATerm c_25 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_42);
            ;
            LocalPopChoice(d_25);
          }
        else
          {
            t = c_25;
            t = q_42(o_42, t);
          }
      }
    }
  else
    {
      t = q_42(o_42, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_42 = NULL;
  t = SSL_stdin_stream();
  r_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_42);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_42 = NULL;
  t = SSL_stdout_stream();
  s_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_42);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_42 = NULL;
  t = SSL_stderr_stream();
  t_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_42);
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm b_43 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      b_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_43;
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm f_43 = NULL;
  f_43 = t;
  t = SSL_is_string(f_43);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_25 = ATgetArgument(t, 0);
      ATerm f_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_7 = NULL,f_7 = NULL;
        e_7 = t;
        t = SSL_explode_term(e_7);
        if(match_cons(t, sym__2))
          {
            ATerm i_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_25) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm j_25 = ATgetArgument(t, 1);
              if(((ATgetType(j_25) == AT_LIST) && !(ATisEmpty(j_25))))
                {
                  f_7 = ATgetFirst((ATermList) j_25);
                  {
                    ATerm k_25 = (ATerm) ATgetNext((ATermList) j_25);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = f_7;
        if(match_cons(t, sym_stderr_0))
          {
            t = f_7;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = f_7;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = f_7;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(h_25);
      }
    else
      {
        t = g_25;
        {
          ATerm l_25 = t;
          int m_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL;
              t = _2_0(s_7, _id, t);
              if(match_cons(t, sym__2))
                {
                  y_42 = ATgetArgument(t, 0);
                  z_42 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(y_42, z_42);
              a_43 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, a_43);
              ;
              LocalPopChoice(m_25);
            }
          else
            {
              t = l_25;
              {
                ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL;
                t = _2_0(t_7, _id, t);
                if(match_cons(t, sym__2))
                  {
                    c_43 = ATgetArgument(t, 0);
                    d_43 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(c_43, d_43);
                e_43 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, e_43);
              }
            }
        }
      }
  }
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL;
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_43 = NULL;
      j_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_43, term_q_25);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(p_25);
    }
  else
    {
      t = o_25;
      t = debug_1_0(u_7, t);
      _fail(t);
    }
  g_43 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(i_43);
  h_43 = t;
  t = g_43;
  t = fclose_0_0(t);
  t = h_43;
  return(t);
}
ATerm fetch_1_0 (ATerm a_121 (ATerm), ATerm t)
{
  ATerm o_43 (ATerm t)
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(a_121, _id, t);
        ;
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        t = Cons_2_0(_id, o_43, t);
      }
    return(t);
  }
  t = o_43(t);
  return(t);
}
ATerm debug_1_0 (ATerm h_136 (ATerm), ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL;
  p_43 = t;
  t = h_136(t);
  q_43 = t;
  t = term_e_10;
  r_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_43), q_43);
  s_43 = t;
  t = SSL_printnl(r_43, s_43);
  t = p_43;
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
    }
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_v_25;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_43 = NULL;
      z_43 = t;
      t = SSL_is_string(z_43);
      ;
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
      {
        ATerm z_25 = t;
        int b_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(v_7, t);
            ;
            LocalPopChoice(b_26);
          }
        else
          {
            t = z_25;
            {
              ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL;
              m_44 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_44 = ATgetArgument(t, 0);
                  t = n_44;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_44 = ATgetArgument(t, 0);
                      t = n_44;
                      {
                        ATerm c_26 = t;
                        int d_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(d_26);
                          }
                        else
                          {
                            t = c_26;
                            t = debug_1_0(w_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm z_7 = NULL,a_8 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_44 = ATgetArgument(t, 0);
                          o_44 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_44;
                      t = eval_config_0_0(t);
                      z_7 = t;
                      t = o_44;
                      t = eval_config_0_0(t);
                      a_8 = t;
                      t = SSL_strcat(z_7, a_8);
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
  ATerm t_44 = NULL,u_44 = NULL;
  t_44 = t;
  t = term_e_26;
  u_44 = t;
  t = SSL_table_get(u_44, t_44);
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_44 = NULL,w_44 = NULL;
        t = eval_config_0_0(t);
        v_44 = t;
        t = term_e_26;
        w_44 = t;
        t = SSL_table_put(w_44, t_44, v_44);
        t = v_44;
        ;
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm u_137 (ATerm), ATerm t)
{
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_44 = NULL,z_44 = NULL;
      x_44 = t;
      t = term_j_26;
      t = get_config_0_0(t);
      z_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_44, term_k_26);
      t = geq_0_0(t);
      t = x_44;
      t = u_137(t);
      ;
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
    }
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm b_45 = NULL;
  b_45 = t;
  if(match_string(t, "-k"))
    {
      t = b_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_45;
    }
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL;
  c_45 = t;
  t = SSL_string_to_int(c_45);
  d_45 = t;
  t = term_e_26;
  e_45 = t;
  t = term_l_26;
  f_45 = t;
  t = SSL_table_put(e_45, f_45, d_45);
  t = c_45;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_m_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_7, y_7, b_8, t);
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm h_45 = NULL;
  h_45 = t;
  if(match_string(t, "-S"))
    {
      t = h_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_45;
    }
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL;
  t = term_e_26;
  i_45 = t;
  t = term_j_26;
  j_45 = t;
  t = term_n_26;
  k_45 = t;
  t = SSL_table_put(i_45, j_45, k_45);
  t = term_o_26;
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm h_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL;
  l_45 = t;
  t = SSL_string_to_int(l_45);
  m_45 = t;
  t = term_e_26;
  n_45 = t;
  t = term_j_26;
  o_45 = t;
  t = SSL_table_put(n_45, o_45, m_45);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_45);
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = term_q_26;
  return(t);
}
ATerm k_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL;
  t = term_e_26;
  p_45 = t;
  t = term_r_26;
  q_45 = t;
  t = term_w_0;
  r_45 = t;
  t = SSL_table_put(p_45, q_45, r_45);
  t = term_s_26;
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_t_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_8, d_8, g_8, t);
      ;
      LocalPopChoice(x_26);
    }
  else
    {
      t = w_26;
      {
        ATerm y_26 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_8, i_8, j_8, t);
            ;
            LocalPopChoice(b_27);
          }
        else
          {
            t = y_26;
            t = Option_3_0(k_8, n_8, o_8, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_45 = NULL;
      t = term_w_0;
      t = d_0(t);
      w_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_27, term_e_27, w_45);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm z_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_45 = ATgetFirst((ATermList) t);
          v_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_45;
      t = a_0(t);
      t = term_w_0;
      t = b_0(t);
      z_45 = t;
      t = (ATerm) ATinsert(CheckATermList(v_45), z_45);
    }
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm b_46 = NULL;
  b_46 = t;
  if(match_string(t, "-o"))
    {
      t = b_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_46;
    }
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
  c_46 = t;
  t = term_e_26;
  d_46 = t;
  t = term_f_27;
  e_46 = t;
  t = SSL_table_put(d_46, e_46, c_46);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_46);
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_8, q_8, r_8, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL;
  if(match_cons(t, sym__3))
    {
      h_46 = ATgetArgument(t, 0);
      i_46 = ATgetArgument(t, 1);
      j_46 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_27 = ATgetArgument(t, 0);
            ATerm k_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(h_46, i_46);
        ;
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        t = (ATerm) ATempty;
      }
    k_46 = t;
    t = (ATerm) ATinsert(CheckATermList(k_46), j_46);
    l_46 = t;
    t = SSL_table_put(h_46, i_46, l_46);
    t = (ATerm) ATmakeAppl(sym__3, h_46, i_46, j_46);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_46 = NULL;
      t = term_w_0;
      t = m_0(t);
      x_46 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_27, term_e_27, x_46);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm b_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_46 = ATgetFirst((ATermList) t);
          u_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_46;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_46 = ATgetFirst((ATermList) t);
          w_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_46;
      t = i_0(t);
      t = v_46;
      t = k_0(t);
      b_47 = t;
      t = (ATerm) ATinsert(CheckATermList(w_46), b_47);
    }
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm d_47 = NULL;
  d_47 = t;
  if(match_string(t, "-i"))
    {
      t = d_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_47;
    }
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL;
  e_47 = t;
  t = term_e_26;
  f_47 = t;
  t = term_l_27;
  g_47 = t;
  t = SSL_table_put(f_47, g_47, e_47);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_47);
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = term_n_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_8, t_8, u_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_0;
  t = whoami_0_0(t);
  h_47 = t;
  t = term_e_10;
  i_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_27), h_47);
  j_47 = t;
  t = SSL_printnl(i_47, j_47);
  t = term_h_10;
  k_47 = t;
  t = SSL_exit(k_47);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_27;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t)
{
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_125(t);
      ;
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      {
        ATerm n_47 = NULL,o_47 = NULL,r_47 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_47 = ATgetFirst((ATermList) t);
            o_47 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_47;
        t = foldr_2_0(r_125, s_125, t);
        r_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_47, r_47);
        t = s_125(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm v_8 (ATerm t)
{
  t = term_n_26;
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL;
  if(match_cons(t, sym__2))
    {
      l_8 = ATgetArgument(t, 0);
      m_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(l_8, m_8);
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = t_27;
        t = SSL_addr(l_8, m_8);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_47 = NULL,e_8 = NULL,f_8 = NULL;
  t = times_0_0(t);
  e_8 = t;
  t = SSL_explode_term(e_8);
  if(match_cons(t, sym__2))
    {
      ATerm b_28 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_8;
  t = foldr_2_0(v_8, w_8, t);
  u_47 = t;
  t = SSL_TicksToSeconds(u_47);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL;
  k_48 = t;
  if(match_cons(t, sym__2))
    {
      l_48 = ATgetArgument(t, 0);
      m_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_48;
        if((l_48 != t))
          {
            _fail(t);
          }
        t = k_48;
        ;
        LocalPopChoice(l_28);
      }
    else
      {
        t = k_28;
        t = k_48;
        {
          ATerm s_28 = t;
          int t_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_48, m_48);
              ;
              LocalPopChoice(t_28);
            }
          else
            {
              t = s_28;
              t = SSL_gtr(l_48, m_48);
            }
          t = (ATerm) ATmakeAppl(sym__2, l_48, m_48);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_137 (ATerm), ATerm t)
{
  ATerm u_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_48 = NULL,r_48 = NULL;
      p_48 = t;
      t = term_j_26;
      t = get_config_0_0(t);
      r_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_48, term_h_10);
      t = geq_0_0(t);
      t = p_48;
      t = t_137(t);
      ;
      LocalPopChoice(w_28);
    }
  else
    {
      t = u_28;
    }
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL;
  t = run_time_0_0(t);
  v_48 = t;
  t = term_w_0;
  t = whoami_0_0(t);
  w_48 = t;
  t = term_e_10;
  x_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_28), v_48), term_y_28), w_48);
  y_48 = t;
  t = SSL_printnl(x_48, y_48);
  t = (ATerm) ATmakeAppl(sym__2, term_e_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_28), v_48), term_y_28), w_48));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_48 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_26;
  z_48 = t;
  t = SSL_exit(z_48);
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm a_29 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(b_29);
    }
  else
    {
      t = a_29;
      {
        ATerm c_29 = t;
        int d_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(d_29);
          }
        else
          {
            t = c_29;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_140 (ATerm), ATerm t)
{
  ATerm e_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_29);
    }
  else
    {
      t = e_29;
      t = fetch_1_0(y_8, t);
    }
  t = j_140(t);
  return(t);
}
ATerm map_1_0 (ATerm q_120 (ATerm), ATerm t)
{
  ATerm a_49 (ATerm t)
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
        t = Cons_2_0(q_120, a_49, t);
      }
    return(t);
  }
  t = a_49(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_49 = ATgetFirst((ATermList) t);
      d_49 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_49 = NULL,i_49 = NULL;
        t = d_49;
        t = g_0(t);
        h_49 = t;
        t = c_49;
        t = f_0(t);
        i_49 = t;
        t = d_49;
        {
          ATerm z_8 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(h_49), i_49);
            return(t);
          }
          t = reverse_acc_2_0(f_0, z_8, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_0;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm k_111 (ATerm), ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,a_2 = NULL,b_2 = NULL;
  m_49 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_49);
  j_49 = t;
  t = k_49;
  t = k_111(t);
  l_49 = t;
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_49);
  a_2 = t;
  t = SSLsetAnnotations(a_2, j_49);
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm b_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm r_49 = NULL;
  r_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_49), term_e_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL;
  ATerm f_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_30);
    }
  else
    {
      t = f_30;
      t = fetch_1_0(a_9, t);
    }
  t = term_h_30;
  t = echo_0_0(t);
  t = term_d_27;
  p_49 = t;
  t = term_e_27;
  q_49 = t;
  t = SSL_table_get(p_49, q_49);
  t = reverse_acc_2_0(_id, b_9, t);
  t = map_1_0(c_9, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm l_111 (ATerm), ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,c_2 = NULL,d_2 = NULL;
  v_49 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      t_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_49);
  s_49 = t;
  t = t_49;
  t = l_111(t);
  u_49 = t;
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, u_49);
  c_2 = t;
  t = SSLsetAnnotations(c_2, s_49);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_49 = NULL,e_50 = NULL,f_50 = NULL;
  z_49 = t;
  {
    ATerm j_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_49;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_30 = ATgetFirst((ATermList) t);
                ATerm q_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_49;
          }
        ;
        LocalPopChoice(o_30);
      }
    else
      {
        t = j_30;
        t = (ATerm) ATinsert(ATempty, z_49);
      }
    e_50 = t;
    t = term_z_24;
    f_50 = t;
    t = SSL_printnl(f_50, e_50);
    t = z_49;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_27;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm e_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL;
  t = term_e_26;
  o_50 = t;
  t = term_v_30;
  p_50 = t;
  t = term_w_0;
  q_50 = t;
  t = SSL_table_put(o_50, p_50, q_50);
  t = term_w_30;
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = term_x_30;
  return(t);
}
ATerm i_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm r_50 = NULL,s_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL;
  t = term_e_26;
  r_50 = t;
  t = term_v_30;
  s_50 = t;
  t = term_w_0;
  a_51 = t;
  t = SSL_table_put(r_50, s_50, a_51);
  t = term_e_26;
  b_51 = t;
  t = term_a_31;
  c_51 = t;
  t = term_w_0;
  d_51 = t;
  t = SSL_table_put(b_51, c_51, d_51);
  t = term_c_31;
  return(t);
}
ATerm k_9 (ATerm t)
{
  t = term_d_31;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_31 = t;
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_9, f_9, g_9, t);
      ;
      LocalPopChoice(k_31);
    }
  else
    {
      t = j_31;
      t = Option_3_0(i_9, j_9, k_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,g_2 = NULL,j_2 = NULL;
  j_51 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_51 = ATgetFirst((ATermList) t);
      g_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_51);
  e_51 = t;
  t = f_51;
  t = n_98(t);
  h_51 = t;
  t = g_51;
  t = o_98(t);
  i_51 = t;
  j_2 = t;
  t = (ATerm) ATinsert(CheckATermList(i_51), h_51);
  g_2 = t;
  t = SSLsetAnnotations(g_2, e_51);
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL;
  s_51 = t;
  t = term_e_26;
  t_51 = t;
  t = term_p_27;
  u_51 = t;
  t = SSL_table_put(t_51, u_51, s_51);
  t = (ATerm) ATmakeAppl(sym_Program_1, s_51);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_142 (ATerm), ATerm t)
{
  ATerm r_51 = NULL;
  r_51 = t;
  {
    ATerm v_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_32;
        t = m_142(t);
        ;
        LocalPopChoice(w_31);
      }
    else
      {
        t = v_31;
      }
    t = r_51;
    {
      ATerm n_9 (ATerm t)
      {
        ATerm i_32 = t;
        int p_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_32 = t;
            int r_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(r_32);
              }
            else
              {
                t = q_32;
                t = m_142(t);
                t = Cons_2_0(_id, n_9, t);
              }
            ;
            LocalPopChoice(p_32);
          }
        else
          {
            t = i_32;
            {
              ATerm w_51 = NULL,x_51 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_51 = ATgetFirst((ATermList) t);
                  x_51 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_51), (ATerm) ATmakeAppl(sym_Undefined_1, w_51));
            }
          }
        return(t);
      }
      t = Cons_2_0(l_9, n_9, t);
    }
  }
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm l_52 = NULL;
  l_52 = t;
  if(match_string(t, "--help"))
    {
      t = l_52;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_52;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_52;
        }
    }
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL;
  t = term_e_26;
  m_52 = t;
  t = term_i_29;
  n_52 = t;
  t = term_w_0;
  o_52 = t;
  t = SSL_table_put(m_52, n_52, o_52);
  t = term_s_32;
  return(t);
}
ATerm r_9 (ATerm t)
{
  t = term_t_32;
  return(t);
}
ATerm s_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_142 (ATerm), ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL;
  e_52 = t;
  t = term_d_27;
  f_52 = t;
  t = term_e_27;
  g_52 = t;
  t = (ATerm) ATempty;
  h_52 = t;
  t = SSL_table_put(f_52, g_52, h_52);
  t = e_52;
  {
    ATerm o_9 (ATerm t)
    {
      ATerm v_32 = t;
      int x_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_142(t);
          ;
          LocalPopChoice(x_32);
        }
      else
        {
          t = v_32;
          {
            ATerm z_32 = t;
            int a_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_9, q_9, r_9, t);
                ;
                LocalPopChoice(a_33);
              }
            else
              {
                t = z_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_9, t);
    {
      ATerm b_33 = t;
      int c_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_52 = NULL;
          v_52 = t;
          {
            ATerm d_33 = t;
            int f_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_9 = NULL;
                t = v_52;
                {
                  ATerm g_33 = t;
                  int h_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_i_29;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(h_33);
                    }
                  else
                    {
                      t = g_33;
                      t = fetch_1_0(s_9, t);
                    }
                  t = v_52;
                  t = default_system_usage_0_0(t);
                  t = term_n_26;
                  d_9 = t;
                  t = SSL_exit(d_9);
                }
                ;
                LocalPopChoice(f_33);
              }
            else
              {
                t = d_33;
                {
                  ATerm h_9 = NULL;
                  t = term_v_30;
                  t = get_config_0_0(t);
                  t = v_52;
                  t = default_system_about_0_0(t);
                  t = term_n_26;
                  h_9 = t;
                  t = SSL_exit(h_9);
                }
              }
          }
          ;
          LocalPopChoice(c_33);
        }
      else
        {
          t = b_33;
          {
            ATerm i_33 = t;
            int j_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL;
                ATerm t_9 (ATerm t)
                {
                  ATerm u_9 (ATerm t)
                  {
                    if(((i_52 != NULL) && (i_52 != t)))
                      _fail(t);
                    else
                      i_52 = t;
                    return(t);
                  }
                  t = Undefined_1_0(u_9, t);
                  return(t);
                }
                t = fetch_1_0(t_9, t);
                t = term_e_10;
                w_52 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_52)), term_l_33);
                x_52 = t;
                t = SSL_printnl(w_52, x_52);
                t = (ATerm) ATmakeAppl(sym__2, term_e_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_52)), term_l_33));
                t = default_system_usage_0_0(t);
                t = term_h_10;
                y_52 = t;
                t = SSL_exit(y_52);
                ;
                LocalPopChoice(j_33);
              }
            else
              {
                t = i_33;
              }
          }
        }
      j_52 = t;
      t = term_d_27;
      k_52 = t;
      t = SSL_table_destroy(k_52);
      t = j_52;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_140 (ATerm), ATerm m_140 (ATerm), ATerm n_140 (ATerm), ATerm o_140 (ATerm), ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL;
  t = parse_options_1_0(l_140, t);
  b_53 = t;
  t = term_m_33;
  c_53 = t;
  t = SSL_table_create(c_53);
  t = term_m_33;
  d_53 = t;
  t = term_n_33;
  e_53 = t;
  t = SSL_table_put(d_53, e_53, b_53);
  t = b_53;
  t = n_140(t);
  {
    ATerm o_33 = t;
    int p_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_140, t);
        ;
        LocalPopChoice(p_33);
      }
    else
      {
        t = o_33;
        {
          ATerm q_33 = t;
          int r_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_140(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(r_33);
            }
          else
            {
              t = q_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm w_9 (ATerm t)
{
  t = if_verbose2_1_0(b_10, t);
  return(t);
}
ATerm y_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL;
  t = term_e_26;
  f_53 = t;
  t = term_t_33;
  g_53 = t;
  t = term_w_0;
  h_53 = t;
  t = SSL_table_put(f_53, g_53, h_53);
  t = term_u_33;
  return(t);
}
ATerm a_10 (ATerm t)
{
  t = term_v_33;
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL;
  i_53 = t;
  t = term_p_27;
  t = get_config_0_0(t);
  j_53 = t;
  t = term_e_10;
  k_53 = t;
  t = (ATerm) ATinsert(ATempty, j_53);
  l_53 = t;
  t = SSL_printnl(k_53, l_53);
  t = i_53;
  return(t);
}
ATerm iowrap_3_0 (ATerm u_139 (ATerm), ATerm v_139 (ATerm), ATerm w_139 (ATerm), ATerm t)
{
  ATerm v_9 (ATerm t)
  {
    ATerm x_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_139(t);
        ;
        LocalPopChoice(y_33);
      }
    else
      {
        t = x_33;
        {
          ATerm a_34 = t;
          int c_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(c_34);
            }
          else
            {
              t = a_34;
              {
                ATerm e_34 = t;
                int f_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(f_34);
                  }
                else
                  {
                    t = e_34;
                    {
                      ATerm g_34 = t;
                      int h_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(y_9, z_9, a_10, t);
                          ;
                          LocalPopChoice(h_34);
                        }
                      else
                        {
                          t = g_34;
                          {
                            ATerm i_34 = t;
                            int k_34 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(k_34);
                              }
                            else
                              {
                                t = i_34;
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
  ATerm x_9 (ATerm t)
  {
    ATerm m_53 = NULL,n_53 = NULL,m_9 = NULL;
    m_53 = t;
    {
      ATerm l_34 = t;
      int m_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_10 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((n_53 != NULL) && (n_53 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_53 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(c_10, t);
          ;
          LocalPopChoice(m_34);
        }
      else
        {
          t = l_34;
          t = term_n_34;
          n_53 = t;
        }
      t = not_null(n_53);
      t = ReadFromFile_0_0(t);
      m_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_53, m_9);
      t = apply_strategy_1_0(u_139, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(v_9, w_139, w_9, x_9, t);
  return(t);
}
ATerm d_10 (ATerm t)
{
  t = _2_0(_id, lift_definitions_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(d_10, _fail, default_usage_0_0, t);
  return(t);
}
