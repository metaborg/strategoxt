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
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_Some_1;
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
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_a_27;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_i_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_n_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_w_23;
ATerm term_u_23;
ATerm term_m_23;
ATerm term_j_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_x_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_v_20;
ATerm term_o_20;
ATerm term_j_20;
ATerm term_g_20;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_m_19;
ATerm term_z_17;
ATerm term_w_17;
ATerm term_l_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_a_16;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_0;
void init_constant_terms (void)
{
  ATprotect(&(term_z_0));
  term_z_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Sort_2, term_i_17, (ATerm) ATempty);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_ConstType_1, term_j_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_e_21);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_21);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym__2, term_j_21, term_z_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__2, term_r_21, term_s_21);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym__2, term_c_24, term_z_0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym__2, term_f_24, term_z_0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym__2, term_j_23, term_z_0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym__2, term_k_26, term_z_0);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm at_end_1_0 (ATerm j_128 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm p_1 (ATerm e_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm f_5 (ATerm o_129 (ATerm), ATerm s_59, ATerm r_59, ATerm);
ATerm DynamicRules_1_0 (ATerm y_108 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm r_108 (ATerm), ATerm s_108 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm t_120 (ATerm), ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm t_2 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm k_5 (ATerm v_129 (ATerm), ATerm w_59, ATerm v_59, ATerm);
ATerm foldr_3_0 (ATerm l_132 (ATerm), ATerm m_132 (ATerm), ATerm n_132 (ATerm), ATerm);
ATerm l_5 (ATerm y_129 (ATerm), ATerm z_129 (ATerm), ATerm a_60, ATerm z_59, ATerm);
ATerm m_5 (ATerm q_129 (ATerm), ATerm u_59, ATerm t_59, ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm o_5 (ATerm v_713, ATerm a_714, ATerm q_89, ATerm);
ATerm while_not_2_0 (ATerm t_138 (ATerm), ATerm u_138 (ATerm), ATerm);
ATerm for_3_0 (ATerm w_138 (ATerm), ATerm x_138 (ATerm), ATerm y_138 (ATerm), ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm k_3 (ATerm);
ATerm n_3 (ATerm);
ATerm q_3 (ATerm);
ATerm w_3 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm b_4 (ATerm);
ATerm d_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm free_vars_3_0 (ATerm n_136 (ATerm), ATerm o_136 (ATerm), ATerm p_136 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm q_5 (ATerm z_90, ATerm x_90, ATerm);
ATerm topdown_1_0 (ATerm s_121 (ATerm), ATerm);
ATerm r_5 (ATerm t_96, ATerm);
ATerm new_0_0 (ATerm);
ATerm s_5 (ATerm r_96, ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm genzip_4_0 (ATerm e_126 (ATerm), ATerm f_126 (ATerm), ATerm g_126 (ATerm), ATerm h_126 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm y_4 (ATerm);
ATerm c_6 (ATerm i_97, ATerm h_97, ATerm g_97, ATerm);
ATerm v_23 (ATerm u_21, ATerm v_21, ATerm w_21, ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm w_122 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm n_5 (ATerm);
ATerm p_5 (ATerm);
ATerm u_5 (ATerm);
ATerm w_5 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm x_5 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm e_138 (ATerm), ATerm);
ATerm downup_1_0 (ATerm u_121 (ATerm), ATerm);
ATerm WidenScope_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm m_112 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm e_105 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm j_105 (ATerm), ATerm);
ATerm e_6 (ATerm);
ATerm apply_to_bodies_1_0 (ATerm t_119 (ATerm), ATerm);
ATerm _2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm);
ATerm z_6 (ATerm y_78, ATerm z_78, ATerm);
ATerm a_7 (ATerm m_82, ATerm n_82, ATerm);
ATerm c_7 (ATerm s_143 (ATerm), ATerm x_586, ATerm q_82, ATerm);
ATerm b_7 (ATerm i_82, ATerm j_82, ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm u_146 (ATerm), ATerm);
ATerm c_40 (ATerm u_39, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm d_7 (ATerm o_82, ATerm);
ATerm e_7 (ATerm a_79, ATerm b_79, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm w_6 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm d_128 (ATerm), ATerm);
ATerm y_6 (ATerm m_73, ATerm n_73, ATerm);
ATerm debug_1_0 (ATerm q_143 (ATerm), ATerm);
ATerm x_6 (ATerm);
ATerm g_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm d_145 (ATerm), ATerm);
ATerm j_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm k_7 (ATerm p_83, ATerm q_83, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm i_7 (ATerm f_65, ATerm g_65, ATerm e_65, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm f_7 (ATerm j_63, ATerm k_63, ATerm);
ATerm foldr_2_0 (ATerm j_132 (ATerm), ATerm k_132 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm c_145 (ATerm), ATerm);
ATerm f_8 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm g_8 (ATerm);
ATerm need_help_1_0 (ATerm s_147 (ATerm), ATerm);
ATerm map_1_0 (ATerm t_127 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm h_7 (ATerm w_66, ATerm x_66, ATerm);
ATerm Program_1_0 (ATerm n_119 (ATerm), ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm o_119 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm r_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm);
ATerm s_8 (ATerm);
ATerm parse_options_p__1_0 (ATerm v_149 (ATerm), ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm parse_options_1_0 (ATerm u_149 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_147 (ATerm), ATerm v_147 (ATerm), ATerm w_147 (ATerm), ATerm x_147 (ATerm), ATerm);
ATerm e_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm iowrap_3_0 (ATerm d_147 (ATerm), ATerm e_147 (ATerm), ATerm f_147 (ATerm), ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm t_9 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL;
  c_0 = t;
  t = term_z_0;
  t = whoami_0_0(t);
  o_0 = t;
  t = term_a_10;
  p_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), o_0), term_b_10);
  q_0 = t;
  t = SSL_printnl(p_0, q_0);
  t = term_d_10;
  r_0 = t;
  t = SSL_exit(r_0);
  t = c_0;
  return(t);
}
ATerm at_end_1_0 (ATerm j_128 (ATerm), ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    ATerm e_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, a_1, t);
        ;
        LocalPopChoice(g_10);
      }
    else
      {
        t = e_10;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_128(t);
      }
    return(t);
  }
  t = a_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
      {
        ATerm u_0 = NULL,v_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_0 = ATgetFirst((ATermList) t);
            v_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_0;
        {
          ATerm k_2 (ATerm t)
          {
            t = v_0;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(k_2, t);
        }
      }
    }
  return(t);
}
ATerm p_1 (ATerm e_1, ATerm t)
{
  ATerm i_1 = NULL;
  t = SSL_explode_term(e_1);
  if(match_cons(t, sym__2))
    {
      ATerm j_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      i_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL,m_1 = NULL;
  m_1 = t;
  if(match_cons(t, sym__2))
    {
      k_1 = ATgetArgument(t, 0);
      l_1 = ATgetArgument(t, 1);
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_2 (ATerm t)
            {
              t = l_1;
              return(t);
            }
            t = k_1;
            t = at_end_1_0(m_2, t);
            ;
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            t = p_1(m_1, t);
          }
      }
    }
  else
    {
      t = p_1(m_1, t);
    }
  return(t);
}
ATerm f_5 (ATerm o_129 (ATerm), ATerm s_59, ATerm r_59, ATerm t)
{
  t = s_59;
  {
    ATerm c_2 (ATerm t)
    {
      ATerm m_10 = t;
      int n_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(n_10);
        }
      else
        {
          t = m_10;
          {
            ATerm l_2 (ATerm s_1, ATerm t)
            {
              ATerm u_1 = NULL,x_1 = NULL;
              t = s_1;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_1 = ATgetFirst((ATermList) t);
                  x_1 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              {
                ATerm n_2 (ATerm t)
                {
                  t = r_59;
                  return(t);
                }
                t = l_5(o_129, n_2, u_1, x_1, t);
                t = s_1;
                t = Cons_2_0(_id, c_2, t);
              }
              return(t);
            }
            ATerm y_1 = NULL,a_2 = NULL;
            y_1 = t;
            {
              ATerm p_10 = t;
              int q_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm r_10 = ATgetFirst((ATermList) t);
                      a_2 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(q_10);
                  {
                    ATerm s_10 = t;
                    int w_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = l_2(y_1, t);
                        ;
                        LocalPopChoice(w_10);
                      }
                    else
                      {
                        t = s_10;
                        t = a_2;
                        t = c_2(t);
                      }
                  }
                }
              else
                {
                  t = p_10;
                  t = l_2(y_1, t);
                }
            }
          }
        }
      return(t);
    }
    t = c_2(t);
  }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,e_3 = NULL,f_3 = NULL,j_0 = NULL,l_0 = NULL;
  f_3 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      s_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_3);
  r_2 = t;
  t = s_2;
  t = y_108(t);
  e_3 = t;
  l_0 = t;
  t = (ATerm) ATmakeAppl(sym_DynamicRules_1, e_3);
  j_0 = t;
  t = SSLsetAnnotations(j_0, r_2);
  return(t);
}
ATerm RDefT_4_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm r_108 (ATerm), ATerm s_108 (ATerm), ATerm t)
{
  ATerm j_3 = NULL,l_3 = NULL,m_3 = NULL,o_3 = NULL,p_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,s_0 = NULL,t_0 = NULL;
  v_3 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      l_3 = ATgetArgument(t, 0);
      m_3 = ATgetArgument(t, 1);
      o_3 = ATgetArgument(t, 2);
      p_3 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_3);
  j_3 = t;
  t = l_3;
  t = p_108(t);
  r_3 = t;
  t = m_3;
  t = q_108(t);
  s_3 = t;
  t = o_3;
  t = r_108(t);
  t_3 = t;
  t = p_3;
  t = s_108(t);
  u_3 = t;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_RDefT_4, r_3, s_3, t_3, u_3);
  s_0 = t;
  t = SSLsetAnnotations(s_0, j_3);
  return(t);
}
ATerm Scope_2_0 (ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm t)
{
  ATerm a_4 = NULL,c_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,w_0 = NULL,x_0 = NULL;
  h_4 = t;
  if(match_cons(t, sym_Scope_2))
    {
      c_4 = ATgetArgument(t, 0);
      e_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_4);
  a_4 = t;
  t = c_4;
  t = b_110(t);
  f_4 = t;
  t = e_4;
  t = c_110(t);
  g_4 = t;
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, f_4, g_4);
  w_0 = t;
  t = SSLsetAnnotations(w_0, a_4);
  return(t);
}
ATerm tboundin_3_0 (ATerm t_120 (ATerm), ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm t)
{
  ATerm x_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(v_120, t_120, t);
      ;
      LocalPopChoice(z_10);
    }
  else
    {
      t = x_10;
      {
        ATerm a_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(v_120, v_120, v_120, t_120, t);
            ;
            LocalPopChoice(d_11);
          }
        else
          {
            t = a_11;
            {
              ATerm e_11 = t;
              int h_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(v_120, v_120, v_120, t_120, t);
                  ;
                  LocalPopChoice(h_11);
                }
              else
                {
                  t = e_11;
                  t = DynamicRules_1_0(t_120, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm s_4 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_4);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm i_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(k_11);
    }
  else
    {
      t = i_11;
      {
        ATerm w_4 = NULL,x_4 = NULL,g_5 = NULL,a_6 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            w_4 = ATgetArgument(t, 0);
            t = w_4;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                w_4 = ATgetArgument(t, 0);
                x_4 = ATgetArgument(t, 1);
                g_5 = ATgetArgument(t, 2);
                a_6 = ATgetArgument(t, 3);
                t = g_5;
                t = map_1_0(q_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    w_4 = ATgetArgument(t, 0);
                    x_4 = ATgetArgument(t, 1);
                    g_5 = ATgetArgument(t, 2);
                    a_6 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = g_5;
                t = map_1_0(t_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm u_8 = NULL;
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_8 = ATgetArgument(t, 0);
          {
            ATerm r_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_11);
      t = u_8;
    }
  else
    {
      t = o_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_8;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm d_9 = NULL;
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_9 = ATgetArgument(t, 0);
          {
            ATerm j_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_12);
      t = d_9;
    }
  else
    {
      t = a_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_9;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(o_2, p_2, tboundin_3_0, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm s_9 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_9);
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm k_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(l_12);
    }
  else
    {
      t = k_12;
      {
        ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            u_9 = ATgetArgument(t, 0);
            t = u_9;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                u_9 = ATgetArgument(t, 0);
                v_9 = ATgetArgument(t, 1);
                w_9 = ATgetArgument(t, 2);
                x_9 = ATgetArgument(t, 3);
                t = w_9;
                t = map_1_0(w_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    u_9 = ATgetArgument(t, 0);
                    v_9 = ATgetArgument(t, 1);
                    w_9 = ATgetArgument(t, 2);
                    x_9 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = w_9;
                t = map_1_0(x_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm f_10 = NULL;
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_10 = ATgetArgument(t, 0);
          {
            ATerm o_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_12);
      t = f_10;
    }
  else
    {
      t = m_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_10;
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm o_10 = NULL;
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_10 = ATgetArgument(t, 0);
          {
            ATerm r_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_12);
      t = o_10;
    }
  else
    {
      t = p_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_10;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm l_9 = NULL,p_9 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      p_9 = ATgetArgument(t, 0);
      t = p_9;
      if(match_cons(t, sym_Rule_3))
        {
          l_9 = ATgetArgument(t, 0);
          {
            ATerm s_12 = ATgetArgument(t, 1);
          }
          {
            ATerm t_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = l_9;
      t = free_vars_3_0(u_2, v_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          p_9 = ATgetArgument(t, 0);
          {
            ATerm a_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = p_9;
    }
  return(t);
}
ATerm k_5 (ATerm v_129 (ATerm), ATerm w_59, ATerm v_59, ATerm t)
{
  t = w_59;
  {
    ATerm y_10 (ATerm t)
    {
      ATerm b_13 = t;
      int c_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = v_59;
          ;
          LocalPopChoice(c_13);
        }
      else
        {
          t = b_13;
          {
            ATerm d_13 = t;
            int f_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
                t_10 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    u_10 = ATgetFirst((ATermList) t);
                    v_10 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = t_10;
                {
                  ATerm y_2 (ATerm t)
                  {
                    t = v_59;
                    return(t);
                  }
                  t = l_5(v_129, y_2, u_10, v_10, t);
                  t = y_10(t);
                }
                ;
                LocalPopChoice(f_13);
              }
            else
              {
                t = d_13;
                t = Cons_2_0(_id, y_10, t);
              }
          }
        }
      return(t);
    }
    t = y_10(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm l_132 (ATerm), ATerm m_132 (ATerm), ATerm n_132 (ATerm), ATerm t)
{
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_132(t);
      ;
      LocalPopChoice(h_13);
    }
  else
    {
      t = g_13;
      {
        ATerm b_11 = NULL,c_11 = NULL,f_11 = NULL,g_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_11 = ATgetFirst((ATermList) t);
            c_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_11;
        t = n_132(t);
        f_11 = t;
        t = c_11;
        t = foldr_3_0(l_132, m_132, n_132, t);
        g_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_11, g_11);
        t = m_132(t);
      }
    }
  return(t);
}
ATerm l_5 (ATerm y_129 (ATerm), ATerm z_129 (ATerm), ATerm a_60, ATerm z_59, ATerm t)
{
  t = z_129(t);
  {
    ATerm z_2 (ATerm t)
    {
      ATerm j_11 = NULL;
      j_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_60, j_11);
      t = y_129(t);
      return(t);
    }
    t = fetch_1_0(z_2, t);
    t = z_59;
  }
  return(t);
}
ATerm m_5 (ATerm q_129 (ATerm), ATerm u_59, ATerm t_59, ATerm t)
{
  t = u_59;
  {
    ATerm q_11 (ATerm t)
    {
      ATerm i_13 = t;
      int j_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(j_13);
        }
      else
        {
          t = i_13;
          {
            ATerm o_13 = t;
            int p_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
                l_11 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    m_11 = ATgetFirst((ATermList) t);
                    n_11 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = l_11;
                {
                  ATerm a_3 (ATerm t)
                  {
                    t = t_59;
                    return(t);
                  }
                  t = l_5(q_129, a_3, m_11, n_11, t);
                  t = q_11(t);
                }
                ;
                LocalPopChoice(p_13);
              }
            else
              {
                t = o_13;
                t = Cons_2_0(_id, q_11, t);
              }
          }
        }
      return(t);
    }
    t = q_11(t);
  }
  return(t);
}
ATerm b_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_13 = ATgetArgument(t, 0);
      if(((ATgetType(r_13) != AT_LIST) || !(ATisEmpty(r_13))))
        _fail(t);
      {
        ATerm s_13 = ATgetArgument(t, 1);
        if(((ATgetType(s_13) != AT_LIST) || !(ATisEmpty(s_13))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,e_12 = NULL,f_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_13 = ATgetArgument(t, 0);
      if(((ATgetType(w_13) == AT_LIST) && !(ATisEmpty(w_13))))
        {
          y_11 = ATgetFirst((ATermList) w_13);
          z_11 = (ATerm) ATgetNext((ATermList) w_13);
        }
      else
        _fail(t);
      {
        ATerm x_13 = ATgetArgument(t, 1);
        if(((ATgetType(x_13) == AT_LIST) && !(ATisEmpty(x_13))))
          {
            e_12 = ATgetFirst((ATermList) x_13);
            f_12 = (ATerm) ATgetNext((ATermList) x_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_11, e_12), (ATerm) ATmakeAppl(sym__2, z_11, f_12));
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL;
  if(match_cons(t, sym__2))
    {
      g_12 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_12), g_12);
  return(t);
}
ATerm o_5 (ATerm v_713, ATerm a_714, ATerm q_89, ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL,w_11 = NULL,x_11 = NULL;
  t = SSL_explode_term(a_714);
  if(match_cons(t, sym__2))
    {
      t_11 = ATgetArgument(t, 0);
      u_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(v_713);
  if(match_cons(t, sym__2))
    {
      if((t_11 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      w_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_11, u_11);
  t = genzip_4_0(b_3, c_3, d_3, _id, t);
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_11, q_89);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm t_138 (ATerm), ATerm u_138 (ATerm), ATerm t)
{
  ATerm i_12 (ATerm t)
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_138(t);
        ;
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
        t = u_138(t);
        t = i_12(t);
      }
    return(t);
  }
  t = i_12(t);
  return(t);
}
ATerm for_3_0 (ATerm w_138 (ATerm), ATerm x_138 (ATerm), ATerm y_138 (ATerm), ATerm t)
{
  t = w_138(t);
  t = while_not_2_0(x_138, y_138, t);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm u_12 = NULL;
  u_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, u_12);
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = _2_0(_id, n_3, t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm g_14 = t;
  int i_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, q_3, t);
      ;
      LocalPopChoice(i_14);
    }
  else
    {
      t = g_14;
      {
        ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL;
        if(match_cons(t, sym__2))
          {
            k_13 = ATgetArgument(t, 0);
            l_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_13;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_13 = ATgetFirst((ATermList) t);
            n_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_13), m_13), n_13);
      }
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL;
  v_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_12 = ATgetFirst((ATermList) t);
      z_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_12;
  if(match_cons(t, sym__2))
    {
      x_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_12;
        if((x_12 != t))
          {
            _fail(t);
          }
        t = z_12;
        ;
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        t = v_12;
        t = o_5(x_12, y_12, z_12, t);
      }
  }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm y_13 = NULL;
  if(match_cons(t, sym__2))
    {
      y_13 = ATgetArgument(t, 0);
      if((y_13 != ATgetArgument(t, 1)))
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
  ATerm l_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(h_3, i_3, k_3, t);
      ;
      LocalPopChoice(m_14);
    }
  else
    {
      t = l_14;
      {
        ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
        t_13 = t;
        if(match_cons(t, sym__2))
          {
            u_13 = ATgetArgument(t, 0);
            v_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_13;
        t = m_5(w_3, u_13, v_13, t);
      }
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm y_0 = NULL,b_1 = NULL;
  if(match_cons(t, sym__2))
    {
      y_0 = ATgetArgument(t, 0);
      b_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(d_4, y_0, b_1, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm c_1 = NULL;
  if(match_cons(t, sym__2))
    {
      c_1 = ATgetArgument(t, 0);
      if((c_1 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm r_1 = NULL,v_1 = NULL;
  if(match_cons(t, sym__2))
    {
      r_1 = ATgetArgument(t, 0);
      v_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(k_4, r_1, v_1, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm w_1 = NULL;
  if(match_cons(t, sym__2))
    {
      w_1 = ATgetArgument(t, 0);
      if((w_1 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm n_136 (ATerm), ATerm o_136 (ATerm), ATerm p_136 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm q_14 (ATerm t)
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_136(t);
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        {
          ATerm r_14 = t;
          int s_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_13 = NULL,f_14 = NULL,e_0 = NULL,h_0 = NULL;
              z_13 = t;
              t = o_136(t);
              f_14 = t;
              t = z_13;
              {
                ATerm x_3 (ATerm t)
                {
                  ATerm h_14 = NULL;
                  t = q_14(t);
                  h_14 = t;
                  t = (ATerm) ATmakeAppl(sym__2, h_14, f_14);
                  t = diff_0_0(t);
                  return(t);
                }
                t = p_136(x_3, q_14, y_3, t);
                e_0 = t;
                t = SSL_explode_term(e_0);
                if(match_cons(t, sym__2))
                  {
                    ATerm t_14 = ATgetArgument(t, 0);
                    h_0 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = h_0;
                t = foldr_3_0(z_3, b_4, _id, t);
              }
              ;
              LocalPopChoice(s_14);
            }
          else
            {
              t = r_14;
              {
                ATerm d_1 = NULL,f_1 = NULL;
                d_1 = t;
                t = SSL_explode_term(d_1);
                if(match_cons(t, sym__2))
                  {
                    ATerm x_14 = ATgetArgument(t, 0);
                    f_1 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = f_1;
                t = foldr_3_0(i_4, j_4, q_14, t);
              }
            }
        }
      }
    return(t);
  }
  t = q_14(t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm w_14 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_14);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm y_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(z_14);
    }
  else
    {
      t = y_14;
      {
        ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL,j_15 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            a_15 = ATgetArgument(t, 0);
            t = a_15;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                a_15 = ATgetArgument(t, 0);
                b_15 = ATgetArgument(t, 1);
                c_15 = ATgetArgument(t, 2);
                j_15 = ATgetArgument(t, 3);
                t = c_15;
                t = map_1_0(n_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    a_15 = ATgetArgument(t, 0);
                    b_15 = ATgetArgument(t, 1);
                    c_15 = ATgetArgument(t, 2);
                    j_15 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = c_15;
                t = map_1_0(o_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm w_15 = NULL;
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_15 = ATgetArgument(t, 0);
          {
            ATerm f_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_15);
      t = w_15;
    }
  else
    {
      t = d_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_15;
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm n_16 = NULL;
  ATerm g_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_16 = ATgetArgument(t, 0);
          {
            ATerm i_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_15);
      t = n_16;
    }
  else
    {
      t = g_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_16;
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm u_16 = NULL;
  if(match_cons(t, sym__2))
    {
      u_16 = ATgetArgument(t, 0);
      if((u_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm q_5 (ATerm z_90, ATerm x_90, ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL;
  t = x_90;
  t = free_vars_3_0(l_4, m_4, tboundin_3_0, t);
  u_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_90, u_14);
  t = f_5(q_4, z_90, u_14, t);
  v_14 = t;
  {
    ATerm k_15 = t;
    if((PushChoice() == 0))
      {
        if((z_90 != t))
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_15;
      }
    t = (ATerm) ATmakeAppl(sym_Scope_2, v_14, x_90);
  }
  return(t);
}
ATerm topdown_1_0 (ATerm s_121 (ATerm), ATerm t)
{
  t = s_121(t);
  {
    ATerm r_4 (ATerm t)
    {
      t = topdown_1_0(s_121, t);
      return(t);
    }
    t = SRTS_all(r_4, t);
  }
  return(t);
}
ATerm r_5 (ATerm t_96, ATerm t)
{
  ATerm v_16 = NULL;
  t = new_0_0(t);
  v_16 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_16), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_16)), (ATerm) ATmakeAppl(sym_Seq_2, t_96, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, v_16)))));
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm s_5 (ATerm r_96, ATerm t)
{
  ATerm w_16 = NULL;
  t = new_0_0(t);
  w_16 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_16), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_16)), (ATerm) ATmakeAppl(sym_Seq_2, r_96, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, w_16)))));
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,k_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL;
  if(match_cons(t, sym__2))
    {
      k_17 = ATgetArgument(t, 0);
      m_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_17;
  if(match_cons(t, sym_Build_1))
    {
      ATerm l_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_17;
  if(match_cons(t, sym_Where_1))
    {
      n_17 = ATgetArgument(t, 0);
      t = n_17;
      if(match_cons(t, sym_Prim_2))
        {
          b_17 = ATgetArgument(t, 0);
          c_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Prim_2, b_17, c_17);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          n_17 = ATgetArgument(t, 0);
          o_17 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, n_17, o_17);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              n_17 = ATgetArgument(t, 0);
              o_17 = ATgetArgument(t, 1);
              p_17 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_PrimT_3, n_17, o_17, p_17);
        }
    }
  return(t);
}
ATerm genzip_4_0 (ATerm e_126 (ATerm), ATerm f_126 (ATerm), ATerm g_126 (ATerm), ATerm h_126 (ATerm), ATerm t)
{
  ATerm b_18 (ATerm t)
  {
    ATerm m_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_126(t);
        ;
        LocalPopChoice(n_15);
      }
    else
      {
        t = m_15;
        t = f_126(t);
        t = _2_0(h_126, b_18, t);
        t = g_126(t);
      }
    return(t);
  }
  t = b_18(t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_15 = ATgetArgument(t, 0);
      if(((ATgetType(o_15) != AT_LIST) || !(ATisEmpty(o_15))))
        _fail(t);
      {
        ATerm p_15 = ATgetArgument(t, 1);
        if(((ATgetType(p_15) != AT_LIST) || !(ATisEmpty(p_15))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_15 = ATgetArgument(t, 0);
      if(((ATgetType(q_15) == AT_LIST) && !(ATisEmpty(q_15))))
        {
          h_18 = ATgetFirst((ATermList) q_15);
          i_18 = (ATerm) ATgetNext((ATermList) q_15);
        }
      else
        _fail(t);
      {
        ATerm r_15 = ATgetArgument(t, 1);
        if(((ATgetType(r_15) == AT_LIST) && !(ATisEmpty(r_15))))
          {
            j_18 = ATgetFirst((ATermList) r_15);
            k_18 = (ATerm) ATgetNext((ATermList) r_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_18, j_18), (ATerm) ATmakeAppl(sym__2, i_18, k_18));
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL;
  if(match_cons(t, sym__2))
    {
      l_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_18), l_18);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL;
  if(match_cons(t, sym__2))
    {
      n_18 = ATgetArgument(t, 0);
      o_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_18), (ATerm) ATmakeAppl(sym_Match_1, o_18));
  return(t);
}
ATerm c_6 (ATerm i_97, ATerm h_97, ATerm g_97, ATerm t)
{
  ATerm c_18 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_97, g_97);
  t = genzip_4_0(t_4, u_4, v_4, y_4, t);
  c_18 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_18), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, h_97, i_97)));
  return(t);
}
ATerm v_23 (ATerm u_21, ATerm v_21, ATerm w_21, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, u_21, v_21);
  {
    ATerm s_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,p_22 = NULL,r_22 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_15 = ATgetArgument(t, 0);
            ATerm v_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_21;
        if(match_cons(t, sym_Build_1))
          {
            p_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_21;
        if(match_cons(t, sym_Match_1))
          {
            r_22 = ATgetArgument(t, 0);
            t = p_22;
            if(match_cons(t, sym_Op_2))
              {
                j_22 = ATgetArgument(t, 0);
                k_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_22;
            if(match_cons(t, sym_Op_2))
              {
                l_22 = ATgetArgument(t, 0);
                m_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm x_15 = t;
              int y_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, j_22, l_22);
                  {
                    ATerm z_15 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm g_3 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            g_3 = ATgetArgument(t, 0);
                            if((g_3 != ATgetArgument(t, 1)))
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
                        t = z_15;
                      }
                    t = term_a_16;
                  }
                  ;
                  LocalPopChoice(y_15);
                }
              else
                {
                  t = x_15;
                  t = l_22;
                  if((j_22 != t))
                    {
                      _fail(t);
                    }
                  t = (ATerm) ATmakeAppl(sym__2, u_21, v_21);
                  t = c_6(k_22, j_22, m_22, t);
                }
            }
          }
        else
          {
            if(match_cons(t, sym_Build_1))
              {
                r_22 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Build_1, r_22);
          }
        ;
        LocalPopChoice(t_15);
      }
    else
      {
        t = s_15;
        {
          ATerm b_16 = t;
          int c_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = BuildPrim_0_0(t);
              ;
              LocalPopChoice(c_16);
            }
          else
            {
              t = b_16;
              {
                ATerm z_22 = NULL,a_23 = NULL,c_23 = NULL,d_23 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm d_16 = ATgetArgument(t, 0);
                    ATerm e_16 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_21;
                if(match_cons(t, sym_Match_1))
                  {
                    z_22 = ATgetArgument(t, 0);
                    t = v_21;
                    if(match_cons(t, sym_Match_1))
                      {
                        c_23 = ATgetArgument(t, 0);
                        t = c_23;
                        if((z_22 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Match_1, z_22);
                      }
                    else
                      {
                        if(match_cons(t, sym_Build_1))
                          {
                            c_23 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = z_22;
                        if(match_cons(t, sym_Var_1))
                          {
                            a_23 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = c_23;
                        if(match_cons(t, sym_Var_1))
                          {
                            d_23 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = d_23;
                        if((a_23 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_23));
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Build_1))
                      {
                        z_22 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = v_21;
                    if(match_cons(t, sym_Match_1))
                      {
                        c_23 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = c_23;
                    if((z_22 != t))
                      {
                        _fail(t);
                      }
                    t = (ATerm) ATmakeAppl(sym_Build_1, z_22);
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
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL;
  p_23 = t;
  if(match_cons(t, sym_Seq_2))
    {
      q_23 = ATgetArgument(t, 0);
      r_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_23;
  if(match_cons(t, sym_Seq_2))
    {
      n_23 = ATgetArgument(t, 0);
      o_23 = ATgetArgument(t, 1);
      {
        ATerm f_16 = t;
        int g_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_4 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, q_23, n_23);
            {
              ATerm h_16 = t;
              int i_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL,t_5 = NULL,v_5 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm j_16 = ATgetArgument(t, 0);
                      ATerm k_16 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = q_23;
                  if(match_cons(t, sym_Build_1))
                    {
                      t_5 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = n_23;
                  if(match_cons(t, sym_Match_1))
                    {
                      v_5 = ATgetArgument(t, 0);
                      t = t_5;
                      if(match_cons(t, sym_Op_2))
                        {
                          e_5 = ATgetArgument(t, 0);
                          h_5 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_5;
                      if(match_cons(t, sym_Op_2))
                        {
                          i_5 = ATgetArgument(t, 0);
                          j_5 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm l_16 = t;
                        int m_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = (ATerm) ATmakeAppl(sym__2, e_5, i_5);
                            {
                              ATerm o_16 = t;
                              if((PushChoice() == 0))
                                {
                                  ATerm p_7 = NULL;
                                  if(match_cons(t, sym__2))
                                    {
                                      p_7 = ATgetArgument(t, 0);
                                      if((p_7 != ATgetArgument(t, 1)))
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
                                  t = o_16;
                                }
                              t = term_a_16;
                            }
                            ;
                            LocalPopChoice(m_16);
                          }
                        else
                          {
                            t = l_16;
                            t = i_5;
                            if((e_5 != t))
                              {
                                _fail(t);
                              }
                            t = (ATerm) ATmakeAppl(sym__2, q_23, n_23);
                            t = c_6(h_5, e_5, j_5, t);
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Build_1))
                        {
                          v_5 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Build_1, v_5);
                    }
                  ;
                  LocalPopChoice(i_16);
                }
              else
                {
                  t = h_16;
                  {
                    ATerm p_16 = t;
                    int q_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildPrim_0_0(t);
                        ;
                        LocalPopChoice(q_16);
                      }
                    else
                      {
                        t = p_16;
                        {
                          ATerm f_6 = NULL,g_6 = NULL,i_6 = NULL,j_6 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              ATerm r_16 = ATgetArgument(t, 0);
                              ATerm s_16 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = q_23;
                          if(match_cons(t, sym_Match_1))
                            {
                              f_6 = ATgetArgument(t, 0);
                              t = n_23;
                              if(match_cons(t, sym_Match_1))
                                {
                                  i_6 = ATgetArgument(t, 0);
                                  t = i_6;
                                  if((f_6 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, f_6);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      i_6 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = f_6;
                                  if(match_cons(t, sym_Var_1))
                                    {
                                      g_6 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = i_6;
                                  if(match_cons(t, sym_Var_1))
                                    {
                                      j_6 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = j_6;
                                  if((g_6 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_6));
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_Build_1))
                                {
                                  f_6 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = n_23;
                              if(match_cons(t, sym_Match_1))
                                {
                                  i_6 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = i_6;
                              if((f_6 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym_Build_1, f_6);
                            }
                        }
                      }
                  }
                }
              p_4 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, p_4, o_23);
            }
            ;
            LocalPopChoice(g_16);
          }
        else
          {
            t = f_16;
            t = v_23(q_23, r_23, p_23, t);
          }
      }
    }
  else
    {
      t = v_23(q_23, r_23, p_23, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm w_122 (ATerm), ATerm t)
{
  ATerm y_23 (ATerm t)
  {
    ATerm t_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_122(t);
        ;
        LocalPopChoice(x_16);
      }
    else
      {
        t = t_16;
        t = SRTS_one(y_23, t);
      }
    return(t);
  }
  t = y_23(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL;
  r_24 = t;
  if(match_cons(t, sym_Let_2))
    {
      s_24 = ATgetArgument(t, 0);
      z_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_24;
  if(match_cons(t, sym_Let_2))
    {
      a_25 = ATgetArgument(t, 0);
      c_25 = ATgetArgument(t, 1);
      {
        ATerm h_25 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, s_24, a_25);
        t = conc_0_0(t);
        h_25 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, h_25, c_25);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          a_25 = ATgetArgument(t, 0);
          c_25 = ATgetArgument(t, 1);
          d_25 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = s_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_24 = ATgetFirst((ATermList) t);
          y_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_24;
      if(match_cons(t, sym_SDefT_4))
        {
          u_24 = ATgetArgument(t, 0);
          v_24 = ATgetArgument(t, 1);
          w_24 = ATgetArgument(t, 2);
          x_24 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = v_24;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_24;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_24;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_25;
      if(match_cons(t, sym_SVar_1))
        {
          b_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_25;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_25;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_25;
      if((u_24 != t))
        {
          _fail(t);
        }
      t = x_24;
      {
        ATerm y_16 = t;
        if((PushChoice() == 0))
          {
            ATerm z_4 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm z_16 = ATgetArgument(t, 0);
                  if(match_cons(z_16, sym_SVar_1))
                    {
                      if((u_24 != ATgetArgument(z_16, 0)))
                        {
                          _fail(ATgetArgument(z_16, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm a_17 = ATgetArgument(t, 1);
                    if(((ATgetType(a_17) != AT_LIST) || !(ATisEmpty(a_17))))
                      _fail(t);
                  }
                  {
                    ATerm d_17 = ATgetArgument(t, 2);
                    if(((ATgetType(d_17) != AT_LIST) || !(ATisEmpty(d_17))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(z_4, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = y_16;
          }
        t = x_24;
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,b_26 = NULL,c_26 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      b_26 = ATgetArgument(t, 0);
      t = b_26;
      if(match_cons(t, sym_Seq_2))
        {
          z_25 = ATgetArgument(t, 0);
          v_25 = ATgetArgument(t, 1);
          t = z_25;
          if(match_cons(t, sym_Where_1))
            {
              u_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_25;
          if(match_cons(t, sym_Seq_2))
            {
              w_25 = ATgetArgument(t, 0);
              y_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_25;
          if(match_cons(t, sym_Build_1))
            {
              x_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, u_25, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_25), y_25)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              z_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, z_25);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          b_26 = ATgetArgument(t, 0);
          t = b_26;
          if(match_cons(t, sym_Test_1))
            {
              z_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, z_25);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              b_26 = ATgetArgument(t, 0);
              t = b_26;
              if(match_cons(t, sym_Not_1))
                {
                  z_25 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, z_25);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  b_26 = ATgetArgument(t, 0);
                  c_26 = ATgetArgument(t, 1);
                  t = c_26;
                  if((b_26 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      b_26 = ATgetArgument(t, 0);
                      c_26 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = c_26;
                  if((b_26 != t))
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
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      d_27 = ATgetArgument(t, 0);
      g_27 = ATgetArgument(t, 1);
      t = d_27;
      if(match_cons(t, sym_LChoice_2))
        {
          e_27 = ATgetArgument(t, 0);
          f_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, e_27, (ATerm) ATmakeAppl(sym_LChoice_2, f_27, g_27));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          d_27 = ATgetArgument(t, 0);
          g_27 = ATgetArgument(t, 1);
          t = d_27;
          if(match_cons(t, sym_Seq_2))
            {
              e_27 = ATgetArgument(t, 0);
              f_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, e_27, (ATerm) ATmakeAppl(sym_Seq_2, f_27, g_27));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              d_27 = ATgetArgument(t, 0);
              g_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_27;
          if(match_cons(t, sym_Choice_2))
            {
              e_27 = ATgetArgument(t, 0);
              f_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, e_27, (ATerm) ATmakeAppl(sym_Choice_2, f_27, g_27));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm a_5 (ATerm t)
        {
          ATerm g_17 = t;
          int h_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(h_17);
            }
          else
            {
              t = g_17;
            }
          return(t);
        }
        t = Cons_2_0(_id, a_5, t);
      }
      ;
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      {
        ATerm b_5 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, b_5, t);
      }
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm h_29 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_29, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_l_17), term_l_17));
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_29 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, j_29, term_l_17);
      ;
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm r_29 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      r_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_29, term_l_17);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_29 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, t_29, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_l_17), term_l_17));
      ;
      LocalPopChoice(t_17);
    }
  else
    {
      t = s_17;
    }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm b_30 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_30, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_l_17), term_l_17));
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm u_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_30 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, d_30, term_l_17);
      ;
      LocalPopChoice(v_17);
    }
  else
    {
      t = u_17;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,m_28 = NULL,n_28 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      m_28 = ATgetArgument(t, 0);
      n_28 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, m_28, n_28);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          m_28 = ATgetArgument(t, 0);
          t = m_28;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_28 = ATgetFirst((ATermList) t);
              h_28 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, g_28, (ATerm) ATmakeAppl(sym_LChoices_1, h_28));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_a_16;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              m_28 = ATgetArgument(t, 0);
              t = m_28;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_28 = ATgetFirst((ATermList) t);
                  h_28 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, g_28, (ATerm) ATmakeAppl(sym_Choices_1, h_28));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_a_16;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  m_28 = ATgetArgument(t, 0);
                  t = m_28;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      g_28 = ATgetFirst((ATermList) t);
                      h_28 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_28, (ATerm) ATmakeAppl(sym_Seqs_1, h_28));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_w_17;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      m_28 = ATgetArgument(t, 0);
                      n_28 = ATgetArgument(t, 1);
                      j_28 = ATgetArgument(t, 2);
                      i_28 = ATgetArgument(t, 3);
                      {
                        ATerm f_29 = NULL,g_29 = NULL;
                        t = n_28;
                        t = map1_1_0(c_5, t);
                        f_29 = t;
                        t = j_28;
                        t = map1_1_0(d_5, t);
                        g_29 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, m_28, f_29, g_29, i_28);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          m_28 = ATgetArgument(t, 0);
                          n_28 = ATgetArgument(t, 1);
                          j_28 = ATgetArgument(t, 2);
                          i_28 = ATgetArgument(t, 3);
                          {
                            ATerm x_17 = t;
                            int y_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm p_29 = NULL,q_29 = NULL;
                                t = j_28;
                                t = map1_1_0(n_5, t);
                                p_29 = t;
                                t = n_28;
                                t = map_1_0(p_5, t);
                                q_29 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, m_28, q_29, p_29, i_28);
                                ;
                                LocalPopChoice(y_17);
                              }
                            else
                              {
                                t = x_17;
                                {
                                  ATerm z_29 = NULL,a_30 = NULL;
                                  t = n_28;
                                  t = map1_1_0(u_5, t);
                                  z_29 = t;
                                  t = j_28;
                                  t = map_1_0(w_5, t);
                                  a_30 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, m_28, z_29, a_30, i_28);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              m_28 = ATgetArgument(t, 0);
                              n_28 = ATgetArgument(t, 1);
                              j_28 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, n_28, (ATerm) ATmakeAppl(sym_Op_2, term_z_17, (ATerm) ATinsert(ATinsert(ATempty, j_28), m_28)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  m_28 = ATgetArgument(t, 0);
                                  n_28 = ATgetArgument(t, 1);
                                  j_28 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, j_28)), m_28), (ATerm) ATmakeAppl(sym_Build_1, n_28)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      m_28 = ATgetArgument(t, 0);
                                      n_28 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_28, (ATerm) ATmakeAppl(sym_Match_1, n_28));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          m_28 = ATgetArgument(t, 0);
                                          n_28 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_28), n_28);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              m_28 = ATgetArgument(t, 0);
                                              n_28 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_28), m_28);
                                        }
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
ATerm x_5 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      v_31 = ATgetArgument(t, 0);
      t = v_31;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_a_16;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          v_31 = ATgetArgument(t, 0);
          t = v_31;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_w_17;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              v_31 = ATgetArgument(t, 0);
              w_31 = ATgetArgument(t, 1);
              t = v_31;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_a_16;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  v_31 = ATgetArgument(t, 0);
                  w_31 = ATgetArgument(t, 1);
                  t = w_31;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_a_16;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      v_31 = ATgetArgument(t, 0);
                      w_31 = ATgetArgument(t, 1);
                      t = w_31;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_a_16;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          v_31 = ATgetArgument(t, 0);
                          t = v_31;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_a_16;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              v_31 = ATgetArgument(t, 0);
                              t = v_31;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_a_16;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  v_31 = ATgetArgument(t, 0);
                                  w_31 = ATgetArgument(t, 1);
                                  t = w_31;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_a_16;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      v_31 = ATgetArgument(t, 0);
                                      w_31 = ATgetArgument(t, 1);
                                      t = w_31;
                                      t = fetch_1_0(x_5, t);
                                      t = term_a_16;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          v_31 = ATgetArgument(t, 0);
                                          w_31 = ATgetArgument(t, 1);
                                          t = w_31;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = v_31;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  ATerm a_18 = t;
                                                  int d_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = w_31;
                                                      ;
                                                      LocalPopChoice(d_18);
                                                    }
                                                  else
                                                    {
                                                      t = a_18;
                                                      t = v_31;
                                                    }
                                                }
                                              else
                                                {
                                                  t = v_31;
                                                }
                                            }
                                          else
                                            {
                                              t = v_31;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = w_31;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              v_31 = ATgetArgument(t, 0);
                                              w_31 = ATgetArgument(t, 1);
                                              t = w_31;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = v_31;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      ATerm e_18 = t;
                                                      int f_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = w_31;
                                                          ;
                                                          LocalPopChoice(f_18);
                                                        }
                                                      else
                                                        {
                                                          t = e_18;
                                                          t = v_31;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = v_31;
                                                    }
                                                }
                                              else
                                                {
                                                  t = v_31;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = w_31;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  v_31 = ATgetArgument(t, 0);
                                                  t = v_31;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_a_16;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      v_31 = ATgetArgument(t, 0);
                                                      w_31 = ATgetArgument(t, 1);
                                                      x_31 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = x_31;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_31, w_31);
                                                }
                                            }
                                        }
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
  ATerm i_33 = NULL,k_33 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      k_33 = ATgetArgument(t, 0);
      t = k_33;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_w_17;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          k_33 = ATgetArgument(t, 0);
          t = k_33;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_a_16;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              k_33 = ATgetArgument(t, 0);
              i_33 = ATgetArgument(t, 1);
              t = i_33;
              if(match_cons(t, sym_Id_0))
                {
                  t = k_33;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm g_18 = t;
                      int p_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = i_33;
                          ;
                          LocalPopChoice(p_18);
                        }
                      else
                        {
                          t = g_18;
                          t = k_33;
                        }
                    }
                  else
                    {
                      t = k_33;
                    }
                }
              else
                {
                  t = k_33;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = i_33;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  k_33 = ATgetArgument(t, 0);
                  i_33 = ATgetArgument(t, 1);
                  t = k_33;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_w_17;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      k_33 = ATgetArgument(t, 0);
                      i_33 = ATgetArgument(t, 1);
                      t = i_33;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_w_17;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          k_33 = ATgetArgument(t, 0);
                          i_33 = ATgetArgument(t, 1);
                          t = i_33;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_w_17;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              k_33 = ATgetArgument(t, 0);
                              t = k_33;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_w_17;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  k_33 = ATgetArgument(t, 0);
                                  t = k_33;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_w_17;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      k_33 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = k_33;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_w_17;
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
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(r_18);
    }
  else
    {
      t = q_18;
      {
        ATerm s_18 = t;
        int t_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(t_18);
          }
        else
          {
            t = s_18;
            {
              ATerm u_18 = t;
              int v_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(v_18);
                }
              else
                {
                  t = u_18;
                  {
                    ATerm w_18 = t;
                    int x_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(x_18);
                      }
                    else
                      {
                        t = w_18;
                        {
                          ATerm y_18 = t;
                          int z_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(z_18);
                            }
                          else
                            {
                              t = y_18;
                              {
                                ATerm a_19 = t;
                                int b_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm y_33 = NULL,z_33 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        y_33 = ATgetArgument(t, 0);
                                        z_33 = ATgetArgument(t, 1);
                                        t = y_33;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = z_33;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            y_33 = ATgetArgument(t, 0);
                                            z_33 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = y_33;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = z_33;
                                      }
                                    ;
                                    LocalPopChoice(b_19);
                                  }
                                else
                                  {
                                    t = a_19;
                                    {
                                      ATerm c_19 = t;
                                      int d_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(d_19);
                                        }
                                      else
                                        {
                                          t = c_19;
                                          {
                                            ATerm e_19 = t;
                                            int f_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(f_19);
                                              }
                                            else
                                              {
                                                t = e_19;
                                                {
                                                  ATerm d_34 = NULL,e_34 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      d_34 = ATgetArgument(t, 0);
                                                      e_34 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = d_34;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = e_34;
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_1_0 (ATerm e_138 (ATerm), ATerm t)
{
  ATerm g_34 (ATerm t)
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_138(t);
        t = g_34(t);
        ;
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
      }
    return(t);
  }
  t = g_34(t);
  return(t);
}
ATerm downup_1_0 (ATerm u_121 (ATerm), ATerm t)
{
  t = u_121(t);
  {
    ATerm y_5 (ATerm t)
    {
      t = downup_1_0(u_121, t);
      return(t);
    }
    t = SRTS_all(y_5, t);
    t = u_121(t);
  }
  return(t);
}
ATerm WidenScope_0_0 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      o_34 = ATgetArgument(t, 0);
      r_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_34;
  if(match_cons(t, sym_Scope_2))
    {
      l_34 = ATgetArgument(t, 0);
      m_34 = ATgetArgument(t, 1);
      t = o_34;
      if(match_cons(t, sym_Scope_2))
        {
          p_34 = ATgetArgument(t, 0);
          q_34 = ATgetArgument(t, 1);
          {
            ATerm i_19 = t;
            int j_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym_Scope_2, l_34, (ATerm) ATmakeAppl(sym_Seq_2, o_34, m_34));
                ;
                LocalPopChoice(j_19);
              }
            else
              {
                t = i_19;
                t = (ATerm) ATmakeAppl(sym_Scope_2, p_34, (ATerm) ATmakeAppl(sym_Seq_2, q_34, r_34));
              }
          }
        }
      else
        {
          t = (ATerm) ATmakeAppl(sym_Scope_2, l_34, (ATerm) ATmakeAppl(sym_Seq_2, o_34, m_34));
        }
    }
  else
    {
      t = o_34;
      if(match_cons(t, sym_Scope_2))
        {
          p_34 = ATgetArgument(t, 0);
          q_34 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, p_34, (ATerm) ATmakeAppl(sym_Seq_2, q_34, r_34));
    }
  return(t);
}
ATerm SDefT_4_0 (ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm m_112 (ATerm), ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,l_35 = NULL,m_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,g_1 = NULL,h_1 = NULL;
  u_35 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      j_35 = ATgetArgument(t, 0);
      l_35 = ATgetArgument(t, 1);
      m_35 = ATgetArgument(t, 2);
      o_35 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_35);
  i_35 = t;
  t = j_35;
  t = j_112(t);
  p_35 = t;
  t = l_35;
  t = k_112(t);
  q_35 = t;
  t = m_35;
  t = l_112(t);
  s_35 = t;
  t = o_35;
  t = m_112(t);
  t_35 = t;
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, p_35, q_35, s_35, t_35);
  g_1 = t;
  t = SSLsetAnnotations(g_1, i_35);
  return(t);
}
ATerm SDef_3_0 (ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,j_1 = NULL,n_1 = NULL;
  g_36 = t;
  if(match_cons(t, sym_SDef_3))
    {
      a_36 = ATgetArgument(t, 0);
      b_36 = ATgetArgument(t, 1);
      c_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_36);
  z_35 = t;
  t = a_36;
  t = g_112(t);
  d_36 = t;
  t = b_36;
  t = h_112(t);
  e_36 = t;
  t = c_36;
  t = i_112(t);
  f_36 = t;
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, d_36, e_36, f_36);
  j_1 = t;
  t = SSLsetAnnotations(j_1, z_35);
  return(t);
}
ATerm Strategies_1_0 (ATerm e_105 (ATerm), ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,o_1 = NULL,q_1 = NULL;
  m_36 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      k_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_36);
  j_36 = t;
  t = k_36;
  t = e_105(t);
  l_36 = t;
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, l_36);
  o_1 = t;
  t = SSLsetAnnotations(o_1, j_36);
  return(t);
}
ATerm Specification_1_0 (ATerm j_105 (ATerm), ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,t_1 = NULL,z_1 = NULL;
  t_36 = t;
  if(match_cons(t, sym_Specification_1))
    {
      r_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_36);
  q_36 = t;
  t = r_36;
  t = j_105(t);
  s_36 = t;
  z_1 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, s_36);
  t_1 = t;
  t = SSLsetAnnotations(t_1, q_36);
  return(t);
}
ATerm e_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1_0 (ATerm t_119 (ATerm), ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm b_6 (ATerm t)
    {
      ATerm d_6 (ATerm t)
      {
        ATerm h_6 (ATerm t)
        {
          ATerm k_6 (ATerm t)
          {
            ATerm k_19 = t;
            int l_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SDef_3_0(_id, _id, t_119, t);
                ;
                LocalPopChoice(l_19);
              }
            else
              {
                t = k_19;
                t = SDefT_4_0(_id, _id, _id, t_119, t);
              }
            return(t);
          }
          t = map_1_0(k_6, t);
          return(t);
        }
        t = Strategies_1_0(h_6, t);
        return(t);
      }
      t = Cons_2_0(d_6, e_6, t);
      return(t);
    }
    t = Cons_2_0(_id, b_6, t);
    return(t);
  }
  t = Specification_1_0(z_5, t);
  return(t);
}
ATerm _2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm t)
{
  ATerm a_37 = NULL,d_37 = NULL,f_37 = NULL,k_37 = NULL,l_37 = NULL,o_37 = NULL,b_2 = NULL,d_2 = NULL;
  o_37 = t;
  if(match_cons(t, sym__2))
    {
      d_37 = ATgetArgument(t, 0);
      f_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_37);
  a_37 = t;
  t = d_37;
  t = l_100(t);
  k_37 = t;
  t = f_37;
  t = m_100(t);
  l_37 = t;
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_37, l_37);
  b_2 = t;
  t = SSLsetAnnotations(b_2, a_37);
  return(t);
}
ATerm z_6 (ATerm y_78, ATerm z_78, ATerm t)
{
  ATerm s_37 = NULL;
  t = SSL_fputc(y_78, z_78);
  s_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_37);
  return(t);
}
ATerm a_7 (ATerm m_82, ATerm n_82, ATerm t)
{
  ATerm t_37 = NULL;
  t = SSL_write_term_to_stream_text(m_82, n_82);
  t_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_37);
  return(t);
}
ATerm c_7 (ATerm s_143 (ATerm), ATerm x_586, ATerm q_82, ATerm t)
{
  ATerm u_37 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_586, term_m_19);
  t = open_stream_0_0(t);
  u_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_37, q_82);
  t = s_143(t);
  t = fclose_0_0(t);
  t = q_82;
  return(t);
}
ATerm b_7 (ATerm i_82, ATerm j_82, ATerm t)
{
  ATerm c_38 = NULL;
  t = SSL_write_term_to_stream_baf(i_82, j_82);
  c_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_38);
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = fetch_1_0(q_6, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL;
  if(match_cons(t, sym__2))
    {
      g_38 = ATgetArgument(t, 0);
      h_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(r_6, g_38, h_38, t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_19 = ATgetArgument(t, 0);
      if(match_cons(n_19, sym_Stream_1))
        {
          i_38 = ATgetArgument(n_19, 0);
        }
      else
        _fail(t);
      j_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(i_38, j_38, t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm l_38 = NULL,o_38 = NULL;
  if(match_cons(t, sym__2))
    {
      l_38 = ATgetArgument(t, 0);
      o_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(t_6, l_38, o_38, t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm q_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_19 = ATgetArgument(t, 0);
      if(match_cons(o_19, sym_Stream_1))
        {
          u_38 = ATgetArgument(o_19, 0);
        }
      else
        _fail(t);
      v_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(u_38, v_38, t);
  q_38 = t;
  t = term_p_19;
  w_38 = t;
  t = q_38;
  if(match_cons(t, sym_Stream_1))
    {
      x_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_19, q_38);
  t = z_6(w_38, x_38, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL;
  d_38 = t;
  {
    ATerm l_6 (ATerm t)
    {
      ATerm q_19 = t;
      int r_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_6 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((e_38 != NULL) && (e_38 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_38 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(m_6, t);
          ;
          LocalPopChoice(r_19);
        }
      else
        {
          t = q_19;
          t = term_s_19;
          if(((e_38 != NULL) && (e_38 != t)))
            _fail(t);
          else
            e_38 = t;
        }
      return(t);
    }
    t = _2_0(l_6, _id, t);
    t = d_38;
    {
      ATerm n_6 (ATerm t)
      {
        ATerm f_38 = NULL;
        f_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_38), f_38);
        return(t);
      }
      t = _2_0(_id, n_6, t);
      {
        ATerm t_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(o_6, p_6, t);
            ;
            LocalPopChoice(u_19);
          }
        else
          {
            t = t_19;
            t = _2_0(_id, s_6, t);
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
ATerm apply_strategy_1_0 (ATerm u_146 (ATerm), ATerm t)
{
  ATerm z_38 = NULL,c_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
  z_38 = t;
  t = dtime_0_0(t);
  t = z_38;
  t = u_146(t);
  c_39 = t;
  t = dtime_0_0(t);
  e_39 = t;
  t = c_39;
  if(match_cons(t, sym__2))
    {
      f_39 = ATgetArgument(t, 0);
      g_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_39), (ATerm) ATmakeAppl(sym_Runtime_1, e_39)), g_39);
  return(t);
}
ATerm c_40 (ATerm u_39, ATerm t)
{
  t = SSL_fclose(u_39);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_39 = NULL,a_40 = NULL;
  a_40 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_39 = ATgetArgument(t, 0);
      {
        ATerm v_19 = t;
        int w_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_39);
            ;
            LocalPopChoice(w_19);
          }
        else
          {
            t = v_19;
            t = c_40(a_40, t);
          }
      }
    }
  else
    {
      t = c_40(a_40, t);
    }
  return(t);
}
ATerm d_7 (ATerm o_82, ATerm t)
{
  t = SSL_read_term_from_stream(o_82);
  return(t);
}
ATerm e_7 (ATerm a_79, ATerm b_79, ATerm t)
{
  ATerm d_40 = NULL;
  t = SSL_fopen(a_79, b_79);
  d_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_40);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_40 = NULL;
  t = SSL_stdin_stream();
  e_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_40);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_40 = NULL;
  t = SSL_stdout_stream();
  f_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_40);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_40 = NULL;
  t = SSL_stderr_stream();
  h_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_40);
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm v_40 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      v_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_40;
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm y_40 = NULL;
  y_40 = t;
  t = SSL_is_string(y_40);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_19 = ATgetArgument(t, 0);
      ATerm y_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_40 = NULL,q_8 = NULL;
        s_40 = t;
        t = SSL_explode_term(s_40);
        if(match_cons(t, sym__2))
          {
            ATerm b_20 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_20) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm c_20 = ATgetArgument(t, 1);
              if(((ATgetType(c_20) == AT_LIST) && !(ATisEmpty(c_20))))
                {
                  q_8 = ATgetFirst((ATermList) c_20);
                  {
                    ATerm d_20 = (ATerm) ATgetNext((ATermList) c_20);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = q_8;
        if(match_cons(t, sym_stderr_0))
          {
            t = q_8;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = q_8;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = q_8;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        {
          ATerm e_20 = t;
          int f_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_40 = NULL,u_40 = NULL;
              t = _2_0(u_6, _id, t);
              if(match_cons(t, sym__2))
                {
                  t_40 = ATgetArgument(t, 0);
                  u_40 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = e_7(t_40, u_40, t);
              ;
              LocalPopChoice(f_20);
            }
          else
            {
              t = e_20;
              {
                ATerm w_40 = NULL,x_40 = NULL;
                t = _2_0(v_6, _id, t);
                if(match_cons(t, sym__2))
                  {
                    w_40 = ATgetArgument(t, 0);
                    x_40 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_7(w_40, x_40, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_g_20;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL;
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_41 = NULL;
      f_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_41, term_j_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      t = debug_1_0(w_6, t);
      _fail(t);
    }
  c_41 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(e_41, t);
  d_41 = t;
  t = c_41;
  t = fclose_0_0(t);
  t = d_41;
  return(t);
}
ATerm fetch_1_0 (ATerm d_128 (ATerm), ATerm t)
{
  ATerm h_41 (ATerm t)
  {
    ATerm k_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(d_128, _id, t);
        ;
        LocalPopChoice(l_20);
      }
    else
      {
        t = k_20;
        t = Cons_2_0(_id, h_41, t);
      }
    return(t);
  }
  t = h_41(t);
  return(t);
}
ATerm y_6 (ATerm m_73, ATerm n_73, ATerm t)
{
  t = SSL_strcat(m_73, n_73);
  return(t);
}
ATerm debug_1_0 (ATerm q_143 (ATerm), ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL;
  j_41 = t;
  t = q_143(t);
  k_41 = t;
  t = term_a_10;
  l_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_41), k_41);
  m_41 = t;
  t = SSL_printnl(l_41, m_41);
  t = j_41;
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(n_20);
    }
  else
    {
      t = m_20;
    }
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_o_20;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_41 = NULL;
      z_41 = t;
      t = SSL_is_string(z_41);
      ;
      LocalPopChoice(q_20);
    }
  else
    {
      t = p_20;
      {
        ATerm r_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(x_6, t);
            ;
            LocalPopChoice(s_20);
          }
        else
          {
            t = r_20;
            {
              ATerm e_42 = NULL,h_42 = NULL,i_42 = NULL;
              e_42 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_42 = ATgetArgument(t, 0);
                  t = h_42;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_42 = ATgetArgument(t, 0);
                      t = h_42;
                      {
                        ATerm t_20 = t;
                        int u_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(u_20);
                          }
                        else
                          {
                            t = t_20;
                            t = debug_1_0(g_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm m_42 = NULL,n_42 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_42 = ATgetArgument(t, 0);
                          i_42 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_42;
                      t = eval_config_0_0(t);
                      m_42 = t;
                      t = i_42;
                      t = eval_config_0_0(t);
                      n_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_42, n_42);
                      t = y_6(m_42, n_42, t);
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
  ATerm r_42 = NULL,s_42 = NULL;
  r_42 = t;
  t = term_v_20;
  s_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_20, r_42);
  t = h_7(s_42, r_42, t);
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_42 = NULL,x_42 = NULL;
        t = eval_config_0_0(t);
        u_42 = t;
        t = term_v_20;
        x_42 = t;
        t = SSL_table_put(x_42, r_42, u_42);
        t = u_42;
        ;
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_145 (ATerm), ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_42 = NULL,a_43 = NULL;
      y_42 = t;
      t = term_a_21;
      t = get_config_0_0(t);
      a_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_43, term_b_21);
      t = geq_0_0(t);
      t = y_42;
      t = d_145(t);
      ;
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
    }
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm h_43 = NULL;
  h_43 = t;
  if(match_string(t, "-k"))
    {
      t = h_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_43;
    }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm k_43 = NULL,n_43 = NULL,o_43 = NULL;
  k_43 = t;
  t = SSL_string_to_int(k_43);
  n_43 = t;
  t = term_c_21;
  o_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_21, n_43);
  t = k_7(o_43, n_43, t);
  t = k_43;
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_d_21;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_7, l_7, m_7, t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm s_43 = NULL;
  s_43 = t;
  if(match_string(t, "-S"))
    {
      t = s_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_43;
    }
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL;
  t = term_a_21;
  t_43 = t;
  t = term_e_21;
  u_43 = t;
  t = term_f_21;
  t = k_7(t_43, u_43, t);
  t = term_g_21;
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_h_21;
  return(t);
}
ATerm r_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm y_43 = NULL,a_44 = NULL,d_44 = NULL;
  y_43 = t;
  t = SSL_string_to_int(y_43);
  a_44 = t;
  t = term_a_21;
  d_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_21, a_44);
  t = k_7(d_44, a_44, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_43);
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_i_21;
  return(t);
}
ATerm u_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL;
  t = term_j_21;
  e_44 = t;
  t = term_z_0;
  f_44 = t;
  t = term_k_21;
  t = k_7(e_44, f_44, t);
  t = term_l_21;
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_m_21;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_7, o_7, q_7, t);
      ;
      LocalPopChoice(o_21);
    }
  else
    {
      t = n_21;
      {
        ATerm p_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_7, s_7, t_7, t);
            ;
            LocalPopChoice(q_21);
          }
        else
          {
            t = p_21;
            t = Option_3_0(u_7, v_7, w_7, t);
          }
      }
    }
  return(t);
}
ATerm k_7 (ATerm p_83, ATerm q_83, ATerm t)
{
  ATerm g_44 = NULL;
  t = term_v_20;
  g_44 = t;
  t = SSL_table_put(g_44, p_83, q_83);
  t = (ATerm) ATmakeAppl(sym__3, term_v_20, p_83, q_83);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL;
      t = term_z_0;
      t = d_0(t);
      l_44 = t;
      t = term_r_21;
      m_44 = t;
      t = term_s_21;
      n_44 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_21, term_s_21, l_44);
      t = i_7(m_44, n_44, l_44, t);
      _fail(t);
    }
  else
    {
      ATerm q_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_44 = ATgetFirst((ATermList) t);
          k_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_44;
      t = a_0(t);
      t = term_z_0;
      t = b_0(t);
      q_44 = t;
      t = (ATerm) ATinsert(CheckATermList(k_44), q_44);
    }
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm s_44 = NULL;
  s_44 = t;
  if(match_string(t, "-o"))
    {
      t = s_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_44;
    }
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm t_44 = NULL,v_44 = NULL;
  t_44 = t;
  t = term_t_21;
  v_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_21, t_44);
  t = k_7(v_44, t_44, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_44);
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_x_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_7, y_7, z_7, t);
  return(t);
}
ATerm i_7 (ATerm f_65, ATerm g_65, ATerm e_65, ATerm t)
{
  ATerm a_45 = NULL,b_45 = NULL,e_45 = NULL;
  a_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_65, g_65);
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_22 = ATgetArgument(t, 0);
            ATerm b_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_65, g_65);
        t = h_7(f_65, g_65, t);
        ;
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
        t = (ATerm) ATempty;
      }
    b_45 = t;
    t = (ATerm) ATinsert(CheckATermList(b_45), e_65);
    e_45 = t;
    t = SSL_table_put(f_65, g_65, e_45);
    t = a_45;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL;
      t = term_z_0;
      t = m_0(t);
      s_45 = t;
      t = term_r_21;
      t_45 = t;
      t = term_s_21;
      u_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_21, term_s_21, s_45);
      t = i_7(t_45, u_45, s_45, t);
      _fail(t);
    }
  else
    {
      ATerm y_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_45 = ATgetFirst((ATermList) t);
          p_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_45 = ATgetFirst((ATermList) t);
          r_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_45;
      t = i_0(t);
      t = q_45;
      t = k_0(t);
      y_45 = t;
      t = (ATerm) ATinsert(CheckATermList(r_45), y_45);
    }
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm a_46 = NULL;
  a_46 = t;
  if(match_string(t, "-i"))
    {
      t = a_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_46;
    }
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL;
  b_46 = t;
  t = term_c_22;
  c_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_22, b_46);
  t = k_7(c_46, b_46, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_46);
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_8, b_8, c_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_0;
  t = whoami_0_0(t);
  d_46 = t;
  t = term_a_10;
  e_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_22), d_46);
  f_46 = t;
  t = SSL_printnl(e_46, f_46);
  t = term_d_10;
  g_46 = t;
  t = SSL_exit(g_46);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_f_22;
  t = get_config_0_0(t);
  return(t);
}
ATerm f_7 (ATerm j_63, ATerm k_63, ATerm t)
{
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_63, k_63);
      ;
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
      t = SSL_addr(j_63, k_63);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_132 (ATerm), ATerm k_132 (ATerm), ATerm t)
{
  ATerm i_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_132(t);
      ;
      LocalPopChoice(n_22);
    }
  else
    {
      t = i_22;
      {
        ATerm j_46 = NULL,k_46 = NULL,n_46 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_46 = ATgetFirst((ATermList) t);
            k_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_46;
        t = foldr_2_0(j_132, k_132, t);
        n_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_46, n_46);
        t = k_132(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = term_e_21;
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL;
  if(match_cons(t, sym__2))
    {
      c_12 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(c_12, d_12, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_46 = NULL,s_11 = NULL,v_11 = NULL;
  t = times_0_0(t);
  s_11 = t;
  t = SSL_explode_term(s_11);
  if(match_cons(t, sym__2))
    {
      ATerm o_22 = ATgetArgument(t, 0);
      v_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_11;
  t = foldr_2_0(d_8, e_8, t);
  q_46 = t;
  t = SSL_TicksToSeconds(q_46);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL;
  b_47 = t;
  if(match_cons(t, sym__2))
    {
      c_47 = ATgetArgument(t, 0);
      d_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_47;
        if((c_47 != t))
          {
            _fail(t);
          }
        t = b_47;
        ;
        LocalPopChoice(s_22);
      }
    else
      {
        t = q_22;
        t = (ATerm) ATmakeAppl(sym__2, c_47, d_47);
        {
          ATerm t_22 = t;
          int u_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_47, d_47);
              ;
              LocalPopChoice(u_22);
            }
          else
            {
              t = t_22;
              t = SSL_gtr(c_47, d_47);
            }
          t = (ATerm) ATmakeAppl(sym__2, c_47, d_47);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_145 (ATerm), ATerm t)
{
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_47 = NULL,i_47 = NULL;
      g_47 = t;
      t = term_a_21;
      t = get_config_0_0(t);
      i_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_47, term_d_10);
      t = geq_0_0(t);
      t = g_47;
      t = c_145(t);
      ;
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
    }
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL;
  t = run_time_0_0(t);
  k_47 = t;
  t = term_z_0;
  t = whoami_0_0(t);
  l_47 = t;
  t = term_a_10;
  m_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_22), k_47), term_x_22), l_47);
  n_47 = t;
  t = SSL_printnl(m_47, n_47);
  t = (ATerm) ATmakeAppl(sym__2, term_a_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_22), k_47), term_x_22), l_47));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_21;
  o_47 = t;
  t = SSL_exit(o_47);
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm b_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(e_23);
    }
  else
    {
      t = b_23;
      {
        ATerm f_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(g_23);
          }
        else
          {
            t = f_23;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_147 (ATerm), ATerm t)
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      t = fetch_1_0(g_8, t);
    }
  t = s_147(t);
  return(t);
}
ATerm map_1_0 (ATerm t_127 (ATerm), ATerm t)
{
  ATerm p_47 (ATerm t)
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        t = Cons_2_0(t_127, p_47, t);
      }
    return(t);
  }
  t = p_47(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_47 = ATgetFirst((ATermList) t);
      s_47 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_47 = NULL,x_47 = NULL;
        t = s_47;
        t = g_0(t);
        w_47 = t;
        t = r_47;
        t = f_0(t);
        x_47 = t;
        t = s_47;
        {
          ATerm h_8 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(w_47), x_47);
            return(t);
          }
          t = reverse_acc_2_0(f_0, h_8, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_0;
      t = g_0(t);
    }
  return(t);
}
ATerm h_7 (ATerm w_66, ATerm x_66, ATerm t)
{
  t = SSL_table_get(w_66, x_66);
  return(t);
}
ATerm Program_1_0 (ATerm n_119 (ATerm), ATerm t)
{
  ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,e_2 = NULL,f_2 = NULL;
  b_48 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_48);
  y_47 = t;
  t = z_47;
  t = n_119(t);
  a_48 = t;
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_48);
  e_2 = t;
  t = SSLsetAnnotations(e_2, y_47);
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm j_48 = NULL;
  j_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_48), term_m_23);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL;
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      t = fetch_1_0(i_8, t);
    }
  t = term_u_23;
  t = echo_0_0(t);
  t = term_r_21;
  h_48 = t;
  t = term_s_21;
  i_48 = t;
  t = term_w_23;
  t = h_7(h_48, i_48, t);
  t = reverse_acc_2_0(_id, j_8, t);
  t = map_1_0(k_8, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm o_119 (ATerm), ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL,q_48 = NULL,g_2 = NULL,h_2 = NULL;
  q_48 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      l_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_48);
  k_48 = t;
  t = l_48;
  t = o_119(t);
  m_48 = t;
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, m_48);
  g_2 = t;
  t = SSLsetAnnotations(g_2, k_48);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL;
  v_48 = t;
  {
    ATerm x_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_48;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_24 = ATgetFirst((ATermList) t);
                ATerm b_24 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_48;
          }
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = x_23;
        t = (ATerm) ATinsert(ATempty, v_48);
      }
    w_48 = t;
    t = term_s_19;
    x_48 = t;
    t = SSL_printnl(x_48, w_48);
    t = v_48;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_f_22;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL;
  t = term_c_24;
  g_49 = t;
  t = term_z_0;
  h_49 = t;
  t = term_d_24;
  t = k_7(g_49, h_49, t);
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm o_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm i_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL;
  t = term_c_24;
  i_49 = t;
  t = term_z_0;
  m_49 = t;
  t = term_d_24;
  t = k_7(i_49, m_49, t);
  t = term_f_24;
  n_49 = t;
  t = term_z_0;
  o_49 = t;
  t = term_g_24;
  t = k_7(n_49, o_49, t);
  t = term_h_24;
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = term_i_24;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_8, m_8, n_8, t);
      ;
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      t = Option_3_0(o_8, p_8, r_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm t)
{
  ATerm p_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,a_51 = NULL,b_51 = NULL,i_2 = NULL,j_2 = NULL;
  b_51 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_49 = ATgetFirst((ATermList) t);
      s_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_51);
  p_49 = t;
  t = r_49;
  t = a_105(t);
  t_49 = t;
  t = s_49;
  t = b_105(t);
  a_51 = t;
  j_2 = t;
  t = (ATerm) ATinsert(CheckATermList(a_51), t_49);
  i_2 = t;
  t = SSLsetAnnotations(i_2, p_49);
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm t_51 = NULL,v_51 = NULL;
  t_51 = t;
  t = term_f_22;
  v_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_22, t_51);
  t = k_7(v_51, t_51, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, t_51);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_149 (ATerm), ATerm t)
{
  ATerm s_51 = NULL;
  s_51 = t;
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_24;
        t = v_149(t);
        ;
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
      }
    t = s_51;
    {
      ATerm t_8 (ATerm t)
      {
        ATerm o_24 = t;
        int p_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_24 = t;
            int e_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(e_25);
              }
            else
              {
                t = q_24;
                t = v_149(t);
                t = Cons_2_0(_id, t_8, t);
              }
            ;
            LocalPopChoice(p_24);
          }
        else
          {
            t = o_24;
            {
              ATerm x_51 = NULL,y_51 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_51 = ATgetFirst((ATermList) t);
                  y_51 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(y_51), (ATerm) ATmakeAppl(sym_Undefined_1, x_51));
            }
          }
        return(t);
      }
      t = Cons_2_0(s_8, t_8, t);
    }
  }
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm o_52 = NULL;
  o_52 = t;
  if(match_string(t, "--help"))
    {
      t = o_52;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_52;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_52;
        }
    }
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL;
  t = term_j_23;
  p_52 = t;
  t = term_z_0;
  q_52 = t;
  t = term_f_25;
  t = k_7(p_52, q_52, t);
  t = term_g_25;
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_i_25;
  return(t);
}
ATerm z_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_149 (ATerm), ATerm t)
{
  ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL;
  h_52 = t;
  t = term_r_21;
  k_52 = t;
  t = term_s_21;
  l_52 = t;
  t = (ATerm) ATempty;
  m_52 = t;
  t = SSL_table_put(k_52, l_52, m_52);
  t = h_52;
  {
    ATerm v_8 (ATerm t)
    {
      ATerm j_25 = t;
      int k_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_149(t);
          ;
          LocalPopChoice(k_25);
        }
      else
        {
          t = j_25;
          {
            ATerm l_25 = t;
            int m_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_8, x_8, y_8, t);
                ;
                LocalPopChoice(m_25);
              }
            else
              {
                t = l_25;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_8, t);
    {
      ATerm n_25 = t;
      int o_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_52 = NULL;
          x_52 = t;
          {
            ATerm p_25 = t;
            int q_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_13 = NULL;
                t = x_52;
                {
                  ATerm r_25 = t;
                  int s_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_j_23;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(s_25);
                    }
                  else
                    {
                      t = r_25;
                      t = fetch_1_0(z_8, t);
                    }
                  t = x_52;
                  t = default_system_usage_0_0(t);
                  t = term_e_21;
                  e_13 = t;
                  t = SSL_exit(e_13);
                }
                ;
                LocalPopChoice(q_25);
              }
            else
              {
                t = p_25;
                {
                  ATerm q_13 = NULL;
                  t = term_c_24;
                  t = get_config_0_0(t);
                  t = x_52;
                  t = default_system_about_0_0(t);
                  t = term_e_21;
                  q_13 = t;
                  t = SSL_exit(q_13);
                }
              }
          }
          ;
          LocalPopChoice(o_25);
        }
      else
        {
          t = n_25;
          {
            ATerm t_25 = t;
            int a_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL;
                ATerm a_9 (ATerm t)
                {
                  ATerm b_9 (ATerm t)
                  {
                    if(((i_52 != NULL) && (i_52 != t)))
                      _fail(t);
                    else
                      i_52 = t;
                    return(t);
                  }
                  t = Undefined_1_0(b_9, t);
                  return(t);
                }
                t = fetch_1_0(a_9, t);
                t = term_a_10;
                y_52 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_52)), term_d_26);
                z_52 = t;
                t = SSL_printnl(y_52, z_52);
                t = (ATerm) ATmakeAppl(sym__2, term_a_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_52)), term_d_26));
                t = default_system_usage_0_0(t);
                t = term_d_10;
                a_53 = t;
                t = SSL_exit(a_53);
                ;
                LocalPopChoice(a_26);
              }
            else
              {
                t = t_25;
              }
          }
        }
      j_52 = t;
      t = term_r_21;
      n_52 = t;
      t = SSL_table_destroy(n_52);
      t = j_52;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_147 (ATerm), ATerm v_147 (ATerm), ATerm w_147 (ATerm), ATerm x_147 (ATerm), ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL;
  t = parse_options_1_0(u_147, t);
  d_53 = t;
  t = term_e_26;
  e_53 = t;
  t = SSL_table_create(e_53);
  t = term_e_26;
  f_53 = t;
  t = term_f_26;
  g_53 = t;
  t = SSL_table_put(f_53, g_53, d_53);
  t = d_53;
  t = w_147(t);
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_147, t);
        ;
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        {
          ATerm i_26 = t;
          int j_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_147(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(j_26);
            }
          else
            {
              t = i_26;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm e_9 (ATerm t)
{
  t = if_verbose2_1_0(j_9, t);
  return(t);
}
ATerm g_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm h_53 = NULL,i_53 = NULL;
  t = term_k_26;
  h_53 = t;
  t = term_z_0;
  i_53 = t;
  t = term_l_26;
  t = k_7(h_53, i_53, t);
  t = term_m_26;
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = term_n_26;
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL;
  j_53 = t;
  t = term_f_22;
  t = get_config_0_0(t);
  k_53 = t;
  t = term_a_10;
  l_53 = t;
  t = (ATerm) ATinsert(ATempty, k_53);
  m_53 = t;
  t = SSL_printnl(l_53, m_53);
  t = j_53;
  return(t);
}
ATerm iowrap_3_0 (ATerm d_147 (ATerm), ATerm e_147 (ATerm), ATerm f_147 (ATerm), ATerm t)
{
  ATerm c_9 (ATerm t)
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_147(t);
        ;
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        {
          ATerm q_26 = t;
          int r_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(r_26);
            }
          else
            {
              t = q_26;
              {
                ATerm s_26 = t;
                int t_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(t_26);
                  }
                else
                  {
                    t = s_26;
                    {
                      ATerm u_26 = t;
                      int v_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(g_9, h_9, i_9, t);
                          ;
                          LocalPopChoice(v_26);
                        }
                      else
                        {
                          t = u_26;
                          {
                            ATerm w_26 = t;
                            int x_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(x_26);
                              }
                            else
                              {
                                t = w_26;
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
  ATerm f_9 (ATerm t)
  {
    ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL;
    n_53 = t;
    {
      ATerm y_26 = t;
      int z_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((o_53 != NULL) && (o_53 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_53 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(k_9, t);
          ;
          LocalPopChoice(z_26);
        }
      else
        {
          t = y_26;
          t = term_a_27;
          o_53 = t;
        }
      t = not_null(o_53);
      t = ReadFromFile_0_0(t);
      p_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_53, p_53);
      t = apply_strategy_1_0(d_147, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(c_9, f_147, e_9, f_9, t);
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = _2_0(_id, n_9, t);
  return(t);
}
ATerm n_9 (ATerm t)
{
  t = apply_to_bodies_1_0(o_9, t);
  return(t);
}
ATerm o_9 (ATerm t)
{
  t = downup_1_0(q_9, t);
  t = downup_1_0(t_9, t);
  t = topdown_1_0(z_9, t);
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = repeat_1_0(r_9, t);
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm b_27 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(c_27);
    }
  else
    {
      t = b_27;
      {
        ATerm h_27 = t;
        int i_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL;
            a_54 = t;
            if(match_cons(t, sym_Seq_2))
              {
                b_54 = ATgetArgument(t, 0);
                x_53 = ATgetArgument(t, 1);
                t = x_53;
                if(match_cons(t, sym_Let_2))
                  {
                    y_53 = ATgetArgument(t, 0);
                    z_53 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Let_2, y_53, (ATerm) ATmakeAppl(sym_Seq_2, b_54, z_53));
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    b_54 = ATgetArgument(t, 0);
                    x_53 = ATgetArgument(t, 1);
                    {
                      ATerm i_54 = NULL;
                      t = x_53;
                      if(match_cons(t, sym_Scope_2))
                        {
                          y_53 = ATgetArgument(t, 0);
                          z_53 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__2, b_54, y_53);
                      t = conc_0_0(t);
                      i_54 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, i_54, z_53);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Where_1))
                      {
                        b_54 = ATgetArgument(t, 0);
                        t = a_54;
                        t = s_5(b_54, t);
                      }
                    else
                      {
                        if(match_cons(t, sym_Test_1))
                          {
                            b_54 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = a_54;
                        t = r_5(b_54, t);
                      }
                  }
              }
            ;
            LocalPopChoice(i_27);
          }
        else
          {
            t = h_27;
            t = WidenScope_0_0(t);
          }
      }
    }
  return(t);
}
ATerm t_9 (ATerm t)
{
  t = repeat_1_0(y_9, t);
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
      {
        ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL;
        o_54 = t;
        if(match_cons(t, sym_Seq_2))
          {
            p_54 = ATgetArgument(t, 0);
            l_54 = ATgetArgument(t, 1);
            t = l_54;
            if(match_cons(t, sym_Let_2))
              {
                m_54 = ATgetArgument(t, 0);
                n_54 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, m_54, (ATerm) ATmakeAppl(sym_Seq_2, p_54, n_54));
          }
        else
          {
            if(match_cons(t, sym_Scope_2))
              {
                p_54 = ATgetArgument(t, 0);
                l_54 = ATgetArgument(t, 1);
                {
                  ATerm w_54 = NULL;
                  t = l_54;
                  if(match_cons(t, sym_Scope_2))
                    {
                      m_54 = ATgetArgument(t, 0);
                      n_54 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, p_54, m_54);
                  t = conc_0_0(t);
                  w_54 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_54, n_54);
                }
              }
            else
              {
                if(match_cons(t, sym_Where_1))
                  {
                    p_54 = ATgetArgument(t, 0);
                    t = o_54;
                    t = s_5(p_54, t);
                  }
                else
                  {
                    if(match_cons(t, sym_Test_1))
                      {
                        p_54 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = o_54;
                    t = r_5(p_54, t);
                  }
              }
          }
      }
    }
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL;
      z_54 = t;
      if(match_cons(t, sym_Scope_2))
        {
          a_55 = ATgetArgument(t, 0);
          b_55 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_54;
      t = q_5(a_55, b_55, t);
      {
        ATerm n_27 = t;
        int o_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,n_14 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                c_14 = ATgetArgument(t, 0);
                {
                  ATerm p_27 = ATgetArgument(t, 1);
                  if(match_cons(p_27, sym_Scope_2))
                    {
                      d_14 = ATgetArgument(p_27, 0);
                      e_14 = ATgetArgument(p_27, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, c_14, d_14);
            t = conc_0_0(t);
            n_14 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, n_14, e_14);
            ;
            LocalPopChoice(o_27);
          }
        else
          {
            t = n_27;
          }
      }
      ;
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(m_9, _fail, default_usage_0_0, t);
  return(t);
}
