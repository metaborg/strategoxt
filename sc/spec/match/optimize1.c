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
ATerm term_k_25;
ATerm term_e_24;
ATerm term_a_24;
ATerm term_y_23;
ATerm term_v_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_q_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_w_21;
ATerm term_t_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_u_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_h_19;
ATerm term_w_18;
ATerm term_r_18;
ATerm term_o_18;
ATerm term_y_17;
ATerm term_r_17;
ATerm term_o_17;
ATerm term_f_12;
ATerm term_y_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_k_10;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_b_1;
void init_constant_terms (void)
{
  ATprotect(&(term_b_1));
  term_b_1 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Sort_2, term_p_11, (ATerm) ATempty);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_ConstType_1, term_q_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_s_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_b_1);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym__2, term_l_20, term_m_20);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym__2, term_f_22, term_b_1);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym__2, term_i_22, term_b_1);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym__2, term_t_21, term_b_1);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_v_23, term_b_1);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm r_5 (ATerm t_96, ATerm);
ATerm new_0_0 (ATerm);
ATerm s_5 (ATerm r_96, ATerm);
ATerm at_end_1_0 (ATerm j_128 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm r_1 (ATerm i_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm a_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm c_6 (ATerm i_97, ATerm h_97, ATerm g_97, ATerm);
ATerm f_13 (ATerm m_11, ATerm n_11, ATerm o_11, ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm w_122 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm i_2 (ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm q_2 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm e_138 (ATerm), ATerm);
ATerm downup_1_0 (ATerm u_121 (ATerm), ATerm);
ATerm f_5 (ATerm q_129 (ATerm), ATerm u_59, ATerm t_59, ATerm);
ATerm genzip_4_0 (ATerm e_126 (ATerm), ATerm f_126 (ATerm), ATerm g_126 (ATerm), ATerm h_126 (ATerm), ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm h_5 (ATerm v_713, ATerm a_714, ATerm q_89, ATerm);
ATerm while_not_2_0 (ATerm t_138 (ATerm), ATerm u_138 (ATerm), ATerm);
ATerm for_3_0 (ATerm w_138 (ATerm), ATerm x_138 (ATerm), ATerm y_138 (ATerm), ATerm);
ATerm y_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm f_3 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm j_5 (ATerm o_129 (ATerm), ATerm s_59, ATerm r_59, ATerm);
ATerm DynamicRules_1_0 (ATerm y_108 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm r_108 (ATerm), ATerm s_108 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm t_120 (ATerm), ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm o_5 (ATerm y_129 (ATerm), ATerm z_129 (ATerm), ATerm a_60, ATerm z_59, ATerm);
ATerm p_5 (ATerm v_129 (ATerm), ATerm w_59, ATerm v_59, ATerm);
ATerm foldr_3_0 (ATerm l_132 (ATerm), ATerm m_132 (ATerm), ATerm n_132 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm i_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm free_vars_3_0 (ATerm n_136 (ATerm), ATerm o_136 (ATerm), ATerm p_136 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm t_4 (ATerm);
ATerm w_4 (ATerm);
ATerm q_5 (ATerm c_91, ATerm b_91, ATerm a_91, ATerm);
ATerm topdown_1_0 (ATerm s_121 (ATerm), ATerm);
ATerm WidenScope_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm m_112 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm e_105 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm j_105 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm apply_to_bodies_1_0 (ATerm t_119 (ATerm), ATerm);
ATerm _2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm);
ATerm z_6 (ATerm y_78, ATerm z_78, ATerm);
ATerm a_7 (ATerm m_82, ATerm n_82, ATerm);
ATerm c_7 (ATerm s_143 (ATerm), ATerm x_586, ATerm q_82, ATerm);
ATerm b_7 (ATerm i_82, ATerm j_82, ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm u_146 (ATerm), ATerm);
ATerm i_40 (ATerm z_39, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm d_7 (ATerm o_82, ATerm);
ATerm e_7 (ATerm a_79, ATerm b_79, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm y_5 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm d_128 (ATerm), ATerm);
ATerm y_6 (ATerm m_73, ATerm n_73, ATerm);
ATerm debug_1_0 (ATerm q_143 (ATerm), ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm d_145 (ATerm), ATerm);
ATerm b_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm k_7 (ATerm p_83, ATerm q_83, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm q_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm i_7 (ATerm f_65, ATerm g_65, ATerm e_65, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm g_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm f_7 (ATerm j_63, ATerm k_63, ATerm);
ATerm foldr_2_0 (ATerm j_132 (ATerm), ATerm k_132 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm c_145 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm s_7 (ATerm);
ATerm need_help_1_0 (ATerm s_147 (ATerm), ATerm);
ATerm map_1_0 (ATerm t_127 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm h_7 (ATerm w_66, ATerm x_66, ATerm);
ATerm Program_1_0 (ATerm n_119 (ATerm), ATerm);
ATerm u_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm o_119 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm);
ATerm e_8 (ATerm);
ATerm parse_options_p__1_0 (ATerm v_149 (ATerm), ATerm);
ATerm j_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm parse_options_1_0 (ATerm u_149 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_147 (ATerm), ATerm v_147 (ATerm), ATerm w_147 (ATerm), ATerm x_147 (ATerm), ATerm);
ATerm s_8 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm y_8 (ATerm);
ATerm iowrap_3_0 (ATerm d_147 (ATerm), ATerm e_147 (ATerm), ATerm f_147 (ATerm), ATerm);
ATerm a_9 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,h_0 = NULL,j_0 = NULL,l_0 = NULL,o_0 = NULL;
  c_0 = t;
  t = term_b_1;
  t = whoami_0_0(t);
  h_0 = t;
  t = term_n_9;
  j_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), h_0), term_o_9);
  l_0 = t;
  t = SSL_printnl(j_0, l_0);
  t = term_q_9;
  o_0 = t;
  t = SSL_exit(o_0);
  t = c_0;
  return(t);
}
ATerm r_5 (ATerm t_96, ATerm t)
{
  ATerm t_0 = NULL;
  t = new_0_0(t);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, t_0)), (ATerm) ATmakeAppl(sym_Seq_2, t_96, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, t_0)))));
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm s_5 (ATerm r_96, ATerm t)
{
  ATerm u_0 = NULL;
  t = new_0_0(t);
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_0)), (ATerm) ATmakeAppl(sym_Seq_2, r_96, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, u_0)))));
  return(t);
}
ATerm at_end_1_0 (ATerm j_128 (ATerm), ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm r_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, d_1, t);
        ;
        LocalPopChoice(s_9);
      }
    else
      {
        t = r_9;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_128(t);
      }
    return(t);
  }
  t = d_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(u_9);
    }
  else
    {
      t = t_9;
      {
        ATerm x_0 = NULL,y_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_0 = ATgetFirst((ATermList) t);
            y_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_0;
        {
          ATerm w_1 (ATerm t)
          {
            t = y_0;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(w_1, t);
        }
      }
    }
  return(t);
}
ATerm r_1 (ATerm i_1, ATerm t)
{
  ATerm l_1 = NULL;
  t = SSL_explode_term(i_1);
  if(match_cons(t, sym__2))
    {
      ATerm v_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      l_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL,o_1 = NULL;
  o_1 = t;
  if(match_cons(t, sym__2))
    {
      m_1 = ATgetArgument(t, 0);
      n_1 = ATgetArgument(t, 1);
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
            {
              t = n_1;
              return(t);
            }
            t = m_1;
            t = at_end_1_0(x_1, t);
            ;
            LocalPopChoice(x_9);
          }
        else
          {
            t = w_9;
            t = r_1(o_1, t);
          }
      }
    }
  else
    {
      t = r_1(o_1, t);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL,b_2 = NULL,l_2 = NULL,r_2 = NULL,s_2 = NULL,e_3 = NULL;
  if(match_cons(t, sym__2))
    {
      b_2 = ATgetArgument(t, 0);
      l_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_2;
  if(match_cons(t, sym_Build_1))
    {
      ATerm y_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_2;
  if(match_cons(t, sym_Where_1))
    {
      r_2 = ATgetArgument(t, 0);
      t = r_2;
      if(match_cons(t, sym_Prim_2))
        {
          y_1 = ATgetArgument(t, 0);
          z_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Prim_2, y_1, z_1);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          r_2 = ATgetArgument(t, 0);
          s_2 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, r_2, s_2);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              r_2 = ATgetArgument(t, 0);
              s_2 = ATgetArgument(t, 1);
              e_3 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_PrimT_3, r_2, s_2, e_3);
        }
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_9 = ATgetArgument(t, 0);
      if(((ATgetType(z_9) != AT_LIST) || !(ATisEmpty(z_9))))
        _fail(t);
      {
        ATerm a_10 = ATgetArgument(t, 1);
        if(((ATgetType(a_10) != AT_LIST) || !(ATisEmpty(a_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_10 = ATgetArgument(t, 0);
      if(((ATgetType(b_10) == AT_LIST) && !(ATisEmpty(b_10))))
        {
          r_3 = ATgetFirst((ATermList) b_10);
          s_3 = (ATerm) ATgetNext((ATermList) b_10);
        }
      else
        _fail(t);
      {
        ATerm c_10 = ATgetArgument(t, 1);
        if(((ATgetType(c_10) == AT_LIST) && !(ATisEmpty(c_10))))
          {
            t_3 = ATgetFirst((ATermList) c_10);
            u_3 = (ATerm) ATgetNext((ATermList) c_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_3, t_3), (ATerm) ATmakeAppl(sym__2, s_3, u_3));
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL;
  if(match_cons(t, sym__2))
    {
      v_3 = ATgetArgument(t, 0);
      w_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_3), v_3);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm x_3 = NULL,a_4 = NULL;
  if(match_cons(t, sym__2))
    {
      x_3 = ATgetArgument(t, 0);
      a_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_3), (ATerm) ATmakeAppl(sym_Match_1, a_4));
  return(t);
}
ATerm c_6 (ATerm i_97, ATerm h_97, ATerm g_97, ATerm t)
{
  ATerm p_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_97, g_97);
  t = genzip_4_0(a_2, c_2, d_2, e_2, t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_3), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, h_97, i_97)));
  return(t);
}
ATerm f_13 (ATerm m_11, ATerm n_11, ATerm o_11, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, m_11, n_11);
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,h_12 = NULL,j_12 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_10 = ATgetArgument(t, 0);
            ATerm g_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_11;
        if(match_cons(t, sym_Build_1))
          {
            h_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = n_11;
        if(match_cons(t, sym_Match_1))
          {
            j_12 = ATgetArgument(t, 0);
            t = h_12;
            if(match_cons(t, sym_Op_2))
              {
                b_12 = ATgetArgument(t, 0);
                c_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = j_12;
            if(match_cons(t, sym_Op_2))
              {
                d_12 = ATgetArgument(t, 0);
                e_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm h_10 = t;
              int i_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, b_12, d_12);
                  {
                    ATerm j_10 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm j_2 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            j_2 = ATgetArgument(t, 0);
                            if((j_2 != ATgetArgument(t, 1)))
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
                        t = j_10;
                      }
                    t = term_k_10;
                  }
                  ;
                  LocalPopChoice(i_10);
                }
              else
                {
                  t = h_10;
                  t = d_12;
                  if((b_12 != t))
                    {
                      _fail(t);
                    }
                  t = (ATerm) ATmakeAppl(sym__2, m_11, n_11);
                  t = c_6(c_12, b_12, e_12, t);
                }
            }
          }
        else
          {
            if(match_cons(t, sym_Build_1))
              {
                j_12 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Build_1, j_12);
          }
        ;
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
        {
          ATerm l_10 = t;
          int m_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = BuildPrim_0_0(t);
              ;
              LocalPopChoice(m_10);
            }
          else
            {
              t = l_10;
              {
                ATerm r_12 = NULL,s_12 = NULL,u_12 = NULL,v_12 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm n_10 = ATgetArgument(t, 0);
                    ATerm o_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_11;
                if(match_cons(t, sym_Match_1))
                  {
                    r_12 = ATgetArgument(t, 0);
                    t = n_11;
                    if(match_cons(t, sym_Match_1))
                      {
                        u_12 = ATgetArgument(t, 0);
                        t = u_12;
                        if((r_12 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Match_1, r_12);
                      }
                    else
                      {
                        if(match_cons(t, sym_Build_1))
                          {
                            u_12 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = r_12;
                        if(match_cons(t, sym_Var_1))
                          {
                            s_12 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = u_12;
                        if(match_cons(t, sym_Var_1))
                          {
                            v_12 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = v_12;
                        if((s_12 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_12));
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Build_1))
                      {
                        r_12 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = n_11;
                    if(match_cons(t, sym_Match_1))
                      {
                        u_12 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = u_12;
                    if((r_12 != t))
                      {
                        _fail(t);
                      }
                    t = (ATerm) ATmakeAppl(sym_Build_1, r_12);
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
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
  b_13 = t;
  if(match_cons(t, sym_Seq_2))
    {
      c_13 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_13;
  if(match_cons(t, sym_Seq_2))
    {
      z_12 = ATgetArgument(t, 0);
      a_13 = ATgetArgument(t, 1);
      {
        ATerm p_10 = t;
        int q_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_2 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, c_13, z_12);
            {
              ATerm r_10 = t;
              int s_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,h_4 = NULL,j_4 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm t_10 = ATgetArgument(t, 0);
                      ATerm u_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = c_13;
                  if(match_cons(t, sym_Build_1))
                    {
                      h_4 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = z_12;
                  if(match_cons(t, sym_Match_1))
                    {
                      j_4 = ATgetArgument(t, 0);
                      t = h_4;
                      if(match_cons(t, sym_Op_2))
                        {
                          b_4 = ATgetArgument(t, 0);
                          c_4 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_4;
                      if(match_cons(t, sym_Op_2))
                        {
                          d_4 = ATgetArgument(t, 0);
                          e_4 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm v_10 = t;
                        int w_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = (ATerm) ATmakeAppl(sym__2, b_4, d_4);
                            {
                              ATerm x_10 = t;
                              if((PushChoice() == 0))
                                {
                                  ATerm v_5 = NULL;
                                  if(match_cons(t, sym__2))
                                    {
                                      v_5 = ATgetArgument(t, 0);
                                      if((v_5 != ATgetArgument(t, 1)))
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
                                  t = x_10;
                                }
                              t = term_k_10;
                            }
                            ;
                            LocalPopChoice(w_10);
                          }
                        else
                          {
                            t = v_10;
                            t = d_4;
                            if((b_4 != t))
                              {
                                _fail(t);
                              }
                            t = (ATerm) ATmakeAppl(sym__2, c_13, z_12);
                            t = c_6(c_4, b_4, e_4, t);
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Build_1))
                        {
                          j_4 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Build_1, j_4);
                    }
                  ;
                  LocalPopChoice(s_10);
                }
              else
                {
                  t = r_10;
                  {
                    ATerm y_10 = t;
                    int z_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildPrim_0_0(t);
                        ;
                        LocalPopChoice(z_10);
                      }
                    else
                      {
                        t = y_10;
                        {
                          ATerm r_4 = NULL,s_4 = NULL,u_4 = NULL,v_4 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              ATerm a_11 = ATgetArgument(t, 0);
                              ATerm b_11 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = c_13;
                          if(match_cons(t, sym_Match_1))
                            {
                              r_4 = ATgetArgument(t, 0);
                              t = z_12;
                              if(match_cons(t, sym_Match_1))
                                {
                                  u_4 = ATgetArgument(t, 0);
                                  t = u_4;
                                  if((r_4 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, r_4);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      u_4 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = r_4;
                                  if(match_cons(t, sym_Var_1))
                                    {
                                      s_4 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = u_4;
                                  if(match_cons(t, sym_Var_1))
                                    {
                                      v_4 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = v_4;
                                  if((s_4 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_4));
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_Build_1))
                                {
                                  r_4 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = z_12;
                              if(match_cons(t, sym_Match_1))
                                {
                                  u_4 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = u_4;
                              if((r_4 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym_Build_1, r_4);
                            }
                        }
                      }
                  }
                }
              z_2 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, z_2, a_13);
            }
            ;
            LocalPopChoice(q_10);
          }
        else
          {
            t = p_10;
            t = f_13(c_13, d_13, b_13, t);
          }
      }
    }
  else
    {
      t = f_13(c_13, d_13, b_13, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm w_122 (ATerm), ATerm t)
{
  ATerm i_13 (ATerm t)
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_122(t);
        ;
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
        t = SRTS_one(i_13, t);
      }
    return(t);
  }
  t = i_13(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL;
  b_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      c_14 = ATgetArgument(t, 0);
      j_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_14;
  if(match_cons(t, sym_Let_2))
    {
      k_14 = ATgetArgument(t, 0);
      m_14 = ATgetArgument(t, 1);
      {
        ATerm s_14 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, c_14, k_14);
        t = conc_0_0(t);
        s_14 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, s_14, m_14);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          k_14 = ATgetArgument(t, 0);
          m_14 = ATgetArgument(t, 1);
          n_14 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_14 = ATgetFirst((ATermList) t);
          i_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_14;
      if(match_cons(t, sym_SDefT_4))
        {
          e_14 = ATgetArgument(t, 0);
          f_14 = ATgetArgument(t, 1);
          g_14 = ATgetArgument(t, 2);
          h_14 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = f_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_14;
      if(match_cons(t, sym_SVar_1))
        {
          l_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_14;
      if((e_14 != t))
        {
          _fail(t);
        }
      t = h_14;
      {
        ATerm e_11 = t;
        if((PushChoice() == 0))
          {
            ATerm f_2 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm f_11 = ATgetArgument(t, 0);
                  if(match_cons(f_11, sym_SVar_1))
                    {
                      if((e_14 != ATgetArgument(f_11, 0)))
                        {
                          _fail(ATgetArgument(f_11, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm g_11 = ATgetArgument(t, 1);
                    if(((ATgetType(g_11) != AT_LIST) || !(ATisEmpty(g_11))))
                      _fail(t);
                  }
                  {
                    ATerm h_11 = ATgetArgument(t, 2);
                    if(((ATgetType(h_11) != AT_LIST) || !(ATisEmpty(h_11))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(f_2, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_11;
          }
        t = h_14;
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,t_15 = NULL,u_15 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      t_15 = ATgetArgument(t, 0);
      t = t_15;
      if(match_cons(t, sym_Seq_2))
        {
          l_15 = ATgetArgument(t, 0);
          h_15 = ATgetArgument(t, 1);
          t = l_15;
          if(match_cons(t, sym_Where_1))
            {
              g_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_15;
          if(match_cons(t, sym_Seq_2))
            {
              i_15 = ATgetArgument(t, 0);
              k_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_15;
          if(match_cons(t, sym_Build_1))
            {
              j_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, g_15, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_15), k_15)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              l_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, l_15);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          t_15 = ATgetArgument(t, 0);
          t = t_15;
          if(match_cons(t, sym_Test_1))
            {
              l_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, l_15);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              t_15 = ATgetArgument(t, 0);
              t = t_15;
              if(match_cons(t, sym_Not_1))
                {
                  l_15 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, l_15);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  t_15 = ATgetArgument(t, 0);
                  u_15 = ATgetArgument(t, 1);
                  t = u_15;
                  if((t_15 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      t_15 = ATgetArgument(t, 0);
                      u_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = u_15;
                  if((t_15 != t))
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
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL,r_16 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      m_16 = ATgetArgument(t, 0);
      r_16 = ATgetArgument(t, 1);
      t = m_16;
      if(match_cons(t, sym_LChoice_2))
        {
          n_16 = ATgetArgument(t, 0);
          o_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, n_16, (ATerm) ATmakeAppl(sym_LChoice_2, o_16, r_16));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          m_16 = ATgetArgument(t, 0);
          r_16 = ATgetArgument(t, 1);
          t = m_16;
          if(match_cons(t, sym_Seq_2))
            {
              n_16 = ATgetArgument(t, 0);
              o_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, n_16, (ATerm) ATmakeAppl(sym_Seq_2, o_16, r_16));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              m_16 = ATgetArgument(t, 0);
              r_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_16;
          if(match_cons(t, sym_Choice_2))
            {
              n_16 = ATgetArgument(t, 0);
              o_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, n_16, (ATerm) ATmakeAppl(sym_Choice_2, o_16, r_16));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm g_2 (ATerm t)
        {
          ATerm k_11 = t;
          int l_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(l_11);
            }
          else
            {
              t = k_11;
            }
          return(t);
        }
        t = Cons_2_0(_id, g_2, t);
      }
      ;
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      {
        ATerm h_2 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, h_2, t);
      }
    }
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm d_19 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_19, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_11), term_r_11));
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_19 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, f_19, term_r_11);
      ;
      LocalPopChoice(t_11);
    }
  else
    {
      t = s_11;
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm t_19 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      t_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_19, term_r_11);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_19 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, v_19, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_11), term_r_11));
      ;
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm f_20 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      f_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_20, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_11), term_r_11));
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_20 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, h_20, term_r_11);
      ;
      LocalPopChoice(x_11);
    }
  else
    {
      t = w_11;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,f_18 = NULL,g_18 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      f_18 = ATgetArgument(t, 0);
      g_18 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, f_18, g_18);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          f_18 = ATgetArgument(t, 0);
          t = f_18;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_17 = ATgetFirst((ATermList) t);
              v_17 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, u_17, (ATerm) ATmakeAppl(sym_LChoices_1, v_17));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_k_10;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              f_18 = ATgetArgument(t, 0);
              t = f_18;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_17 = ATgetFirst((ATermList) t);
                  v_17 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, u_17, (ATerm) ATmakeAppl(sym_Choices_1, v_17));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_k_10;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  f_18 = ATgetArgument(t, 0);
                  t = f_18;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      u_17 = ATgetFirst((ATermList) t);
                      v_17 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_17, (ATerm) ATmakeAppl(sym_Seqs_1, v_17));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_y_11;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_18 = ATgetArgument(t, 0);
                      g_18 = ATgetArgument(t, 1);
                      x_17 = ATgetArgument(t, 2);
                      w_17 = ATgetArgument(t, 3);
                      {
                        ATerm x_18 = NULL,y_18 = NULL;
                        t = g_18;
                        t = map1_1_0(i_2, t);
                        x_18 = t;
                        t = x_17;
                        t = map1_1_0(k_2, t);
                        y_18 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, f_18, x_18, y_18, w_17);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          f_18 = ATgetArgument(t, 0);
                          g_18 = ATgetArgument(t, 1);
                          x_17 = ATgetArgument(t, 2);
                          w_17 = ATgetArgument(t, 3);
                          {
                            ATerm z_11 = t;
                            int a_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm l_19 = NULL,m_19 = NULL;
                                t = x_17;
                                t = map1_1_0(m_2, t);
                                l_19 = t;
                                t = g_18;
                                t = map_1_0(n_2, t);
                                m_19 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, f_18, m_19, l_19, w_17);
                                ;
                                LocalPopChoice(a_12);
                              }
                            else
                              {
                                t = z_11;
                                {
                                  ATerm b_20 = NULL,c_20 = NULL;
                                  t = g_18;
                                  t = map1_1_0(o_2, t);
                                  b_20 = t;
                                  t = x_17;
                                  t = map_1_0(p_2, t);
                                  c_20 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, f_18, b_20, c_20, w_17);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              f_18 = ATgetArgument(t, 0);
                              g_18 = ATgetArgument(t, 1);
                              x_17 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, g_18, (ATerm) ATmakeAppl(sym_Op_2, term_f_12, (ATerm) ATinsert(ATinsert(ATempty, x_17), f_18)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  f_18 = ATgetArgument(t, 0);
                                  g_18 = ATgetArgument(t, 1);
                                  x_17 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, x_17)), f_18), (ATerm) ATmakeAppl(sym_Build_1, g_18)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      f_18 = ATgetArgument(t, 0);
                                      g_18 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_18, (ATerm) ATmakeAppl(sym_Match_1, g_18));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          f_18 = ATgetArgument(t, 0);
                                          g_18 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_18), g_18);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              f_18 = ATgetArgument(t, 0);
                                              g_18 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_18), f_18);
                                        }
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
ATerm q_2 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      o_21 = ATgetArgument(t, 0);
      t = o_21;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_k_10;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          o_21 = ATgetArgument(t, 0);
          t = o_21;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_y_11;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              o_21 = ATgetArgument(t, 0);
              p_21 = ATgetArgument(t, 1);
              t = o_21;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_k_10;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  o_21 = ATgetArgument(t, 0);
                  p_21 = ATgetArgument(t, 1);
                  t = p_21;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_k_10;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      o_21 = ATgetArgument(t, 0);
                      p_21 = ATgetArgument(t, 1);
                      t = p_21;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_k_10;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          o_21 = ATgetArgument(t, 0);
                          t = o_21;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_k_10;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              o_21 = ATgetArgument(t, 0);
                              t = o_21;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_k_10;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  o_21 = ATgetArgument(t, 0);
                                  p_21 = ATgetArgument(t, 1);
                                  t = p_21;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_k_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      o_21 = ATgetArgument(t, 0);
                                      p_21 = ATgetArgument(t, 1);
                                      t = p_21;
                                      t = fetch_1_0(q_2, t);
                                      t = term_k_10;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          o_21 = ATgetArgument(t, 0);
                                          p_21 = ATgetArgument(t, 1);
                                          t = p_21;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = o_21;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  ATerm g_12 = t;
                                                  int i_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = p_21;
                                                      ;
                                                      LocalPopChoice(i_12);
                                                    }
                                                  else
                                                    {
                                                      t = g_12;
                                                      t = o_21;
                                                    }
                                                }
                                              else
                                                {
                                                  t = o_21;
                                                }
                                            }
                                          else
                                            {
                                              t = o_21;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = p_21;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              o_21 = ATgetArgument(t, 0);
                                              p_21 = ATgetArgument(t, 1);
                                              t = p_21;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = o_21;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      ATerm k_12 = t;
                                                      int l_12 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = p_21;
                                                          ;
                                                          LocalPopChoice(l_12);
                                                        }
                                                      else
                                                        {
                                                          t = k_12;
                                                          t = o_21;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = o_21;
                                                    }
                                                }
                                              else
                                                {
                                                  t = o_21;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = p_21;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  o_21 = ATgetArgument(t, 0);
                                                  t = o_21;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_k_10;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      o_21 = ATgetArgument(t, 0);
                                                      p_21 = ATgetArgument(t, 1);
                                                      q_21 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = q_21;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_21, p_21);
                                                }
                                            }
                                        }
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
  ATerm t_22 = NULL,b_23 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      b_23 = ATgetArgument(t, 0);
      t = b_23;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_y_11;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          b_23 = ATgetArgument(t, 0);
          t = b_23;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_k_10;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              b_23 = ATgetArgument(t, 0);
              t_22 = ATgetArgument(t, 1);
              t = t_22;
              if(match_cons(t, sym_Id_0))
                {
                  t = b_23;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm m_12 = t;
                      int n_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = t_22;
                          ;
                          LocalPopChoice(n_12);
                        }
                      else
                        {
                          t = m_12;
                          t = b_23;
                        }
                    }
                  else
                    {
                      t = b_23;
                    }
                }
              else
                {
                  t = b_23;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = t_22;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  b_23 = ATgetArgument(t, 0);
                  t_22 = ATgetArgument(t, 1);
                  t = b_23;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_y_11;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      b_23 = ATgetArgument(t, 0);
                      t_22 = ATgetArgument(t, 1);
                      t = t_22;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_y_11;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          b_23 = ATgetArgument(t, 0);
                          t_22 = ATgetArgument(t, 1);
                          t = t_22;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_y_11;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              b_23 = ATgetArgument(t, 0);
                              t = b_23;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_y_11;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  b_23 = ATgetArgument(t, 0);
                                  t = b_23;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_y_11;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      b_23 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = b_23;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_y_11;
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
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(p_12);
    }
  else
    {
      t = o_12;
      {
        ATerm q_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(t_12);
          }
        else
          {
            t = q_12;
            {
              ATerm w_12 = t;
              int x_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(x_12);
                }
              else
                {
                  t = w_12;
                  {
                    ATerm y_12 = t;
                    int e_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(e_13);
                      }
                    else
                      {
                        t = y_12;
                        {
                          ATerm g_13 = t;
                          int h_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(h_13);
                            }
                          else
                            {
                              t = g_13;
                              {
                                ATerm j_13 = t;
                                int k_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_23 = NULL,s_23 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        r_23 = ATgetArgument(t, 0);
                                        s_23 = ATgetArgument(t, 1);
                                        t = r_23;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = s_23;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            r_23 = ATgetArgument(t, 0);
                                            s_23 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = r_23;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = s_23;
                                      }
                                    ;
                                    LocalPopChoice(k_13);
                                  }
                                else
                                  {
                                    t = j_13;
                                    {
                                      ATerm l_13 = t;
                                      int m_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(m_13);
                                        }
                                      else
                                        {
                                          t = l_13;
                                          {
                                            ATerm n_13 = t;
                                            int o_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(o_13);
                                              }
                                            else
                                              {
                                                t = n_13;
                                                {
                                                  ATerm w_23 = NULL,x_23 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      w_23 = ATgetArgument(t, 0);
                                                      x_23 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = w_23;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = x_23;
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm z_23 (ATerm t)
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_138(t);
        t = z_23(t);
        ;
        LocalPopChoice(q_13);
      }
    else
      {
        t = p_13;
      }
    return(t);
  }
  t = z_23(t);
  return(t);
}
ATerm downup_1_0 (ATerm u_121 (ATerm), ATerm t)
{
  t = u_121(t);
  {
    ATerm t_2 (ATerm t)
    {
      t = downup_1_0(u_121, t);
      return(t);
    }
    t = SRTS_all(t_2, t);
    t = u_121(t);
  }
  return(t);
}
ATerm f_5 (ATerm q_129 (ATerm), ATerm u_59, ATerm t_59, ATerm t)
{
  t = u_59;
  {
    ATerm g_24 (ATerm t)
    {
      ATerm r_13 = t;
      int s_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(s_13);
        }
      else
        {
          t = r_13;
          {
            ATerm t_13 = t;
            int u_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
                b_24 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    c_24 = ATgetFirst((ATermList) t);
                    d_24 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = b_24;
                {
                  ATerm u_2 (ATerm t)
                  {
                    t = t_59;
                    return(t);
                  }
                  t = o_5(q_129, u_2, c_24, d_24, t);
                  t = g_24(t);
                }
                ;
                LocalPopChoice(u_13);
              }
            else
              {
                t = t_13;
                t = Cons_2_0(_id, g_24, t);
              }
          }
        }
      return(t);
    }
    t = g_24(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm e_126 (ATerm), ATerm f_126 (ATerm), ATerm g_126 (ATerm), ATerm h_126 (ATerm), ATerm t)
{
  ATerm h_24 (ATerm t)
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_126(t);
        ;
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        t = f_126(t);
        t = _2_0(h_126, h_24, t);
        t = g_126(t);
      }
    return(t);
  }
  t = h_24(t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_13 = ATgetArgument(t, 0);
      if(((ATgetType(x_13) != AT_LIST) || !(ATisEmpty(x_13))))
        _fail(t);
      {
        ATerm y_13 = ATgetArgument(t, 1);
        if(((ATgetType(y_13) != AT_LIST) || !(ATisEmpty(y_13))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_13 = ATgetArgument(t, 0);
      if(((ATgetType(z_13) == AT_LIST) && !(ATisEmpty(z_13))))
        {
          n_24 = ATgetFirst((ATermList) z_13);
          o_24 = (ATerm) ATgetNext((ATermList) z_13);
        }
      else
        _fail(t);
      {
        ATerm a_14 = ATgetArgument(t, 1);
        if(((ATgetType(a_14) == AT_LIST) && !(ATisEmpty(a_14))))
          {
            p_24 = ATgetFirst((ATermList) a_14);
            q_24 = (ATerm) ATgetNext((ATermList) a_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_24, p_24), (ATerm) ATmakeAppl(sym__2, o_24, q_24));
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL;
  if(match_cons(t, sym__2))
    {
      r_24 = ATgetArgument(t, 0);
      s_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_24), r_24);
  return(t);
}
ATerm h_5 (ATerm v_713, ATerm a_714, ATerm q_89, ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL;
  t = SSL_explode_term(a_714);
  if(match_cons(t, sym__2))
    {
      j_24 = ATgetArgument(t, 0);
      k_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(v_713);
  if(match_cons(t, sym__2))
    {
      if((j_24 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      l_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_24, k_24);
  t = genzip_4_0(v_2, w_2, x_2, _id, t);
  m_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_24, q_89);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm t_138 (ATerm), ATerm u_138 (ATerm), ATerm t)
{
  ATerm t_24 (ATerm t)
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_138(t);
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        t = u_138(t);
        t = t_24(t);
      }
    return(t);
  }
  t = t_24(t);
  return(t);
}
ATerm for_3_0 (ATerm w_138 (ATerm), ATerm x_138 (ATerm), ATerm y_138 (ATerm), ATerm t)
{
  t = w_138(t);
  t = while_not_2_0(x_138, y_138, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, z_24);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = _2_0(_id, c_3, t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, d_3, t);
      ;
      LocalPopChoice(r_14);
    }
  else
    {
      t = q_14;
      {
        ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL;
        if(match_cons(t, sym__2))
          {
            p_25 = ATgetArgument(t, 0);
            q_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_25;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_25 = ATgetFirst((ATermList) t);
            s_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_25), r_25), s_25);
      }
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL;
  a_25 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_25 = ATgetFirst((ATermList) t);
      e_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_25;
  if(match_cons(t, sym__2))
    {
      c_25 = ATgetArgument(t, 0);
      d_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_25;
        if((c_25 != t))
          {
            _fail(t);
          }
        t = e_25;
        ;
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        t = a_25;
        t = h_5(c_25, d_25, e_25, t);
      }
  }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm k_26 = NULL;
  if(match_cons(t, sym__2))
    {
      k_26 = ATgetArgument(t, 0);
      if((k_26 != ATgetArgument(t, 1)))
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
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(y_2, a_3, b_3, t);
      ;
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      {
        ATerm c_26 = NULL,e_26 = NULL,f_26 = NULL;
        c_26 = t;
        if(match_cons(t, sym__2))
          {
            e_26 = ATgetArgument(t, 0);
            f_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_26;
        t = f_5(f_3, e_26, f_26, t);
      }
    }
  return(t);
}
ATerm j_5 (ATerm o_129 (ATerm), ATerm s_59, ATerm r_59, ATerm t)
{
  t = s_59;
  {
    ATerm f_27 (ATerm t)
    {
      ATerm x_14 = t;
      int y_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(y_14);
        }
      else
        {
          t = x_14;
          {
            ATerm g_27 (ATerm r_26, ATerm t)
            {
              ATerm t_26 = NULL,u_26 = NULL;
              t = r_26;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_26 = ATgetFirst((ATermList) t);
                  u_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              {
                ATerm g_3 (ATerm t)
                {
                  t = r_59;
                  return(t);
                }
                t = o_5(o_129, g_3, t_26, u_26, t);
                t = r_26;
                t = Cons_2_0(_id, f_27, t);
              }
              return(t);
            }
            ATerm v_26 = NULL,x_26 = NULL;
            v_26 = t;
            {
              ATerm z_14 = t;
              int a_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm b_15 = ATgetFirst((ATermList) t);
                      x_26 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(a_15);
                  {
                    ATerm c_15 = t;
                    int d_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = g_27(v_26, t);
                        ;
                        LocalPopChoice(d_15);
                      }
                    else
                      {
                        t = c_15;
                        t = x_26;
                        t = f_27(t);
                      }
                  }
                }
              else
                {
                  t = z_14;
                  t = g_27(v_26, t);
                }
            }
          }
        }
      return(t);
    }
    t = f_27(t);
  }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,k_27 = NULL,l_27 = NULL,e_0 = NULL,p_0 = NULL;
  l_27 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      i_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_27);
  h_27 = t;
  t = i_27;
  t = y_108(t);
  k_27 = t;
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym_DynamicRules_1, k_27);
  e_0 = t;
  t = SSLsetAnnotations(e_0, h_27);
  return(t);
}
ATerm RDefT_4_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm r_108 (ATerm), ATerm s_108 (ATerm), ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,q_0 = NULL,r_0 = NULL;
  z_27 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      r_27 = ATgetArgument(t, 0);
      s_27 = ATgetArgument(t, 1);
      t_27 = ATgetArgument(t, 2);
      u_27 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_27);
  q_27 = t;
  t = r_27;
  t = p_108(t);
  v_27 = t;
  t = s_27;
  t = q_108(t);
  w_27 = t;
  t = t_27;
  t = r_108(t);
  x_27 = t;
  t = u_27;
  t = s_108(t);
  y_27 = t;
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym_RDefT_4, v_27, w_27, x_27, y_27);
  q_0 = t;
  t = SSLsetAnnotations(q_0, q_27);
  return(t);
}
ATerm Scope_2_0 (ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,g_28 = NULL,h_28 = NULL,j_28 = NULL,k_28 = NULL,s_0 = NULL,v_0 = NULL;
  k_28 = t;
  if(match_cons(t, sym_Scope_2))
    {
      e_28 = ATgetArgument(t, 0);
      g_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_28);
  d_28 = t;
  t = e_28;
  t = b_110(t);
  h_28 = t;
  t = g_28;
  t = c_110(t);
  j_28 = t;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, h_28, j_28);
  s_0 = t;
  t = SSLsetAnnotations(s_0, d_28);
  return(t);
}
ATerm tboundin_3_0 (ATerm t_120 (ATerm), ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm t)
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(v_120, t_120, t);
      ;
      LocalPopChoice(f_15);
    }
  else
    {
      t = e_15;
      {
        ATerm m_15 = t;
        int n_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(v_120, v_120, v_120, t_120, t);
            ;
            LocalPopChoice(n_15);
          }
        else
          {
            t = m_15;
            {
              ATerm o_15 = t;
              int p_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(v_120, v_120, v_120, t_120, t);
                  ;
                  LocalPopChoice(p_15);
                }
              else
                {
                  t = o_15;
                  t = DynamicRules_1_0(t_120, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm s_28 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_28);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm q_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(r_15);
    }
  else
    {
      t = q_15;
      {
        ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            v_28 = ATgetArgument(t, 0);
            t = v_28;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                v_28 = ATgetArgument(t, 0);
                w_28 = ATgetArgument(t, 1);
                x_28 = ATgetArgument(t, 2);
                y_28 = ATgetArgument(t, 3);
                t = x_28;
                t = map_1_0(j_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    v_28 = ATgetArgument(t, 0);
                    w_28 = ATgetArgument(t, 1);
                    x_28 = ATgetArgument(t, 2);
                    y_28 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = x_28;
                t = map_1_0(k_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm g_29 = NULL;
  ATerm s_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_29 = ATgetArgument(t, 0);
          {
            ATerm w_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_15);
      t = g_29;
    }
  else
    {
      t = s_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_29;
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm p_29 = NULL;
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_29 = ATgetArgument(t, 0);
          {
            ATerm z_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_15);
      t = p_29;
    }
  else
    {
      t = x_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_29;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(h_3, i_3, tboundin_3_0, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm k_30 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_30);
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm a_16 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(b_16);
    }
  else
    {
      t = a_16;
      {
        ATerm m_30 = NULL,n_30 = NULL,p_30 = NULL,q_30 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            m_30 = ATgetArgument(t, 0);
            t = m_30;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                m_30 = ATgetArgument(t, 0);
                n_30 = ATgetArgument(t, 1);
                p_30 = ATgetArgument(t, 2);
                q_30 = ATgetArgument(t, 3);
                t = p_30;
                t = map_1_0(n_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    m_30 = ATgetArgument(t, 0);
                    n_30 = ATgetArgument(t, 1);
                    p_30 = ATgetArgument(t, 2);
                    q_30 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = p_30;
                t = map_1_0(o_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm d_31 = NULL;
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_31 = ATgetArgument(t, 0);
          {
            ATerm e_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_16);
      t = d_31;
    }
  else
    {
      t = c_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_31;
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm m_31 = NULL;
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_31 = ATgetArgument(t, 0);
          {
            ATerm h_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_16);
      t = m_31;
    }
  else
    {
      t = f_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_31;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm z_29 = NULL,f_30 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      f_30 = ATgetArgument(t, 0);
      t = f_30;
      if(match_cons(t, sym_Rule_3))
        {
          z_29 = ATgetArgument(t, 0);
          {
            ATerm i_16 = ATgetArgument(t, 1);
          }
          {
            ATerm j_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = z_29;
      t = free_vars_3_0(l_3, m_3, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          f_30 = ATgetArgument(t, 0);
          {
            ATerm k_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = f_30;
    }
  return(t);
}
ATerm o_5 (ATerm y_129 (ATerm), ATerm z_129 (ATerm), ATerm a_60, ATerm z_59, ATerm t)
{
  t = z_129(t);
  {
    ATerm q_3 (ATerm t)
    {
      ATerm r_31 = NULL;
      r_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_60, r_31);
      t = y_129(t);
      return(t);
    }
    t = fetch_1_0(q_3, t);
    t = z_59;
  }
  return(t);
}
ATerm p_5 (ATerm v_129 (ATerm), ATerm w_59, ATerm v_59, ATerm t)
{
  t = w_59;
  {
    ATerm b_32 (ATerm t)
    {
      ATerm l_16 = t;
      int p_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = v_59;
          ;
          LocalPopChoice(p_16);
        }
      else
        {
          t = l_16;
          {
            ATerm q_16 = t;
            int s_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_31 = NULL,v_31 = NULL,x_31 = NULL;
                u_31 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    v_31 = ATgetFirst((ATermList) t);
                    x_31 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = u_31;
                {
                  ATerm y_3 (ATerm t)
                  {
                    t = v_59;
                    return(t);
                  }
                  t = o_5(v_129, y_3, v_31, x_31, t);
                  t = b_32(t);
                }
                ;
                LocalPopChoice(s_16);
              }
            else
              {
                t = q_16;
                t = Cons_2_0(_id, b_32, t);
              }
          }
        }
      return(t);
    }
    t = b_32(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm l_132 (ATerm), ATerm m_132 (ATerm), ATerm n_132 (ATerm), ATerm t)
{
  ATerm t_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_132(t);
      ;
      LocalPopChoice(u_16);
    }
  else
    {
      t = t_16;
      {
        ATerm g_32 = NULL,h_32 = NULL,m_32 = NULL,n_32 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_32 = ATgetFirst((ATermList) t);
            h_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_32;
        t = n_132(t);
        m_32 = t;
        t = h_32;
        t = foldr_3_0(l_132, m_132, n_132, t);
        n_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_32, n_32);
        t = m_132(t);
      }
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL;
  if(match_cons(t, sym__2))
    {
      r_6 = ATgetArgument(t, 0);
      s_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(k_4, r_6, s_6, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm t_6 = NULL;
  if(match_cons(t, sym__2))
    {
      t_6 = ATgetArgument(t, 0);
      if((t_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm j_7 = NULL,l_7 = NULL;
  if(match_cons(t, sym__2))
    {
      j_7 = ATgetArgument(t, 0);
      l_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(n_4, j_7, l_7, t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm m_7 = NULL;
  if(match_cons(t, sym__2))
    {
      m_7 = ATgetArgument(t, 0);
      if((m_7 != ATgetArgument(t, 1)))
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
  ATerm b_33 (ATerm t)
  {
    ATerm v_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_136(t);
        ;
        LocalPopChoice(w_16);
      }
    else
      {
        t = v_16;
        {
          ATerm x_16 = t;
          int y_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_32 = NULL,s_32 = NULL,m_6 = NULL,n_6 = NULL;
              q_32 = t;
              t = o_136(t);
              s_32 = t;
              t = q_32;
              {
                ATerm z_3 (ATerm t)
                {
                  ATerm u_32 = NULL;
                  t = b_33(t);
                  u_32 = t;
                  t = (ATerm) ATmakeAppl(sym__2, u_32, s_32);
                  t = diff_0_0(t);
                  return(t);
                }
                t = p_136(z_3, b_33, f_4, t);
                m_6 = t;
                t = SSL_explode_term(m_6);
                if(match_cons(t, sym__2))
                  {
                    ATerm z_16 = ATgetArgument(t, 0);
                    n_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = n_6;
                t = foldr_3_0(g_4, i_4, _id, t);
              }
              ;
              LocalPopChoice(y_16);
            }
          else
            {
              t = x_16;
              {
                ATerm u_6 = NULL,v_6 = NULL;
                u_6 = t;
                t = SSL_explode_term(u_6);
                if(match_cons(t, sym__2))
                  {
                    ATerm a_17 = ATgetArgument(t, 0);
                    v_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = v_6;
                t = foldr_3_0(l_4, m_4, b_33, t);
              }
            }
        }
      }
    return(t);
  }
  t = b_33(t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm i_33 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_33);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            k_33 = ATgetArgument(t, 0);
            t = k_33;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                k_33 = ATgetArgument(t, 0);
                l_33 = ATgetArgument(t, 1);
                m_33 = ATgetArgument(t, 2);
                n_33 = ATgetArgument(t, 3);
                t = m_33;
                t = map_1_0(q_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    k_33 = ATgetArgument(t, 0);
                    l_33 = ATgetArgument(t, 1);
                    m_33 = ATgetArgument(t, 2);
                    n_33 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = m_33;
                t = map_1_0(t_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm v_33 = NULL;
  ATerm d_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_33 = ATgetArgument(t, 0);
          {
            ATerm f_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_17);
      t = v_33;
    }
  else
    {
      t = d_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_33;
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm e_34 = NULL;
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_34 = ATgetArgument(t, 0);
          {
            ATerm i_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_17);
      t = e_34;
    }
  else
    {
      t = g_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_34;
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm h_34 = NULL;
  if(match_cons(t, sym__2))
    {
      h_34 = ATgetArgument(t, 0);
      if((h_34 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm q_5 (ATerm c_91, ATerm b_91, ATerm a_91, ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL;
  t = b_91;
  t = free_vars_3_0(o_4, p_4, tboundin_3_0, t);
  f_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_33, c_91);
  t = j_5(w_4, f_33, c_91, t);
  g_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_91, g_33);
  t = diff_0_0(t);
  h_33 = t;
  {
    ATerm j_17 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_17;
      }
    t = (ATerm) ATmakeAppl(sym_Scope_2, g_33, (ATerm) ATmakeAppl(sym_Seq_2, b_91, (ATerm) ATmakeAppl(sym_Scope_2, h_33, a_91)));
  }
  return(t);
}
ATerm topdown_1_0 (ATerm s_121 (ATerm), ATerm t)
{
  t = s_121(t);
  {
    ATerm x_4 (ATerm t)
    {
      t = topdown_1_0(s_121, t);
      return(t);
    }
    t = SRTS_all(x_4, t);
  }
  return(t);
}
ATerm WidenScope_0_0 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      s_34 = ATgetArgument(t, 0);
      v_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_34;
  if(match_cons(t, sym_Scope_2))
    {
      p_34 = ATgetArgument(t, 0);
      q_34 = ATgetArgument(t, 1);
      t = s_34;
      if(match_cons(t, sym_Scope_2))
        {
          t_34 = ATgetArgument(t, 0);
          u_34 = ATgetArgument(t, 1);
          {
            ATerm k_17 = t;
            int l_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym_Scope_2, p_34, (ATerm) ATmakeAppl(sym_Seq_2, s_34, q_34));
                ;
                LocalPopChoice(l_17);
              }
            else
              {
                t = k_17;
                t = (ATerm) ATmakeAppl(sym_Scope_2, t_34, (ATerm) ATmakeAppl(sym_Seq_2, u_34, v_34));
              }
          }
        }
      else
        {
          t = (ATerm) ATmakeAppl(sym_Scope_2, p_34, (ATerm) ATmakeAppl(sym_Seq_2, s_34, q_34));
        }
    }
  else
    {
      t = s_34;
      if(match_cons(t, sym_Scope_2))
        {
          t_34 = ATgetArgument(t, 0);
          u_34 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, t_34, (ATerm) ATmakeAppl(sym_Seq_2, u_34, v_34));
    }
  return(t);
}
ATerm SDefT_4_0 (ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm m_112 (ATerm), ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,w_0 = NULL,z_0 = NULL;
  x_35 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      p_35 = ATgetArgument(t, 0);
      q_35 = ATgetArgument(t, 1);
      r_35 = ATgetArgument(t, 2);
      s_35 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_35);
  o_35 = t;
  t = p_35;
  t = j_112(t);
  t_35 = t;
  t = q_35;
  t = k_112(t);
  u_35 = t;
  t = r_35;
  t = l_112(t);
  v_35 = t;
  t = s_35;
  t = m_112(t);
  w_35 = t;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, t_35, u_35, v_35, w_35);
  w_0 = t;
  t = SSLsetAnnotations(w_0, o_35);
  return(t);
}
ATerm SDef_3_0 (ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL,a_1 = NULL,c_1 = NULL;
  i_36 = t;
  if(match_cons(t, sym_SDef_3))
    {
      b_36 = ATgetArgument(t, 0);
      c_36 = ATgetArgument(t, 1);
      e_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_36);
  a_36 = t;
  t = b_36;
  t = g_112(t);
  f_36 = t;
  t = c_36;
  t = h_112(t);
  g_36 = t;
  t = e_36;
  t = i_112(t);
  h_36 = t;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, f_36, g_36, h_36);
  a_1 = t;
  t = SSLsetAnnotations(a_1, a_36);
  return(t);
}
ATerm Strategies_1_0 (ATerm e_105 (ATerm), ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,t_36 = NULL,v_36 = NULL,e_1 = NULL,f_1 = NULL;
  v_36 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      q_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_36);
  p_36 = t;
  t = q_36;
  t = e_105(t);
  t_36 = t;
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, t_36);
  e_1 = t;
  t = SSLsetAnnotations(e_1, p_36);
  return(t);
}
ATerm Specification_1_0 (ATerm j_105 (ATerm), ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL,i_37 = NULL,g_1 = NULL,h_1 = NULL;
  i_37 = t;
  if(match_cons(t, sym_Specification_1))
    {
      f_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_37);
  e_37 = t;
  t = f_37;
  t = j_105(t);
  g_37 = t;
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, g_37);
  g_1 = t;
  t = SSLsetAnnotations(g_1, e_37);
  return(t);
}
ATerm b_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1_0 (ATerm t_119 (ATerm), ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm z_4 (ATerm t)
    {
      ATerm a_5 (ATerm t)
      {
        ATerm c_5 (ATerm t)
        {
          ATerm d_5 (ATerm t)
          {
            ATerm m_17 = t;
            int n_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SDef_3_0(_id, _id, t_119, t);
                ;
                LocalPopChoice(n_17);
              }
            else
              {
                t = m_17;
                t = SDefT_4_0(_id, _id, _id, t_119, t);
              }
            return(t);
          }
          t = map_1_0(d_5, t);
          return(t);
        }
        t = Strategies_1_0(c_5, t);
        return(t);
      }
      t = Cons_2_0(a_5, b_5, t);
      return(t);
    }
    t = Cons_2_0(_id, z_4, t);
    return(t);
  }
  t = Specification_1_0(y_4, t);
  return(t);
}
ATerm _2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,j_1 = NULL,k_1 = NULL;
  x_37 = t;
  if(match_cons(t, sym__2))
    {
      t_37 = ATgetArgument(t, 0);
      u_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_37);
  s_37 = t;
  t = t_37;
  t = l_100(t);
  v_37 = t;
  t = u_37;
  t = m_100(t);
  w_37 = t;
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_37, w_37);
  j_1 = t;
  t = SSLsetAnnotations(j_1, s_37);
  return(t);
}
ATerm z_6 (ATerm y_78, ATerm z_78, ATerm t)
{
  ATerm b_38 = NULL;
  t = SSL_fputc(y_78, z_78);
  b_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_38);
  return(t);
}
ATerm a_7 (ATerm m_82, ATerm n_82, ATerm t)
{
  ATerm e_38 = NULL;
  t = SSL_write_term_to_stream_text(m_82, n_82);
  e_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_38);
  return(t);
}
ATerm c_7 (ATerm s_143 (ATerm), ATerm x_586, ATerm q_82, ATerm t)
{
  ATerm g_38 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_586, term_o_17);
  t = open_stream_0_0(t);
  g_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_38, q_82);
  t = s_143(t);
  t = fclose_0_0(t);
  t = q_82;
  return(t);
}
ATerm b_7 (ATerm i_82, ATerm j_82, ATerm t)
{
  ATerm k_38 = NULL;
  t = SSL_write_term_to_stream_baf(i_82, j_82);
  k_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_38);
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = fetch_1_0(m_5, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm p_38 = NULL,s_38 = NULL;
  if(match_cons(t, sym__2))
    {
      p_38 = ATgetArgument(t, 0);
      s_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(n_5, p_38, s_38, t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_17 = ATgetArgument(t, 0);
      if(match_cons(p_17, sym_Stream_1))
        {
          u_38 = ATgetArgument(p_17, 0);
        }
      else
        _fail(t);
      v_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(u_38, v_38, t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL;
  if(match_cons(t, sym__2))
    {
      w_38 = ATgetArgument(t, 0);
      x_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(u_5, w_38, x_38, t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_17 = ATgetArgument(t, 0);
      if(match_cons(q_17, sym_Stream_1))
        {
          z_38 = ATgetArgument(q_17, 0);
        }
      else
        _fail(t);
      c_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(z_38, c_39, t);
  y_38 = t;
  t = term_r_17;
  d_39 = t;
  t = y_38;
  if(match_cons(t, sym_Stream_1))
    {
      e_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_r_17, y_38);
  t = z_6(d_39, e_39, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL;
  l_38 = t;
  {
    ATerm e_5 (ATerm t)
    {
      ATerm s_17 = t;
      int t_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_5 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((m_38 != NULL) && (m_38 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_38 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(g_5, t);
          ;
          LocalPopChoice(t_17);
        }
      else
        {
          t = s_17;
          t = term_y_17;
          if(((m_38 != NULL) && (m_38 != t)))
            _fail(t);
          else
            m_38 = t;
        }
      return(t);
    }
    t = _2_0(e_5, _id, t);
    t = l_38;
    {
      ATerm i_5 (ATerm t)
      {
        ATerm n_38 = NULL;
        n_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_38), n_38);
        return(t);
      }
      t = _2_0(_id, i_5, t);
      {
        ATerm z_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(k_5, l_5, t);
            ;
            LocalPopChoice(a_18);
          }
        else
          {
            t = z_17;
            t = _2_0(_id, t_5, t);
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
  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL;
  j_39 = t;
  t = dtime_0_0(t);
  t = j_39;
  t = u_146(t);
  k_39 = t;
  t = dtime_0_0(t);
  l_39 = t;
  t = k_39;
  if(match_cons(t, sym__2))
    {
      m_39 = ATgetArgument(t, 0);
      n_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_39), (ATerm) ATmakeAppl(sym_Runtime_1, l_39)), n_39);
  return(t);
}
ATerm i_40 (ATerm z_39, ATerm t)
{
  t = SSL_fclose(z_39);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL;
  f_40 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_40 = ATgetArgument(t, 0);
      {
        ATerm b_18 = t;
        int c_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_40);
            ;
            LocalPopChoice(c_18);
          }
        else
          {
            t = b_18;
            t = i_40(f_40, t);
          }
      }
    }
  else
    {
      t = i_40(f_40, t);
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
  ATerm j_40 = NULL;
  t = SSL_fopen(a_79, b_79);
  j_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_40);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_40 = NULL;
  t = SSL_stdin_stream();
  k_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_40);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_40 = NULL;
  t = SSL_stdout_stream();
  l_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_40);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_40 = NULL;
  t = SSL_stderr_stream();
  m_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_40);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm z_40 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      z_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_40;
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm c_41 = NULL;
  c_41 = t;
  t = SSL_is_string(c_41);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_18 = ATgetArgument(t, 0);
      ATerm e_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_40 = NULL,v_7 = NULL;
        v_40 = t;
        t = SSL_explode_term(v_40);
        if(match_cons(t, sym__2))
          {
            ATerm j_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_18) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_18 = ATgetArgument(t, 1);
              if(((ATgetType(k_18) == AT_LIST) && !(ATisEmpty(k_18))))
                {
                  v_7 = ATgetFirst((ATermList) k_18);
                  {
                    ATerm l_18 = (ATerm) ATgetNext((ATermList) k_18);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = v_7;
        if(match_cons(t, sym_stderr_0))
          {
            t = v_7;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = v_7;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = v_7;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        {
          ATerm m_18 = t;
          int n_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_40 = NULL,x_40 = NULL;
              t = _2_0(w_5, _id, t);
              if(match_cons(t, sym__2))
                {
                  w_40 = ATgetArgument(t, 0);
                  x_40 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = e_7(w_40, x_40, t);
              ;
              LocalPopChoice(n_18);
            }
          else
            {
              t = m_18;
              {
                ATerm a_41 = NULL,b_41 = NULL;
                t = _2_0(x_5, _id, t);
                if(match_cons(t, sym__2))
                  {
                    a_41 = ATgetArgument(t, 0);
                    b_41 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_7(a_41, b_41, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_o_18;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_41 = NULL;
      n_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_41, term_r_18);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      t = debug_1_0(y_5, t);
      _fail(t);
    }
  k_41 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(m_41, t);
  l_41 = t;
  t = k_41;
  t = fclose_0_0(t);
  t = l_41;
  return(t);
}
ATerm fetch_1_0 (ATerm d_128 (ATerm), ATerm t)
{
  ATerm q_41 (ATerm t)
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(d_128, _id, t);
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = Cons_2_0(_id, q_41, t);
      }
    return(t);
  }
  t = q_41(t);
  return(t);
}
ATerm y_6 (ATerm m_73, ATerm n_73, ATerm t)
{
  t = SSL_strcat(m_73, n_73);
  return(t);
}
ATerm debug_1_0 (ATerm q_143 (ATerm), ATerm t)
{
  ATerm r_41 = NULL,s_41 = NULL,u_41 = NULL,x_41 = NULL;
  r_41 = t;
  t = q_143(t);
  s_41 = t;
  t = term_n_9;
  u_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_41), s_41);
  x_41 = t;
  t = SSL_printnl(u_41, x_41);
  t = r_41;
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm u_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(v_18);
    }
  else
    {
      t = u_18;
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_w_18;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_42 = NULL;
      d_42 = t;
      t = SSL_is_string(d_42);
      ;
      LocalPopChoice(a_19);
    }
  else
    {
      t = z_18;
      {
        ATerm b_19 = t;
        int c_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_5, t);
            ;
            LocalPopChoice(c_19);
          }
        else
          {
            t = b_19;
            {
              ATerm i_42 = NULL,k_42 = NULL,n_42 = NULL;
              i_42 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_42 = ATgetArgument(t, 0);
                  t = k_42;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_42 = ATgetArgument(t, 0);
                      t = k_42;
                      {
                        ATerm e_19 = t;
                        int g_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(g_19);
                          }
                        else
                          {
                            t = e_19;
                            t = debug_1_0(a_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm r_42 = NULL,x_42 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_42 = ATgetArgument(t, 0);
                          n_42 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_42;
                      t = eval_config_0_0(t);
                      r_42 = t;
                      t = n_42;
                      t = eval_config_0_0(t);
                      x_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_42, x_42);
                      t = y_6(r_42, x_42, t);
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
  ATerm e_43 = NULL,f_43 = NULL;
  e_43 = t;
  t = term_h_19;
  f_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_19, e_43);
  t = h_7(f_43, e_43, t);
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_43 = NULL,j_43 = NULL;
        t = eval_config_0_0(t);
        i_43 = t;
        t = term_h_19;
        j_43 = t;
        t = SSL_table_put(j_43, e_43, i_43);
        t = i_43;
        ;
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_145 (ATerm), ATerm t)
{
  ATerm k_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_43 = NULL,q_43 = NULL;
      k_43 = t;
      t = term_o_19;
      t = get_config_0_0(t);
      q_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_43, term_p_19);
      t = geq_0_0(t);
      t = k_43;
      t = d_145(t);
      ;
      LocalPopChoice(n_19);
    }
  else
    {
      t = k_19;
    }
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm u_43 = NULL;
  u_43 = t;
  if(match_string(t, "-k"))
    {
      t = u_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_43;
    }
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
  v_43 = t;
  t = SSL_string_to_int(v_43);
  w_43 = t;
  t = term_q_19;
  x_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_19, w_43);
  t = k_7(x_43, w_43, t);
  t = v_43;
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_r_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_6, d_6, e_6, t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm z_43 = NULL;
  z_43 = t;
  if(match_string(t, "-S"))
    {
      t = z_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_43;
    }
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL;
  t = term_o_19;
  a_44 = t;
  t = term_s_19;
  b_44 = t;
  t = term_u_19;
  t = k_7(a_44, b_44, t);
  t = term_w_19;
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_x_19;
  return(t);
}
ATerm i_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL;
  c_44 = t;
  t = SSL_string_to_int(c_44);
  d_44 = t;
  t = term_o_19;
  e_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_19, d_44);
  t = k_7(e_44, d_44, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_44);
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_y_19;
  return(t);
}
ATerm l_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL;
  t = term_z_19;
  f_44 = t;
  t = term_b_1;
  g_44 = t;
  t = term_a_20;
  t = k_7(f_44, g_44, t);
  t = term_d_20;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_e_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_6, g_6, h_6, t);
      ;
      LocalPopChoice(i_20);
    }
  else
    {
      t = g_20;
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_6, j_6, k_6, t);
            ;
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            t = Option_3_0(l_6, o_6, p_6, t);
          }
      }
    }
  return(t);
}
ATerm k_7 (ATerm p_83, ATerm q_83, ATerm t)
{
  ATerm h_44 = NULL;
  t = term_h_19;
  h_44 = t;
  t = SSL_table_put(h_44, p_83, q_83);
  t = (ATerm) ATmakeAppl(sym__3, term_h_19, p_83, q_83);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm l_44 = NULL,n_44 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_44 = NULL,r_44 = NULL,u_44 = NULL;
      t = term_b_1;
      t = d_0(t);
      q_44 = t;
      t = term_l_20;
      r_44 = t;
      t = term_m_20;
      u_44 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_20, term_m_20, q_44);
      t = i_7(r_44, u_44, q_44, t);
      _fail(t);
    }
  else
    {
      ATerm z_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_44 = ATgetFirst((ATermList) t);
          n_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_44;
      t = a_0(t);
      t = term_b_1;
      t = b_0(t);
      z_44 = t;
      t = (ATerm) ATinsert(CheckATermList(n_44), z_44);
    }
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm b_45 = NULL;
  b_45 = t;
  if(match_string(t, "-o"))
    {
      t = b_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_45;
    }
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm c_45 = NULL,e_45 = NULL;
  c_45 = t;
  t = term_n_20;
  e_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_20, c_45);
  t = k_7(e_45, c_45, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_45);
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = term_o_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_6, w_6, x_6, t);
  return(t);
}
ATerm i_7 (ATerm f_65, ATerm g_65, ATerm e_65, ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL;
  g_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_65, g_65);
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_20 = ATgetArgument(t, 0);
            ATerm s_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_65, g_65);
        t = h_7(f_65, g_65, t);
        ;
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
        t = (ATerm) ATempty;
      }
    h_45 = t;
    t = (ATerm) ATinsert(CheckATermList(h_45), e_65);
    i_45 = t;
    t = SSL_table_put(f_65, g_65, i_45);
    t = g_45;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL;
      t = term_b_1;
      t = m_0(t);
      t_45 = t;
      t = term_l_20;
      u_45 = t;
      t = term_m_20;
      v_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_20, term_m_20, t_45);
      t = i_7(u_45, v_45, t_45, t);
      _fail(t);
    }
  else
    {
      ATerm z_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_45 = ATgetFirst((ATermList) t);
          q_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_45 = ATgetFirst((ATermList) t);
          s_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_45;
      t = i_0(t);
      t = r_45;
      t = k_0(t);
      z_45 = t;
      t = (ATerm) ATinsert(CheckATermList(s_45), z_45);
    }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm b_46 = NULL;
  b_46 = t;
  if(match_string(t, "-i"))
    {
      t = b_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_46;
    }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL;
  c_46 = t;
  t = term_t_20;
  d_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_20, c_46);
  t = k_7(d_46, c_46, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_46);
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_u_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_7, n_7, o_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_1;
  t = whoami_0_0(t);
  e_46 = t;
  t = term_n_9;
  f_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_20), e_46);
  g_46 = t;
  t = SSL_printnl(f_46, g_46);
  t = term_q_9;
  h_46 = t;
  t = SSL_exit(h_46);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_w_20;
  t = get_config_0_0(t);
  return(t);
}
ATerm f_7 (ATerm j_63, ATerm k_63, ATerm t)
{
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_63, k_63);
      ;
      LocalPopChoice(y_20);
    }
  else
    {
      t = x_20;
      t = SSL_addr(j_63, k_63);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_132 (ATerm), ATerm k_132 (ATerm), ATerm t)
{
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_132(t);
      ;
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
      {
        ATerm k_46 = NULL,l_46 = NULL,o_46 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_46 = ATgetFirst((ATermList) t);
            l_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_46;
        t = foldr_2_0(j_132, k_132, t);
        o_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_46, o_46);
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
ATerm p_7 (ATerm t)
{
  t = term_s_19;
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL;
  if(match_cons(t, sym__2))
    {
      k_8 = ATgetArgument(t, 0);
      l_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(k_8, l_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_46 = NULL,g_8 = NULL,h_8 = NULL;
  t = times_0_0(t);
  g_8 = t;
  t = SSL_explode_term(g_8);
  if(match_cons(t, sym__2))
    {
      ATerm b_21 = ATgetArgument(t, 0);
      h_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_8;
  t = foldr_2_0(p_7, q_7, t);
  r_46 = t;
  t = SSL_TicksToSeconds(r_46);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL;
  c_47 = t;
  if(match_cons(t, sym__2))
    {
      d_47 = ATgetArgument(t, 0);
      e_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_47;
        if((d_47 != t))
          {
            _fail(t);
          }
        t = c_47;
        ;
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        t = (ATerm) ATmakeAppl(sym__2, d_47, e_47);
        {
          ATerm e_21 = t;
          int f_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_47, e_47);
              ;
              LocalPopChoice(f_21);
            }
          else
            {
              t = e_21;
              t = SSL_gtr(d_47, e_47);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_47, e_47);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_145 (ATerm), ATerm t)
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_47 = NULL,j_47 = NULL;
      h_47 = t;
      t = term_o_19;
      t = get_config_0_0(t);
      j_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_47, term_q_9);
      t = geq_0_0(t);
      t = h_47;
      t = c_145(t);
      ;
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
    }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL;
  t = run_time_0_0(t);
  l_47 = t;
  t = term_b_1;
  t = whoami_0_0(t);
  m_47 = t;
  t = term_n_9;
  n_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_21), l_47), term_i_21), m_47);
  o_47 = t;
  t = SSL_printnl(n_47, o_47);
  t = (ATerm) ATmakeAppl(sym__2, term_n_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_21), l_47), term_i_21), m_47));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_19;
  p_47 = t;
  t = SSL_exit(p_47);
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      {
        ATerm m_21 = t;
        int n_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(n_21);
          }
        else
          {
            t = m_21;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_147 (ATerm), ATerm t)
{
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
      t = fetch_1_0(s_7, t);
    }
  t = s_147(t);
  return(t);
}
ATerm map_1_0 (ATerm t_127 (ATerm), ATerm t)
{
  ATerm q_47 (ATerm t)
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        t = Cons_2_0(t_127, q_47, t);
      }
    return(t);
  }
  t = q_47(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_47 = ATgetFirst((ATermList) t);
      t_47 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_47 = NULL,y_47 = NULL;
        t = t_47;
        t = g_0(t);
        x_47 = t;
        t = s_47;
        t = f_0(t);
        y_47 = t;
        t = t_47;
        {
          ATerm t_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(x_47), y_47);
            return(t);
          }
          t = reverse_acc_2_0(f_0, t_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_1;
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
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,p_1 = NULL,q_1 = NULL;
  c_48 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_48);
  z_47 = t;
  t = a_48;
  t = n_119(t);
  b_48 = t;
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_48);
  p_1 = t;
  t = SSLsetAnnotations(p_1, z_47);
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm h_48 = NULL;
  h_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_48), term_w_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL;
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
      t = fetch_1_0(u_7, t);
    }
  t = term_z_21;
  t = echo_0_0(t);
  t = term_l_20;
  f_48 = t;
  t = term_m_20;
  g_48 = t;
  t = term_a_22;
  t = h_7(f_48, g_48, t);
  t = reverse_acc_2_0(_id, w_7, t);
  t = map_1_0(x_7, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm o_119 (ATerm), ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,s_1 = NULL,t_1 = NULL;
  l_48 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      j_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_48);
  i_48 = t;
  t = j_48;
  t = o_119(t);
  k_48 = t;
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, k_48);
  s_1 = t;
  t = SSLsetAnnotations(s_1, i_48);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL;
  p_48 = t;
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_48;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_22 = ATgetFirst((ATermList) t);
                ATerm e_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_48;
          }
        ;
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
        t = (ATerm) ATinsert(ATempty, p_48);
      }
    q_48 = t;
    t = term_y_17;
    r_48 = t;
    t = SSL_printnl(r_48, q_48);
    t = p_48;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_w_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL;
  t = term_f_22;
  v_48 = t;
  t = term_b_1;
  w_48 = t;
  t = term_g_22;
  t = k_7(v_48, w_48, t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_h_22;
  return(t);
}
ATerm b_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL;
  t = term_f_22;
  x_48 = t;
  t = term_b_1;
  y_48 = t;
  t = term_g_22;
  t = k_7(x_48, y_48, t);
  t = term_i_22;
  z_48 = t;
  t = term_b_1;
  a_49 = t;
  t = term_j_22;
  t = k_7(z_48, a_49, t);
  t = term_k_22;
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = term_l_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_7, z_7, a_8, t);
      ;
      LocalPopChoice(n_22);
    }
  else
    {
      t = m_22;
      t = Option_3_0(b_8, c_8, d_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm t)
{
  ATerm b_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,u_1 = NULL,v_1 = NULL;
  j_49 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_49 = ATgetFirst((ATermList) t);
      g_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_49);
  b_49 = t;
  t = f_49;
  t = a_105(t);
  h_49 = t;
  t = g_49;
  t = b_105(t);
  i_49 = t;
  v_1 = t;
  t = (ATerm) ATinsert(CheckATermList(i_49), h_49);
  u_1 = t;
  t = SSLsetAnnotations(u_1, b_49);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm r_49 = NULL,t_49 = NULL;
  r_49 = t;
  t = term_w_20;
  t_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_20, r_49);
  t = k_7(t_49, r_49, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, r_49);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_149 (ATerm), ATerm t)
{
  ATerm q_49 = NULL;
  q_49 = t;
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_22;
        t = v_149(t);
        ;
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
      }
    t = q_49;
    {
      ATerm f_8 (ATerm t)
      {
        ATerm r_22 = t;
        int s_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_22 = t;
            int v_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(v_22);
              }
            else
              {
                t = u_22;
                t = v_149(t);
                t = Cons_2_0(_id, f_8, t);
              }
            ;
            LocalPopChoice(s_22);
          }
        else
          {
            t = r_22;
            {
              ATerm v_49 = NULL,a_51 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_49 = ATgetFirst((ATermList) t);
                  a_51 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(a_51), (ATerm) ATmakeAppl(sym_Undefined_1, v_49));
            }
          }
        return(t);
      }
      t = Cons_2_0(e_8, f_8, t);
    }
  }
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm f_52 = NULL;
  f_52 = t;
  if(match_string(t, "--help"))
    {
      t = f_52;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_52;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_52;
        }
    }
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm i_52 = NULL,j_52 = NULL;
  t = term_t_21;
  i_52 = t;
  t = term_b_1;
  j_52 = t;
  t = term_w_22;
  t = k_7(i_52, j_52, t);
  t = term_x_22;
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_y_22;
  return(t);
}
ATerm o_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_149 (ATerm), ATerm t)
{
  ATerm u_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,e_52 = NULL;
  u_51 = t;
  t = term_l_20;
  a_52 = t;
  t = term_m_20;
  b_52 = t;
  t = (ATerm) ATempty;
  c_52 = t;
  t = SSL_table_put(a_52, b_52, c_52);
  t = u_51;
  {
    ATerm i_8 (ATerm t)
    {
      ATerm z_22 = t;
      int a_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_149(t);
          ;
          LocalPopChoice(a_23);
        }
      else
        {
          t = z_22;
          {
            ATerm c_23 = t;
            int d_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_8, m_8, n_8, t);
                ;
                LocalPopChoice(d_23);
              }
            else
              {
                t = c_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_8, t);
    {
      ATerm e_23 = t;
      int f_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_52 = NULL;
          v_52 = t;
          {
            ATerm g_23 = t;
            int h_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_8 = NULL;
                t = v_52;
                {
                  ATerm i_23 = t;
                  int j_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_t_21;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(j_23);
                    }
                  else
                    {
                      t = i_23;
                      t = fetch_1_0(o_8, t);
                    }
                  t = v_52;
                  t = default_system_usage_0_0(t);
                  t = term_s_19;
                  x_8 = t;
                  t = SSL_exit(x_8);
                }
                ;
                LocalPopChoice(h_23);
              }
            else
              {
                t = g_23;
                {
                  ATerm b_9 = NULL;
                  t = term_f_22;
                  t = get_config_0_0(t);
                  t = v_52;
                  t = default_system_about_0_0(t);
                  t = term_s_19;
                  b_9 = t;
                  t = SSL_exit(b_9);
                }
              }
          }
          ;
          LocalPopChoice(f_23);
        }
      else
        {
          t = e_23;
          {
            ATerm k_23 = t;
            int l_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL;
                ATerm p_8 (ATerm t)
                {
                  ATerm q_8 (ATerm t)
                  {
                    if(((y_51 != NULL) && (y_51 != t)))
                      _fail(t);
                    else
                      y_51 = t;
                    return(t);
                  }
                  t = Undefined_1_0(q_8, t);
                  return(t);
                }
                t = fetch_1_0(p_8, t);
                t = term_n_9;
                w_52 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_51)), term_m_23);
                x_52 = t;
                t = SSL_printnl(w_52, x_52);
                t = (ATerm) ATmakeAppl(sym__2, term_n_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_51)), term_m_23));
                t = default_system_usage_0_0(t);
                t = term_q_9;
                y_52 = t;
                t = SSL_exit(y_52);
                ;
                LocalPopChoice(l_23);
              }
            else
              {
                t = k_23;
              }
          }
        }
      z_51 = t;
      t = term_l_20;
      e_52 = t;
      t = SSL_table_destroy(e_52);
      t = z_51;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_147 (ATerm), ATerm v_147 (ATerm), ATerm w_147 (ATerm), ATerm x_147 (ATerm), ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL;
  t = parse_options_1_0(u_147, t);
  b_53 = t;
  t = term_n_23;
  c_53 = t;
  t = SSL_table_create(c_53);
  t = term_n_23;
  d_53 = t;
  t = term_o_23;
  e_53 = t;
  t = SSL_table_put(d_53, e_53, b_53);
  t = b_53;
  t = w_147(t);
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_147, t);
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        {
          ATerm t_23 = t;
          int u_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_147(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(u_23);
            }
          else
            {
              t = t_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = if_verbose2_1_0(y_8, t);
  return(t);
}
ATerm u_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm f_53 = NULL,j_53 = NULL;
  t = term_v_23;
  f_53 = t;
  t = term_b_1;
  j_53 = t;
  t = term_y_23;
  t = k_7(f_53, j_53, t);
  t = term_a_24;
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL,o_53 = NULL;
  k_53 = t;
  t = term_w_20;
  t = get_config_0_0(t);
  l_53 = t;
  t = term_n_9;
  m_53 = t;
  t = (ATerm) ATinsert(ATempty, l_53);
  o_53 = t;
  t = SSL_printnl(m_53, o_53);
  t = k_53;
  return(t);
}
ATerm iowrap_3_0 (ATerm d_147 (ATerm), ATerm e_147 (ATerm), ATerm f_147 (ATerm), ATerm t)
{
  ATerm r_8 (ATerm t)
  {
    ATerm f_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_147(t);
        ;
        LocalPopChoice(i_24);
      }
    else
      {
        t = f_24;
        {
          ATerm u_24 = t;
          int v_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(v_24);
            }
          else
            {
              t = u_24;
              {
                ATerm w_24 = t;
                int x_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(x_24);
                  }
                else
                  {
                    t = w_24;
                    {
                      ATerm y_24 = t;
                      int f_25 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(u_8, v_8, w_8, t);
                          ;
                          LocalPopChoice(f_25);
                        }
                      else
                        {
                          t = y_24;
                          {
                            ATerm g_25 = t;
                            int h_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(h_25);
                              }
                            else
                              {
                                t = g_25;
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
  ATerm t_8 (ATerm t)
  {
    ATerm p_53 = NULL,q_53 = NULL,t_53 = NULL;
    p_53 = t;
    {
      ATerm i_25 = t;
      int j_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((q_53 != NULL) && (q_53 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_53 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(z_8, t);
          ;
          LocalPopChoice(j_25);
        }
      else
        {
          t = i_25;
          t = term_k_25;
          q_53 = t;
        }
      t = not_null(q_53);
      t = ReadFromFile_0_0(t);
      t_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_53, t_53);
      t = apply_strategy_1_0(d_147, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(r_8, f_147, s_8, t_8, t);
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = _2_0(_id, c_9, t);
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = apply_to_bodies_1_0(d_9, t);
  return(t);
}
ATerm d_9 (ATerm t)
{
  t = downup_1_0(e_9, t);
  t = downup_1_0(g_9, t);
  t = downup_1_0(i_9, t);
  t = topdown_1_0(k_9, t);
  t = downup_1_0(l_9, t);
  return(t);
}
ATerm e_9 (ATerm t)
{
  t = repeat_1_0(f_9, t);
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      {
        ATerm s_54 = NULL,t_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL;
        x_54 = t;
        if(match_cons(t, sym_Seq_2))
          {
            y_54 = ATgetArgument(t, 0);
            s_54 = ATgetArgument(t, 1);
            t = s_54;
            if(match_cons(t, sym_Let_2))
              {
                t_54 = ATgetArgument(t, 0);
                w_54 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, t_54, (ATerm) ATmakeAppl(sym_Seq_2, y_54, w_54));
          }
        else
          {
            if(match_cons(t, sym_Scope_2))
              {
                y_54 = ATgetArgument(t, 0);
                s_54 = ATgetArgument(t, 1);
                {
                  ATerm f_55 = NULL;
                  t = s_54;
                  if(match_cons(t, sym_Scope_2))
                    {
                      t_54 = ATgetArgument(t, 0);
                      w_54 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, y_54, t_54);
                  t = conc_0_0(t);
                  f_55 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_55, w_54);
                }
              }
            else
              {
                if(match_cons(t, sym_Where_1))
                  {
                    y_54 = ATgetArgument(t, 0);
                    t = x_54;
                    t = s_5(y_54, t);
                  }
                else
                  {
                    if(match_cons(t, sym_Test_1))
                      {
                        y_54 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = x_54;
                    t = r_5(y_54, t);
                  }
              }
          }
      }
    }
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = repeat_1_0(h_9, t);
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      {
        ATerm t_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL,m_55 = NULL;
            l_55 = t;
            if(match_cons(t, sym_Seq_2))
              {
                m_55 = ATgetArgument(t, 0);
                i_55 = ATgetArgument(t, 1);
                t = i_55;
                if(match_cons(t, sym_Let_2))
                  {
                    j_55 = ATgetArgument(t, 0);
                    k_55 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Let_2, j_55, (ATerm) ATmakeAppl(sym_Seq_2, m_55, k_55));
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    m_55 = ATgetArgument(t, 0);
                    i_55 = ATgetArgument(t, 1);
                    {
                      ATerm t_55 = NULL;
                      t = i_55;
                      if(match_cons(t, sym_Scope_2))
                        {
                          j_55 = ATgetArgument(t, 0);
                          k_55 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__2, m_55, j_55);
                      t = conc_0_0(t);
                      t_55 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, t_55, k_55);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Where_1))
                      {
                        m_55 = ATgetArgument(t, 0);
                        t = l_55;
                        t = s_5(m_55, t);
                      }
                    else
                      {
                        if(match_cons(t, sym_Test_1))
                          {
                            m_55 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = l_55;
                        t = r_5(m_55, t);
                      }
                  }
              }
            ;
            LocalPopChoice(u_25);
          }
        else
          {
            t = t_25;
            t = WidenScope_0_0(t);
          }
      }
    }
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = repeat_1_0(j_9, t);
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm v_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(w_25);
    }
  else
    {
      t = v_25;
      {
        ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL;
        z_55 = t;
        if(match_cons(t, sym_Seq_2))
          {
            a_56 = ATgetArgument(t, 0);
            w_55 = ATgetArgument(t, 1);
            t = w_55;
            if(match_cons(t, sym_Let_2))
              {
                x_55 = ATgetArgument(t, 0);
                y_55 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, x_55, (ATerm) ATmakeAppl(sym_Seq_2, a_56, y_55));
          }
        else
          {
            if(match_cons(t, sym_Scope_2))
              {
                a_56 = ATgetArgument(t, 0);
                w_55 = ATgetArgument(t, 1);
                {
                  ATerm h_56 = NULL;
                  t = w_55;
                  if(match_cons(t, sym_Scope_2))
                    {
                      x_55 = ATgetArgument(t, 0);
                      y_55 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, a_56, x_55);
                  t = conc_0_0(t);
                  h_56 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, h_56, y_55);
                }
              }
            else
              {
                if(match_cons(t, sym_Where_1))
                  {
                    a_56 = ATgetArgument(t, 0);
                    t = z_55;
                    t = s_5(a_56, t);
                  }
                else
                  {
                    if(match_cons(t, sym_Test_1))
                      {
                        a_56 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = z_55;
                    t = r_5(a_56, t);
                  }
              }
          }
      }
    }
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL;
      k_56 = t;
      if(match_cons(t, sym_Scope_2))
        {
          l_56 = ATgetArgument(t, 0);
          m_56 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_56;
      if(match_cons(t, sym_Seq_2))
        {
          n_56 = ATgetArgument(t, 0);
          o_56 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_56;
      t = q_5(l_56, n_56, o_56, t);
      ;
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
    }
  return(t);
}
ATerm l_9 (ATerm t)
{
  t = repeat_1_0(m_9, t);
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
      {
        ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL;
        v_56 = t;
        if(match_cons(t, sym_Seq_2))
          {
            w_56 = ATgetArgument(t, 0);
            s_56 = ATgetArgument(t, 1);
            t = s_56;
            if(match_cons(t, sym_Let_2))
              {
                t_56 = ATgetArgument(t, 0);
                u_56 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, t_56, (ATerm) ATmakeAppl(sym_Seq_2, w_56, u_56));
          }
        else
          {
            if(match_cons(t, sym_Scope_2))
              {
                w_56 = ATgetArgument(t, 0);
                s_56 = ATgetArgument(t, 1);
                {
                  ATerm d_57 = NULL;
                  t = s_56;
                  if(match_cons(t, sym_Scope_2))
                    {
                      t_56 = ATgetArgument(t, 0);
                      u_56 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, w_56, t_56);
                  t = conc_0_0(t);
                  d_57 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, d_57, u_56);
                }
              }
            else
              {
                if(match_cons(t, sym_Where_1))
                  {
                    w_56 = ATgetArgument(t, 0);
                    t = v_56;
                    t = s_5(w_56, t);
                  }
                else
                  {
                    if(match_cons(t, sym_Test_1))
                      {
                        w_56 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = v_56;
                    t = r_5(w_56, t);
                  }
              }
          }
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(a_9, _fail, default_usage_0_0, t);
  return(t);
}
