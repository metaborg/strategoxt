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
Symbol sym_RDefT_4;
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
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
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
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
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
ATerm term_c_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_i_29;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_m_28;
ATerm term_h_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_i_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_l_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_n_24;
ATerm term_k_24;
ATerm term_t_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_k_23;
ATerm term_h_23;
ATerm term_m_22;
ATerm term_q_7;
ATerm term_j_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_b_7;
void init_constant_terms (void)
{
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_Sort_2, term_b_7, (ATerm) ATempty);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_ConstType_1, term_d_7);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym__2, term_a_25, term_b_25);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_25);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym__2, term_h_25, term_s_24);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym__2, term_r_25, term_s_25);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym__2, term_a_28, term_s_24);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym__2, term_d_28, term_s_24);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym__2, term_s_26, term_s_24);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym__2, term_t_23, term_s_24);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm alltd_1_0 (ATerm a_94 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm j_92 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm m_93 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm t_107 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm e_2 (ATerm t_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm topdown_1_0 (ATerm i_92 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm);
ATerm u_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm e_1 (ATerm);
ATerm g_1 (ATerm);
ATerm j_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm w_1 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm simplify_0_0 (ATerm);
ATerm map_1_0 (ATerm d_107 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm);
ATerm z_11 (ATerm k_49, ATerm l_49, ATerm);
ATerm a_12 (ATerm y_52, ATerm z_52, ATerm);
ATerm c_12 (ATerm e_113 (ATerm), ATerm l_478, ATerm c_53, ATerm);
ATerm b_12 (ATerm u_52, ATerm v_52, ATerm);
ATerm k_2 (ATerm);
ATerm r_2 (ATerm);
ATerm output_1_0 (ATerm n_117 (ATerm), ATerm);
ATerm j_55 (ATerm c_55, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm d_12 (ATerm a_53, ATerm);
ATerm e_12 (ATerm m_49, ATerm n_49, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm v_56 (ATerm t_55, ATerm);
ATerm w_56 (ATerm x_55, ATerm y_55, ATerm z_55, ATerm);
ATerm x_56 (ATerm h_56, ATerm i_56, ATerm j_56, ATerm);
ATerm f_12 (ATerm);
ATerm s_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm o_117 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm w_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm y_2 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm m_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm n_12 (ATerm b_54, ATerm c_54, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm p_3 (ATerm);
ATerm r_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm l_12 (ATerm z_58, ATerm a_59, ATerm y_58, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm s_3 (ATerm);
ATerm w_3 (ATerm);
ATerm b_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm g_12 (ATerm k_46, ATerm l_46, ATerm);
ATerm foldr_2_0 (ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm o_114 (ATerm), ATerm);
ATerm g_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm h_4 (ATerm);
ATerm need_help_1_0 (ATerm e_117 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm n_107 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm j_12 (ATerm k_40, ATerm l_40, ATerm);
ATerm debug_1_0 (ATerm c_113 (ATerm), ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm k_12 (ATerm q_60, ATerm r_60, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm h_119 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm parse_options_1_0 (ATerm g_119 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm alltd_1_0 (ATerm a_94 (ATerm), ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    ATerm q_5 = t;
    int r_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_94(t);
        ;
        LocalPopChoice(r_5);
      }
    else
      {
        t = q_5;
        t = SRTS_all(a_0, t);
      }
    return(t);
  }
  t = a_0(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm j_92 (ATerm), ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = bottomup_1_0(j_92, t);
    return(t);
  }
  t = SRTS_all(b_0, t);
  t = j_92(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm m_93 (ATerm), ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm s_5 = t;
    int t_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_93(t);
        ;
        LocalPopChoice(t_5);
      }
    else
      {
        t = s_5;
        t = SRTS_one(o_2, t);
      }
    return(t);
  }
  t = o_2(t);
  return(t);
}
ATerm at_end_1_0 (ATerm t_107 (ATerm), ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm b_1 = NULL,c_1 = NULL,f_1 = NULL;
    f_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_1 = ATgetFirst((ATermList) t);
        c_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_1 = NULL,i_1 = NULL,t_0 = NULL;
          t = SSLgetAnnotations(f_1);
          d_1 = t;
          t = c_1;
          t = h_1(t);
          i_1 = t;
          t = (ATerm) ATinsert(CheckATermList(i_1), b_1);
          t_0 = t;
          t = SSLsetAnnotations(t_0, d_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_1;
        t = t_107(t);
      }
    return(t);
  }
  t = h_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,f_0 = NULL;
  c_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_0;
    }
  else
    {
      ATerm o_0 (ATerm t)
      {
        t = not_null(f_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_0 = ATgetFirst((ATermList) t);
          if(((f_0 != NULL) && (f_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_0;
      t = at_end_1_0(o_0, t);
    }
  return(t);
}
ATerm e_2 (ATerm t_1, ATerm t)
{
  ATerm v_1 = NULL;
  t = SSL_explode_term(t_1);
  if(match_cons(t, sym__2))
    {
      ATerm u_5 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_5) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      v_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL;
  a_2 = t;
  if(match_cons(t, sym__2))
    {
      y_1 = ATgetArgument(t, 0);
      z_1 = ATgetArgument(t, 1);
      {
        ATerm v_5 = t;
        int w_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_0 (ATerm t)
            {
              t = z_1;
              return(t);
            }
            t = y_1;
            t = at_end_1_0(p_0, t);
            ;
            LocalPopChoice(w_5);
          }
        else
          {
            t = v_5;
            t = e_2(a_2, t);
          }
      }
    }
  else
    {
      t = e_2(a_2, t);
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm v_3 = NULL,x_3 = NULL,y_3 = NULL;
  v_3 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_3 = ATgetFirst((ATermList) t);
      y_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm x_5 = t;
    int y_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_1 = NULL,s_1 = NULL,u_1 = NULL,x_1 = NULL,b_2 = NULL,p_2 = NULL,q_2 = NULL,w_0 = NULL,v_0 = NULL;
        t = SSLgetAnnotations(v_3);
        b_2 = t;
        t = x_3;
        t = n_0(t);
        p_2 = t;
        t = (ATerm) ATinsert(CheckATermList(y_3), p_2);
        v_0 = t;
        t = SSLsetAnnotations(v_0, b_2);
        q_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_1 = ATgetFirst((ATermList) t);
            u_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_2);
        r_1 = t;
        t = u_1;
        {
          ATerm z_5 = t;
          int c_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(c_6);
            }
          else
            {
              t = z_5;
            }
          x_1 = t;
          t = (ATerm) ATinsert(CheckATermList(x_1), s_1);
          w_0 = t;
          t = SSLsetAnnotations(w_0, r_1);
        }
        ;
        LocalPopChoice(y_5);
      }
    else
      {
        t = x_5;
        {
          ATerm c_4 = NULL,f_4 = NULL,x_0 = NULL;
          t = SSLgetAnnotations(v_3);
          c_4 = t;
          t = y_3;
          t = map1_1_0(n_0, t);
          f_4 = t;
          t = (ATerm) ATinsert(CheckATermList(f_4), x_3);
          x_0 = t;
          t = SSLsetAnnotations(x_0, c_4);
        }
      }
  }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm topdown_1_0 (ATerm i_92 (ATerm), ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    t = topdown_1_0(i_92, t);
    return(t);
  }
  t = i_92(t);
  t = SRTS_all(r_0, t);
  return(t);
}
ATerm genzip_4_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm d_6 = t;
    int g_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_96(t);
        ;
        LocalPopChoice(g_6);
      }
    else
      {
        t = d_6;
        {
          ATerm f_2 = NULL,g_2 = NULL,i_2 = NULL,j_2 = NULL,l_2 = NULL,m_2 = NULL,k_1 = NULL;
          t = v_96(t);
          m_2 = t;
          if(match_cons(t, sym__2))
            {
              g_2 = ATgetArgument(t, 0);
              i_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_2);
          f_2 = t;
          t = g_2;
          t = x_96(t);
          j_2 = t;
          t = i_2;
          t = n_2(t);
          l_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_2, l_2);
          k_1 = t;
          t = SSLsetAnnotations(k_1, f_2);
          t = w_96(t);
        }
      }
    return(t);
  }
  t = n_2(t);
  return(t);
}
ATerm u_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_6 = ATgetArgument(t, 0);
      if(((ATgetType(h_6) != AT_LIST) || !(ATisEmpty(h_6))))
        _fail(t);
      {
        ATerm i_6 = ATgetArgument(t, 1);
        if(((ATgetType(i_6) != AT_LIST) || !(ATisEmpty(i_6))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_6 = ATgetArgument(t, 0);
      if(((ATgetType(j_6) == AT_LIST) && !(ATisEmpty(j_6))))
        {
          l_21 = ATgetFirst((ATermList) j_6);
          m_21 = (ATerm) ATgetNext((ATermList) j_6);
        }
      else
        _fail(t);
      {
        ATerm k_6 = ATgetArgument(t, 1);
        if(((ATgetType(k_6) == AT_LIST) && !(ATisEmpty(k_6))))
          {
            n_21 = ATgetFirst((ATermList) k_6);
            o_21 = (ATerm) ATgetNext((ATermList) k_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_21, n_21), (ATerm) ATmakeAppl(sym__2, m_21, o_21));
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL;
  if(match_cons(t, sym__2))
    {
      p_21 = ATgetArgument(t, 0);
      q_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_21), p_21);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL;
  if(match_cons(t, sym__2))
    {
      r_21 = ATgetArgument(t, 0);
      s_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, r_21), (ATerm) ATmakeAppl(sym_Match_1, s_21));
  return(t);
}
ATerm e_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_6 = ATgetArgument(t, 0);
      if(((ATgetType(l_6) != AT_LIST) || !(ATisEmpty(l_6))))
        _fail(t);
      {
        ATerm m_6 = ATgetArgument(t, 1);
        if(((ATgetType(m_6) != AT_LIST) || !(ATisEmpty(m_6))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,r_27 = NULL,s_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_6 = ATgetArgument(t, 0);
      if(((ATgetType(n_6) == AT_LIST) && !(ATisEmpty(n_6))))
        {
          n_27 = ATgetFirst((ATermList) n_6);
          o_27 = (ATerm) ATgetNext((ATermList) n_6);
        }
      else
        _fail(t);
      {
        ATerm o_6 = ATgetArgument(t, 1);
        if(((ATgetType(o_6) == AT_LIST) && !(ATisEmpty(o_6))))
          {
            r_27 = ATgetFirst((ATermList) o_6);
            s_27 = (ATerm) ATgetNext((ATermList) o_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_27, r_27), (ATerm) ATmakeAppl(sym__2, o_27, s_27));
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL;
  if(match_cons(t, sym__2))
    {
      t_27 = ATgetArgument(t, 0);
      u_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_27), t_27);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL;
  if(match_cons(t, sym__2))
    {
      v_27 = ATgetArgument(t, 0);
      w_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, v_27), (ATerm) ATmakeAppl(sym_Match_1, w_27));
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm p_6 = t;
  int q_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm s_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(q_6);
      {
        ATerm a_39 = NULL,b_39 = NULL;
        a_39 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm t_6 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        b_39 = t;
        t = SSLgetAnnotations(a_39);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_6 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) u_6) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm v_6 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(v_6) != AT_LIST) || !(ATisEmpty(v_6))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_39;
      }
    }
  else
    {
      t = p_6;
      {
        ATerm w_6 = t;
        int x_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm y_6 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) y_6) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm a_7 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(x_6);
            _fail(t);
          }
        else
          {
            t = w_6;
          }
      }
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm n_48 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_48, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_7), term_e_7));
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL;
  q_48 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      p_48 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, p_48, term_e_7);
    }
  else
    {
      t = q_48;
    }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm b_49 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_49, term_e_7);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL;
  d_49 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      c_49 = ATgetArgument(t, 0);
      {
        ATerm f_7 = t;
        int g_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, c_49, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_7), term_e_7));
            ;
            LocalPopChoice(g_7);
          }
        else
          {
            t = f_7;
            t = d_49;
          }
      }
    }
  else
    {
      t = d_49;
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm t_49 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      t_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_49, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_7), term_e_7));
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm u_49 = NULL,v_49 = NULL;
  v_49 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      u_49 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, u_49, term_e_7);
    }
  else
    {
      t = v_49;
    }
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL;
    e_14 = t;
    if(match_cons(t, sym_Test_1))
      {
        d_14 = ATgetArgument(t, 0);
        t = d_14;
        if(match_cons(t, sym_Id_0))
          {
            ATerm h_7 = t;
            int i_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_j_7;
                t = s_0(t);
                ;
                LocalPopChoice(i_7);
              }
            else
              {
                t = h_7;
                {
                  ATerm l_7 = t;
                  int m_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
                      t = e_14;
                      t = new_0_0(t);
                      g_14 = t;
                      t = bottomup_1_0(s_0, t);
                      r_14 = t;
                      t = (ATerm) ATempty;
                      t = s_0(t);
                      s_14 = t;
                      t = (ATerm) ATinsert(CheckATermList(s_14), r_14);
                      t = s_0(t);
                      h_14 = t;
                      t = g_14;
                      t = bottomup_1_0(s_0, t);
                      q_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, q_14);
                      t = s_0(t);
                      p_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, p_14);
                      t = s_0(t);
                      j_14 = t;
                      t = d_14;
                      t = bottomup_1_0(s_0, t);
                      l_14 = t;
                      t = g_14;
                      t = bottomup_1_0(s_0, t);
                      o_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, o_14);
                      t = s_0(t);
                      n_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, n_14);
                      t = s_0(t);
                      m_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_14, m_14);
                      t = s_0(t);
                      k_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_14, k_14);
                      t = s_0(t);
                      i_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, h_14, i_14);
                      t = s_0(t);
                      ;
                      LocalPopChoice(m_7);
                    }
                  else
                    {
                      t = l_7;
                      t = e_14;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm o_7 = t;
                int p_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_q_7;
                    t = s_0(t);
                    ;
                    LocalPopChoice(p_7);
                  }
                else
                  {
                    t = o_7;
                    {
                      ATerm r_7 = t;
                      int s_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm y_14 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,r_15 = NULL,s_15 = NULL,y_15 = NULL,a_16 = NULL,b_16 = NULL,f_16 = NULL;
                          t = e_14;
                          t = new_0_0(t);
                          y_14 = t;
                          t = bottomup_1_0(s_0, t);
                          b_16 = t;
                          t = (ATerm) ATempty;
                          t = s_0(t);
                          f_16 = t;
                          t = (ATerm) ATinsert(CheckATermList(f_16), b_16);
                          t = s_0(t);
                          b_15 = t;
                          t = y_14;
                          t = bottomup_1_0(s_0, t);
                          a_16 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, a_16);
                          t = s_0(t);
                          y_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, y_15);
                          t = s_0(t);
                          d_15 = t;
                          t = d_14;
                          t = bottomup_1_0(s_0, t);
                          l_15 = t;
                          t = y_14;
                          t = bottomup_1_0(s_0, t);
                          s_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, s_15);
                          t = s_0(t);
                          r_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, r_15);
                          t = s_0(t);
                          m_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, l_15, m_15);
                          t = s_0(t);
                          k_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_15, k_15);
                          t = s_0(t);
                          c_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, b_15, c_15);
                          t = s_0(t);
                          ;
                          LocalPopChoice(s_7);
                        }
                      else
                        {
                          t = r_7;
                          t = e_14;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    a_14 = ATgetArgument(t, 0);
                    {
                      ATerm t_7 = t;
                      int u_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, a_14);
                          t = s_0(t);
                          ;
                          LocalPopChoice(u_7);
                        }
                      else
                        {
                          t = t_7;
                          {
                            ATerm v_7 = t;
                            int w_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,m_17 = NULL;
                                t = e_14;
                                t = new_0_0(t);
                                l_16 = t;
                                t = bottomup_1_0(s_0, t);
                                i_17 = t;
                                t = (ATerm) ATempty;
                                t = s_0(t);
                                m_17 = t;
                                t = (ATerm) ATinsert(CheckATermList(m_17), i_17);
                                t = s_0(t);
                                m_16 = t;
                                t = l_16;
                                t = bottomup_1_0(s_0, t);
                                h_17 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, h_17);
                                t = s_0(t);
                                g_17 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, g_17);
                                t = s_0(t);
                                o_16 = t;
                                t = d_14;
                                t = bottomup_1_0(s_0, t);
                                w_16 = t;
                                t = l_16;
                                t = bottomup_1_0(s_0, t);
                                f_17 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, f_17);
                                t = s_0(t);
                                y_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, y_16);
                                t = s_0(t);
                                x_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, w_16, x_16);
                                t = s_0(t);
                                p_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, o_16, p_16);
                                t = s_0(t);
                                n_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, m_16, n_16);
                                t = s_0(t);
                                ;
                                LocalPopChoice(w_7);
                              }
                            else
                              {
                                t = v_7;
                                t = e_14;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm x_7 = t;
                    int y_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,h_18 = NULL,j_18 = NULL,k_18 = NULL;
                        t = e_14;
                        t = new_0_0(t);
                        u_17 = t;
                        t = bottomup_1_0(s_0, t);
                        j_18 = t;
                        t = (ATerm) ATempty;
                        t = s_0(t);
                        k_18 = t;
                        t = (ATerm) ATinsert(CheckATermList(k_18), j_18);
                        t = s_0(t);
                        w_17 = t;
                        t = u_17;
                        t = bottomup_1_0(s_0, t);
                        h_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, h_18);
                        t = s_0(t);
                        e_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, e_18);
                        t = s_0(t);
                        y_17 = t;
                        t = d_14;
                        t = bottomup_1_0(s_0, t);
                        a_18 = t;
                        t = u_17;
                        t = bottomup_1_0(s_0, t);
                        d_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, d_18);
                        t = s_0(t);
                        c_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, c_18);
                        t = s_0(t);
                        b_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, a_18, b_18);
                        t = s_0(t);
                        z_17 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, y_17, z_17);
                        t = s_0(t);
                        x_17 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, w_17, x_17);
                        t = s_0(t);
                        ;
                        LocalPopChoice(y_7);
                      }
                    else
                      {
                        t = x_7;
                        t = e_14;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            d_14 = ATgetArgument(t, 0);
            t = d_14;
            if(match_cons(t, sym_Id_0))
              {
                ATerm z_7 = t;
                int a_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_q_7;
                    t = s_0(t);
                    ;
                    LocalPopChoice(a_8);
                  }
                else
                  {
                    t = z_7;
                    t = e_14;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm b_8 = t;
                    int d_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_j_7;
                        t = s_0(t);
                        ;
                        LocalPopChoice(d_8);
                      }
                    else
                      {
                        t = b_8;
                        t = e_14;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        a_14 = ATgetArgument(t, 0);
                        {
                          ATerm e_8 = t;
                          int f_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, a_14);
                              t = s_0(t);
                              ;
                              LocalPopChoice(f_8);
                            }
                          else
                            {
                              t = e_8;
                              t = e_14;
                            }
                        }
                      }
                    else
                      {
                        t = e_14;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                d_14 = ATgetArgument(t, 0);
                c_14 = ATgetArgument(t, 1);
                t = c_14;
                if(match_cons(t, sym_Id_0))
                  {
                    t = d_14;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = c_14;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = d_14;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                a_14 = ATgetArgument(t, 0);
                                b_14 = ATgetArgument(t, 1);
                                t = d_14;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    a_14 = ATgetArgument(t, 0);
                                    b_14 = ATgetArgument(t, 1);
                                    t = d_14;
                                  }
                                else
                                  {
                                    t = d_14;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        y_13 = ATgetArgument(t, 0);
                        z_13 = ATgetArgument(t, 1);
                        t = y_13;
                        if(match_cons(t, sym_Match_1))
                          {
                            x_13 = ATgetArgument(t, 0);
                            t = x_13;
                            if(match_cons(t, sym_Op_2))
                              {
                                v_13 = ATgetArgument(t, 0);
                                q_13 = ATgetArgument(t, 1);
                                t = d_14;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = c_14;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm h_8 = t;
                                        int i_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_q_7;
                                            t = s_0(t);
                                            ;
                                            LocalPopChoice(i_8);
                                          }
                                        else
                                          {
                                            t = h_8;
                                            t = e_14;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            a_14 = ATgetArgument(t, 0);
                                            b_14 = ATgetArgument(t, 1);
                                            {
                                              ATerm j_8 = t;
                                              int k_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm q_20 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                  t = s_0(t);
                                                  q_20 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, q_20);
                                                  t = s_0(t);
                                                  ;
                                                  LocalPopChoice(k_8);
                                                }
                                              else
                                                {
                                                  t = j_8;
                                                  t = e_14;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                a_14 = ATgetArgument(t, 0);
                                                t = a_14;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    w_13 = ATgetArgument(t, 0);
                                                    r_13 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm l_8 = t;
                                                      int m_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, w_13, v_13);
                                                          {
                                                            ATerm n_8 = t;
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
                                                                t = n_8;
                                                              }
                                                            t = term_q_7;
                                                            t = bottomup_1_0(s_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(m_8);
                                                        }
                                                      else
                                                        {
                                                          t = l_8;
                                                          {
                                                            ATerm o_8 = t;
                                                            int p_8 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm j_21 = NULL;
                                                                t = v_13;
                                                                if((w_13 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, r_13, q_13);
                                                                t = genzip_4_0(u_0, y_0, z_0, a_1, t);
                                                                j_21 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, w_13, r_13)), z_13));
                                                                t = bottomup_1_0(s_0, t);
                                                                ;
                                                                LocalPopChoice(p_8);
                                                              }
                                                            else
                                                              {
                                                                t = o_8;
                                                                {
                                                                  ATerm q_8 = t;
                                                                  int r_8 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm v_21 = NULL;
                                                                      t = x_13;
                                                                      if((a_14 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, a_14);
                                                                      t = s_0(t);
                                                                      v_21 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_21, z_13);
                                                                      t = s_0(t);
                                                                      ;
                                                                      LocalPopChoice(r_8);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = q_8;
                                                                      t = e_14;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm s_8 = t;
                                                    int t_8 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm z_21 = NULL;
                                                        t = x_13;
                                                        if((a_14 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, a_14);
                                                        t = s_0(t);
                                                        z_21 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, z_21, z_13);
                                                        t = s_0(t);
                                                        ;
                                                        LocalPopChoice(t_8);
                                                      }
                                                    else
                                                      {
                                                        t = s_8;
                                                        t = e_14;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    a_14 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm u_8 = t;
                                                      int v_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm d_22 = NULL;
                                                          t = x_13;
                                                          if((a_14 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, a_14);
                                                          t = s_0(t);
                                                          d_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_22, z_13);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(v_8);
                                                        }
                                                      else
                                                        {
                                                          t = u_8;
                                                          t = e_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        a_14 = ATgetArgument(t, 0);
                                                        b_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm w_8 = t;
                                                          int x_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_22 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                              t = s_0(t);
                                                              i_22 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_14, i_22);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(x_8);
                                                            }
                                                          else
                                                            {
                                                              t = w_8;
                                                              t = e_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_14;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = d_14;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = c_14;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm y_8 = t;
                                        int z_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_q_7;
                                            t = s_0(t);
                                            ;
                                            LocalPopChoice(z_8);
                                          }
                                        else
                                          {
                                            t = y_8;
                                            t = e_14;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            a_14 = ATgetArgument(t, 0);
                                            b_14 = ATgetArgument(t, 1);
                                            {
                                              ATerm a_9 = t;
                                              int b_9 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm r_22 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                  t = s_0(t);
                                                  r_22 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, r_22);
                                                  t = s_0(t);
                                                  ;
                                                  LocalPopChoice(b_9);
                                                }
                                              else
                                                {
                                                  t = a_9;
                                                  t = e_14;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                a_14 = ATgetArgument(t, 0);
                                                {
                                                  ATerm c_9 = t;
                                                  int d_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm v_22 = NULL;
                                                      t = x_13;
                                                      if((a_14 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, a_14);
                                                      t = s_0(t);
                                                      v_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_22, z_13);
                                                      t = s_0(t);
                                                      ;
                                                      LocalPopChoice(d_9);
                                                    }
                                                  else
                                                    {
                                                      t = c_9;
                                                      t = e_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    a_14 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm e_9 = t;
                                                      int f_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm z_22 = NULL;
                                                          t = x_13;
                                                          if((a_14 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, a_14);
                                                          t = s_0(t);
                                                          z_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_22, z_13);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(f_9);
                                                        }
                                                      else
                                                        {
                                                          t = e_9;
                                                          t = e_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        a_14 = ATgetArgument(t, 0);
                                                        b_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm g_9 = t;
                                                          int h_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm e_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                              t = s_0(t);
                                                              e_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_14, e_23);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(h_9);
                                                            }
                                                          else
                                                            {
                                                              t = g_9;
                                                              t = e_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_14;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Build_1))
                              {
                                x_13 = ATgetArgument(t, 0);
                                t = x_13;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    v_13 = ATgetArgument(t, 0);
                                    t = d_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = c_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm i_9 = t;
                                            int j_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_7;
                                                t = s_0(t);
                                                ;
                                                LocalPopChoice(j_9);
                                              }
                                            else
                                              {
                                                t = i_9;
                                                t = e_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                a_14 = ATgetArgument(t, 0);
                                                b_14 = ATgetArgument(t, 1);
                                                {
                                                  ATerm k_9 = t;
                                                  int l_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm n_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                      t = s_0(t);
                                                      n_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, n_23);
                                                      t = s_0(t);
                                                      ;
                                                      LocalPopChoice(l_9);
                                                    }
                                                  else
                                                    {
                                                      t = k_9;
                                                      t = e_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm m_9 = t;
                                                int n_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm o_9 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(n_9);
                                                    {
                                                      ATerm p_9 = t;
                                                      int q_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm s_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, x_13);
                                                          t = s_0(t);
                                                          s_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, s_23, z_13);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(q_9);
                                                        }
                                                      else
                                                        {
                                                          t = p_9;
                                                          t = e_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = m_9;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        a_14 = ATgetArgument(t, 0);
                                                        t = a_14;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            w_13 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm r_9 = t;
                                                              int s_9 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm x_23 = NULL,z_23 = NULL;
                                                                  t = v_13;
                                                                  if((w_13 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, w_13);
                                                                  t = s_0(t);
                                                                  z_23 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, z_23);
                                                                  t = s_0(t);
                                                                  x_23 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_23, z_13);
                                                                  t = s_0(t);
                                                                  ;
                                                                  LocalPopChoice(s_9);
                                                                }
                                                              else
                                                                {
                                                                  t = r_9;
                                                                  t = e_14;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = e_14;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            a_14 = ATgetArgument(t, 0);
                                                            b_14 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm t_9 = t;
                                                              int u_9 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm h_24 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                                  t = s_0(t);
                                                                  h_24 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, a_14, h_24);
                                                                  t = s_0(t);
                                                                  ;
                                                                  LocalPopChoice(u_9);
                                                                }
                                                              else
                                                                {
                                                                  t = t_9;
                                                                  t = e_14;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = e_14;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = d_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = c_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm v_9 = t;
                                            int w_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_7;
                                                t = s_0(t);
                                                ;
                                                LocalPopChoice(w_9);
                                              }
                                            else
                                              {
                                                t = v_9;
                                                t = e_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                a_14 = ATgetArgument(t, 0);
                                                b_14 = ATgetArgument(t, 1);
                                                {
                                                  ATerm x_9 = t;
                                                  int y_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm z_24 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                      t = s_0(t);
                                                      z_24 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, z_24);
                                                      t = s_0(t);
                                                      ;
                                                      LocalPopChoice(y_9);
                                                    }
                                                  else
                                                    {
                                                      t = x_9;
                                                      t = e_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm z_9 = t;
                                                int a_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm b_10 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(a_10);
                                                    {
                                                      ATerm c_10 = t;
                                                      int d_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm d_25 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, x_13);
                                                          t = s_0(t);
                                                          d_25 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_25, z_13);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(d_10);
                                                        }
                                                      else
                                                        {
                                                          t = c_10;
                                                          t = e_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = z_9;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        a_14 = ATgetArgument(t, 0);
                                                        b_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm e_10 = t;
                                                          int f_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm k_25 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                              t = s_0(t);
                                                              k_25 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_14, k_25);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(f_10);
                                                            }
                                                          else
                                                            {
                                                              t = e_10;
                                                              t = e_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_14;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_PrimT_3))
                                  {
                                    x_13 = ATgetArgument(t, 0);
                                    s_13 = ATgetArgument(t, 1);
                                    t_13 = ATgetArgument(t, 2);
                                    t = d_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = c_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm g_10 = t;
                                            int h_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_7;
                                                t = s_0(t);
                                                ;
                                                LocalPopChoice(h_10);
                                              }
                                            else
                                              {
                                                t = g_10;
                                                t = e_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                a_14 = ATgetArgument(t, 0);
                                                b_14 = ATgetArgument(t, 1);
                                                {
                                                  ATerm i_10 = t;
                                                  int j_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm w_25 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                      t = s_0(t);
                                                      w_25 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, w_25);
                                                      t = s_0(t);
                                                      ;
                                                      LocalPopChoice(j_10);
                                                    }
                                                  else
                                                    {
                                                      t = i_10;
                                                      t = e_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm k_10 = t;
                                                int l_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm m_10 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(l_10);
                                                    {
                                                      ATerm n_10 = t;
                                                      int o_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm c_26 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, x_13, s_13, t_13);
                                                          t = s_0(t);
                                                          c_26 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_26, z_13);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(o_10);
                                                        }
                                                      else
                                                        {
                                                          t = n_10;
                                                          t = e_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = k_10;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        a_14 = ATgetArgument(t, 0);
                                                        b_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm p_10 = t;
                                                          int q_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                              t = s_0(t);
                                                              h_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_14, h_26);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(q_10);
                                                            }
                                                          else
                                                            {
                                                              t = p_10;
                                                              t = e_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_14;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = d_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = c_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm r_10 = t;
                                            int s_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_7;
                                                t = s_0(t);
                                                ;
                                                LocalPopChoice(s_10);
                                              }
                                            else
                                              {
                                                t = r_10;
                                                t = e_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                a_14 = ATgetArgument(t, 0);
                                                b_14 = ATgetArgument(t, 1);
                                                {
                                                  ATerm t_10 = t;
                                                  int u_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm q_26 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                      t = s_0(t);
                                                      q_26 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, q_26);
                                                      t = s_0(t);
                                                      ;
                                                      LocalPopChoice(u_10);
                                                    }
                                                  else
                                                    {
                                                      t = t_10;
                                                      t = e_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    a_14 = ATgetArgument(t, 0);
                                                    b_14 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm v_10 = t;
                                                      int w_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm v_26 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                          t = s_0(t);
                                                          v_26 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, a_14, v_26);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(w_10);
                                                        }
                                                      else
                                                        {
                                                          t = v_10;
                                                          t = e_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = e_14;
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            y_13 = ATgetArgument(t, 0);
                            t = y_13;
                            if(match_cons(t, sym_Op_2))
                              {
                                x_13 = ATgetArgument(t, 0);
                                s_13 = ATgetArgument(t, 1);
                                t = d_14;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = c_14;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm x_10 = t;
                                        int y_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_q_7;
                                            t = s_0(t);
                                            ;
                                            LocalPopChoice(y_10);
                                          }
                                        else
                                          {
                                            t = x_10;
                                            t = e_14;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            a_14 = ATgetArgument(t, 0);
                                            b_14 = ATgetArgument(t, 1);
                                            {
                                              ATerm z_10 = t;
                                              int a_11 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm h_27 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                  t = s_0(t);
                                                  h_27 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, h_27);
                                                  t = s_0(t);
                                                  ;
                                                  LocalPopChoice(a_11);
                                                }
                                              else
                                                {
                                                  t = z_10;
                                                  t = e_14;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                a_14 = ATgetArgument(t, 0);
                                                t = a_14;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    w_13 = ATgetArgument(t, 0);
                                                    r_13 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm b_11 = t;
                                                      int c_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, w_13, x_13);
                                                          {
                                                            ATerm d_11 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm v_4 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    v_4 = ATgetArgument(t, 0);
                                                                    if((v_4 != ATgetArgument(t, 1)))
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
                                                                t = d_11;
                                                              }
                                                            t = term_q_7;
                                                            t = bottomup_1_0(s_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(c_11);
                                                        }
                                                      else
                                                        {
                                                          t = b_11;
                                                          {
                                                            ATerm e_11 = t;
                                                            int f_11 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm m_27 = NULL;
                                                                t = x_13;
                                                                if((w_13 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, r_13, s_13);
                                                                t = genzip_4_0(e_1, g_1, j_1, l_1, t);
                                                                m_27 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_27), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, w_13, r_13)));
                                                                t = bottomup_1_0(s_0, t);
                                                                ;
                                                                LocalPopChoice(f_11);
                                                              }
                                                            else
                                                              {
                                                                t = e_11;
                                                                {
                                                                  ATerm g_11 = t;
                                                                  int h_11 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = y_13;
                                                                      if((a_14 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, a_14);
                                                                      t = s_0(t);
                                                                      ;
                                                                      LocalPopChoice(h_11);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = g_11;
                                                                      t = e_14;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm i_11 = t;
                                                    int j_11 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = y_13;
                                                        if((a_14 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, a_14);
                                                        t = s_0(t);
                                                        ;
                                                        LocalPopChoice(j_11);
                                                      }
                                                    else
                                                      {
                                                        t = i_11;
                                                        t = e_14;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    a_14 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm k_11 = t;
                                                      int l_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = y_13;
                                                          if((a_14 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, a_14);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(l_11);
                                                        }
                                                      else
                                                        {
                                                          t = k_11;
                                                          t = e_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        a_14 = ATgetArgument(t, 0);
                                                        b_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm m_11 = t;
                                                          int n_11 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_28 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                              t = s_0(t);
                                                              g_28 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_14, g_28);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(n_11);
                                                            }
                                                          else
                                                            {
                                                              t = m_11;
                                                              t = e_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_14;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = d_14;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = c_14;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm o_11 = t;
                                        int p_11 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_q_7;
                                            t = s_0(t);
                                            ;
                                            LocalPopChoice(p_11);
                                          }
                                        else
                                          {
                                            t = o_11;
                                            t = e_14;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            a_14 = ATgetArgument(t, 0);
                                            b_14 = ATgetArgument(t, 1);
                                            {
                                              ATerm q_11 = t;
                                              int r_11 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm p_28 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                  t = s_0(t);
                                                  p_28 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, p_28);
                                                  t = s_0(t);
                                                  ;
                                                  LocalPopChoice(r_11);
                                                }
                                              else
                                                {
                                                  t = q_11;
                                                  t = e_14;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                a_14 = ATgetArgument(t, 0);
                                                {
                                                  ATerm s_11 = t;
                                                  int t_11 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = y_13;
                                                      if((a_14 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, a_14);
                                                      t = s_0(t);
                                                      ;
                                                      LocalPopChoice(t_11);
                                                    }
                                                  else
                                                    {
                                                      t = s_11;
                                                      t = e_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    a_14 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm u_11 = t;
                                                      int v_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = y_13;
                                                          if((a_14 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, a_14);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(v_11);
                                                        }
                                                      else
                                                        {
                                                          t = u_11;
                                                          t = e_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        a_14 = ATgetArgument(t, 0);
                                                        b_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm w_11 = t;
                                                          int x_11 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm y_28 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                              t = s_0(t);
                                                              y_28 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_14, y_28);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(x_11);
                                                            }
                                                          else
                                                            {
                                                              t = w_11;
                                                              t = e_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_14;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Build_1))
                              {
                                y_13 = ATgetArgument(t, 0);
                                t = y_13;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    x_13 = ATgetArgument(t, 0);
                                    t = d_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = c_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm y_11 = t;
                                            int h_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_7;
                                                t = s_0(t);
                                                ;
                                                LocalPopChoice(h_12);
                                              }
                                            else
                                              {
                                                t = y_11;
                                                t = e_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                a_14 = ATgetArgument(t, 0);
                                                b_14 = ATgetArgument(t, 1);
                                                {
                                                  ATerm i_12 = t;
                                                  int m_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm j_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                      t = s_0(t);
                                                      j_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, j_29);
                                                      t = s_0(t);
                                                      ;
                                                      LocalPopChoice(m_12);
                                                    }
                                                  else
                                                    {
                                                      t = i_12;
                                                      t = e_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm o_12 = t;
                                                int p_12 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm q_12 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(p_12);
                                                    {
                                                      ATerm r_12 = t;
                                                      int s_12 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, y_13);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(s_12);
                                                        }
                                                      else
                                                        {
                                                          t = r_12;
                                                          t = e_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = o_12;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        a_14 = ATgetArgument(t, 0);
                                                        t = a_14;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            w_13 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm t_12 = t;
                                                              int u_12 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm t_29 = NULL;
                                                                  t = x_13;
                                                                  if((w_13 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, w_13);
                                                                  t = s_0(t);
                                                                  t_29 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, t_29);
                                                                  t = s_0(t);
                                                                  ;
                                                                  LocalPopChoice(u_12);
                                                                }
                                                              else
                                                                {
                                                                  t = t_12;
                                                                  t = e_14;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = e_14;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            a_14 = ATgetArgument(t, 0);
                                                            b_14 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm v_12 = t;
                                                              int w_12 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm b_30 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                                  t = s_0(t);
                                                                  b_30 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, a_14, b_30);
                                                                  t = s_0(t);
                                                                  ;
                                                                  LocalPopChoice(w_12);
                                                                }
                                                              else
                                                                {
                                                                  t = v_12;
                                                                  t = e_14;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = e_14;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = d_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = c_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm x_12 = t;
                                            int y_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_7;
                                                t = s_0(t);
                                                ;
                                                LocalPopChoice(y_12);
                                              }
                                            else
                                              {
                                                t = x_12;
                                                t = e_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                a_14 = ATgetArgument(t, 0);
                                                b_14 = ATgetArgument(t, 1);
                                                {
                                                  ATerm z_12 = t;
                                                  int a_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm u_30 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                      t = s_0(t);
                                                      u_30 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, u_30);
                                                      t = s_0(t);
                                                      ;
                                                      LocalPopChoice(a_13);
                                                    }
                                                  else
                                                    {
                                                      t = z_12;
                                                      t = e_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm b_13 = t;
                                                int c_13 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm d_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(c_13);
                                                    {
                                                      ATerm e_13 = t;
                                                      int f_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, y_13);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(f_13);
                                                        }
                                                      else
                                                        {
                                                          t = e_13;
                                                          t = e_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = b_13;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        a_14 = ATgetArgument(t, 0);
                                                        b_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm g_13 = t;
                                                          int h_13 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                              t = s_0(t);
                                                              h_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_14, h_31);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(h_13);
                                                            }
                                                          else
                                                            {
                                                              t = g_13;
                                                              t = e_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_14;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_PrimT_3))
                                  {
                                    y_13 = ATgetArgument(t, 0);
                                    z_13 = ATgetArgument(t, 1);
                                    u_13 = ATgetArgument(t, 2);
                                    t = d_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = c_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm i_13 = t;
                                            int f_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_7;
                                                t = s_0(t);
                                                ;
                                                LocalPopChoice(f_14);
                                              }
                                            else
                                              {
                                                t = i_13;
                                                t = e_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                a_14 = ATgetArgument(t, 0);
                                                b_14 = ATgetArgument(t, 1);
                                                {
                                                  ATerm t_14 = t;
                                                  int u_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_31 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                      t = s_0(t);
                                                      t_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, t_31);
                                                      t = s_0(t);
                                                      ;
                                                      LocalPopChoice(u_14);
                                                    }
                                                  else
                                                    {
                                                      t = t_14;
                                                      t = e_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm v_14 = t;
                                                int w_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm x_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(w_14);
                                                    {
                                                      ATerm z_14 = t;
                                                      int a_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, y_13, z_13, u_13);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(a_15);
                                                        }
                                                      else
                                                        {
                                                          t = z_14;
                                                          t = e_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = v_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        a_14 = ATgetArgument(t, 0);
                                                        b_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm e_15 = t;
                                                          int f_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm j_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                              t = s_0(t);
                                                              j_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_14, j_32);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(f_15);
                                                            }
                                                          else
                                                            {
                                                              t = e_15;
                                                              t = e_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_14;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Let_2))
                                      {
                                        y_13 = ATgetArgument(t, 0);
                                        z_13 = ATgetArgument(t, 1);
                                        t = d_14;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = c_14;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm g_15 = t;
                                                int h_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_q_7;
                                                    t = s_0(t);
                                                    ;
                                                    LocalPopChoice(h_15);
                                                  }
                                                else
                                                  {
                                                    t = g_15;
                                                    {
                                                      ATerm i_15 = t;
                                                      int j_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm y_32 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_14, z_13);
                                                          t = s_0(t);
                                                          y_32 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, y_13, y_32);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(j_15);
                                                        }
                                                      else
                                                        {
                                                          t = i_15;
                                                          t = e_14;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    a_14 = ATgetArgument(t, 0);
                                                    b_14 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm n_15 = t;
                                                      int o_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm f_33 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                          t = s_0(t);
                                                          f_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, f_33);
                                                          t = s_0(t);
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
                                                                ATerm l_33 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, d_14, z_13);
                                                                t = s_0(t);
                                                                l_33 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, y_13, l_33);
                                                                t = s_0(t);
                                                                ;
                                                                LocalPopChoice(q_15);
                                                              }
                                                            else
                                                              {
                                                                t = p_15;
                                                                t = e_14;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        a_14 = ATgetArgument(t, 0);
                                                        b_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_15 = t;
                                                          int u_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_14, z_13);
                                                              t = s_0(t);
                                                              r_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, y_13, r_33);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(u_15);
                                                            }
                                                          else
                                                            {
                                                              t = t_15;
                                                              {
                                                                ATerm v_15 = t;
                                                                int w_15 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm v_33 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                                    t = s_0(t);
                                                                    v_33 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, a_14, v_33);
                                                                    t = s_0(t);
                                                                    ;
                                                                    LocalPopChoice(w_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = v_15;
                                                                    t = e_14;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm x_15 = t;
                                                        int z_15 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm c_34 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, d_14, z_13);
                                                            t = s_0(t);
                                                            c_34 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, y_13, c_34);
                                                            t = s_0(t);
                                                            ;
                                                            LocalPopChoice(z_15);
                                                          }
                                                        else
                                                          {
                                                            t = x_15;
                                                            t = e_14;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Scope_2))
                                          {
                                            y_13 = ATgetArgument(t, 0);
                                            z_13 = ATgetArgument(t, 1);
                                            t = d_14;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = c_14;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm c_16 = t;
                                                    int d_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_q_7;
                                                        t = s_0(t);
                                                        ;
                                                        LocalPopChoice(d_16);
                                                      }
                                                    else
                                                      {
                                                        t = c_16;
                                                        {
                                                          ATerm e_16 = t;
                                                          int g_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_14, z_13);
                                                              t = s_0(t);
                                                              n_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, y_13, n_34);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(g_16);
                                                            }
                                                          else
                                                            {
                                                              t = e_16;
                                                              t = e_14;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        a_14 = ATgetArgument(t, 0);
                                                        b_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_16 = t;
                                                          int i_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm t_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                              t = s_0(t);
                                                              t_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, t_34);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(i_16);
                                                            }
                                                          else
                                                            {
                                                              t = h_16;
                                                              {
                                                                ATerm j_16 = t;
                                                                int k_16 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm x_34 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, d_14, z_13);
                                                                    t = s_0(t);
                                                                    x_34 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, y_13, x_34);
                                                                    t = s_0(t);
                                                                    ;
                                                                    LocalPopChoice(k_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = j_16;
                                                                    t = e_14;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            a_14 = ATgetArgument(t, 0);
                                                            b_14 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm q_16 = t;
                                                              int r_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm f_35 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, d_14, z_13);
                                                                  t = s_0(t);
                                                                  f_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, y_13, f_35);
                                                                  t = s_0(t);
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
                                                                        ATerm k_35 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                                        t = s_0(t);
                                                                        k_35 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, a_14, k_35);
                                                                        t = s_0(t);
                                                                        ;
                                                                        LocalPopChoice(t_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = s_16;
                                                                        t = e_14;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm u_16 = t;
                                                            int v_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm r_35 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, d_14, z_13);
                                                                t = s_0(t);
                                                                r_35 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, y_13, r_35);
                                                                t = s_0(t);
                                                                ;
                                                                LocalPopChoice(v_16);
                                                              }
                                                            else
                                                              {
                                                                t = u_16;
                                                                t = e_14;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = d_14;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = c_14;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm z_16 = t;
                                                    int a_17 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_q_7;
                                                        t = s_0(t);
                                                        ;
                                                        LocalPopChoice(a_17);
                                                      }
                                                    else
                                                      {
                                                        t = z_16;
                                                        t = e_14;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        a_14 = ATgetArgument(t, 0);
                                                        b_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_17 = t;
                                                          int c_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_36 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                              t = s_0(t);
                                                              g_36 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, g_36);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(c_17);
                                                            }
                                                          else
                                                            {
                                                              t = b_17;
                                                              t = e_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            a_14 = ATgetArgument(t, 0);
                                                            b_14 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm d_17 = t;
                                                              int e_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm n_36 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, c_14);
                                                                  t = s_0(t);
                                                                  n_36 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, a_14, n_36);
                                                                  t = s_0(t);
                                                                  ;
                                                                  LocalPopChoice(e_17);
                                                                }
                                                              else
                                                                {
                                                                  t = d_17;
                                                                  t = e_14;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = e_14;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
            else
              {
                if(match_cons(t, sym_LChoice_2))
                  {
                    d_14 = ATgetArgument(t, 0);
                    c_14 = ATgetArgument(t, 1);
                    t = c_14;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = d_14;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm j_17 = t;
                            int k_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_j_7;
                                t = s_0(t);
                                ;
                                LocalPopChoice(k_17);
                              }
                            else
                              {
                                t = j_17;
                                t = d_14;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = c_14;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    a_14 = ATgetArgument(t, 0);
                                    b_14 = ATgetArgument(t, 1);
                                    t = d_14;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        a_14 = ATgetArgument(t, 0);
                                        t = d_14;
                                      }
                                    else
                                      {
                                        t = d_14;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = d_14;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm l_17 = t;
                            int n_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_j_7;
                                t = s_0(t);
                                ;
                                LocalPopChoice(n_17);
                              }
                            else
                              {
                                t = l_17;
                                {
                                  ATerm o_17 = t;
                                  int p_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = c_14;
                                      if((d_14 != t))
                                        {
                                          _fail(t);
                                        }
                                      ;
                                      LocalPopChoice(p_17);
                                    }
                                  else
                                    {
                                      t = o_17;
                                      t = e_14;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = c_14;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    a_14 = ATgetArgument(t, 0);
                                    b_14 = ATgetArgument(t, 1);
                                    {
                                      ATerm q_17 = t;
                                      int r_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm p_38 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, b_14, c_14);
                                          t = s_0(t);
                                          p_38 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, a_14, p_38);
                                          t = s_0(t);
                                          ;
                                          LocalPopChoice(r_17);
                                        }
                                      else
                                        {
                                          t = q_17;
                                          {
                                            ATerm s_17 = t;
                                            int t_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = c_14;
                                                if((d_14 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                ;
                                                LocalPopChoice(t_17);
                                              }
                                            else
                                              {
                                                t = s_17;
                                                t = e_14;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        a_14 = ATgetArgument(t, 0);
                                        {
                                          ATerm v_17 = t;
                                          int f_18 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = c_14;
                                              if((d_14 != t))
                                                {
                                                  _fail(t);
                                                }
                                              ;
                                              LocalPopChoice(f_18);
                                            }
                                          else
                                            {
                                              t = v_17;
                                              {
                                                ATerm g_18 = t;
                                                int i_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = a_14;
                                                    t = topdown_1_0(m_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, a_14);
                                                    t = bottomup_1_0(s_0, t);
                                                    ;
                                                    LocalPopChoice(i_18);
                                                  }
                                                else
                                                  {
                                                    t = g_18;
                                                    t = e_14;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm l_18 = t;
                                        int m_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = c_14;
                                            if((d_14 != t))
                                              {
                                                _fail(t);
                                              }
                                            ;
                                            LocalPopChoice(m_18);
                                          }
                                        else
                                          {
                                            t = l_18;
                                            t = e_14;
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        d_14 = ATgetArgument(t, 0);
                        c_14 = ATgetArgument(t, 1);
                        t = c_14;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = d_14;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm n_18 = t;
                                int o_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_j_7;
                                    t = s_0(t);
                                    ;
                                    LocalPopChoice(o_18);
                                  }
                                else
                                  {
                                    t = n_18;
                                    t = c_14;
                                  }
                              }
                            else
                              {
                                ATerm p_18 = t;
                                int q_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_j_7;
                                    t = s_0(t);
                                    ;
                                    LocalPopChoice(q_18);
                                  }
                                else
                                  {
                                    t = p_18;
                                    t = e_14;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = d_14;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm r_18 = t;
                                    int s_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_q_7;
                                        t = s_0(t);
                                        ;
                                        LocalPopChoice(s_18);
                                      }
                                    else
                                      {
                                        t = r_18;
                                        t = c_14;
                                      }
                                  }
                                else
                                  {
                                    ATerm t_18 = t;
                                    int u_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_q_7;
                                        t = s_0(t);
                                        ;
                                        LocalPopChoice(u_18);
                                      }
                                    else
                                      {
                                        t = t_18;
                                        t = e_14;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    y_13 = ATgetArgument(t, 0);
                                    z_13 = ATgetArgument(t, 1);
                                    t = d_14;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = c_14;
                                      }
                                    else
                                      {
                                        ATerm v_18 = t;
                                        int w_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm v_39 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, d_14, y_13);
                                            t = conc_0_0(t);
                                            v_39 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, v_39, z_13);
                                            t = bottomup_1_0(s_0, t);
                                            ;
                                            LocalPopChoice(w_18);
                                          }
                                        else
                                          {
                                            t = v_18;
                                            t = e_14;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = d_14;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = c_14;
                                      }
                                    else
                                      {
                                        t = e_14;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm x_18 = t;
                        int y_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm z_18 = ATgetArgument(t, 0);
                                c_14 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(y_18);
                            t = c_14;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm a_19 = t;
                                int b_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_j_7;
                                    t = s_0(t);
                                    ;
                                    LocalPopChoice(b_19);
                                  }
                                else
                                  {
                                    t = a_19;
                                    t = e_14;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm c_19 = t;
                                    int d_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_q_7;
                                        t = s_0(t);
                                        ;
                                        LocalPopChoice(d_19);
                                      }
                                    else
                                      {
                                        t = c_19;
                                        t = e_14;
                                      }
                                  }
                                else
                                  {
                                    t = e_14;
                                  }
                              }
                          }
                        else
                          {
                            t = x_18;
                            if(match_cons(t, sym_All_1))
                              {
                                d_14 = ATgetArgument(t, 0);
                                t = d_14;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm e_19 = t;
                                    int f_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_j_7;
                                        t = s_0(t);
                                        ;
                                        LocalPopChoice(f_19);
                                      }
                                    else
                                      {
                                        t = e_19;
                                        t = e_14;
                                      }
                                  }
                                else
                                  {
                                    t = e_14;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    d_14 = ATgetArgument(t, 0);
                                    t = d_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm g_19 = t;
                                        int h_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_j_7;
                                            t = s_0(t);
                                            ;
                                            LocalPopChoice(h_19);
                                          }
                                        else
                                          {
                                            t = g_19;
                                            {
                                              ATerm i_19 = t;
                                              int j_19 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,u_40 = NULL,v_40 = NULL;
                                                  t = e_14;
                                                  t = new_0_0(t);
                                                  g_40 = t;
                                                  t = bottomup_1_0(s_0, t);
                                                  u_40 = t;
                                                  t = (ATerm) ATempty;
                                                  t = s_0(t);
                                                  v_40 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(v_40), u_40);
                                                  t = s_0(t);
                                                  h_40 = t;
                                                  t = g_40;
                                                  t = bottomup_1_0(s_0, t);
                                                  s_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, s_40);
                                                  t = s_0(t);
                                                  r_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, r_40);
                                                  t = s_0(t);
                                                  j_40 = t;
                                                  t = d_14;
                                                  t = bottomup_1_0(s_0, t);
                                                  n_40 = t;
                                                  t = g_40;
                                                  t = bottomup_1_0(s_0, t);
                                                  q_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, q_40);
                                                  t = s_0(t);
                                                  p_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, p_40);
                                                  t = s_0(t);
                                                  o_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_40, o_40);
                                                  t = s_0(t);
                                                  m_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, j_40, m_40);
                                                  t = s_0(t);
                                                  i_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, h_40, i_40);
                                                  t = s_0(t);
                                                  ;
                                                  LocalPopChoice(j_19);
                                                }
                                              else
                                                {
                                                  t = i_19;
                                                  t = e_14;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm k_19 = t;
                                            int l_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_7;
                                                t = s_0(t);
                                                ;
                                                LocalPopChoice(l_19);
                                              }
                                            else
                                              {
                                                t = k_19;
                                                {
                                                  ATerm m_19 = t;
                                                  int n_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm a_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL;
                                                      t = e_14;
                                                      t = new_0_0(t);
                                                      a_41 = t;
                                                      t = bottomup_1_0(s_0, t);
                                                      p_41 = t;
                                                      t = (ATerm) ATempty;
                                                      t = s_0(t);
                                                      q_41 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(q_41), p_41);
                                                      t = s_0(t);
                                                      d_41 = t;
                                                      t = a_41;
                                                      t = bottomup_1_0(s_0, t);
                                                      o_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, o_41);
                                                      t = s_0(t);
                                                      n_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, n_41);
                                                      t = s_0(t);
                                                      f_41 = t;
                                                      t = d_14;
                                                      t = bottomup_1_0(s_0, t);
                                                      h_41 = t;
                                                      t = a_41;
                                                      t = bottomup_1_0(s_0, t);
                                                      m_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, m_41);
                                                      t = s_0(t);
                                                      j_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, j_41);
                                                      t = s_0(t);
                                                      i_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_41, i_41);
                                                      t = s_0(t);
                                                      g_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_41, g_41);
                                                      t = s_0(t);
                                                      e_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, d_41, e_41);
                                                      t = s_0(t);
                                                      ;
                                                      LocalPopChoice(n_19);
                                                    }
                                                  else
                                                    {
                                                      t = m_19;
                                                      t = e_14;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                a_14 = ATgetArgument(t, 0);
                                                b_14 = ATgetArgument(t, 1);
                                                t = b_14;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    l_13 = ATgetArgument(t, 0);
                                                    n_13 = ATgetArgument(t, 1);
                                                    t = l_13;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        m_13 = ATgetArgument(t, 0);
                                                        t = a_14;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            w_13 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm o_19 = t;
                                                              int p_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, m_13);
                                                                  t = s_0(t);
                                                                  x_41 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_41, n_13);
                                                                  t = s_0(t);
                                                                  w_41 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_13, w_41);
                                                                  t = s_0(t);
                                                                  v_41 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, v_41);
                                                                  t = s_0(t);
                                                                  ;
                                                                  LocalPopChoice(p_19);
                                                                }
                                                              else
                                                                {
                                                                  t = o_19;
                                                                  {
                                                                    ATerm q_19 = t;
                                                                    int r_19 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL;
                                                                        t = e_14;
                                                                        t = new_0_0(t);
                                                                        z_41 = t;
                                                                        t = bottomup_1_0(s_0, t);
                                                                        k_42 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = s_0(t);
                                                                        l_42 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(l_42), k_42);
                                                                        t = s_0(t);
                                                                        a_42 = t;
                                                                        t = z_41;
                                                                        t = bottomup_1_0(s_0, t);
                                                                        j_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, j_42);
                                                                        t = s_0(t);
                                                                        i_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, i_42);
                                                                        t = s_0(t);
                                                                        c_42 = t;
                                                                        t = d_14;
                                                                        t = bottomup_1_0(s_0, t);
                                                                        e_42 = t;
                                                                        t = z_41;
                                                                        t = bottomup_1_0(s_0, t);
                                                                        h_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, h_42);
                                                                        t = s_0(t);
                                                                        g_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, g_42);
                                                                        t = s_0(t);
                                                                        f_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, e_42, f_42);
                                                                        t = s_0(t);
                                                                        d_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, c_42, d_42);
                                                                        t = s_0(t);
                                                                        b_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, a_42, b_42);
                                                                        t = s_0(t);
                                                                        ;
                                                                        LocalPopChoice(r_19);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_19;
                                                                        t = e_14;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm s_19 = t;
                                                            int t_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm o_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL;
                                                                t = e_14;
                                                                t = new_0_0(t);
                                                                o_42 = t;
                                                                t = bottomup_1_0(s_0, t);
                                                                e_43 = t;
                                                                t = (ATerm) ATempty;
                                                                t = s_0(t);
                                                                f_43 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(f_43), e_43);
                                                                t = s_0(t);
                                                                u_42 = t;
                                                                t = o_42;
                                                                t = bottomup_1_0(s_0, t);
                                                                d_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, d_43);
                                                                t = s_0(t);
                                                                c_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, c_43);
                                                                t = s_0(t);
                                                                w_42 = t;
                                                                t = d_14;
                                                                t = bottomup_1_0(s_0, t);
                                                                y_42 = t;
                                                                t = o_42;
                                                                t = bottomup_1_0(s_0, t);
                                                                b_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, b_43);
                                                                t = s_0(t);
                                                                a_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, a_43);
                                                                t = s_0(t);
                                                                z_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, y_42, z_42);
                                                                t = s_0(t);
                                                                x_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, w_42, x_42);
                                                                t = s_0(t);
                                                                v_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, u_42, v_42);
                                                                t = s_0(t);
                                                                ;
                                                                LocalPopChoice(t_19);
                                                              }
                                                            else
                                                              {
                                                                t = s_19;
                                                                t = e_14;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = a_14;
                                                        {
                                                          ATerm u_19 = t;
                                                          int v_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL;
                                                              t = e_14;
                                                              t = new_0_0(t);
                                                              k_43 = t;
                                                              t = bottomup_1_0(s_0, t);
                                                              v_43 = t;
                                                              t = (ATerm) ATempty;
                                                              t = s_0(t);
                                                              w_43 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(w_43), v_43);
                                                              t = s_0(t);
                                                              l_43 = t;
                                                              t = k_43;
                                                              t = bottomup_1_0(s_0, t);
                                                              u_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, u_43);
                                                              t = s_0(t);
                                                              t_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, t_43);
                                                              t = s_0(t);
                                                              n_43 = t;
                                                              t = d_14;
                                                              t = bottomup_1_0(s_0, t);
                                                              p_43 = t;
                                                              t = k_43;
                                                              t = bottomup_1_0(s_0, t);
                                                              s_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, s_43);
                                                              t = s_0(t);
                                                              r_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, r_43);
                                                              t = s_0(t);
                                                              q_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_43, q_43);
                                                              t = s_0(t);
                                                              o_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_43, o_43);
                                                              t = s_0(t);
                                                              m_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, l_43, m_43);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(v_19);
                                                            }
                                                          else
                                                            {
                                                              t = u_19;
                                                              t = e_14;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = a_14;
                                                    {
                                                      ATerm w_19 = t;
                                                      int x_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL;
                                                          t = e_14;
                                                          t = new_0_0(t);
                                                          z_43 = t;
                                                          t = bottomup_1_0(s_0, t);
                                                          k_44 = t;
                                                          t = (ATerm) ATempty;
                                                          t = s_0(t);
                                                          l_44 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(l_44), k_44);
                                                          t = s_0(t);
                                                          a_44 = t;
                                                          t = z_43;
                                                          t = bottomup_1_0(s_0, t);
                                                          j_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, j_44);
                                                          t = s_0(t);
                                                          i_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, i_44);
                                                          t = s_0(t);
                                                          c_44 = t;
                                                          t = d_14;
                                                          t = bottomup_1_0(s_0, t);
                                                          e_44 = t;
                                                          t = z_43;
                                                          t = bottomup_1_0(s_0, t);
                                                          h_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, h_44);
                                                          t = s_0(t);
                                                          g_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, g_44);
                                                          t = s_0(t);
                                                          f_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_44, f_44);
                                                          t = s_0(t);
                                                          d_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_44, d_44);
                                                          t = s_0(t);
                                                          b_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, a_44, b_44);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(x_19);
                                                        }
                                                      else
                                                        {
                                                          t = w_19;
                                                          t = e_14;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    a_14 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm y_19 = t;
                                                      int z_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, a_14);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(z_19);
                                                        }
                                                      else
                                                        {
                                                          t = y_19;
                                                          {
                                                            ATerm a_20 = t;
                                                            int b_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL;
                                                                t = e_14;
                                                                t = new_0_0(t);
                                                                p_44 = t;
                                                                t = bottomup_1_0(s_0, t);
                                                                a_45 = t;
                                                                t = (ATerm) ATempty;
                                                                t = s_0(t);
                                                                b_45 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(b_45), a_45);
                                                                t = s_0(t);
                                                                q_44 = t;
                                                                t = p_44;
                                                                t = bottomup_1_0(s_0, t);
                                                                z_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, z_44);
                                                                t = s_0(t);
                                                                y_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, y_44);
                                                                t = s_0(t);
                                                                s_44 = t;
                                                                t = d_14;
                                                                t = bottomup_1_0(s_0, t);
                                                                u_44 = t;
                                                                t = p_44;
                                                                t = bottomup_1_0(s_0, t);
                                                                x_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, x_44);
                                                                t = s_0(t);
                                                                w_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, w_44);
                                                                t = s_0(t);
                                                                v_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, u_44, v_44);
                                                                t = s_0(t);
                                                                t_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, s_44, t_44);
                                                                t = s_0(t);
                                                                r_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, q_44, r_44);
                                                                t = s_0(t);
                                                                ;
                                                                LocalPopChoice(b_20);
                                                              }
                                                            else
                                                              {
                                                                t = a_20;
                                                                t = e_14;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm c_20 = t;
                                                    int d_20 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL;
                                                        t = e_14;
                                                        t = new_0_0(t);
                                                        e_45 = t;
                                                        t = bottomup_1_0(s_0, t);
                                                        p_45 = t;
                                                        t = (ATerm) ATempty;
                                                        t = s_0(t);
                                                        q_45 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(q_45), p_45);
                                                        t = s_0(t);
                                                        f_45 = t;
                                                        t = e_45;
                                                        t = bottomup_1_0(s_0, t);
                                                        o_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, o_45);
                                                        t = s_0(t);
                                                        n_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, n_45);
                                                        t = s_0(t);
                                                        h_45 = t;
                                                        t = d_14;
                                                        t = bottomup_1_0(s_0, t);
                                                        j_45 = t;
                                                        t = e_45;
                                                        t = bottomup_1_0(s_0, t);
                                                        m_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, m_45);
                                                        t = s_0(t);
                                                        l_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, l_45);
                                                        t = s_0(t);
                                                        k_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, j_45, k_45);
                                                        t = s_0(t);
                                                        i_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, h_45, i_45);
                                                        t = s_0(t);
                                                        g_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, f_45, g_45);
                                                        t = s_0(t);
                                                        ;
                                                        LocalPopChoice(d_20);
                                                      }
                                                    else
                                                      {
                                                        t = c_20;
                                                        t = e_14;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Match_1))
                                      {
                                        d_14 = ATgetArgument(t, 0);
                                        t = d_14;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm e_20 = t;
                                            int f_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_j_7;
                                                t = s_0(t);
                                                ;
                                                LocalPopChoice(f_20);
                                              }
                                            else
                                              {
                                                t = e_20;
                                                t = e_14;
                                              }
                                          }
                                        else
                                          {
                                            t = e_14;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            d_14 = ATgetArgument(t, 0);
                                            t = d_14;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm g_20 = t;
                                                int h_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_q_7;
                                                    t = s_0(t);
                                                    ;
                                                    LocalPopChoice(h_20);
                                                  }
                                                else
                                                  {
                                                    t = g_20;
                                                    t = e_14;
                                                  }
                                              }
                                            else
                                              {
                                                t = e_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                d_14 = ATgetArgument(t, 0);
                                                t = d_14;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm i_20 = t;
                                                    int j_20 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_q_7;
                                                        t = s_0(t);
                                                        ;
                                                        LocalPopChoice(j_20);
                                                      }
                                                    else
                                                      {
                                                        t = i_20;
                                                        t = e_14;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = e_14;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm k_20 = t;
                                                int l_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm m_20 = ATgetArgument(t, 0);
                                                        c_14 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(l_20);
                                                    t = c_14;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm n_20 = t;
                                                        int o_20 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_q_7;
                                                            t = s_0(t);
                                                            ;
                                                            LocalPopChoice(o_20);
                                                          }
                                                        else
                                                          {
                                                            t = n_20;
                                                            t = e_14;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = e_14;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = k_20;
                                                    {
                                                      ATerm p_20 = t;
                                                      int r_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm s_20 = ATgetArgument(t, 0);
                                                              c_14 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(r_20);
                                                          {
                                                            ATerm t_20 = t;
                                                            int u_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = c_14;
                                                                t = fetch_1_0(n_1, t);
                                                                t = term_q_7;
                                                                t = bottomup_1_0(s_0, t);
                                                                ;
                                                                LocalPopChoice(u_20);
                                                              }
                                                            else
                                                              {
                                                                t = t_20;
                                                                t = e_14;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = p_20;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              d_14 = ATgetArgument(t, 0);
                                                              c_14 = ATgetArgument(t, 1);
                                                              t = c_14;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = d_14;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = c_14;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          a_14 = ATgetArgument(t, 0);
                                                                          b_14 = ATgetArgument(t, 1);
                                                                          t = d_14;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = d_14;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = d_14;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = c_14;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          a_14 = ATgetArgument(t, 0);
                                                                          b_14 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm v_20 = t;
                                                                            int w_20 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm y_46 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, b_14, c_14);
                                                                                t = s_0(t);
                                                                                y_46 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, a_14, y_46);
                                                                                t = s_0(t);
                                                                                ;
                                                                                LocalPopChoice(w_20);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = v_20;
                                                                                {
                                                                                  ATerm x_20 = t;
                                                                                  int y_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = c_14;
                                                                                      if((d_14 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      ;
                                                                                      LocalPopChoice(y_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = x_20;
                                                                                      t = e_14;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm z_20 = t;
                                                                          int a_21 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = c_14;
                                                                              if((d_14 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              ;
                                                                              LocalPopChoice(a_21);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = z_20;
                                                                              t = e_14;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  d_14 = ATgetArgument(t, 0);
                                                                  c_14 = ATgetArgument(t, 1);
                                                                  k_13 = ATgetArgument(t, 2);
                                                                  t = k_13;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm b_21 = t;
                                                                      int c_21 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_14, c_14);
                                                                          t = s_0(t);
                                                                          ;
                                                                          LocalPopChoice(c_21);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = b_21;
                                                                          t = e_14;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = e_14;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      d_14 = ATgetArgument(t, 0);
                                                                      c_14 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm d_21 = t;
                                                                        int e_21 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, d_14, c_14);
                                                                            t = s_0(t);
                                                                            ;
                                                                            LocalPopChoice(e_21);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = d_21;
                                                                            t = e_14;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          d_14 = ATgetArgument(t, 0);
                                                                          t = d_14;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              a_14 = ATgetFirst((ATermList) t);
                                                                              b_14 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm f_21 = t;
                                                                                int g_21 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm m_47 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, b_14);
                                                                                    t = s_0(t);
                                                                                    m_47 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, a_14, m_47);
                                                                                    t = s_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(g_21);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = f_21;
                                                                                    t = e_14;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm h_21 = t;
                                                                                  int i_21 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_q_7;
                                                                                      t = s_0(t);
                                                                                      ;
                                                                                      LocalPopChoice(i_21);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = h_21;
                                                                                      t = e_14;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = e_14;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              d_14 = ATgetArgument(t, 0);
                                                                              t = d_14;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  a_14 = ATgetFirst((ATermList) t);
                                                                                  b_14 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm k_21 = t;
                                                                                    int t_21 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm u_47 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, b_14);
                                                                                        t = s_0(t);
                                                                                        u_47 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, a_14, u_47);
                                                                                        t = s_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(t_21);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = k_21;
                                                                                        t = e_14;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm u_21 = t;
                                                                                      int w_21 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_q_7;
                                                                                          t = s_0(t);
                                                                                          ;
                                                                                          LocalPopChoice(w_21);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = u_21;
                                                                                          t = e_14;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = e_14;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  d_14 = ATgetArgument(t, 0);
                                                                                  t = d_14;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      a_14 = ATgetFirst((ATermList) t);
                                                                                      b_14 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm x_21 = t;
                                                                                        int y_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm b_48 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, b_14);
                                                                                            t = s_0(t);
                                                                                            b_48 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_48);
                                                                                            t = s_0(t);
                                                                                            ;
                                                                                            LocalPopChoice(y_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = x_21;
                                                                                            t = e_14;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm a_22 = t;
                                                                                          int b_22 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_j_7;
                                                                                              t = s_0(t);
                                                                                              ;
                                                                                              LocalPopChoice(b_22);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = a_22;
                                                                                              t = e_14;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = e_14;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_RDefT_4))
                                                                                    {
                                                                                      d_14 = ATgetArgument(t, 0);
                                                                                      c_14 = ATgetArgument(t, 1);
                                                                                      k_13 = ATgetArgument(t, 2);
                                                                                      j_13 = ATgetArgument(t, 3);
                                                                                      {
                                                                                        ATerm c_22 = t;
                                                                                        int e_22 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm j_48 = NULL,m_48 = NULL;
                                                                                            t = c_14;
                                                                                            t = map1_1_0(o_1, t);
                                                                                            j_48 = t;
                                                                                            t = k_13;
                                                                                            t = map1_1_0(p_1, t);
                                                                                            m_48 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, d_14, j_48, m_48, j_13);
                                                                                            t = bottomup_1_0(s_0, t);
                                                                                            ;
                                                                                            LocalPopChoice(e_22);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = c_22;
                                                                                            t = e_14;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_SDefT_4))
                                                                                        {
                                                                                          d_14 = ATgetArgument(t, 0);
                                                                                          c_14 = ATgetArgument(t, 1);
                                                                                          k_13 = ATgetArgument(t, 2);
                                                                                          j_13 = ATgetArgument(t, 3);
                                                                                          {
                                                                                            ATerm f_22 = t;
                                                                                            int g_22 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm y_48 = NULL,a_49 = NULL;
                                                                                                t = k_13;
                                                                                                t = map1_1_0(q_1, t);
                                                                                                y_48 = t;
                                                                                                t = c_14;
                                                                                                t = map_1_0(w_1, t);
                                                                                                a_49 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, d_14, a_49, y_48, j_13);
                                                                                                t = bottomup_1_0(s_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(g_22);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = f_22;
                                                                                                {
                                                                                                  ATerm h_22 = t;
                                                                                                  int j_22 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm q_49 = NULL,s_49 = NULL;
                                                                                                      t = c_14;
                                                                                                      t = map1_1_0(c_2, t);
                                                                                                      q_49 = t;
                                                                                                      t = k_13;
                                                                                                      t = map_1_0(d_2, t);
                                                                                                      s_49 = t;
                                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, d_14, q_49, s_49, j_13);
                                                                                                      t = bottomup_1_0(s_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(j_22);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = h_22;
                                                                                                      t = e_14;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_InfixApp_3))
                                                                                            {
                                                                                              d_14 = ATgetArgument(t, 0);
                                                                                              c_14 = ATgetArgument(t, 1);
                                                                                              k_13 = ATgetArgument(t, 2);
                                                                                              {
                                                                                                ATerm k_22 = t;
                                                                                                int l_22 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL;
                                                                                                    t = term_m_22;
                                                                                                    t = bottomup_1_0(s_0, t);
                                                                                                    e_50 = t;
                                                                                                    t = (ATerm) ATempty;
                                                                                                    t = s_0(t);
                                                                                                    h_50 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(h_50), k_13);
                                                                                                    t = s_0(t);
                                                                                                    g_50 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(g_50), d_14);
                                                                                                    t = s_0(t);
                                                                                                    f_50 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Op_2, e_50, f_50);
                                                                                                    t = s_0(t);
                                                                                                    d_50 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_App_2, c_14, d_50);
                                                                                                    t = s_0(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(l_22);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = k_22;
                                                                                                    t = e_14;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_BAM_3))
                                                                                                {
                                                                                                  d_14 = ATgetArgument(t, 0);
                                                                                                  c_14 = ATgetArgument(t, 1);
                                                                                                  k_13 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm n_22 = t;
                                                                                                    int o_22 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, c_14);
                                                                                                        t = s_0(t);
                                                                                                        n_50 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, k_13);
                                                                                                        t = s_0(t);
                                                                                                        q_50 = t;
                                                                                                        t = (ATerm) ATempty;
                                                                                                        t = s_0(t);
                                                                                                        r_50 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(r_50), q_50);
                                                                                                        t = s_0(t);
                                                                                                        p_50 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(p_50), d_14);
                                                                                                        t = s_0(t);
                                                                                                        o_50 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(o_50), n_50);
                                                                                                        t = s_0(t);
                                                                                                        m_50 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, m_50);
                                                                                                        t = s_0(t);
                                                                                                        ;
                                                                                                        LocalPopChoice(o_22);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = n_22;
                                                                                                        t = e_14;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_AM_2))
                                                                                                    {
                                                                                                      d_14 = ATgetArgument(t, 0);
                                                                                                      c_14 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm p_22 = t;
                                                                                                        int q_22 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm v_50 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Match_1, c_14);
                                                                                                            t = s_0(t);
                                                                                                            v_50 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, d_14, v_50);
                                                                                                            t = s_0(t);
                                                                                                            ;
                                                                                                            LocalPopChoice(q_22);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = p_22;
                                                                                                            t = e_14;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_MA_2))
                                                                                                        {
                                                                                                          d_14 = ATgetArgument(t, 0);
                                                                                                          c_14 = ATgetArgument(t, 1);
                                                                                                          {
                                                                                                            ATerm s_22 = t;
                                                                                                            int t_22 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                ATerm z_50 = NULL;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, d_14);
                                                                                                                t = s_0(t);
                                                                                                                z_50 = t;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, z_50, c_14);
                                                                                                                t = s_0(t);
                                                                                                                ;
                                                                                                                LocalPopChoice(t_22);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = s_22;
                                                                                                                t = e_14;
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_BA_2))
                                                                                                            {
                                                                                                              d_14 = ATgetArgument(t, 0);
                                                                                                              c_14 = ATgetArgument(t, 1);
                                                                                                              {
                                                                                                                ATerm u_22 = t;
                                                                                                                int w_22 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    ATerm e_51 = NULL;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, c_14);
                                                                                                                    t = s_0(t);
                                                                                                                    e_51 = t;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, e_51, d_14);
                                                                                                                    t = s_0(t);
                                                                                                                    ;
                                                                                                                    LocalPopChoice(w_22);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = u_22;
                                                                                                                    t = e_14;
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_Let_2))
                                                                                                                {
                                                                                                                  d_14 = ATgetArgument(t, 0);
                                                                                                                  c_14 = ATgetArgument(t, 1);
                                                                                                                  t = c_14;
                                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                                    {
                                                                                                                      y_13 = ATgetArgument(t, 0);
                                                                                                                      z_13 = ATgetArgument(t, 1);
                                                                                                                      t = d_14;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = c_14;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          ATerm x_22 = t;
                                                                                                                          int y_22 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm q_51 = NULL;
                                                                                                                              t = (ATerm) ATmakeAppl(sym__2, d_14, y_13);
                                                                                                                              t = conc_0_0(t);
                                                                                                                              q_51 = t;
                                                                                                                              t = (ATerm) ATmakeAppl(sym_Let_2, q_51, z_13);
                                                                                                                              t = bottomup_1_0(s_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(y_22);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = x_22;
                                                                                                                              t = e_14;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_CallT_3))
                                                                                                                        {
                                                                                                                          y_13 = ATgetArgument(t, 0);
                                                                                                                          z_13 = ATgetArgument(t, 1);
                                                                                                                          u_13 = ATgetArgument(t, 2);
                                                                                                                          t = u_13;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = z_13;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = y_13;
                                                                                                                                  if(match_cons(t, sym_SVar_1))
                                                                                                                                    {
                                                                                                                                      x_13 = ATgetArgument(t, 0);
                                                                                                                                      t = d_14;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = c_14;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              a_14 = ATgetFirst((ATermList) t);
                                                                                                                                              b_14 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                              t = b_14;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = a_14;
                                                                                                                                                  if(match_cons(t, sym_SDefT_4))
                                                                                                                                                    {
                                                                                                                                                      w_13 = ATgetArgument(t, 0);
                                                                                                                                                      r_13 = ATgetArgument(t, 1);
                                                                                                                                                      o_13 = ATgetArgument(t, 2);
                                                                                                                                                      p_13 = ATgetArgument(t, 3);
                                                                                                                                                      t = o_13;
                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                        {
                                                                                                                                                          t = r_13;
                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                            {
                                                                                                                                                              ATerm a_23 = t;
                                                                                                                                                              int b_23 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  t = x_13;
                                                                                                                                                                  if((w_13 != t))
                                                                                                                                                                    {
                                                                                                                                                                      _fail(t);
                                                                                                                                                                    }
                                                                                                                                                                  t = p_13;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm c_23 = t;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        ATerm h_2 (ATerm t)
                                                                                                                                                                        {
                                                                                                                                                                          if(match_cons(t, sym_CallT_3))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm d_23 = ATgetArgument(t, 0);
                                                                                                                                                                              if(match_cons(d_23, sym_SVar_1))
                                                                                                                                                                                {
                                                                                                                                                                                  if((w_13 != ATgetArgument(d_23, 0)))
                                                                                                                                                                                    {
                                                                                                                                                                                      _fail(ATgetArgument(d_23, 0));
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              {
                                                                                                                                                                                ATerm f_23 = ATgetArgument(t, 1);
                                                                                                                                                                                if(((ATgetType(f_23) != AT_LIST) || !(ATisEmpty(f_23))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                              {
                                                                                                                                                                                ATerm g_23 = ATgetArgument(t, 2);
                                                                                                                                                                                if(((ATgetType(g_23) != AT_LIST) || !(ATisEmpty(g_23))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          return(t);
                                                                                                                                                                        }
                                                                                                                                                                        t = oncetd_1_0(h_2, t);
                                                                                                                                                                        PopChoice();
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = c_23;
                                                                                                                                                                      }
                                                                                                                                                                    t = p_13;
                                                                                                                                                                    t = bottomup_1_0(s_0, t);
                                                                                                                                                                  }
                                                                                                                                                                  ;
                                                                                                                                                                  LocalPopChoice(b_23);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = a_23;
                                                                                                                                                                  t = e_14;
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = e_14;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = e_14;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = e_14;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = e_14;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = e_14;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = d_14;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = c_14;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = e_14;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = d_14;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                    {
                                                                                                                                      t = c_14;
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = e_14;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = d_14;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = c_14;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = e_14;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = d_14;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = c_14;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = e_14;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_As_2))
                                                                                                                    {
                                                                                                                      d_14 = ATgetArgument(t, 0);
                                                                                                                      c_14 = ATgetArgument(t, 1);
                                                                                                                      t = d_14;
                                                                                                                      if(match_cons(t, sym_Wld_0))
                                                                                                                        {
                                                                                                                          t = c_14;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = e_14;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = e_14;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  }
                                              }
                                          }
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
  t = bottomup_1_0(s_0, t);
  return(t);
}
ATerm map_1_0 (ATerm d_107 (ATerm), ATerm t)
{
  ATerm t_53 (ATerm t)
  {
    ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL;
    q_53 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_53;
      }
    else
      {
        ATerm l_5 = NULL,o_5 = NULL,p_5 = NULL,v_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_53 = ATgetFirst((ATermList) t);
            s_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_53);
        l_5 = t;
        t = r_53;
        t = d_107(t);
        o_5 = t;
        t = s_53;
        t = t_53(t);
        p_5 = t;
        t = (ATerm) ATinsert(CheckATermList(p_5), o_5);
        v_2 = t;
        t = SSLsetAnnotations(v_2, l_5);
      }
    return(t);
  }
  t = t_53(t);
  return(t);
}
ATerm Cons_2_0 (ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,x_2 = NULL;
  a_54 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_53 = ATgetFirst((ATermList) t);
      x_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_54);
  v_53 = t;
  t = w_53;
  t = c_76(t);
  y_53 = t;
  t = x_53;
  t = d_76(t);
  z_53 = t;
  t = (ATerm) ATinsert(CheckATermList(z_53), y_53);
  x_2 = t;
  t = SSLsetAnnotations(x_2, v_53);
  return(t);
}
ATerm z_11 (ATerm k_49, ATerm l_49, ATerm t)
{
  ATerm d_54 = NULL;
  t = SSL_fputc(k_49, l_49);
  d_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_54);
  return(t);
}
ATerm a_12 (ATerm y_52, ATerm z_52, ATerm t)
{
  ATerm e_54 = NULL;
  t = SSL_write_term_to_stream_text(y_52, z_52);
  e_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_54);
  return(t);
}
ATerm c_12 (ATerm e_113 (ATerm), ATerm l_478, ATerm c_53, ATerm t)
{
  ATerm f_54 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_478, term_h_23);
  t = f_12(t);
  f_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_54, c_53);
  t = e_113(t);
  t = fclose_0_0(t);
  t = c_53;
  return(t);
}
ATerm b_12 (ATerm u_52, ATerm v_52, ATerm t)
{
  ATerm g_54 = NULL;
  t = SSL_write_term_to_stream_baf(u_52, v_52);
  g_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_54);
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm j_54 = NULL,p_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_23 = ATgetArgument(t, 0);
      if(match_cons(i_23, sym_Stream_1))
        {
          j_54 = ATgetArgument(i_23, 0);
        }
      else
        _fail(t);
      p_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_12(j_54, p_54, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_23 = ATgetArgument(t, 0);
      if(match_cons(j_23, sym_Stream_1))
        {
          t_54 = ATgetArgument(j_23, 0);
        }
      else
        _fail(t);
      u_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12(t_54, u_54, t);
  q_54 = t;
  t = term_k_23;
  r_54 = t;
  t = q_54;
  if(match_cons(t, sym_Stream_1))
    {
      s_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_k_23, q_54);
  t = z_11(r_54, s_54, t);
  return(t);
}
ATerm output_1_0 (ATerm n_117 (ATerm), ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL;
  t = n_117(t);
  i_54 = t;
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_23;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        t = term_p_23;
      }
    h_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_54, i_54);
    {
      ATerm q_23 = t;
      int r_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_t_23;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, h_54, i_54);
          LocalPopChoice(r_23);
          if(match_cons(t, sym__2))
            {
              ATerm u_23 = ATgetArgument(t, 0);
              ATerm v_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_12(k_2, h_54, i_54, t);
        }
      else
        {
          t = q_23;
          if(match_cons(t, sym__2))
            {
              ATerm w_23 = ATgetArgument(t, 0);
              ATerm y_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_12(r_2, h_54, i_54, t);
        }
    }
  }
  return(t);
}
ATerm j_55 (ATerm c_55, ATerm t)
{
  t = SSL_fclose(c_55);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL;
  g_55 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_55 = ATgetArgument(t, 0);
      {
        ATerm a_24 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_55);
            ;
            LocalPopChoice(b_24);
          }
        else
          {
            t = a_24;
            t = j_55(g_55, t);
          }
      }
    }
  else
    {
      t = j_55(g_55, t);
    }
  return(t);
}
ATerm d_12 (ATerm a_53, ATerm t)
{
  t = SSL_read_term_from_stream(a_53);
  return(t);
}
ATerm e_12 (ATerm m_49, ATerm n_49, ATerm t)
{
  ATerm k_55 = NULL;
  t = SSL_fopen(m_49, n_49);
  k_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_55);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_55 = NULL;
  t = SSL_stdin_stream();
  l_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_55);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_55 = NULL;
  t = SSL_stdout_stream();
  m_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_55);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_55 = NULL;
  t = SSL_stderr_stream();
  n_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_55);
  return(t);
}
ATerm v_56 (ATerm t_55, ATerm t)
{
  ATerm u_55 = NULL;
  t = SSL_explode_term(t_55);
  if(match_cons(t, sym__2))
    {
      ATerm c_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_24 = ATgetArgument(t, 1);
        if(((ATgetType(d_24) == AT_LIST) && !(ATisEmpty(d_24))))
          {
            u_55 = ATgetFirst((ATermList) d_24);
            {
              ATerm e_24 = (ATerm) ATgetNext((ATermList) d_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_55;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_55;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_55;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_55;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm w_56 (ATerm x_55, ATerm y_55, ATerm z_55, ATerm t)
{
  ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL,f_56 = NULL,z_2 = NULL;
  t = SSLgetAnnotations(z_55);
  c_56 = t;
  t = x_55;
  if(match_cons(t, sym_Path_1))
    {
      f_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_56, y_55);
  z_2 = t;
  t = SSLsetAnnotations(z_2, c_56);
  if(match_cons(t, sym__2))
    {
      a_56 = ATgetArgument(t, 0);
      b_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_12(a_56, b_56, t);
  return(t);
}
ATerm x_56 (ATerm h_56, ATerm i_56, ATerm j_56, ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL,p_56 = NULL,a_3 = NULL;
  t = SSLgetAnnotations(j_56);
  m_56 = t;
  t = SSL_is_string(h_56);
  p_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_56, i_56);
  a_3 = t;
  t = SSLsetAnnotations(a_3, m_56);
  if(match_cons(t, sym__2))
    {
      k_56 = ATgetArgument(t, 0);
      l_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_12(k_56, l_56, t);
  return(t);
}
ATerm f_12 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL;
  s_56 = t;
  if(match_cons(t, sym__2))
    {
      t_56 = ATgetArgument(t, 0);
      u_56 = ATgetArgument(t, 1);
      {
        ATerm f_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_56(s_56, t);
            ;
            LocalPopChoice(g_24);
          }
        else
          {
            t = f_24;
            {
              ATerm i_24 = t;
              int j_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_56(t_56, u_56, s_56, t);
                  ;
                  LocalPopChoice(j_24);
                }
              else
                {
                  t = i_24;
                  t = x_56(t_56, u_56, s_56, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_56(s_56, t);
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_k_24;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL;
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_57 = NULL;
      b_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_57, term_n_24);
      t = f_12(t);
      ;
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      t = debug_1_0(s_2, t);
      _fail(t);
    }
  z_56 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_12(a_57, t);
  y_56 = t;
  t = z_56;
  t = fclose_0_0(t);
  t = y_56;
  return(t);
}
ATerm input_1_0 (ATerm o_117 (ATerm), ATerm t)
{
  ATerm o_24 = t;
  int p_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_24);
    }
  else
    {
      t = o_24;
      t = term_r_24;
    }
  t = ReadFromFile_0_0(t);
  t = o_117(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL;
  d_57 = t;
  t = term_s_24;
  t = whoami_0_0(t);
  e_57 = t;
  t = term_t_24;
  g_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_24), e_57), term_u_24);
  h_57 = t;
  t = SSL_printnl(g_57, h_57);
  t = term_w_24;
  f_57 = t;
  t = SSL_exit(f_57);
  t = d_57;
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm j_57 = NULL;
  j_57 = t;
  if(match_string(t, "-k"))
    {
      t = j_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_57;
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL;
  k_57 = t;
  t = SSL_string_to_int(k_57);
  l_57 = t;
  t = term_x_24;
  m_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_24, l_57);
  t = n_12(m_57, l_57, t);
  t = k_57;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_y_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_2, u_2, w_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm o_57 = NULL;
  o_57 = t;
  if(match_string(t, "-S"))
    {
      t = o_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_57;
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL;
  t = term_a_25;
  p_57 = t;
  t = term_b_25;
  q_57 = t;
  t = term_c_25;
  t = n_12(p_57, q_57, t);
  t = term_e_25;
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_f_25;
  return(t);
}
ATerm d_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL;
  r_57 = t;
  t = SSL_string_to_int(r_57);
  s_57 = t;
  t = term_a_25;
  t_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_25, s_57);
  t = n_12(t_57, s_57, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_57);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_g_25;
  return(t);
}
ATerm i_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm u_57 = NULL,v_57 = NULL;
  t = term_h_25;
  u_57 = t;
  t = term_s_24;
  v_57 = t;
  t = term_i_25;
  t = n_12(u_57, v_57, t);
  t = term_j_25;
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_l_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_2, b_3, c_3, t);
      ;
      LocalPopChoice(n_25);
    }
  else
    {
      t = m_25;
      {
        ATerm o_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_3, f_3, g_3, t);
            ;
            LocalPopChoice(p_25);
          }
        else
          {
            t = o_25;
            t = Option_3_0(i_3, j_3, m_3, t);
          }
      }
    }
  return(t);
}
ATerm n_12 (ATerm b_54, ATerm c_54, ATerm t)
{
  ATerm w_57 = NULL;
  t = term_q_25;
  w_57 = t;
  t = SSL_table_put(w_57, b_54, c_54);
  t = (ATerm) ATmakeAppl(sym__3, term_q_25, b_54, c_54);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_58 = NULL,d_58 = NULL,e_58 = NULL;
      t = term_s_24;
      t = h_0(t);
      c_58 = t;
      t = term_r_25;
      d_58 = t;
      t = term_s_25;
      e_58 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_25, term_s_25, c_58);
      t = l_12(d_58, e_58, c_58, t);
      _fail(t);
    }
  else
    {
      ATerm m_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_58 = ATgetFirst((ATermList) t);
          b_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_58;
      t = d_0(t);
      t = term_s_24;
      t = g_0(t);
      m_58 = t;
      t = (ATerm) ATinsert(CheckATermList(b_58), m_58);
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm o_58 = NULL;
  o_58 = t;
  if(match_string(t, "-o"))
    {
      t = o_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_58;
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL;
  p_58 = t;
  t = term_o_23;
  q_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_23, p_58);
  t = n_12(q_58, p_58, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_58);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_t_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_3, p_3, r_3, t);
  return(t);
}
ATerm l_12 (ATerm z_58, ATerm a_59, ATerm y_58, ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL;
  s_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_58, a_59);
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_25 = ATgetArgument(t, 0);
            ATerm y_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_58, a_59);
        t = k_12(z_58, a_59, t);
        ;
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        t = (ATerm) ATempty;
      }
    t_58 = t;
    t = (ATerm) ATinsert(CheckATermList(t_58), y_58);
    u_58 = t;
    t = SSL_table_put(z_58, a_59, u_58);
    t = s_58;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL;
      t = term_s_24;
      t = m_0(t);
      j_59 = t;
      t = term_r_25;
      k_59 = t;
      t = term_s_25;
      l_59 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_25, term_s_25, j_59);
      t = l_12(k_59, l_59, j_59, t);
      _fail(t);
    }
  else
    {
      ATerm p_59 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_59 = ATgetFirst((ATermList) t);
          g_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_59;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_59 = ATgetFirst((ATermList) t);
          i_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_59;
      t = k_0(t);
      t = h_59;
      t = l_0(t);
      p_59 = t;
      t = (ATerm) ATinsert(CheckATermList(i_59), p_59);
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm s_59 = NULL;
  s_59 = t;
  if(match_string(t, "-i"))
    {
      t = s_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_59;
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL;
  t_59 = t;
  t = term_q_24;
  u_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_24, t_59);
  t = n_12(u_59, t_59, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, t_59);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_z_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_3, w_3, b_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_24;
  t = whoami_0_0(t);
  v_59 = t;
  t = term_t_24;
  x_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_26), v_59);
  y_59 = t;
  t = SSL_printnl(x_59, y_59);
  t = term_w_24;
  w_59 = t;
  t = SSL_exit(w_59);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm g_12 (ATerm k_46, ATerm l_46, ATerm t)
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_46, l_46);
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      t = SSL_addr(k_46, l_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm t)
{
  ATerm a_60 = NULL,b_60 = NULL,c_60 = NULL;
  a_60 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_60;
      t = t_105(t);
    }
  else
    {
      ATerm f_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_60 = ATgetFirst((ATermList) t);
          c_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_60;
      t = foldr_2_0(t_105, u_105, t);
      f_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_60, f_60);
      t = u_105(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_b_25;
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL;
  if(match_cons(t, sym__2))
    {
      e_6 = ATgetArgument(t, 0);
      f_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_12(e_6, f_6, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_60 = NULL,a_6 = NULL,b_6 = NULL;
  t = times_0_0(t);
  b_6 = t;
  t = SSL_explode_term(b_6);
  if(match_cons(t, sym__2))
    {
      ATerm f_26 = ATgetArgument(t, 0);
      a_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6;
  t = foldr_2_0(d_4, e_4, t);
  i_60 = t;
  t = SSL_TicksToSeconds(i_60);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL;
  v_60 = t;
  if(match_cons(t, sym__2))
    {
      w_60 = ATgetArgument(t, 0);
      x_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_60;
        if((w_60 != t))
          {
            _fail(t);
          }
        t = v_60;
        ;
        LocalPopChoice(i_26);
      }
    else
      {
        t = g_26;
        t = (ATerm) ATmakeAppl(sym__2, w_60, x_60);
        {
          ATerm j_26 = t;
          int k_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_60, x_60);
              ;
              LocalPopChoice(k_26);
            }
          else
            {
              t = j_26;
              t = SSL_gtr(w_60, x_60);
            }
          t = (ATerm) ATmakeAppl(sym__2, w_60, x_60);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_114 (ATerm), ATerm t)
{
  ATerm b_61 = NULL;
  b_61 = t;
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_61 = NULL;
        t = term_a_25;
        t = get_config_0_0(t);
        d_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_61, term_w_24);
        t = geq_0_0(t);
        t = b_61;
        t = o_114(t);
        ;
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = b_61;
      }
  }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL,j_61 = NULL,k_61 = NULL;
  t = run_time_0_0(t);
  g_61 = t;
  t = term_s_24;
  t = whoami_0_0(t);
  h_61 = t;
  t = term_t_24;
  j_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_26), g_61), term_n_26), h_61);
  k_61 = t;
  t = SSL_printnl(j_61, k_61);
  t = (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_26), g_61), term_n_26), h_61));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_61 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_25;
  l_61 = t;
  t = SSL_exit(l_61);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL;
  u_61 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_61;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_61 = ATgetArgument(t, 0);
          {
            ATerm r_6 = NULL,e_3 = NULL;
            t = SSLgetAnnotations(u_61);
            r_6 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_61);
            e_3 = t;
            t = SSLsetAnnotations(e_3, r_6);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_61;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_117 (ATerm), ATerm t)
{
  ATerm p_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_26);
    }
  else
    {
      t = p_26;
      t = fetch_1_0(h_4, t);
    }
  t = e_117(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm x_61 = NULL,y_61 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_61 = ATgetFirst((ATermList) t);
      y_61 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_62 = NULL,d_62 = NULL;
        ATerm i_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(c_62)), not_null(d_62));
          return(t);
        }
        t = y_61;
        t = j_0(t);
        if(((c_62 != NULL) && (c_62 != t)))
          _fail(t);
        else
          c_62 = t;
        t = x_61;
        t = i_0(t);
        if(((d_62 != NULL) && (d_62 != t)))
          _fail(t);
        else
          d_62 = t;
        t = y_61;
        t = reverse_acc_2_0(i_0, i_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_24;
      t = j_0(t);
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL,h_3 = NULL;
  j_62 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_62);
  h_62 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_62);
  h_3 = t;
  t = SSLsetAnnotations(h_3, h_62);
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm l_62 = NULL;
  l_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_62), term_t_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL;
  ATerm u_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_26);
    }
  else
    {
      t = u_26;
      t = fetch_1_0(j_4, t);
    }
  t = term_x_26;
  t = echo_0_0(t);
  t = term_r_25;
  f_62 = t;
  t = term_s_25;
  g_62 = t;
  t = term_y_26;
  t = k_12(f_62, g_62, t);
  t = reverse_acc_2_0(_id, k_4, t);
  t = map_1_0(l_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm n_107 (ATerm), ATerm t)
{
  ATerm j_63 (ATerm t)
  {
    ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL;
    g_63 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_63 = ATgetFirst((ATermList) t);
        i_63 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_26 = t;
      int a_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_6 = NULL,c_7 = NULL,k_3 = NULL;
          t = SSLgetAnnotations(g_63);
          z_6 = t;
          t = h_63;
          t = n_107(t);
          c_7 = t;
          t = (ATerm) ATinsert(CheckATermList(i_63), c_7);
          k_3 = t;
          t = SSLsetAnnotations(k_3, z_6);
          ;
          LocalPopChoice(a_27);
        }
      else
        {
          t = z_26;
          {
            ATerm k_7 = NULL,n_7 = NULL,l_3 = NULL;
            t = SSLgetAnnotations(g_63);
            k_7 = t;
            t = i_63;
            t = j_63(t);
            n_7 = t;
            t = (ATerm) ATinsert(CheckATermList(n_7), h_63);
            l_3 = t;
            t = SSLsetAnnotations(l_3, k_7);
          }
        }
    }
    return(t);
  }
  t = j_63(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL;
  n_63 = t;
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_63;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_27 = ATgetFirst((ATermList) t);
                ATerm e_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_63;
          }
        ;
        LocalPopChoice(c_27);
      }
    else
      {
        t = b_27;
        t = (ATerm) ATinsert(ATempty, n_63);
      }
    o_63 = t;
    t = term_p_23;
    p_63 = t;
    t = SSL_printnl(p_63, o_63);
    t = n_63;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm j_12 (ATerm k_40, ATerm l_40, ATerm t)
{
  t = SSL_strcat(k_40, l_40);
  return(t);
}
ATerm debug_1_0 (ATerm c_113 (ATerm), ATerm t)
{
  ATerm t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL;
  t_63 = t;
  t = c_113(t);
  u_63 = t;
  t = term_t_24;
  v_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_63), u_63);
  w_63 = t;
  t = SSL_printnl(v_63, w_63);
  t = t_63;
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_i_27;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_64 = NULL;
      e_64 = t;
      t = SSL_is_string(e_64);
      ;
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
      {
        ATerm l_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(m_4, t);
            ;
            LocalPopChoice(p_27);
          }
        else
          {
            t = l_27;
            {
              ATerm m_64 = NULL,n_64 = NULL,o_64 = NULL;
              m_64 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_64 = ATgetArgument(t, 0);
                  t = n_64;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_64 = ATgetArgument(t, 0);
                      t = n_64;
                      {
                        ATerm q_27 = t;
                        int x_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(x_27);
                          }
                        else
                          {
                            t = q_27;
                            t = debug_1_0(n_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm s_64 = NULL,t_64 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_64 = ATgetArgument(t, 0);
                          o_64 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_64;
                      t = eval_config_0_0(t);
                      s_64 = t;
                      t = o_64;
                      t = eval_config_0_0(t);
                      t_64 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_64, t_64);
                      t = j_12(s_64, t_64, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm k_12 (ATerm q_60, ATerm r_60, ATerm t)
{
  t = SSL_table_get(q_60, r_60);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL;
  x_64 = t;
  t = term_q_25;
  y_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_25, x_64);
  t = k_12(y_64, x_64, t);
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_64 = NULL,a_65 = NULL;
        t = eval_config_0_0(t);
        z_64 = t;
        t = term_q_25;
        a_65 = t;
        t = SSL_table_put(a_65, x_64, z_64);
        t = z_64;
        ;
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
      }
  }
  return(t);
}
ATerm p_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm d_65 = NULL,e_65 = NULL;
  t = term_a_28;
  d_65 = t;
  t = term_s_24;
  e_65 = t;
  t = term_b_28;
  t = n_12(d_65, e_65, t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_c_28;
  return(t);
}
ATerm s_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL;
  t = term_a_28;
  h_65 = t;
  t = term_s_24;
  i_65 = t;
  t = term_b_28;
  t = n_12(h_65, i_65, t);
  t = term_d_28;
  f_65 = t;
  t = term_s_24;
  g_65 = t;
  t = term_e_28;
  t = n_12(f_65, g_65, t);
  t = term_f_28;
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_h_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_4, q_4, r_4, t);
      ;
      LocalPopChoice(j_28);
    }
  else
    {
      t = i_28;
      t = Option_3_0(s_4, t_4, u_4, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_119 (ATerm), ATerm t)
{
  ATerm n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,s_65 = NULL,t_65 = NULL,o_3 = NULL;
  n_65 = t;
  {
    ATerm k_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_28;
        t = h_119(t);
        ;
        LocalPopChoice(l_28);
      }
    else
      {
        t = k_28;
      }
    t = n_65;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_65 = ATgetFirst((ATermList) t);
        q_65 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_65);
    o_65 = t;
    t = term_b_26;
    t_65 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_26, p_65);
    t = n_12(t_65, p_65, t);
    t = q_65;
    {
      ATerm d_66 (ATerm t)
      {
        ATerm n_28 = t;
        int o_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_28 = t;
            int r_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_65 = NULL;
                w_65 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = w_65;
                ;
                LocalPopChoice(r_28);
              }
            else
              {
                t = q_28;
                t = h_119(t);
                t = Cons_2_0(_id, d_66, t);
              }
            ;
            LocalPopChoice(o_28);
          }
        else
          {
            t = n_28;
            {
              ATerm z_65 = NULL,a_66 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_65 = ATgetFirst((ATermList) t);
                  a_66 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(a_66), (ATerm) ATmakeAppl(sym_Undefined_1, z_65));
            }
          }
        return(t);
      }
      t = d_66(t);
      s_65 = t;
      t = (ATerm) ATinsert(CheckATermList(s_65), (ATerm) ATmakeAppl(sym_Program_1, p_65));
      o_3 = t;
      t = SSLsetAnnotations(o_3, o_65);
    }
  }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm p_66 = NULL;
  p_66 = t;
  if(match_string(t, "--help"))
    {
      t = p_66;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_66;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_66;
        }
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm q_66 = NULL,r_66 = NULL;
  t = term_s_26;
  q_66 = t;
  t = term_s_24;
  r_66 = t;
  t = term_s_28;
  t = n_12(q_66, r_66, t);
  t = term_t_28;
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_u_28;
  return(t);
}
ATerm a_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_119 (ATerm), ATerm t)
{
  ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL;
  k_66 = t;
  t = term_r_25;
  m_66 = t;
  t = term_s_25;
  n_66 = t;
  t = (ATerm) ATempty;
  o_66 = t;
  t = SSL_table_put(m_66, n_66, o_66);
  t = k_66;
  {
    ATerm w_4 (ATerm t)
    {
      ATerm v_28 = t;
      int w_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_119(t);
          ;
          LocalPopChoice(w_28);
        }
      else
        {
          t = v_28;
          {
            ATerm x_28 = t;
            int z_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_4, y_4, z_4, t);
                ;
                LocalPopChoice(z_28);
              }
            else
              {
                t = x_28;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_4, t);
    {
      ATerm a_29 = t;
      int b_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_66 = NULL;
          y_66 = t;
          {
            ATerm c_29 = t;
            int d_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_8 = NULL;
                t = y_66;
                {
                  ATerm e_29 = t;
                  int f_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_s_26;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(f_29);
                    }
                  else
                    {
                      t = e_29;
                      t = fetch_1_0(a_5, t);
                    }
                  t = y_66;
                  t = default_system_usage_0_0(t);
                  t = term_b_25;
                  c_8 = t;
                  t = SSL_exit(c_8);
                }
                ;
                LocalPopChoice(d_29);
              }
            else
              {
                t = c_29;
                {
                  ATerm g_8 = NULL;
                  t = term_a_28;
                  t = get_config_0_0(t);
                  t = y_66;
                  t = default_system_about_0_0(t);
                  t = term_b_25;
                  g_8 = t;
                  t = SSL_exit(g_8);
                }
              }
          }
          ;
          LocalPopChoice(b_29);
        }
      else
        {
          t = a_29;
          {
            ATerm g_29 = t;
            int h_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_66 = NULL,a_67 = NULL,b_67 = NULL;
                ATerm b_5 (ATerm t)
                {
                  ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL,q_3 = NULL;
                  e_67 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      d_67 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_67);
                  c_67 = t;
                  t = d_67;
                  if(((i_66 != NULL) && (i_66 != t)))
                    _fail(t);
                  else
                    i_66 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, d_67);
                  q_3 = t;
                  t = SSLsetAnnotations(q_3, c_67);
                  return(t);
                }
                t = fetch_1_0(b_5, t);
                t = term_t_24;
                a_67 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_66)), term_i_29);
                b_67 = t;
                t = SSL_printnl(a_67, b_67);
                t = (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_66)), term_i_29));
                t = default_system_usage_0_0(t);
                t = term_w_24;
                z_66 = t;
                t = SSL_exit(z_66);
                ;
                LocalPopChoice(h_29);
              }
            else
              {
                t = g_29;
              }
          }
        }
      j_66 = t;
      t = term_r_25;
      l_66 = t;
      t = SSL_table_destroy(l_66);
      t = j_66;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm t)
{
  ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL;
  t = parse_options_1_0(g_117, t);
  j_67 = t;
  t = term_k_29;
  m_67 = t;
  t = SSL_table_create(m_67);
  t = term_k_29;
  k_67 = t;
  t = term_l_29;
  l_67 = t;
  t = SSL_table_put(k_67, l_67, j_67);
  t = j_67;
  t = i_117(t);
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_117, t);
        ;
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
        {
          ATerm o_29 = t;
          int p_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_117(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(p_29);
            }
          else
            {
              t = o_29;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm q_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(r_29);
    }
  else
    {
      t = q_29;
      {
        ATerm s_29 = t;
        int u_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(u_29);
          }
        else
          {
            t = s_29;
            {
              ATerm v_29 = t;
              int w_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(e_5, f_5, g_5, t);
                  ;
                  LocalPopChoice(w_29);
                }
              else
                {
                  t = v_29;
                  {
                    ATerm x_29 = t;
                    int y_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(y_29);
                      }
                    else
                      {
                        t = x_29;
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
ATerm d_5 (ATerm t)
{
  t = input_1_0(h_5, t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm o_67 = NULL,p_67 = NULL;
  t = term_t_23;
  o_67 = t;
  t = term_s_24;
  p_67 = t;
  t = term_z_29;
  t = n_12(o_67, p_67, t);
  t = term_a_30;
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_c_30;
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = output_1_0(i_5, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,a_4 = NULL,z_3 = NULL;
  y_67 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_67);
  r_67 = t;
  t = s_67;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_67 = ATgetFirst((ATermList) t);
      v_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_67);
  t_67 = t;
  t = v_67;
  t = Cons_2_0(j_5, k_5, t);
  w_67 = t;
  t = (ATerm) ATinsert(CheckATermList(w_67), u_67);
  z_3 = t;
  t = SSLsetAnnotations(z_3, t_67);
  x_67 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, x_67);
  a_4 = t;
  t = SSLsetAnnotations(a_4, r_67);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL,u_3 = NULL;
  c_68 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      a_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_68);
  z_67 = t;
  t = a_68;
  t = map_1_0(m_5, t);
  b_68 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, b_68);
  u_3 = t;
  t = SSLsetAnnotations(u_3, z_67);
  return(t);
}
ATerm k_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,t_3 = NULL;
  j_68 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      e_68 = ATgetArgument(t, 0);
      f_68 = ATgetArgument(t, 1);
      g_68 = ATgetArgument(t, 2);
      h_68 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_68);
  d_68 = t;
  t = h_68;
  t = simplify_0_0(t);
  t = alltd_1_0(n_5, t);
  i_68 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, e_68, f_68, g_68, i_68);
  t_3 = t;
  t = SSLsetAnnotations(t_3, d_68);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm k_68 = NULL,l_68 = NULL;
  l_68 = t;
  if(match_cons(t, sym_Var_1))
    {
      k_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_68);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_30 = ATgetFirst((ATermList) t);
      ATerm e_30 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(e_30) != AT_LIST) || !(ATisEmpty(e_30))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, k_68);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(c_5, default_usage_0_0, _id, d_5, t);
  return(t);
}
