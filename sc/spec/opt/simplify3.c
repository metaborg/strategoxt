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
ATerm term_j_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_n_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_j_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_l_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_n_24;
ATerm term_k_24;
ATerm term_r_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_j_23;
ATerm term_g_23;
ATerm term_l_22;
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
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym__2, term_a_25, term_b_25);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_25);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym__2, term_h_25, term_t_24);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym__2, term_s_25, term_t_25);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym__2, term_b_28, term_t_24);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym__2, term_e_28, term_t_24);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym__2, term_t_26, term_t_24);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym__2, term_r_23, term_t_24);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm alltd_1_0 (ATerm u_93 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm d_92 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm g_93 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm n_107 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm e_2 (ATerm t_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm topdown_1_0 (ATerm c_92 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm);
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
ATerm map_1_0 (ATerm x_106 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm);
ATerm n_11 (ATerm f_49, ATerm g_49, ATerm);
ATerm o_11 (ATerm t_52, ATerm u_52, ATerm);
ATerm q_11 (ATerm y_112 (ATerm), ATerm b_474, ATerm x_52, ATerm);
ATerm p_11 (ATerm p_52, ATerm q_52, ATerm);
ATerm k_2 (ATerm);
ATerm r_2 (ATerm);
ATerm output_1_0 (ATerm h_117 (ATerm), ATerm);
ATerm h_55 (ATerm b_55, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm r_11 (ATerm v_52, ATerm);
ATerm s_11 (ATerm h_49, ATerm i_49, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm u_56 (ATerm s_55, ATerm);
ATerm v_56 (ATerm w_55, ATerm x_55, ATerm y_55, ATerm);
ATerm w_56 (ATerm g_56, ATerm h_56, ATerm i_56, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm i_117 (ATerm), ATerm);
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
ATerm b_12 (ATerm w_53, ATerm x_53, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm p_3 (ATerm);
ATerm r_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm z_11 (ATerm u_58, ATerm v_58, ATerm t_58, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm s_3 (ATerm);
ATerm w_3 (ATerm);
ATerm b_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm u_11 (ATerm f_46, ATerm g_46, ATerm);
ATerm foldr_2_0 (ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm i_114 (ATerm), ATerm);
ATerm g_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm h_4 (ATerm);
ATerm need_help_1_0 (ATerm y_116 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm h_107 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm x_11 (ATerm h_40, ATerm i_40, ATerm);
ATerm debug_1_0 (ATerm w_112 (ATerm), ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm y_11 (ATerm l_60, ATerm m_60, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm b_119 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm parse_options_1_0 (ATerm a_119 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm);
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
ATerm alltd_1_0 (ATerm u_93 (ATerm), ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    ATerm q_5 = t;
    int r_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_93(t);
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
ATerm bottomup_1_0 (ATerm d_92 (ATerm), ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = bottomup_1_0(d_92, t);
    return(t);
  }
  t = SRTS_all(b_0, t);
  t = d_92(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm g_93 (ATerm), ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm s_5 = t;
    int t_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_93(t);
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
ATerm at_end_1_0 (ATerm n_107 (ATerm), ATerm t)
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
        t = n_107(t);
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
ATerm topdown_1_0 (ATerm c_92 (ATerm), ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    t = topdown_1_0(c_92, t);
    return(t);
  }
  t = c_92(t);
  t = SRTS_all(r_0, t);
  return(t);
}
ATerm genzip_4_0 (ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm d_6 = t;
    int g_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_96(t);
        ;
        LocalPopChoice(g_6);
      }
    else
      {
        t = d_6;
        {
          ATerm f_2 = NULL,g_2 = NULL,i_2 = NULL,j_2 = NULL,l_2 = NULL,m_2 = NULL,k_1 = NULL;
          t = p_96(t);
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
          t = r_96(t);
          j_2 = t;
          t = i_2;
          t = n_2(t);
          l_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_2, l_2);
          k_1 = t;
          t = SSLsetAnnotations(k_1, f_2);
          t = q_96(t);
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
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_6 = ATgetArgument(t, 0);
      if(((ATgetType(j_6) == AT_LIST) && !(ATisEmpty(j_6))))
        {
          k_21 = ATgetFirst((ATermList) j_6);
          l_21 = (ATerm) ATgetNext((ATermList) j_6);
        }
      else
        _fail(t);
      {
        ATerm k_6 = ATgetArgument(t, 1);
        if(((ATgetType(k_6) == AT_LIST) && !(ATisEmpty(k_6))))
          {
            m_21 = ATgetFirst((ATermList) k_6);
            n_21 = (ATerm) ATgetNext((ATermList) k_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_21, m_21), (ATerm) ATmakeAppl(sym__2, l_21, n_21));
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL;
  if(match_cons(t, sym__2))
    {
      o_21 = ATgetArgument(t, 0);
      p_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_21), o_21);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL;
  if(match_cons(t, sym__2))
    {
      q_21 = ATgetArgument(t, 0);
      r_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_21), (ATerm) ATmakeAppl(sym_Match_1, r_21));
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
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_6 = ATgetArgument(t, 0);
      if(((ATgetType(n_6) == AT_LIST) && !(ATisEmpty(n_6))))
        {
          o_27 = ATgetFirst((ATermList) n_6);
          p_27 = (ATerm) ATgetNext((ATermList) n_6);
        }
      else
        _fail(t);
      {
        ATerm o_6 = ATgetArgument(t, 1);
        if(((ATgetType(o_6) == AT_LIST) && !(ATisEmpty(o_6))))
          {
            q_27 = ATgetFirst((ATermList) o_6);
            r_27 = (ATerm) ATgetNext((ATermList) o_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_27, q_27), (ATerm) ATmakeAppl(sym__2, p_27, r_27));
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL;
  if(match_cons(t, sym__2))
    {
      s_27 = ATgetArgument(t, 0);
      t_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_27), s_27);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL;
  if(match_cons(t, sym__2))
    {
      u_27 = ATgetArgument(t, 0);
      v_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_27), (ATerm) ATmakeAppl(sym_Match_1, v_27));
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
        ATerm z_38 = NULL,a_39 = NULL;
        z_38 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm t_6 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        a_39 = t;
        t = SSLgetAnnotations(z_38);
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
        t = a_39;
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
  ATerm m_48 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_48, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_7), term_e_7));
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm n_48 = NULL,p_48 = NULL;
  p_48 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_48 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, n_48, term_e_7);
    }
  else
    {
      t = p_48;
    }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm a_49 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      a_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_49, term_e_7);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL;
  c_49 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_49 = ATgetArgument(t, 0);
      {
        ATerm f_7 = t;
        int g_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, b_49, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_7), term_e_7));
            ;
            LocalPopChoice(g_7);
          }
        else
          {
            t = f_7;
            t = c_49;
          }
      }
    }
  else
    {
      t = c_49;
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm s_49 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      s_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_49, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_7), term_e_7));
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm t_49 = NULL,u_49 = NULL;
  u_49 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      t_49 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, t_49, term_e_7);
    }
  else
    {
      t = u_49;
    }
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL;
    d_14 = t;
    if(match_cons(t, sym_Test_1))
      {
        c_14 = ATgetArgument(t, 0);
        t = c_14;
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
                      ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL;
                      t = d_14;
                      t = new_0_0(t);
                      f_14 = t;
                      t = bottomup_1_0(s_0, t);
                      q_14 = t;
                      t = (ATerm) ATempty;
                      t = s_0(t);
                      r_14 = t;
                      t = (ATerm) ATinsert(CheckATermList(r_14), q_14);
                      t = s_0(t);
                      g_14 = t;
                      t = f_14;
                      t = bottomup_1_0(s_0, t);
                      p_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, p_14);
                      t = s_0(t);
                      o_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, o_14);
                      t = s_0(t);
                      i_14 = t;
                      t = c_14;
                      t = bottomup_1_0(s_0, t);
                      k_14 = t;
                      t = f_14;
                      t = bottomup_1_0(s_0, t);
                      n_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, n_14);
                      t = s_0(t);
                      m_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, m_14);
                      t = s_0(t);
                      l_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, k_14, l_14);
                      t = s_0(t);
                      j_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_14, j_14);
                      t = s_0(t);
                      h_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, g_14, h_14);
                      t = s_0(t);
                      ;
                      LocalPopChoice(m_7);
                    }
                  else
                    {
                      t = l_7;
                      t = d_14;
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
                          ATerm x_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,q_15 = NULL,r_15 = NULL,x_15 = NULL,z_15 = NULL,a_16 = NULL,e_16 = NULL;
                          t = d_14;
                          t = new_0_0(t);
                          x_14 = t;
                          t = bottomup_1_0(s_0, t);
                          a_16 = t;
                          t = (ATerm) ATempty;
                          t = s_0(t);
                          e_16 = t;
                          t = (ATerm) ATinsert(CheckATermList(e_16), a_16);
                          t = s_0(t);
                          a_15 = t;
                          t = x_14;
                          t = bottomup_1_0(s_0, t);
                          z_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, z_15);
                          t = s_0(t);
                          x_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, x_15);
                          t = s_0(t);
                          c_15 = t;
                          t = c_14;
                          t = bottomup_1_0(s_0, t);
                          k_15 = t;
                          t = x_14;
                          t = bottomup_1_0(s_0, t);
                          r_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, r_15);
                          t = s_0(t);
                          q_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, q_15);
                          t = s_0(t);
                          l_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, k_15, l_15);
                          t = s_0(t);
                          j_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_15, j_15);
                          t = s_0(t);
                          b_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, a_15, b_15);
                          t = s_0(t);
                          ;
                          LocalPopChoice(s_7);
                        }
                      else
                        {
                          t = r_7;
                          t = d_14;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    z_13 = ATgetArgument(t, 0);
                    {
                      ATerm t_7 = t;
                      int u_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, z_13);
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
                                ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,l_17 = NULL;
                                t = d_14;
                                t = new_0_0(t);
                                k_16 = t;
                                t = bottomup_1_0(s_0, t);
                                h_17 = t;
                                t = (ATerm) ATempty;
                                t = s_0(t);
                                l_17 = t;
                                t = (ATerm) ATinsert(CheckATermList(l_17), h_17);
                                t = s_0(t);
                                l_16 = t;
                                t = k_16;
                                t = bottomup_1_0(s_0, t);
                                g_17 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, g_17);
                                t = s_0(t);
                                f_17 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, f_17);
                                t = s_0(t);
                                n_16 = t;
                                t = c_14;
                                t = bottomup_1_0(s_0, t);
                                v_16 = t;
                                t = k_16;
                                t = bottomup_1_0(s_0, t);
                                e_17 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, e_17);
                                t = s_0(t);
                                x_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, x_16);
                                t = s_0(t);
                                w_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, v_16, w_16);
                                t = s_0(t);
                                o_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, n_16, o_16);
                                t = s_0(t);
                                m_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, l_16, m_16);
                                t = s_0(t);
                                ;
                                LocalPopChoice(w_7);
                              }
                            else
                              {
                                t = v_7;
                                t = d_14;
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
                        ATerm t_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,g_18 = NULL,i_18 = NULL,j_18 = NULL;
                        t = d_14;
                        t = new_0_0(t);
                        t_17 = t;
                        t = bottomup_1_0(s_0, t);
                        i_18 = t;
                        t = (ATerm) ATempty;
                        t = s_0(t);
                        j_18 = t;
                        t = (ATerm) ATinsert(CheckATermList(j_18), i_18);
                        t = s_0(t);
                        v_17 = t;
                        t = t_17;
                        t = bottomup_1_0(s_0, t);
                        g_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, g_18);
                        t = s_0(t);
                        d_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, d_18);
                        t = s_0(t);
                        x_17 = t;
                        t = c_14;
                        t = bottomup_1_0(s_0, t);
                        z_17 = t;
                        t = t_17;
                        t = bottomup_1_0(s_0, t);
                        c_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, c_18);
                        t = s_0(t);
                        b_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, b_18);
                        t = s_0(t);
                        a_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, z_17, a_18);
                        t = s_0(t);
                        y_17 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, x_17, y_17);
                        t = s_0(t);
                        w_17 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, v_17, w_17);
                        t = s_0(t);
                        ;
                        LocalPopChoice(y_7);
                      }
                    else
                      {
                        t = x_7;
                        t = d_14;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            c_14 = ATgetArgument(t, 0);
            t = c_14;
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
                    t = d_14;
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
                        t = d_14;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        z_13 = ATgetArgument(t, 0);
                        {
                          ATerm e_8 = t;
                          int f_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, z_13);
                              t = s_0(t);
                              ;
                              LocalPopChoice(f_8);
                            }
                          else
                            {
                              t = e_8;
                              t = d_14;
                            }
                        }
                      }
                    else
                      {
                        t = d_14;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                c_14 = ATgetArgument(t, 0);
                b_14 = ATgetArgument(t, 1);
                t = b_14;
                if(match_cons(t, sym_Id_0))
                  {
                    t = c_14;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = b_14;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = c_14;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                z_13 = ATgetArgument(t, 0);
                                a_14 = ATgetArgument(t, 1);
                                t = c_14;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    z_13 = ATgetArgument(t, 0);
                                    a_14 = ATgetArgument(t, 1);
                                    t = c_14;
                                  }
                                else
                                  {
                                    t = c_14;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        x_13 = ATgetArgument(t, 0);
                        y_13 = ATgetArgument(t, 1);
                        t = x_13;
                        if(match_cons(t, sym_Match_1))
                          {
                            w_13 = ATgetArgument(t, 0);
                            t = w_13;
                            if(match_cons(t, sym_Op_2))
                              {
                                u_13 = ATgetArgument(t, 0);
                                p_13 = ATgetArgument(t, 1);
                                t = c_14;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = b_14;
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
                                            t = d_14;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            z_13 = ATgetArgument(t, 0);
                                            a_14 = ATgetArgument(t, 1);
                                            {
                                              ATerm j_8 = t;
                                              int k_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm p_20 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                  t = s_0(t);
                                                  p_20 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, p_20);
                                                  t = s_0(t);
                                                  ;
                                                  LocalPopChoice(k_8);
                                                }
                                              else
                                                {
                                                  t = j_8;
                                                  t = d_14;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                z_13 = ATgetArgument(t, 0);
                                                t = z_13;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    v_13 = ATgetArgument(t, 0);
                                                    q_13 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm l_8 = t;
                                                      int m_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, v_13, u_13);
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
                                                                ATerm i_21 = NULL;
                                                                t = u_13;
                                                                if((v_13 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, q_13, p_13);
                                                                t = genzip_4_0(u_0, y_0, z_0, a_1, t);
                                                                i_21 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, v_13, q_13)), y_13));
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
                                                                      ATerm u_21 = NULL;
                                                                      t = w_13;
                                                                      if((z_13 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, z_13);
                                                                      t = s_0(t);
                                                                      u_21 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_21, y_13);
                                                                      t = s_0(t);
                                                                      ;
                                                                      LocalPopChoice(r_8);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = q_8;
                                                                      t = d_14;
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
                                                        ATerm y_21 = NULL;
                                                        t = w_13;
                                                        if((z_13 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, z_13);
                                                        t = s_0(t);
                                                        y_21 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, y_21, y_13);
                                                        t = s_0(t);
                                                        ;
                                                        LocalPopChoice(t_8);
                                                      }
                                                    else
                                                      {
                                                        t = s_8;
                                                        t = d_14;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    z_13 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm u_8 = t;
                                                      int v_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm c_22 = NULL;
                                                          t = w_13;
                                                          if((z_13 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, z_13);
                                                          t = s_0(t);
                                                          c_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_22, y_13);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(v_8);
                                                        }
                                                      else
                                                        {
                                                          t = u_8;
                                                          t = d_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        z_13 = ATgetArgument(t, 0);
                                                        a_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm w_8 = t;
                                                          int x_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_22 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                              t = s_0(t);
                                                              h_22 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, h_22);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(x_8);
                                                            }
                                                          else
                                                            {
                                                              t = w_8;
                                                              t = d_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = d_14;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = c_14;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = b_14;
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
                                            t = d_14;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            z_13 = ATgetArgument(t, 0);
                                            a_14 = ATgetArgument(t, 1);
                                            {
                                              ATerm a_9 = t;
                                              int b_9 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm q_22 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                  t = s_0(t);
                                                  q_22 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, q_22);
                                                  t = s_0(t);
                                                  ;
                                                  LocalPopChoice(b_9);
                                                }
                                              else
                                                {
                                                  t = a_9;
                                                  t = d_14;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                z_13 = ATgetArgument(t, 0);
                                                {
                                                  ATerm c_9 = t;
                                                  int d_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm u_22 = NULL;
                                                      t = w_13;
                                                      if((z_13 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, z_13);
                                                      t = s_0(t);
                                                      u_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_22, y_13);
                                                      t = s_0(t);
                                                      ;
                                                      LocalPopChoice(d_9);
                                                    }
                                                  else
                                                    {
                                                      t = c_9;
                                                      t = d_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    z_13 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm e_9 = t;
                                                      int f_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm y_22 = NULL;
                                                          t = w_13;
                                                          if((z_13 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, z_13);
                                                          t = s_0(t);
                                                          y_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, y_13);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(f_9);
                                                        }
                                                      else
                                                        {
                                                          t = e_9;
                                                          t = d_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        z_13 = ATgetArgument(t, 0);
                                                        a_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm g_9 = t;
                                                          int h_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm d_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                              t = s_0(t);
                                                              d_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, d_23);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(h_9);
                                                            }
                                                          else
                                                            {
                                                              t = g_9;
                                                              t = d_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = d_14;
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
                                w_13 = ATgetArgument(t, 0);
                                t = w_13;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    u_13 = ATgetArgument(t, 0);
                                    t = c_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = b_14;
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
                                                t = d_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                z_13 = ATgetArgument(t, 0);
                                                a_14 = ATgetArgument(t, 1);
                                                {
                                                  ATerm k_9 = t;
                                                  int l_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm q_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                      t = s_0(t);
                                                      q_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, q_23);
                                                      t = s_0(t);
                                                      ;
                                                      LocalPopChoice(l_9);
                                                    }
                                                  else
                                                    {
                                                      t = k_9;
                                                      t = d_14;
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
                                                          ATerm v_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, w_13);
                                                          t = s_0(t);
                                                          v_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_23, y_13);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(q_9);
                                                        }
                                                      else
                                                        {
                                                          t = p_9;
                                                          t = d_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = m_9;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        z_13 = ATgetArgument(t, 0);
                                                        t = z_13;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            v_13 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm r_9 = t;
                                                              int s_9 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm c_24 = NULL,j_24 = NULL;
                                                                  t = u_13;
                                                                  if((v_13 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, v_13);
                                                                  t = s_0(t);
                                                                  j_24 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, j_24);
                                                                  t = s_0(t);
                                                                  c_24 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, c_24, y_13);
                                                                  t = s_0(t);
                                                                  ;
                                                                  LocalPopChoice(s_9);
                                                                }
                                                              else
                                                                {
                                                                  t = r_9;
                                                                  t = d_14;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = d_14;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            z_13 = ATgetArgument(t, 0);
                                                            a_14 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm t_9 = t;
                                                              int u_9 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm p_24 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                                  t = s_0(t);
                                                                  p_24 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, p_24);
                                                                  t = s_0(t);
                                                                  ;
                                                                  LocalPopChoice(u_9);
                                                                }
                                                              else
                                                                {
                                                                  t = t_9;
                                                                  t = d_14;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = d_14;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = c_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = b_14;
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
                                                t = d_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                z_13 = ATgetArgument(t, 0);
                                                a_14 = ATgetArgument(t, 1);
                                                {
                                                  ATerm x_9 = t;
                                                  int y_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm g_25 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                      t = s_0(t);
                                                      g_25 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, g_25);
                                                      t = s_0(t);
                                                      ;
                                                      LocalPopChoice(y_9);
                                                    }
                                                  else
                                                    {
                                                      t = x_9;
                                                      t = d_14;
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
                                                          ATerm k_25 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, w_13);
                                                          t = s_0(t);
                                                          k_25 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, k_25, y_13);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(d_10);
                                                        }
                                                      else
                                                        {
                                                          t = c_10;
                                                          t = d_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = z_9;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        z_13 = ATgetArgument(t, 0);
                                                        a_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm e_10 = t;
                                                          int f_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_25 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                              t = s_0(t);
                                                              p_25 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, p_25);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(f_10);
                                                            }
                                                          else
                                                            {
                                                              t = e_10;
                                                              t = d_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = d_14;
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
                                    w_13 = ATgetArgument(t, 0);
                                    r_13 = ATgetArgument(t, 1);
                                    s_13 = ATgetArgument(t, 2);
                                    t = c_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = b_14;
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
                                                t = d_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                z_13 = ATgetArgument(t, 0);
                                                a_14 = ATgetArgument(t, 1);
                                                {
                                                  ATerm i_10 = t;
                                                  int j_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm y_25 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                      t = s_0(t);
                                                      y_25 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, y_25);
                                                      t = s_0(t);
                                                      ;
                                                      LocalPopChoice(j_10);
                                                    }
                                                  else
                                                    {
                                                      t = i_10;
                                                      t = d_14;
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
                                                          ATerm e_26 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, w_13, r_13, s_13);
                                                          t = s_0(t);
                                                          e_26 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_26, y_13);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(o_10);
                                                        }
                                                      else
                                                        {
                                                          t = n_10;
                                                          t = d_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = k_10;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        z_13 = ATgetArgument(t, 0);
                                                        a_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm p_10 = t;
                                                          int q_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm j_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                              t = s_0(t);
                                                              j_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, j_26);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(q_10);
                                                            }
                                                          else
                                                            {
                                                              t = p_10;
                                                              t = d_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = d_14;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = c_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = b_14;
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
                                                t = d_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                z_13 = ATgetArgument(t, 0);
                                                a_14 = ATgetArgument(t, 1);
                                                {
                                                  ATerm t_10 = t;
                                                  int u_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm s_26 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                      t = s_0(t);
                                                      s_26 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, s_26);
                                                      t = s_0(t);
                                                      ;
                                                      LocalPopChoice(u_10);
                                                    }
                                                  else
                                                    {
                                                      t = t_10;
                                                      t = d_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    z_13 = ATgetArgument(t, 0);
                                                    a_14 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm v_10 = t;
                                                      int w_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_26 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                          t = s_0(t);
                                                          x_26 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, x_26);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(w_10);
                                                        }
                                                      else
                                                        {
                                                          t = v_10;
                                                          t = d_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = d_14;
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
                            x_13 = ATgetArgument(t, 0);
                            t = x_13;
                            if(match_cons(t, sym_Op_2))
                              {
                                w_13 = ATgetArgument(t, 0);
                                r_13 = ATgetArgument(t, 1);
                                t = c_14;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = b_14;
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
                                            t = d_14;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            z_13 = ATgetArgument(t, 0);
                                            a_14 = ATgetArgument(t, 1);
                                            {
                                              ATerm z_10 = t;
                                              int a_11 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm i_27 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                  t = s_0(t);
                                                  i_27 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, i_27);
                                                  t = s_0(t);
                                                  ;
                                                  LocalPopChoice(a_11);
                                                }
                                              else
                                                {
                                                  t = z_10;
                                                  t = d_14;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                z_13 = ATgetArgument(t, 0);
                                                t = z_13;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    v_13 = ATgetArgument(t, 0);
                                                    q_13 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm b_11 = t;
                                                      int c_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, v_13, w_13);
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
                                                                ATerm n_27 = NULL;
                                                                t = w_13;
                                                                if((v_13 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, q_13, r_13);
                                                                t = genzip_4_0(e_1, g_1, j_1, l_1, t);
                                                                n_27 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_27), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, v_13, q_13)));
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
                                                                      t = x_13;
                                                                      if((z_13 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, z_13);
                                                                      t = s_0(t);
                                                                      ;
                                                                      LocalPopChoice(h_11);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = g_11;
                                                                      t = d_14;
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
                                                        t = x_13;
                                                        if((z_13 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, z_13);
                                                        t = s_0(t);
                                                        ;
                                                        LocalPopChoice(j_11);
                                                      }
                                                    else
                                                      {
                                                        t = i_11;
                                                        t = d_14;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    z_13 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm k_11 = t;
                                                      int l_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = x_13;
                                                          if((z_13 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, z_13);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(l_11);
                                                        }
                                                      else
                                                        {
                                                          t = k_11;
                                                          t = d_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        z_13 = ATgetArgument(t, 0);
                                                        a_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm m_11 = t;
                                                          int t_11 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_28 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                              t = s_0(t);
                                                              f_28 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, f_28);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(t_11);
                                                            }
                                                          else
                                                            {
                                                              t = m_11;
                                                              t = d_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = d_14;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = c_14;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = b_14;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm v_11 = t;
                                        int w_11 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_q_7;
                                            t = s_0(t);
                                            ;
                                            LocalPopChoice(w_11);
                                          }
                                        else
                                          {
                                            t = v_11;
                                            t = d_14;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            z_13 = ATgetArgument(t, 0);
                                            a_14 = ATgetArgument(t, 1);
                                            {
                                              ATerm a_12 = t;
                                              int c_12 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm o_28 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                  t = s_0(t);
                                                  o_28 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, o_28);
                                                  t = s_0(t);
                                                  ;
                                                  LocalPopChoice(c_12);
                                                }
                                              else
                                                {
                                                  t = a_12;
                                                  t = d_14;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                z_13 = ATgetArgument(t, 0);
                                                {
                                                  ATerm d_12 = t;
                                                  int e_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = x_13;
                                                      if((z_13 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, z_13);
                                                      t = s_0(t);
                                                      ;
                                                      LocalPopChoice(e_12);
                                                    }
                                                  else
                                                    {
                                                      t = d_12;
                                                      t = d_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    z_13 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm f_12 = t;
                                                      int g_12 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = x_13;
                                                          if((z_13 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, z_13);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(g_12);
                                                        }
                                                      else
                                                        {
                                                          t = f_12;
                                                          t = d_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        z_13 = ATgetArgument(t, 0);
                                                        a_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_12 = t;
                                                          int i_12 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_28 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                              t = s_0(t);
                                                              z_28 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, z_28);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(i_12);
                                                            }
                                                          else
                                                            {
                                                              t = h_12;
                                                              t = d_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = d_14;
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
                                    w_13 = ATgetArgument(t, 0);
                                    t = c_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = b_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm j_12 = t;
                                            int k_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_7;
                                                t = s_0(t);
                                                ;
                                                LocalPopChoice(k_12);
                                              }
                                            else
                                              {
                                                t = j_12;
                                                t = d_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                z_13 = ATgetArgument(t, 0);
                                                a_14 = ATgetArgument(t, 1);
                                                {
                                                  ATerm l_12 = t;
                                                  int m_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm s_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                      t = s_0(t);
                                                      s_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, s_29);
                                                      t = s_0(t);
                                                      ;
                                                      LocalPopChoice(m_12);
                                                    }
                                                  else
                                                    {
                                                      t = l_12;
                                                      t = d_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm n_12 = t;
                                                int o_12 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm p_12 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(o_12);
                                                    {
                                                      ATerm q_12 = t;
                                                      int r_12 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, x_13);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(r_12);
                                                        }
                                                      else
                                                        {
                                                          t = q_12;
                                                          t = d_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = n_12;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        z_13 = ATgetArgument(t, 0);
                                                        t = z_13;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            v_13 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm s_12 = t;
                                                              int t_12 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm b_30 = NULL;
                                                                  t = w_13;
                                                                  if((v_13 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, v_13);
                                                                  t = s_0(t);
                                                                  b_30 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, b_30);
                                                                  t = s_0(t);
                                                                  ;
                                                                  LocalPopChoice(t_12);
                                                                }
                                                              else
                                                                {
                                                                  t = s_12;
                                                                  t = d_14;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = d_14;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            z_13 = ATgetArgument(t, 0);
                                                            a_14 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm u_12 = t;
                                                              int v_12 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm n_30 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                                  t = s_0(t);
                                                                  n_30 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, n_30);
                                                                  t = s_0(t);
                                                                  ;
                                                                  LocalPopChoice(v_12);
                                                                }
                                                              else
                                                                {
                                                                  t = u_12;
                                                                  t = d_14;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = d_14;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = c_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = b_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm w_12 = t;
                                            int x_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_7;
                                                t = s_0(t);
                                                ;
                                                LocalPopChoice(x_12);
                                              }
                                            else
                                              {
                                                t = w_12;
                                                t = d_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                z_13 = ATgetArgument(t, 0);
                                                a_14 = ATgetArgument(t, 1);
                                                {
                                                  ATerm y_12 = t;
                                                  int z_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm a_31 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                      t = s_0(t);
                                                      a_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_31);
                                                      t = s_0(t);
                                                      ;
                                                      LocalPopChoice(z_12);
                                                    }
                                                  else
                                                    {
                                                      t = y_12;
                                                      t = d_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm a_13 = t;
                                                int b_13 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm c_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(b_13);
                                                    {
                                                      ATerm d_13 = t;
                                                      int e_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, x_13);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(e_13);
                                                        }
                                                      else
                                                        {
                                                          t = d_13;
                                                          t = d_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = a_13;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        z_13 = ATgetArgument(t, 0);
                                                        a_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm f_13 = t;
                                                          int g_13 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm k_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                              t = s_0(t);
                                                              k_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, k_31);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(g_13);
                                                            }
                                                          else
                                                            {
                                                              t = f_13;
                                                              t = d_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = d_14;
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
                                    y_13 = ATgetArgument(t, 1);
                                    t_13 = ATgetArgument(t, 2);
                                    t = c_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = b_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm h_13 = t;
                                            int e_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_7;
                                                t = s_0(t);
                                                ;
                                                LocalPopChoice(e_14);
                                              }
                                            else
                                              {
                                                t = h_13;
                                                t = d_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                z_13 = ATgetArgument(t, 0);
                                                a_14 = ATgetArgument(t, 1);
                                                {
                                                  ATerm s_14 = t;
                                                  int t_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm z_31 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                      t = s_0(t);
                                                      z_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, z_31);
                                                      t = s_0(t);
                                                      ;
                                                      LocalPopChoice(t_14);
                                                    }
                                                  else
                                                    {
                                                      t = s_14;
                                                      t = d_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm u_14 = t;
                                                int v_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm w_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(v_14);
                                                    {
                                                      ATerm y_14 = t;
                                                      int z_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, x_13, y_13, t_13);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(z_14);
                                                        }
                                                      else
                                                        {
                                                          t = y_14;
                                                          t = d_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = u_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        z_13 = ATgetArgument(t, 0);
                                                        a_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm d_15 = t;
                                                          int e_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm m_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                              t = s_0(t);
                                                              m_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, m_32);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(e_15);
                                                            }
                                                          else
                                                            {
                                                              t = d_15;
                                                              t = d_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = d_14;
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
                                        x_13 = ATgetArgument(t, 0);
                                        y_13 = ATgetArgument(t, 1);
                                        t = c_14;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = b_14;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm f_15 = t;
                                                int g_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_q_7;
                                                    t = s_0(t);
                                                    ;
                                                    LocalPopChoice(g_15);
                                                  }
                                                else
                                                  {
                                                    t = f_15;
                                                    {
                                                      ATerm h_15 = t;
                                                      int i_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm c_33 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_14, y_13);
                                                          t = s_0(t);
                                                          c_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, x_13, c_33);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(i_15);
                                                        }
                                                      else
                                                        {
                                                          t = h_15;
                                                          t = d_14;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    z_13 = ATgetArgument(t, 0);
                                                    a_14 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm m_15 = t;
                                                      int n_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm h_33 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                          t = s_0(t);
                                                          h_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, h_33);
                                                          t = s_0(t);
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
                                                                ATerm l_33 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, c_14, y_13);
                                                                t = s_0(t);
                                                                l_33 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, x_13, l_33);
                                                                t = s_0(t);
                                                                ;
                                                                LocalPopChoice(p_15);
                                                              }
                                                            else
                                                              {
                                                                t = o_15;
                                                                t = d_14;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        z_13 = ATgetArgument(t, 0);
                                                        a_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_15 = t;
                                                          int t_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm s_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, c_14, y_13);
                                                              t = s_0(t);
                                                              s_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, x_13, s_33);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(t_15);
                                                            }
                                                          else
                                                            {
                                                              t = s_15;
                                                              {
                                                                ATerm u_15 = t;
                                                                int v_15 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm w_33 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                                    t = s_0(t);
                                                                    w_33 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, w_33);
                                                                    t = s_0(t);
                                                                    ;
                                                                    LocalPopChoice(v_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = u_15;
                                                                    t = d_14;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm w_15 = t;
                                                        int y_15 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm b_34 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, c_14, y_13);
                                                            t = s_0(t);
                                                            b_34 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, x_13, b_34);
                                                            t = s_0(t);
                                                            ;
                                                            LocalPopChoice(y_15);
                                                          }
                                                        else
                                                          {
                                                            t = w_15;
                                                            t = d_14;
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
                                            x_13 = ATgetArgument(t, 0);
                                            y_13 = ATgetArgument(t, 1);
                                            t = c_14;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = b_14;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm b_16 = t;
                                                    int c_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_q_7;
                                                        t = s_0(t);
                                                        ;
                                                        LocalPopChoice(c_16);
                                                      }
                                                    else
                                                      {
                                                        t = b_16;
                                                        {
                                                          ATerm d_16 = t;
                                                          int f_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, c_14, y_13);
                                                              t = s_0(t);
                                                              p_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, x_13, p_34);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(f_16);
                                                            }
                                                          else
                                                            {
                                                              t = d_16;
                                                              t = d_14;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        z_13 = ATgetArgument(t, 0);
                                                        a_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm g_16 = t;
                                                          int h_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                              t = s_0(t);
                                                              v_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, v_34);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(h_16);
                                                            }
                                                          else
                                                            {
                                                              t = g_16;
                                                              {
                                                                ATerm i_16 = t;
                                                                int j_16 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm b_35 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, c_14, y_13);
                                                                    t = s_0(t);
                                                                    b_35 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, x_13, b_35);
                                                                    t = s_0(t);
                                                                    ;
                                                                    LocalPopChoice(j_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = i_16;
                                                                    t = d_14;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            z_13 = ATgetArgument(t, 0);
                                                            a_14 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm p_16 = t;
                                                              int q_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm i_35 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, c_14, y_13);
                                                                  t = s_0(t);
                                                                  i_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, x_13, i_35);
                                                                  t = s_0(t);
                                                                  ;
                                                                  LocalPopChoice(q_16);
                                                                }
                                                              else
                                                                {
                                                                  t = p_16;
                                                                  {
                                                                    ATerm r_16 = t;
                                                                    int s_16 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm s_35 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                                        t = s_0(t);
                                                                        s_35 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, s_35);
                                                                        t = s_0(t);
                                                                        ;
                                                                        LocalPopChoice(s_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_16;
                                                                        t = d_14;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm t_16 = t;
                                                            int u_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm y_35 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, c_14, y_13);
                                                                t = s_0(t);
                                                                y_35 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, x_13, y_35);
                                                                t = s_0(t);
                                                                ;
                                                                LocalPopChoice(u_16);
                                                              }
                                                            else
                                                              {
                                                                t = t_16;
                                                                t = d_14;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = c_14;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = b_14;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm y_16 = t;
                                                    int z_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_q_7;
                                                        t = s_0(t);
                                                        ;
                                                        LocalPopChoice(z_16);
                                                      }
                                                    else
                                                      {
                                                        t = y_16;
                                                        t = d_14;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        z_13 = ATgetArgument(t, 0);
                                                        a_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_17 = t;
                                                          int b_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm j_36 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                              t = s_0(t);
                                                              j_36 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, j_36);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(b_17);
                                                            }
                                                          else
                                                            {
                                                              t = a_17;
                                                              t = d_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            z_13 = ATgetArgument(t, 0);
                                                            a_14 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm c_17 = t;
                                                              int d_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm p_36 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                                  t = s_0(t);
                                                                  p_36 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, p_36);
                                                                  t = s_0(t);
                                                                  ;
                                                                  LocalPopChoice(d_17);
                                                                }
                                                              else
                                                                {
                                                                  t = c_17;
                                                                  t = d_14;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = d_14;
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
                    c_14 = ATgetArgument(t, 0);
                    b_14 = ATgetArgument(t, 1);
                    t = b_14;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = c_14;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm i_17 = t;
                            int j_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_j_7;
                                t = s_0(t);
                                ;
                                LocalPopChoice(j_17);
                              }
                            else
                              {
                                t = i_17;
                                t = c_14;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = b_14;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    z_13 = ATgetArgument(t, 0);
                                    a_14 = ATgetArgument(t, 1);
                                    t = c_14;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        z_13 = ATgetArgument(t, 0);
                                        t = c_14;
                                      }
                                    else
                                      {
                                        t = c_14;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = c_14;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm k_17 = t;
                            int m_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_j_7;
                                t = s_0(t);
                                ;
                                LocalPopChoice(m_17);
                              }
                            else
                              {
                                t = k_17;
                                {
                                  ATerm n_17 = t;
                                  int o_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = b_14;
                                      if((c_14 != t))
                                        {
                                          _fail(t);
                                        }
                                      ;
                                      LocalPopChoice(o_17);
                                    }
                                  else
                                    {
                                      t = n_17;
                                      t = d_14;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = b_14;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    z_13 = ATgetArgument(t, 0);
                                    a_14 = ATgetArgument(t, 1);
                                    {
                                      ATerm p_17 = t;
                                      int q_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm u_38 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, a_14, b_14);
                                          t = s_0(t);
                                          u_38 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, z_13, u_38);
                                          t = s_0(t);
                                          ;
                                          LocalPopChoice(q_17);
                                        }
                                      else
                                        {
                                          t = p_17;
                                          {
                                            ATerm r_17 = t;
                                            int s_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = b_14;
                                                if((c_14 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                ;
                                                LocalPopChoice(s_17);
                                              }
                                            else
                                              {
                                                t = r_17;
                                                t = d_14;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        z_13 = ATgetArgument(t, 0);
                                        {
                                          ATerm u_17 = t;
                                          int e_18 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = b_14;
                                              if((c_14 != t))
                                                {
                                                  _fail(t);
                                                }
                                              ;
                                              LocalPopChoice(e_18);
                                            }
                                          else
                                            {
                                              t = u_17;
                                              {
                                                ATerm f_18 = t;
                                                int h_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = z_13;
                                                    t = topdown_1_0(m_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, z_13);
                                                    t = bottomup_1_0(s_0, t);
                                                    ;
                                                    LocalPopChoice(h_18);
                                                  }
                                                else
                                                  {
                                                    t = f_18;
                                                    t = d_14;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm k_18 = t;
                                        int l_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = b_14;
                                            if((c_14 != t))
                                              {
                                                _fail(t);
                                              }
                                            ;
                                            LocalPopChoice(l_18);
                                          }
                                        else
                                          {
                                            t = k_18;
                                            t = d_14;
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
                        c_14 = ATgetArgument(t, 0);
                        b_14 = ATgetArgument(t, 1);
                        t = b_14;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = c_14;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm m_18 = t;
                                int n_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_j_7;
                                    t = s_0(t);
                                    ;
                                    LocalPopChoice(n_18);
                                  }
                                else
                                  {
                                    t = m_18;
                                    t = b_14;
                                  }
                              }
                            else
                              {
                                ATerm o_18 = t;
                                int p_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_j_7;
                                    t = s_0(t);
                                    ;
                                    LocalPopChoice(p_18);
                                  }
                                else
                                  {
                                    t = o_18;
                                    t = d_14;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = c_14;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm q_18 = t;
                                    int r_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_q_7;
                                        t = s_0(t);
                                        ;
                                        LocalPopChoice(r_18);
                                      }
                                    else
                                      {
                                        t = q_18;
                                        t = b_14;
                                      }
                                  }
                                else
                                  {
                                    ATerm s_18 = t;
                                    int t_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_q_7;
                                        t = s_0(t);
                                        ;
                                        LocalPopChoice(t_18);
                                      }
                                    else
                                      {
                                        t = s_18;
                                        t = d_14;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    x_13 = ATgetArgument(t, 0);
                                    y_13 = ATgetArgument(t, 1);
                                    t = c_14;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = b_14;
                                      }
                                    else
                                      {
                                        ATerm u_18 = t;
                                        int v_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm u_39 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, c_14, x_13);
                                            t = conc_0_0(t);
                                            u_39 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, u_39, y_13);
                                            t = bottomup_1_0(s_0, t);
                                            ;
                                            LocalPopChoice(v_18);
                                          }
                                        else
                                          {
                                            t = u_18;
                                            t = d_14;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = c_14;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = b_14;
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
                        ATerm w_18 = t;
                        int x_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm y_18 = ATgetArgument(t, 0);
                                b_14 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(x_18);
                            t = b_14;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm z_18 = t;
                                int a_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_j_7;
                                    t = s_0(t);
                                    ;
                                    LocalPopChoice(a_19);
                                  }
                                else
                                  {
                                    t = z_18;
                                    t = d_14;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm b_19 = t;
                                    int c_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_q_7;
                                        t = s_0(t);
                                        ;
                                        LocalPopChoice(c_19);
                                      }
                                    else
                                      {
                                        t = b_19;
                                        t = d_14;
                                      }
                                  }
                                else
                                  {
                                    t = d_14;
                                  }
                              }
                          }
                        else
                          {
                            t = w_18;
                            if(match_cons(t, sym_All_1))
                              {
                                c_14 = ATgetArgument(t, 0);
                                t = c_14;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm d_19 = t;
                                    int e_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_j_7;
                                        t = s_0(t);
                                        ;
                                        LocalPopChoice(e_19);
                                      }
                                    else
                                      {
                                        t = d_19;
                                        t = d_14;
                                      }
                                  }
                                else
                                  {
                                    t = d_14;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    c_14 = ATgetArgument(t, 0);
                                    t = c_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm f_19 = t;
                                        int g_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_j_7;
                                            t = s_0(t);
                                            ;
                                            LocalPopChoice(g_19);
                                          }
                                        else
                                          {
                                            t = f_19;
                                            {
                                              ATerm h_19 = t;
                                              int i_19 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm f_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,a_41 = NULL;
                                                  t = d_14;
                                                  t = new_0_0(t);
                                                  f_40 = t;
                                                  t = bottomup_1_0(s_0, t);
                                                  v_40 = t;
                                                  t = (ATerm) ATempty;
                                                  t = s_0(t);
                                                  a_41 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(a_41), v_40);
                                                  t = s_0(t);
                                                  k_40 = t;
                                                  t = f_40;
                                                  t = bottomup_1_0(s_0, t);
                                                  u_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, u_40);
                                                  t = s_0(t);
                                                  t_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, t_40);
                                                  t = s_0(t);
                                                  m_40 = t;
                                                  t = c_14;
                                                  t = bottomup_1_0(s_0, t);
                                                  o_40 = t;
                                                  t = f_40;
                                                  t = bottomup_1_0(s_0, t);
                                                  s_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, s_40);
                                                  t = s_0(t);
                                                  r_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, r_40);
                                                  t = s_0(t);
                                                  p_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_40, p_40);
                                                  t = s_0(t);
                                                  n_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_40, n_40);
                                                  t = s_0(t);
                                                  l_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, k_40, l_40);
                                                  t = s_0(t);
                                                  ;
                                                  LocalPopChoice(i_19);
                                                }
                                              else
                                                {
                                                  t = h_19;
                                                  t = d_14;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm j_19 = t;
                                            int k_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_7;
                                                t = s_0(t);
                                                ;
                                                LocalPopChoice(k_19);
                                              }
                                            else
                                              {
                                                t = j_19;
                                                {
                                                  ATerm l_19 = t;
                                                  int m_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL;
                                                      t = d_14;
                                                      t = new_0_0(t);
                                                      d_41 = t;
                                                      t = bottomup_1_0(s_0, t);
                                                      o_41 = t;
                                                      t = (ATerm) ATempty;
                                                      t = s_0(t);
                                                      p_41 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(p_41), o_41);
                                                      t = s_0(t);
                                                      e_41 = t;
                                                      t = d_41;
                                                      t = bottomup_1_0(s_0, t);
                                                      n_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, n_41);
                                                      t = s_0(t);
                                                      m_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, m_41);
                                                      t = s_0(t);
                                                      g_41 = t;
                                                      t = c_14;
                                                      t = bottomup_1_0(s_0, t);
                                                      i_41 = t;
                                                      t = d_41;
                                                      t = bottomup_1_0(s_0, t);
                                                      l_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, l_41);
                                                      t = s_0(t);
                                                      k_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, k_41);
                                                      t = s_0(t);
                                                      j_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_41, j_41);
                                                      t = s_0(t);
                                                      h_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_41, h_41);
                                                      t = s_0(t);
                                                      f_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, e_41, f_41);
                                                      t = s_0(t);
                                                      ;
                                                      LocalPopChoice(m_19);
                                                    }
                                                  else
                                                    {
                                                      t = l_19;
                                                      t = d_14;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                z_13 = ATgetArgument(t, 0);
                                                a_14 = ATgetArgument(t, 1);
                                                t = a_14;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    k_13 = ATgetArgument(t, 0);
                                                    m_13 = ATgetArgument(t, 1);
                                                    t = k_13;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        l_13 = ATgetArgument(t, 0);
                                                        t = z_13;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            v_13 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm n_19 = t;
                                                              int o_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, l_13);
                                                                  t = s_0(t);
                                                                  w_41 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_41, m_13);
                                                                  t = s_0(t);
                                                                  v_41 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_13, v_41);
                                                                  t = s_0(t);
                                                                  u_41 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, u_41);
                                                                  t = s_0(t);
                                                                  ;
                                                                  LocalPopChoice(o_19);
                                                                }
                                                              else
                                                                {
                                                                  t = n_19;
                                                                  {
                                                                    ATerm p_19 = t;
                                                                    int q_19 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL;
                                                                        t = d_14;
                                                                        t = new_0_0(t);
                                                                        y_41 = t;
                                                                        t = bottomup_1_0(s_0, t);
                                                                        j_42 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = s_0(t);
                                                                        k_42 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(k_42), j_42);
                                                                        t = s_0(t);
                                                                        z_41 = t;
                                                                        t = y_41;
                                                                        t = bottomup_1_0(s_0, t);
                                                                        i_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, i_42);
                                                                        t = s_0(t);
                                                                        h_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, h_42);
                                                                        t = s_0(t);
                                                                        b_42 = t;
                                                                        t = c_14;
                                                                        t = bottomup_1_0(s_0, t);
                                                                        d_42 = t;
                                                                        t = y_41;
                                                                        t = bottomup_1_0(s_0, t);
                                                                        g_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, g_42);
                                                                        t = s_0(t);
                                                                        f_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, f_42);
                                                                        t = s_0(t);
                                                                        e_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, d_42, e_42);
                                                                        t = s_0(t);
                                                                        c_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, b_42, c_42);
                                                                        t = s_0(t);
                                                                        a_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, z_41, a_42);
                                                                        t = s_0(t);
                                                                        ;
                                                                        LocalPopChoice(q_19);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = p_19;
                                                                        t = d_14;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm r_19 = t;
                                                            int s_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,g_43 = NULL;
                                                                t = d_14;
                                                                t = new_0_0(t);
                                                                s_42 = t;
                                                                t = bottomup_1_0(s_0, t);
                                                                d_43 = t;
                                                                t = (ATerm) ATempty;
                                                                t = s_0(t);
                                                                g_43 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(g_43), d_43);
                                                                t = s_0(t);
                                                                t_42 = t;
                                                                t = s_42;
                                                                t = bottomup_1_0(s_0, t);
                                                                c_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, c_43);
                                                                t = s_0(t);
                                                                b_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, b_43);
                                                                t = s_0(t);
                                                                v_42 = t;
                                                                t = c_14;
                                                                t = bottomup_1_0(s_0, t);
                                                                x_42 = t;
                                                                t = s_42;
                                                                t = bottomup_1_0(s_0, t);
                                                                a_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, a_43);
                                                                t = s_0(t);
                                                                z_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, z_42);
                                                                t = s_0(t);
                                                                y_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, x_42, y_42);
                                                                t = s_0(t);
                                                                w_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, v_42, w_42);
                                                                t = s_0(t);
                                                                u_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, t_42, u_42);
                                                                t = s_0(t);
                                                                ;
                                                                LocalPopChoice(s_19);
                                                              }
                                                            else
                                                              {
                                                                t = r_19;
                                                                t = d_14;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = z_13;
                                                        {
                                                          ATerm t_19 = t;
                                                          int u_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL;
                                                              t = d_14;
                                                              t = new_0_0(t);
                                                              j_43 = t;
                                                              t = bottomup_1_0(s_0, t);
                                                              u_43 = t;
                                                              t = (ATerm) ATempty;
                                                              t = s_0(t);
                                                              v_43 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(v_43), u_43);
                                                              t = s_0(t);
                                                              k_43 = t;
                                                              t = j_43;
                                                              t = bottomup_1_0(s_0, t);
                                                              t_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, t_43);
                                                              t = s_0(t);
                                                              s_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, s_43);
                                                              t = s_0(t);
                                                              m_43 = t;
                                                              t = c_14;
                                                              t = bottomup_1_0(s_0, t);
                                                              o_43 = t;
                                                              t = j_43;
                                                              t = bottomup_1_0(s_0, t);
                                                              r_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, r_43);
                                                              t = s_0(t);
                                                              q_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, q_43);
                                                              t = s_0(t);
                                                              p_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, o_43, p_43);
                                                              t = s_0(t);
                                                              n_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_43, n_43);
                                                              t = s_0(t);
                                                              l_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, k_43, l_43);
                                                              t = s_0(t);
                                                              ;
                                                              LocalPopChoice(u_19);
                                                            }
                                                          else
                                                            {
                                                              t = t_19;
                                                              t = d_14;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = z_13;
                                                    {
                                                      ATerm v_19 = t;
                                                      int w_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL;
                                                          t = d_14;
                                                          t = new_0_0(t);
                                                          y_43 = t;
                                                          t = bottomup_1_0(s_0, t);
                                                          j_44 = t;
                                                          t = (ATerm) ATempty;
                                                          t = s_0(t);
                                                          k_44 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(k_44), j_44);
                                                          t = s_0(t);
                                                          z_43 = t;
                                                          t = y_43;
                                                          t = bottomup_1_0(s_0, t);
                                                          i_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, i_44);
                                                          t = s_0(t);
                                                          h_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, h_44);
                                                          t = s_0(t);
                                                          b_44 = t;
                                                          t = c_14;
                                                          t = bottomup_1_0(s_0, t);
                                                          d_44 = t;
                                                          t = y_43;
                                                          t = bottomup_1_0(s_0, t);
                                                          g_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, g_44);
                                                          t = s_0(t);
                                                          f_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, f_44);
                                                          t = s_0(t);
                                                          e_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_44, e_44);
                                                          t = s_0(t);
                                                          c_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_44, c_44);
                                                          t = s_0(t);
                                                          a_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, z_43, a_44);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(w_19);
                                                        }
                                                      else
                                                        {
                                                          t = v_19;
                                                          t = d_14;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    z_13 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm x_19 = t;
                                                      int y_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, z_13);
                                                          t = s_0(t);
                                                          ;
                                                          LocalPopChoice(y_19);
                                                        }
                                                      else
                                                        {
                                                          t = x_19;
                                                          {
                                                            ATerm z_19 = t;
                                                            int a_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL;
                                                                t = d_14;
                                                                t = new_0_0(t);
                                                                o_44 = t;
                                                                t = bottomup_1_0(s_0, t);
                                                                z_44 = t;
                                                                t = (ATerm) ATempty;
                                                                t = s_0(t);
                                                                a_45 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(a_45), z_44);
                                                                t = s_0(t);
                                                                p_44 = t;
                                                                t = o_44;
                                                                t = bottomup_1_0(s_0, t);
                                                                y_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, y_44);
                                                                t = s_0(t);
                                                                x_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, x_44);
                                                                t = s_0(t);
                                                                r_44 = t;
                                                                t = c_14;
                                                                t = bottomup_1_0(s_0, t);
                                                                t_44 = t;
                                                                t = o_44;
                                                                t = bottomup_1_0(s_0, t);
                                                                w_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, w_44);
                                                                t = s_0(t);
                                                                v_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, v_44);
                                                                t = s_0(t);
                                                                u_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, t_44, u_44);
                                                                t = s_0(t);
                                                                s_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, r_44, s_44);
                                                                t = s_0(t);
                                                                q_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, p_44, q_44);
                                                                t = s_0(t);
                                                                ;
                                                                LocalPopChoice(a_20);
                                                              }
                                                            else
                                                              {
                                                                t = z_19;
                                                                t = d_14;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm b_20 = t;
                                                    int c_20 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL;
                                                        t = d_14;
                                                        t = new_0_0(t);
                                                        d_45 = t;
                                                        t = bottomup_1_0(s_0, t);
                                                        o_45 = t;
                                                        t = (ATerm) ATempty;
                                                        t = s_0(t);
                                                        p_45 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(p_45), o_45);
                                                        t = s_0(t);
                                                        e_45 = t;
                                                        t = d_45;
                                                        t = bottomup_1_0(s_0, t);
                                                        n_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, n_45);
                                                        t = s_0(t);
                                                        m_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, m_45);
                                                        t = s_0(t);
                                                        g_45 = t;
                                                        t = c_14;
                                                        t = bottomup_1_0(s_0, t);
                                                        i_45 = t;
                                                        t = d_45;
                                                        t = bottomup_1_0(s_0, t);
                                                        l_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, l_45);
                                                        t = s_0(t);
                                                        k_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, k_45);
                                                        t = s_0(t);
                                                        j_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, i_45, j_45);
                                                        t = s_0(t);
                                                        h_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_45, h_45);
                                                        t = s_0(t);
                                                        f_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, e_45, f_45);
                                                        t = s_0(t);
                                                        ;
                                                        LocalPopChoice(c_20);
                                                      }
                                                    else
                                                      {
                                                        t = b_20;
                                                        t = d_14;
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
                                        c_14 = ATgetArgument(t, 0);
                                        t = c_14;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm d_20 = t;
                                            int e_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_j_7;
                                                t = s_0(t);
                                                ;
                                                LocalPopChoice(e_20);
                                              }
                                            else
                                              {
                                                t = d_20;
                                                t = d_14;
                                              }
                                          }
                                        else
                                          {
                                            t = d_14;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            c_14 = ATgetArgument(t, 0);
                                            t = c_14;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm f_20 = t;
                                                int g_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_q_7;
                                                    t = s_0(t);
                                                    ;
                                                    LocalPopChoice(g_20);
                                                  }
                                                else
                                                  {
                                                    t = f_20;
                                                    t = d_14;
                                                  }
                                              }
                                            else
                                              {
                                                t = d_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                c_14 = ATgetArgument(t, 0);
                                                t = c_14;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm h_20 = t;
                                                    int i_20 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_q_7;
                                                        t = s_0(t);
                                                        ;
                                                        LocalPopChoice(i_20);
                                                      }
                                                    else
                                                      {
                                                        t = h_20;
                                                        t = d_14;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = d_14;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm j_20 = t;
                                                int k_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm l_20 = ATgetArgument(t, 0);
                                                        b_14 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(k_20);
                                                    t = b_14;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm m_20 = t;
                                                        int n_20 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_q_7;
                                                            t = s_0(t);
                                                            ;
                                                            LocalPopChoice(n_20);
                                                          }
                                                        else
                                                          {
                                                            t = m_20;
                                                            t = d_14;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = d_14;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = j_20;
                                                    {
                                                      ATerm o_20 = t;
                                                      int q_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm r_20 = ATgetArgument(t, 0);
                                                              b_14 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(q_20);
                                                          {
                                                            ATerm s_20 = t;
                                                            int t_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = b_14;
                                                                t = fetch_1_0(n_1, t);
                                                                t = term_q_7;
                                                                t = bottomup_1_0(s_0, t);
                                                                ;
                                                                LocalPopChoice(t_20);
                                                              }
                                                            else
                                                              {
                                                                t = s_20;
                                                                t = d_14;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = o_20;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              c_14 = ATgetArgument(t, 0);
                                                              b_14 = ATgetArgument(t, 1);
                                                              t = b_14;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = c_14;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = b_14;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          z_13 = ATgetArgument(t, 0);
                                                                          a_14 = ATgetArgument(t, 1);
                                                                          t = c_14;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = c_14;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = c_14;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = b_14;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          z_13 = ATgetArgument(t, 0);
                                                                          a_14 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm u_20 = t;
                                                                            int v_20 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm x_46 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, a_14, b_14);
                                                                                t = s_0(t);
                                                                                x_46 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, z_13, x_46);
                                                                                t = s_0(t);
                                                                                ;
                                                                                LocalPopChoice(v_20);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = u_20;
                                                                                {
                                                                                  ATerm w_20 = t;
                                                                                  int x_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = b_14;
                                                                                      if((c_14 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      ;
                                                                                      LocalPopChoice(x_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = w_20;
                                                                                      t = d_14;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm y_20 = t;
                                                                          int z_20 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = b_14;
                                                                              if((c_14 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              ;
                                                                              LocalPopChoice(z_20);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = y_20;
                                                                              t = d_14;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  c_14 = ATgetArgument(t, 0);
                                                                  b_14 = ATgetArgument(t, 1);
                                                                  j_13 = ATgetArgument(t, 2);
                                                                  t = j_13;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm a_21 = t;
                                                                      int b_21 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_14, b_14);
                                                                          t = s_0(t);
                                                                          ;
                                                                          LocalPopChoice(b_21);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = a_21;
                                                                          t = d_14;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = d_14;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      c_14 = ATgetArgument(t, 0);
                                                                      b_14 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm c_21 = t;
                                                                        int d_21 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, c_14, b_14);
                                                                            t = s_0(t);
                                                                            ;
                                                                            LocalPopChoice(d_21);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = c_21;
                                                                            t = d_14;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          c_14 = ATgetArgument(t, 0);
                                                                          t = c_14;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              z_13 = ATgetFirst((ATermList) t);
                                                                              a_14 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm e_21 = t;
                                                                                int f_21 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm m_47 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, a_14);
                                                                                    t = s_0(t);
                                                                                    m_47 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, z_13, m_47);
                                                                                    t = s_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(f_21);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = e_21;
                                                                                    t = d_14;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm g_21 = t;
                                                                                  int h_21 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_q_7;
                                                                                      t = s_0(t);
                                                                                      ;
                                                                                      LocalPopChoice(h_21);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = g_21;
                                                                                      t = d_14;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = d_14;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              c_14 = ATgetArgument(t, 0);
                                                                              t = c_14;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  z_13 = ATgetFirst((ATermList) t);
                                                                                  a_14 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm j_21 = t;
                                                                                    int s_21 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm s_47 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, a_14);
                                                                                        t = s_0(t);
                                                                                        s_47 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, z_13, s_47);
                                                                                        t = s_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(s_21);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = j_21;
                                                                                        t = d_14;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm t_21 = t;
                                                                                      int v_21 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_q_7;
                                                                                          t = s_0(t);
                                                                                          ;
                                                                                          LocalPopChoice(v_21);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = t_21;
                                                                                          t = d_14;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = d_14;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  c_14 = ATgetArgument(t, 0);
                                                                                  t = c_14;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      z_13 = ATgetFirst((ATermList) t);
                                                                                      a_14 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm w_21 = t;
                                                                                        int x_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm a_48 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, a_14);
                                                                                            t = s_0(t);
                                                                                            a_48 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_48);
                                                                                            t = s_0(t);
                                                                                            ;
                                                                                            LocalPopChoice(x_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = w_21;
                                                                                            t = d_14;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm z_21 = t;
                                                                                          int a_22 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_j_7;
                                                                                              t = s_0(t);
                                                                                              ;
                                                                                              LocalPopChoice(a_22);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = z_21;
                                                                                              t = d_14;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = d_14;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_RDefT_4))
                                                                                    {
                                                                                      c_14 = ATgetArgument(t, 0);
                                                                                      b_14 = ATgetArgument(t, 1);
                                                                                      j_13 = ATgetArgument(t, 2);
                                                                                      i_13 = ATgetArgument(t, 3);
                                                                                      {
                                                                                        ATerm b_22 = t;
                                                                                        int d_22 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm h_48 = NULL,k_48 = NULL;
                                                                                            t = b_14;
                                                                                            t = map1_1_0(o_1, t);
                                                                                            h_48 = t;
                                                                                            t = j_13;
                                                                                            t = map1_1_0(p_1, t);
                                                                                            k_48 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, c_14, h_48, k_48, i_13);
                                                                                            t = bottomup_1_0(s_0, t);
                                                                                            ;
                                                                                            LocalPopChoice(d_22);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = b_22;
                                                                                            t = d_14;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_SDefT_4))
                                                                                        {
                                                                                          c_14 = ATgetArgument(t, 0);
                                                                                          b_14 = ATgetArgument(t, 1);
                                                                                          j_13 = ATgetArgument(t, 2);
                                                                                          i_13 = ATgetArgument(t, 3);
                                                                                          {
                                                                                            ATerm e_22 = t;
                                                                                            int f_22 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm x_48 = NULL,z_48 = NULL;
                                                                                                t = j_13;
                                                                                                t = map1_1_0(q_1, t);
                                                                                                x_48 = t;
                                                                                                t = b_14;
                                                                                                t = map_1_0(w_1, t);
                                                                                                z_48 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, c_14, z_48, x_48, i_13);
                                                                                                t = bottomup_1_0(s_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(f_22);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = e_22;
                                                                                                {
                                                                                                  ATerm g_22 = t;
                                                                                                  int i_22 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm p_49 = NULL,r_49 = NULL;
                                                                                                      t = b_14;
                                                                                                      t = map1_1_0(c_2, t);
                                                                                                      p_49 = t;
                                                                                                      t = j_13;
                                                                                                      t = map_1_0(d_2, t);
                                                                                                      r_49 = t;
                                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, c_14, p_49, r_49, i_13);
                                                                                                      t = bottomup_1_0(s_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(i_22);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = g_22;
                                                                                                      t = d_14;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_InfixApp_3))
                                                                                            {
                                                                                              c_14 = ATgetArgument(t, 0);
                                                                                              b_14 = ATgetArgument(t, 1);
                                                                                              j_13 = ATgetArgument(t, 2);
                                                                                              {
                                                                                                ATerm j_22 = t;
                                                                                                int k_22 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL;
                                                                                                    t = term_l_22;
                                                                                                    t = bottomup_1_0(s_0, t);
                                                                                                    d_50 = t;
                                                                                                    t = (ATerm) ATempty;
                                                                                                    t = s_0(t);
                                                                                                    g_50 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(g_50), j_13);
                                                                                                    t = s_0(t);
                                                                                                    f_50 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(f_50), c_14);
                                                                                                    t = s_0(t);
                                                                                                    e_50 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Op_2, d_50, e_50);
                                                                                                    t = s_0(t);
                                                                                                    c_50 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_App_2, b_14, c_50);
                                                                                                    t = s_0(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(k_22);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = j_22;
                                                                                                    t = d_14;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_BAM_3))
                                                                                                {
                                                                                                  c_14 = ATgetArgument(t, 0);
                                                                                                  b_14 = ATgetArgument(t, 1);
                                                                                                  j_13 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm m_22 = t;
                                                                                                    int n_22 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, b_14);
                                                                                                        t = s_0(t);
                                                                                                        m_50 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, j_13);
                                                                                                        t = s_0(t);
                                                                                                        p_50 = t;
                                                                                                        t = (ATerm) ATempty;
                                                                                                        t = s_0(t);
                                                                                                        q_50 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(q_50), p_50);
                                                                                                        t = s_0(t);
                                                                                                        o_50 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(o_50), c_14);
                                                                                                        t = s_0(t);
                                                                                                        n_50 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(n_50), m_50);
                                                                                                        t = s_0(t);
                                                                                                        l_50 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, l_50);
                                                                                                        t = s_0(t);
                                                                                                        ;
                                                                                                        LocalPopChoice(n_22);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = m_22;
                                                                                                        t = d_14;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_AM_2))
                                                                                                    {
                                                                                                      c_14 = ATgetArgument(t, 0);
                                                                                                      b_14 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm o_22 = t;
                                                                                                        int p_22 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm u_50 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Match_1, b_14);
                                                                                                            t = s_0(t);
                                                                                                            u_50 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, c_14, u_50);
                                                                                                            t = s_0(t);
                                                                                                            ;
                                                                                                            LocalPopChoice(p_22);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = o_22;
                                                                                                            t = d_14;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_MA_2))
                                                                                                        {
                                                                                                          c_14 = ATgetArgument(t, 0);
                                                                                                          b_14 = ATgetArgument(t, 1);
                                                                                                          {
                                                                                                            ATerm r_22 = t;
                                                                                                            int s_22 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                ATerm y_50 = NULL;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, c_14);
                                                                                                                t = s_0(t);
                                                                                                                y_50 = t;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, y_50, b_14);
                                                                                                                t = s_0(t);
                                                                                                                ;
                                                                                                                LocalPopChoice(s_22);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = r_22;
                                                                                                                t = d_14;
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_BA_2))
                                                                                                            {
                                                                                                              c_14 = ATgetArgument(t, 0);
                                                                                                              b_14 = ATgetArgument(t, 1);
                                                                                                              {
                                                                                                                ATerm t_22 = t;
                                                                                                                int v_22 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    ATerm d_51 = NULL;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, b_14);
                                                                                                                    t = s_0(t);
                                                                                                                    d_51 = t;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, d_51, c_14);
                                                                                                                    t = s_0(t);
                                                                                                                    ;
                                                                                                                    LocalPopChoice(v_22);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = t_22;
                                                                                                                    t = d_14;
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_Let_2))
                                                                                                                {
                                                                                                                  c_14 = ATgetArgument(t, 0);
                                                                                                                  b_14 = ATgetArgument(t, 1);
                                                                                                                  t = b_14;
                                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                                    {
                                                                                                                      x_13 = ATgetArgument(t, 0);
                                                                                                                      y_13 = ATgetArgument(t, 1);
                                                                                                                      t = c_14;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = b_14;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          ATerm w_22 = t;
                                                                                                                          int x_22 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm p_51 = NULL;
                                                                                                                              t = (ATerm) ATmakeAppl(sym__2, c_14, x_13);
                                                                                                                              t = conc_0_0(t);
                                                                                                                              p_51 = t;
                                                                                                                              t = (ATerm) ATmakeAppl(sym_Let_2, p_51, y_13);
                                                                                                                              t = bottomup_1_0(s_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(x_22);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = w_22;
                                                                                                                              t = d_14;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_CallT_3))
                                                                                                                        {
                                                                                                                          x_13 = ATgetArgument(t, 0);
                                                                                                                          y_13 = ATgetArgument(t, 1);
                                                                                                                          t_13 = ATgetArgument(t, 2);
                                                                                                                          t = t_13;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = y_13;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = x_13;
                                                                                                                                  if(match_cons(t, sym_SVar_1))
                                                                                                                                    {
                                                                                                                                      w_13 = ATgetArgument(t, 0);
                                                                                                                                      t = c_14;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = b_14;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              z_13 = ATgetFirst((ATermList) t);
                                                                                                                                              a_14 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                              t = a_14;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = z_13;
                                                                                                                                                  if(match_cons(t, sym_SDefT_4))
                                                                                                                                                    {
                                                                                                                                                      v_13 = ATgetArgument(t, 0);
                                                                                                                                                      q_13 = ATgetArgument(t, 1);
                                                                                                                                                      n_13 = ATgetArgument(t, 2);
                                                                                                                                                      o_13 = ATgetArgument(t, 3);
                                                                                                                                                      t = n_13;
                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                        {
                                                                                                                                                          t = q_13;
                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                            {
                                                                                                                                                              ATerm z_22 = t;
                                                                                                                                                              int a_23 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  t = w_13;
                                                                                                                                                                  if((v_13 != t))
                                                                                                                                                                    {
                                                                                                                                                                      _fail(t);
                                                                                                                                                                    }
                                                                                                                                                                  t = o_13;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm b_23 = t;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        ATerm h_2 (ATerm t)
                                                                                                                                                                        {
                                                                                                                                                                          if(match_cons(t, sym_CallT_3))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm c_23 = ATgetArgument(t, 0);
                                                                                                                                                                              if(match_cons(c_23, sym_SVar_1))
                                                                                                                                                                                {
                                                                                                                                                                                  if((v_13 != ATgetArgument(c_23, 0)))
                                                                                                                                                                                    {
                                                                                                                                                                                      _fail(ATgetArgument(c_23, 0));
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              {
                                                                                                                                                                                ATerm e_23 = ATgetArgument(t, 1);
                                                                                                                                                                                if(((ATgetType(e_23) != AT_LIST) || !(ATisEmpty(e_23))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                              {
                                                                                                                                                                                ATerm f_23 = ATgetArgument(t, 2);
                                                                                                                                                                                if(((ATgetType(f_23) != AT_LIST) || !(ATisEmpty(f_23))))
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
                                                                                                                                                                        t = b_23;
                                                                                                                                                                      }
                                                                                                                                                                    t = o_13;
                                                                                                                                                                    t = bottomup_1_0(s_0, t);
                                                                                                                                                                  }
                                                                                                                                                                  ;
                                                                                                                                                                  LocalPopChoice(a_23);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = z_22;
                                                                                                                                                                  t = d_14;
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = d_14;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = d_14;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = d_14;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = d_14;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = d_14;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = c_14;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = b_14;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = d_14;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = c_14;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                    {
                                                                                                                                      t = b_14;
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = d_14;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = c_14;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = b_14;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = d_14;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = c_14;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = b_14;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = d_14;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_As_2))
                                                                                                                    {
                                                                                                                      c_14 = ATgetArgument(t, 0);
                                                                                                                      b_14 = ATgetArgument(t, 1);
                                                                                                                      t = c_14;
                                                                                                                      if(match_cons(t, sym_Wld_0))
                                                                                                                        {
                                                                                                                          t = b_14;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = d_14;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = d_14;
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
ATerm map_1_0 (ATerm x_106 (ATerm), ATerm t)
{
  ATerm s_53 (ATerm t)
  {
    ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL;
    p_53 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_53;
      }
    else
      {
        ATerm l_5 = NULL,o_5 = NULL,p_5 = NULL,v_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_53 = ATgetFirst((ATermList) t);
            r_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_53);
        l_5 = t;
        t = q_53;
        t = x_106(t);
        o_5 = t;
        t = r_53;
        t = s_53(t);
        p_5 = t;
        t = (ATerm) ATinsert(CheckATermList(p_5), o_5);
        v_2 = t;
        t = SSLsetAnnotations(v_2, l_5);
      }
    return(t);
  }
  t = s_53(t);
  return(t);
}
ATerm Cons_2_0 (ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,x_2 = NULL;
  b_54 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_53 = ATgetFirst((ATermList) t);
      y_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_54);
  u_53 = t;
  t = v_53;
  t = x_75(t);
  z_53 = t;
  t = y_53;
  t = y_75(t);
  a_54 = t;
  t = (ATerm) ATinsert(CheckATermList(a_54), z_53);
  x_2 = t;
  t = SSLsetAnnotations(x_2, u_53);
  return(t);
}
ATerm n_11 (ATerm f_49, ATerm g_49, ATerm t)
{
  ATerm c_54 = NULL;
  t = SSL_fputc(f_49, g_49);
  c_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_54);
  return(t);
}
ATerm o_11 (ATerm t_52, ATerm u_52, ATerm t)
{
  ATerm d_54 = NULL;
  t = SSL_write_term_to_stream_text(t_52, u_52);
  d_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_54);
  return(t);
}
ATerm q_11 (ATerm y_112 (ATerm), ATerm b_474, ATerm x_52, ATerm t)
{
  ATerm e_54 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_474, term_g_23);
  t = open_stream_0_0(t);
  e_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_54, x_52);
  t = y_112(t);
  t = fclose_0_0(t);
  t = x_52;
  return(t);
}
ATerm p_11 (ATerm p_52, ATerm q_52, ATerm t)
{
  ATerm k_54 = NULL;
  t = SSL_write_term_to_stream_baf(p_52, q_52);
  k_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_54);
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_23 = ATgetArgument(t, 0);
      if(match_cons(h_23, sym_Stream_1))
        {
          n_54 = ATgetArgument(h_23, 0);
        }
      else
        _fail(t);
      o_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_11(n_54, o_54, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_23 = ATgetArgument(t, 0);
      if(match_cons(i_23, sym_Stream_1))
        {
          s_54 = ATgetArgument(i_23, 0);
        }
      else
        _fail(t);
      t_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_11(s_54, t_54, t);
  p_54 = t;
  t = term_j_23;
  q_54 = t;
  t = p_54;
  if(match_cons(t, sym_Stream_1))
    {
      r_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_23, p_54);
  t = n_11(q_54, r_54, t);
  return(t);
}
ATerm output_1_0 (ATerm h_117 (ATerm), ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL;
  t = h_117(t);
  m_54 = t;
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_23;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        t = term_n_23;
      }
    l_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_54, m_54);
    {
      ATerm o_23 = t;
      int p_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_r_23;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, l_54, m_54);
          LocalPopChoice(p_23);
          if(match_cons(t, sym__2))
            {
              ATerm s_23 = ATgetArgument(t, 0);
              ATerm t_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_11(k_2, l_54, m_54, t);
        }
      else
        {
          t = o_23;
          if(match_cons(t, sym__2))
            {
              ATerm u_23 = ATgetArgument(t, 0);
              ATerm w_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_11(r_2, l_54, m_54, t);
        }
    }
  }
  return(t);
}
ATerm h_55 (ATerm b_55, ATerm t)
{
  t = SSL_fclose(b_55);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL;
  f_55 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_55 = ATgetArgument(t, 0);
      {
        ATerm x_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_55);
            ;
            LocalPopChoice(y_23);
          }
        else
          {
            t = x_23;
            t = h_55(f_55, t);
          }
      }
    }
  else
    {
      t = h_55(f_55, t);
    }
  return(t);
}
ATerm r_11 (ATerm v_52, ATerm t)
{
  t = SSL_read_term_from_stream(v_52);
  return(t);
}
ATerm s_11 (ATerm h_49, ATerm i_49, ATerm t)
{
  ATerm j_55 = NULL;
  t = SSL_fopen(h_49, i_49);
  j_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_55);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_55 = NULL;
  t = SSL_stdin_stream();
  k_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_55);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_55 = NULL;
  t = SSL_stdout_stream();
  l_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_55);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_55 = NULL;
  t = SSL_stderr_stream();
  m_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_55);
  return(t);
}
ATerm u_56 (ATerm s_55, ATerm t)
{
  ATerm t_55 = NULL;
  t = SSL_explode_term(s_55);
  if(match_cons(t, sym__2))
    {
      ATerm z_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_24 = ATgetArgument(t, 1);
        if(((ATgetType(a_24) == AT_LIST) && !(ATisEmpty(a_24))))
          {
            t_55 = ATgetFirst((ATermList) a_24);
            {
              ATerm b_24 = (ATerm) ATgetNext((ATermList) a_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_55;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_55;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_55;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_55;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm v_56 (ATerm w_55, ATerm x_55, ATerm y_55, ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL,e_56 = NULL,z_2 = NULL;
  t = SSLgetAnnotations(y_55);
  b_56 = t;
  t = w_55;
  if(match_cons(t, sym_Path_1))
    {
      e_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_56, x_55);
  z_2 = t;
  t = SSLsetAnnotations(z_2, b_56);
  if(match_cons(t, sym__2))
    {
      z_55 = ATgetArgument(t, 0);
      a_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11(z_55, a_56, t);
  return(t);
}
ATerm w_56 (ATerm g_56, ATerm h_56, ATerm i_56, ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL,o_56 = NULL,a_3 = NULL;
  t = SSLgetAnnotations(i_56);
  l_56 = t;
  t = SSL_is_string(g_56);
  o_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_56, h_56);
  a_3 = t;
  t = SSLsetAnnotations(a_3, l_56);
  if(match_cons(t, sym__2))
    {
      j_56 = ATgetArgument(t, 0);
      k_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11(j_56, k_56, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm q_56 = NULL,s_56 = NULL,t_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_24 = ATgetArgument(t, 0);
      ATerm e_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  q_56 = t;
  if(match_cons(t, sym__2))
    {
      s_56 = ATgetArgument(t, 0);
      t_56 = ATgetArgument(t, 1);
      {
        ATerm f_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_56(q_56, t);
            ;
            LocalPopChoice(g_24);
          }
        else
          {
            t = f_24;
            {
              ATerm h_24 = t;
              int i_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_56(s_56, t_56, q_56, t);
                  ;
                  LocalPopChoice(i_24);
                }
              else
                {
                  t = h_24;
                  t = w_56(s_56, t_56, q_56, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_56(q_56, t);
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
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL;
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_57 = NULL;
      a_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_57, term_n_24);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      t = debug_1_0(s_2, t);
      _fail(t);
    }
  y_56 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(z_56, t);
  x_56 = t;
  t = y_56;
  t = fclose_0_0(t);
  t = x_56;
  return(t);
}
ATerm input_1_0 (ATerm i_117 (ATerm), ATerm t)
{
  ATerm o_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_24);
    }
  else
    {
      t = o_24;
      t = term_s_24;
    }
  t = ReadFromFile_0_0(t);
  t = i_117(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL;
  c_57 = t;
  t = term_t_24;
  t = whoami_0_0(t);
  d_57 = t;
  t = term_u_24;
  f_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_24), d_57), term_v_24);
  g_57 = t;
  t = SSL_printnl(f_57, g_57);
  t = term_x_24;
  e_57 = t;
  t = SSL_exit(e_57);
  t = c_57;
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm i_57 = NULL;
  i_57 = t;
  if(match_string(t, "-k"))
    {
      t = i_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_57;
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL;
  j_57 = t;
  t = SSL_string_to_int(j_57);
  k_57 = t;
  t = term_y_24;
  l_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_24, k_57);
  t = b_12(l_57, k_57, t);
  t = j_57;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_2, u_2, w_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm n_57 = NULL;
  n_57 = t;
  if(match_string(t, "-S"))
    {
      t = n_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_57;
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL;
  t = term_a_25;
  o_57 = t;
  t = term_b_25;
  p_57 = t;
  t = term_c_25;
  t = b_12(o_57, p_57, t);
  t = term_d_25;
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_e_25;
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
  ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL;
  q_57 = t;
  t = SSL_string_to_int(q_57);
  r_57 = t;
  t = term_a_25;
  s_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_25, r_57);
  t = b_12(s_57, r_57, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_57);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_f_25;
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
  ATerm t_57 = NULL,u_57 = NULL;
  t = term_h_25;
  t_57 = t;
  t = term_t_24;
  u_57 = t;
  t = term_i_25;
  t = b_12(t_57, u_57, t);
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
        int q_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_3, f_3, g_3, t);
            ;
            LocalPopChoice(q_25);
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
ATerm b_12 (ATerm w_53, ATerm x_53, ATerm t)
{
  ATerm v_57 = NULL;
  t = term_r_25;
  v_57 = t;
  t = SSL_table_put(v_57, w_53, x_53);
  t = (ATerm) ATmakeAppl(sym__3, term_r_25, w_53, x_53);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_58 = NULL,h_58 = NULL,i_58 = NULL;
      t = term_t_24;
      t = h_0(t);
      b_58 = t;
      t = term_s_25;
      h_58 = t;
      t = term_t_25;
      i_58 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_25, term_t_25, b_58);
      t = z_11(h_58, i_58, b_58, t);
      _fail(t);
    }
  else
    {
      ATerm l_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_57 = ATgetFirst((ATermList) t);
          a_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_57;
      t = d_0(t);
      t = term_t_24;
      t = g_0(t);
      l_58 = t;
      t = (ATerm) ATinsert(CheckATermList(a_58), l_58);
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm n_58 = NULL;
  n_58 = t;
  if(match_string(t, "-o"))
    {
      t = n_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_58;
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm o_58 = NULL,p_58 = NULL;
  o_58 = t;
  t = term_m_23;
  p_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_23, o_58);
  t = b_12(p_58, o_58, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_58);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_u_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_3, p_3, r_3, t);
  return(t);
}
ATerm z_11 (ATerm u_58, ATerm v_58, ATerm t_58, ATerm t)
{
  ATerm s_58 = NULL,w_58 = NULL,x_58 = NULL;
  s_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_58, v_58);
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_25 = ATgetArgument(t, 0);
            ATerm z_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_58, v_58);
        t = y_11(u_58, v_58, t);
        ;
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        t = (ATerm) ATempty;
      }
    w_58 = t;
    t = (ATerm) ATinsert(CheckATermList(w_58), t_58);
    x_58 = t;
    t = SSL_table_put(u_58, v_58, x_58);
    t = s_58;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL;
      t = term_t_24;
      t = m_0(t);
      i_59 = t;
      t = term_s_25;
      j_59 = t;
      t = term_t_25;
      k_59 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_25, term_t_25, i_59);
      t = z_11(j_59, k_59, i_59, t);
      _fail(t);
    }
  else
    {
      ATerm o_59 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_59 = ATgetFirst((ATermList) t);
          f_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_59;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_59 = ATgetFirst((ATermList) t);
          h_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_59;
      t = k_0(t);
      t = g_59;
      t = l_0(t);
      o_59 = t;
      t = (ATerm) ATinsert(CheckATermList(h_59), o_59);
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm q_59 = NULL;
  q_59 = t;
  if(match_string(t, "-i"))
    {
      t = q_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_59;
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm s_59 = NULL,t_59 = NULL;
  s_59 = t;
  t = term_r_24;
  t_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_24, s_59);
  t = b_12(t_59, s_59, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_59);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_3, w_3, b_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_24;
  t = whoami_0_0(t);
  u_59 = t;
  t = term_u_24;
  w_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_26), u_59);
  x_59 = t;
  t = SSL_printnl(w_59, x_59);
  t = term_x_24;
  v_59 = t;
  t = SSL_exit(v_59);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_c_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm u_11 (ATerm f_46, ATerm g_46, ATerm t)
{
  ATerm d_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_46, g_46);
      ;
      LocalPopChoice(f_26);
    }
  else
    {
      t = d_26;
      t = SSL_addr(f_46, g_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm t)
{
  ATerm z_59 = NULL,a_60 = NULL,b_60 = NULL;
  z_59 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_59;
      t = n_105(t);
    }
  else
    {
      ATerm e_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_60 = ATgetFirst((ATermList) t);
          b_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_60;
      t = foldr_2_0(n_105, o_105, t);
      e_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_60, e_60);
      t = o_105(t);
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
  t = u_11(e_6, f_6, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_60 = NULL,a_6 = NULL,b_6 = NULL;
  t = times_0_0(t);
  b_6 = t;
  t = SSL_explode_term(b_6);
  if(match_cons(t, sym__2))
    {
      ATerm g_26 = ATgetArgument(t, 0);
      a_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6;
  t = foldr_2_0(d_4, e_4, t);
  h_60 = t;
  t = SSL_TicksToSeconds(h_60);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_60 = NULL,v_60 = NULL,w_60 = NULL;
  u_60 = t;
  if(match_cons(t, sym__2))
    {
      v_60 = ATgetArgument(t, 0);
      w_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_60;
        if((v_60 != t))
          {
            _fail(t);
          }
        t = u_60;
        ;
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        t = (ATerm) ATmakeAppl(sym__2, v_60, w_60);
        {
          ATerm k_26 = t;
          int l_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_60, w_60);
              ;
              LocalPopChoice(l_26);
            }
          else
            {
              t = k_26;
              t = SSL_gtr(v_60, w_60);
            }
          t = (ATerm) ATmakeAppl(sym__2, v_60, w_60);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_114 (ATerm), ATerm t)
{
  ATerm a_61 = NULL;
  a_61 = t;
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_61 = NULL;
        t = term_a_25;
        t = get_config_0_0(t);
        c_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_61, term_x_24);
        t = geq_0_0(t);
        t = a_61;
        t = i_114(t);
        ;
        LocalPopChoice(n_26);
      }
    else
      {
        t = m_26;
        t = a_61;
      }
  }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm e_61 = NULL,g_61 = NULL,i_61 = NULL,j_61 = NULL;
  t = run_time_0_0(t);
  e_61 = t;
  t = term_t_24;
  t = whoami_0_0(t);
  g_61 = t;
  t = term_u_24;
  i_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_26), e_61), term_o_26), g_61);
  j_61 = t;
  t = SSL_printnl(i_61, j_61);
  t = (ATerm) ATmakeAppl(sym__2, term_u_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_26), e_61), term_o_26), g_61));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_61 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_25;
  k_61 = t;
  t = SSL_exit(k_61);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm s_61 = NULL,t_61 = NULL;
  t_61 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_61;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_61 = ATgetArgument(t, 0);
          {
            ATerm r_6 = NULL,e_3 = NULL;
            t = SSLgetAnnotations(t_61);
            r_6 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_61);
            e_3 = t;
            t = SSLsetAnnotations(e_3, r_6);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_61;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_116 (ATerm), ATerm t)
{
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
      t = fetch_1_0(h_4, t);
    }
  t = y_116(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm w_61 = NULL,x_61 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_61 = ATgetFirst((ATermList) t);
      x_61 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_62 = NULL,c_62 = NULL;
        ATerm i_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_62)), not_null(c_62));
          return(t);
        }
        t = x_61;
        t = j_0(t);
        if(((b_62 != NULL) && (b_62 != t)))
          _fail(t);
        else
          b_62 = t;
        t = w_61;
        t = i_0(t);
        if(((c_62 != NULL) && (c_62 != t)))
          _fail(t);
        else
          c_62 = t;
        t = x_61;
        t = reverse_acc_2_0(i_0, i_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_24;
      t = j_0(t);
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm g_62 = NULL,h_62 = NULL,i_62 = NULL,h_3 = NULL;
  i_62 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_62);
  g_62 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_62);
  h_3 = t;
  t = SSLsetAnnotations(h_3, g_62);
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm k_62 = NULL;
  k_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_62), term_u_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL;
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_26);
    }
  else
    {
      t = v_26;
      t = fetch_1_0(j_4, t);
    }
  t = term_y_26;
  t = echo_0_0(t);
  t = term_s_25;
  e_62 = t;
  t = term_t_25;
  f_62 = t;
  t = term_z_26;
  t = y_11(e_62, f_62, t);
  t = reverse_acc_2_0(_id, k_4, t);
  t = map_1_0(l_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm h_107 (ATerm), ATerm t)
{
  ATerm i_63 (ATerm t)
  {
    ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL;
    f_63 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_63 = ATgetFirst((ATermList) t);
        h_63 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_27 = t;
      int b_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_6 = NULL,c_7 = NULL,k_3 = NULL;
          t = SSLgetAnnotations(f_63);
          z_6 = t;
          t = g_63;
          t = h_107(t);
          c_7 = t;
          t = (ATerm) ATinsert(CheckATermList(h_63), c_7);
          k_3 = t;
          t = SSLsetAnnotations(k_3, z_6);
          ;
          LocalPopChoice(b_27);
        }
      else
        {
          t = a_27;
          {
            ATerm k_7 = NULL,n_7 = NULL,l_3 = NULL;
            t = SSLgetAnnotations(f_63);
            k_7 = t;
            t = h_63;
            t = i_63(t);
            n_7 = t;
            t = (ATerm) ATinsert(CheckATermList(n_7), g_63);
            l_3 = t;
            t = SSLsetAnnotations(l_3, k_7);
          }
        }
    }
    return(t);
  }
  t = i_63(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL;
  m_63 = t;
  {
    ATerm c_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_63;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_27 = ATgetFirst((ATermList) t);
                ATerm f_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_63;
          }
        ;
        LocalPopChoice(d_27);
      }
    else
      {
        t = c_27;
        t = (ATerm) ATinsert(ATempty, m_63);
      }
    n_63 = t;
    t = term_n_23;
    o_63 = t;
    t = SSL_printnl(o_63, n_63);
    t = m_63;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_c_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm x_11 (ATerm h_40, ATerm i_40, ATerm t)
{
  t = SSL_strcat(h_40, i_40);
  return(t);
}
ATerm debug_1_0 (ATerm w_112 (ATerm), ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL;
  s_63 = t;
  t = w_112(t);
  t_63 = t;
  t = term_u_24;
  u_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_63), t_63);
  v_63 = t;
  t = SSL_printnl(u_63, v_63);
  t = s_63;
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_j_27;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_64 = NULL;
      c_64 = t;
      t = SSL_is_string(c_64);
      ;
      LocalPopChoice(l_27);
    }
  else
    {
      t = k_27;
      {
        ATerm m_27 = t;
        int w_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(m_4, t);
            ;
            LocalPopChoice(w_27);
          }
        else
          {
            t = m_27;
            {
              ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL;
              l_64 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_64 = ATgetArgument(t, 0);
                  t = m_64;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_64 = ATgetArgument(t, 0);
                      t = m_64;
                      {
                        ATerm x_27 = t;
                        int y_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(y_27);
                          }
                        else
                          {
                            t = x_27;
                            t = debug_1_0(n_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm r_64 = NULL,s_64 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_64 = ATgetArgument(t, 0);
                          n_64 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_64;
                      t = eval_config_0_0(t);
                      r_64 = t;
                      t = n_64;
                      t = eval_config_0_0(t);
                      s_64 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_64, s_64);
                      t = x_11(r_64, s_64, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm y_11 (ATerm l_60, ATerm m_60, ATerm t)
{
  t = SSL_table_get(l_60, m_60);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm w_64 = NULL,x_64 = NULL;
  w_64 = t;
  t = term_r_25;
  x_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_25, w_64);
  t = y_11(x_64, w_64, t);
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_64 = NULL,z_64 = NULL;
        t = eval_config_0_0(t);
        y_64 = t;
        t = term_r_25;
        z_64 = t;
        t = SSL_table_put(z_64, w_64, y_64);
        t = y_64;
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
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
  ATerm c_65 = NULL,d_65 = NULL;
  t = term_b_28;
  c_65 = t;
  t = term_t_24;
  d_65 = t;
  t = term_c_28;
  t = b_12(c_65, d_65, t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_d_28;
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
  ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL;
  t = term_b_28;
  g_65 = t;
  t = term_t_24;
  h_65 = t;
  t = term_c_28;
  t = b_12(g_65, h_65, t);
  t = term_e_28;
  e_65 = t;
  t = term_t_24;
  f_65 = t;
  t = term_g_28;
  t = b_12(e_65, f_65, t);
  t = term_h_28;
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_i_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_4, q_4, r_4, t);
      ;
      LocalPopChoice(k_28);
    }
  else
    {
      t = j_28;
      t = Option_3_0(s_4, t_4, u_4, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_119 (ATerm), ATerm t)
{
  ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL,r_65 = NULL,s_65 = NULL,o_3 = NULL;
  m_65 = t;
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_28;
        t = b_119(t);
        ;
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
      }
    t = m_65;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_65 = ATgetFirst((ATermList) t);
        p_65 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(m_65);
    n_65 = t;
    t = term_c_26;
    s_65 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_c_26, o_65);
    t = b_12(s_65, o_65, t);
    t = p_65;
    {
      ATerm c_66 (ATerm t)
      {
        ATerm p_28 = t;
        int q_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_28 = t;
            int s_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_65 = NULL;
                v_65 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = v_65;
                ;
                LocalPopChoice(s_28);
              }
            else
              {
                t = r_28;
                t = b_119(t);
                t = Cons_2_0(_id, c_66, t);
              }
            ;
            LocalPopChoice(q_28);
          }
        else
          {
            t = p_28;
            {
              ATerm y_65 = NULL,z_65 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_65 = ATgetFirst((ATermList) t);
                  z_65 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(z_65), (ATerm) ATmakeAppl(sym_Undefined_1, y_65));
            }
          }
        return(t);
      }
      t = c_66(t);
      r_65 = t;
      t = (ATerm) ATinsert(CheckATermList(r_65), (ATerm) ATmakeAppl(sym_Program_1, o_65));
      o_3 = t;
      t = SSLsetAnnotations(o_3, n_65);
    }
  }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm o_66 = NULL;
  o_66 = t;
  if(match_string(t, "--help"))
    {
      t = o_66;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_66;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_66;
        }
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL;
  t = term_t_26;
  p_66 = t;
  t = term_t_24;
  q_66 = t;
  t = term_t_28;
  t = b_12(p_66, q_66, t);
  t = term_u_28;
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_v_28;
  return(t);
}
ATerm a_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_119 (ATerm), ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL;
  j_66 = t;
  t = term_s_25;
  l_66 = t;
  t = term_t_25;
  m_66 = t;
  t = (ATerm) ATempty;
  n_66 = t;
  t = SSL_table_put(l_66, m_66, n_66);
  t = j_66;
  {
    ATerm w_4 (ATerm t)
    {
      ATerm w_28 = t;
      int x_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_119(t);
          ;
          LocalPopChoice(x_28);
        }
      else
        {
          t = w_28;
          {
            ATerm y_28 = t;
            int a_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_4, y_4, z_4, t);
                ;
                LocalPopChoice(a_29);
              }
            else
              {
                t = y_28;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_4, t);
    {
      ATerm b_29 = t;
      int c_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_66 = NULL;
          x_66 = t;
          {
            ATerm d_29 = t;
            int e_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_8 = NULL;
                t = x_66;
                {
                  ATerm f_29 = t;
                  int g_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_t_26;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(g_29);
                    }
                  else
                    {
                      t = f_29;
                      t = fetch_1_0(a_5, t);
                    }
                  t = x_66;
                  t = default_system_usage_0_0(t);
                  t = term_b_25;
                  c_8 = t;
                  t = SSL_exit(c_8);
                }
                ;
                LocalPopChoice(e_29);
              }
            else
              {
                t = d_29;
                {
                  ATerm g_8 = NULL;
                  t = term_b_28;
                  t = get_config_0_0(t);
                  t = x_66;
                  t = default_system_about_0_0(t);
                  t = term_b_25;
                  g_8 = t;
                  t = SSL_exit(g_8);
                }
              }
          }
          ;
          LocalPopChoice(c_29);
        }
      else
        {
          t = b_29;
          {
            ATerm h_29 = t;
            int i_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL;
                ATerm b_5 (ATerm t)
                {
                  ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL,q_3 = NULL;
                  d_67 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      c_67 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(d_67);
                  b_67 = t;
                  t = c_67;
                  if(((h_66 != NULL) && (h_66 != t)))
                    _fail(t);
                  else
                    h_66 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, c_67);
                  q_3 = t;
                  t = SSLsetAnnotations(q_3, b_67);
                  return(t);
                }
                t = fetch_1_0(b_5, t);
                t = term_u_24;
                z_66 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_66)), term_j_29);
                a_67 = t;
                t = SSL_printnl(z_66, a_67);
                t = (ATerm) ATmakeAppl(sym__2, term_u_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_66)), term_j_29));
                t = default_system_usage_0_0(t);
                t = term_x_24;
                y_66 = t;
                t = SSL_exit(y_66);
                ;
                LocalPopChoice(i_29);
              }
            else
              {
                t = h_29;
              }
          }
        }
      i_66 = t;
      t = term_s_25;
      k_66 = t;
      t = SSL_table_destroy(k_66);
      t = i_66;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm t)
{
  ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL;
  t = parse_options_1_0(a_117, t);
  i_67 = t;
  t = term_k_29;
  l_67 = t;
  t = SSL_table_create(l_67);
  t = term_k_29;
  j_67 = t;
  t = term_l_29;
  k_67 = t;
  t = SSL_table_put(j_67, k_67, i_67);
  t = i_67;
  t = c_117(t);
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_117, t);
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
              t = d_117(t);
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
        ATerm t_29 = t;
        int u_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(u_29);
          }
        else
          {
            t = t_29;
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
  ATerm n_67 = NULL,o_67 = NULL;
  t = term_r_23;
  n_67 = t;
  t = term_t_24;
  o_67 = t;
  t = term_z_29;
  t = b_12(n_67, o_67, t);
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
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL,a_4 = NULL,z_3 = NULL;
  x_67 = t;
  if(match_cons(t, sym_Specification_1))
    {
      r_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_67);
  q_67 = t;
  t = r_67;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_67 = ATgetFirst((ATermList) t);
      u_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_67);
  s_67 = t;
  t = u_67;
  t = Cons_2_0(j_5, k_5, t);
  v_67 = t;
  t = (ATerm) ATinsert(CheckATermList(v_67), t_67);
  z_3 = t;
  t = SSLsetAnnotations(z_3, s_67);
  w_67 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, w_67);
  a_4 = t;
  t = SSLsetAnnotations(a_4, q_67);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL,u_3 = NULL;
  b_68 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      z_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_68);
  y_67 = t;
  t = z_67;
  t = map_1_0(m_5, t);
  a_68 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, a_68);
  u_3 = t;
  t = SSLsetAnnotations(u_3, y_67);
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
  ATerm c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,t_3 = NULL;
  i_68 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      d_68 = ATgetArgument(t, 0);
      e_68 = ATgetArgument(t, 1);
      f_68 = ATgetArgument(t, 2);
      g_68 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_68);
  c_68 = t;
  t = g_68;
  t = simplify_0_0(t);
  t = alltd_1_0(n_5, t);
  h_68 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, d_68, e_68, f_68, h_68);
  t_3 = t;
  t = SSLsetAnnotations(t_3, c_68);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm j_68 = NULL,k_68 = NULL;
  k_68 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_68);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_30 = ATgetFirst((ATermList) t);
      ATerm e_30 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(e_30) != AT_LIST) || !(ATisEmpty(e_30))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, j_68);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(c_5, default_usage_0_0, _id, d_5, t);
  return(t);
}
