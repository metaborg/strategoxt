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
ATerm term_w_29;
ATerm term_v_29;
ATerm term_t_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_p_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_h_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_n_27;
ATerm term_c_27;
ATerm term_s_26;
ATerm term_q_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_j_26;
ATerm term_h_26;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_f_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_i_24;
ATerm term_e_24;
ATerm term_n_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_f_23;
ATerm term_b_23;
ATerm term_g_22;
ATerm term_k_7;
ATerm term_e_7;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
void init_constant_terms (void)
{
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_Sort_2, term_v_6, (ATerm) ATempty);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym_ConstType_1, term_w_6);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym__2, term_u_24, term_v_24);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_24);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym__2, term_b_25, term_n_24);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym__2, term_l_25, term_n_25);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym__2, term_n_27, term_n_24);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym__2, term_y_27, term_n_24);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym__2, term_m_26, term_n_24);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym__2, term_n_23, term_n_24);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm bottomup_1_0 (ATerm i_92 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm l_93 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm s_107 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm d_2 (ATerm s_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm topdown_1_0 (ATerm h_92 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm);
ATerm t_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm d_1 (ATerm);
ATerm f_1 (ATerm);
ATerm i_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm v_1 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm simplify_0_0 (ATerm);
ATerm map_1_0 (ATerm c_107 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm);
ATerm y_11 (ATerm j_49, ATerm k_49, ATerm);
ATerm z_11 (ATerm x_52, ATerm y_52, ATerm);
ATerm b_12 (ATerm d_113 (ATerm), ATerm v_477, ATerm b_53, ATerm);
ATerm a_12 (ATerm t_52, ATerm u_52, ATerm);
ATerm j_2 (ATerm);
ATerm q_2 (ATerm);
ATerm output_1_0 (ATerm m_117 (ATerm), ATerm);
ATerm g_55 (ATerm z_54, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_12 (ATerm z_52, ATerm);
ATerm d_12 (ATerm l_49, ATerm m_49, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm s_56 (ATerm q_55, ATerm);
ATerm t_56 (ATerm u_55, ATerm v_55, ATerm w_55, ATerm);
ATerm u_56 (ATerm e_56, ATerm f_56, ATerm g_56, ATerm);
ATerm e_12 (ATerm);
ATerm r_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm n_117 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm v_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm l_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm m_12 (ATerm a_54, ATerm b_54, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm o_3 (ATerm);
ATerm q_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm k_12 (ATerm y_58, ATerm z_58, ATerm x_58, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm v_3 (ATerm);
ATerm a_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm f_12 (ATerm j_46, ATerm k_46, ATerm);
ATerm foldr_2_0 (ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_114 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm g_4 (ATerm);
ATerm need_help_1_0 (ATerm d_117 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_107 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm i_12 (ATerm j_40, ATerm k_40, ATerm);
ATerm debug_1_0 (ATerm b_113 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm j_12 (ATerm p_60, ATerm q_60, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm g_119 (ATerm), ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm parse_options_1_0 (ATerm f_119 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm l_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm i_92 (ATerm), ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    t = bottomup_1_0(i_92, t);
    return(t);
  }
  t = SRTS_all(a_0, t);
  t = i_92(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm l_93 (ATerm), ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm p_0 = t;
    int m_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_93(t);
        ;
        LocalPopChoice(m_5);
      }
    else
      {
        t = p_0;
        t = SRTS_one(n_2, t);
      }
    return(t);
  }
  t = n_2(t);
  return(t);
}
ATerm at_end_1_0 (ATerm s_107 (ATerm), ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm a_1 = NULL,b_1 = NULL,e_1 = NULL;
    e_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_1 = ATgetFirst((ATermList) t);
        b_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_1 = NULL,h_1 = NULL,s_0 = NULL;
          t = SSLgetAnnotations(e_1);
          c_1 = t;
          t = b_1;
          t = g_1(t);
          h_1 = t;
          t = (ATerm) ATinsert(CheckATermList(h_1), a_1);
          s_0 = t;
          t = SSLsetAnnotations(s_0, c_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_1;
        t = s_107(t);
      }
    return(t);
  }
  t = g_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_0 = NULL,c_0 = NULL,e_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
    }
  else
    {
      ATerm f_0 (ATerm t)
      {
        t = not_null(e_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_0 = ATgetFirst((ATermList) t);
          if(((e_0 != NULL) && (e_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_0;
      t = at_end_1_0(f_0, t);
    }
  return(t);
}
ATerm d_2 (ATerm s_1, ATerm t)
{
  ATerm u_1 = NULL;
  t = SSL_explode_term(s_1);
  if(match_cons(t, sym__2))
    {
      ATerm p_5 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_5) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL,z_1 = NULL;
  z_1 = t;
  if(match_cons(t, sym__2))
    {
      x_1 = ATgetArgument(t, 0);
      y_1 = ATgetArgument(t, 1);
      {
        ATerm q_5 = t;
        int r_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_0 (ATerm t)
            {
              t = y_1;
              return(t);
            }
            t = x_1;
            t = at_end_1_0(o_0, t);
            ;
            LocalPopChoice(r_5);
          }
        else
          {
            t = q_5;
            t = d_2(z_1, t);
          }
      }
    }
  else
    {
      t = d_2(z_1, t);
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm u_3 = NULL,w_3 = NULL,x_3 = NULL;
  u_3 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_3 = ATgetFirst((ATermList) t);
      x_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm s_5 = t;
    int t_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_1 = NULL,r_1 = NULL,t_1 = NULL,w_1 = NULL,a_2 = NULL,o_2 = NULL,p_2 = NULL,v_0 = NULL,u_0 = NULL;
        t = SSLgetAnnotations(u_3);
        a_2 = t;
        t = w_3;
        t = n_0(t);
        o_2 = t;
        t = (ATerm) ATinsert(CheckATermList(x_3), o_2);
        u_0 = t;
        t = SSLsetAnnotations(u_0, a_2);
        p_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_1 = ATgetFirst((ATermList) t);
            t_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_2);
        q_1 = t;
        t = t_1;
        {
          ATerm u_5 = t;
          int v_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(v_5);
            }
          else
            {
              t = u_5;
            }
          w_1 = t;
          t = (ATerm) ATinsert(CheckATermList(w_1), r_1);
          v_0 = t;
          t = SSLsetAnnotations(v_0, q_1);
        }
        ;
        LocalPopChoice(t_5);
      }
    else
      {
        t = s_5;
        {
          ATerm b_4 = NULL,e_4 = NULL,w_0 = NULL;
          t = SSLgetAnnotations(u_3);
          b_4 = t;
          t = x_3;
          t = map1_1_0(n_0, t);
          e_4 = t;
          t = (ATerm) ATinsert(CheckATermList(e_4), w_3);
          w_0 = t;
          t = SSLsetAnnotations(w_0, b_4);
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
ATerm topdown_1_0 (ATerm h_92 (ATerm), ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    t = topdown_1_0(h_92, t);
    return(t);
  }
  t = h_92(t);
  t = SRTS_all(q_0, t);
  return(t);
}
ATerm genzip_4_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm w_5 = t;
    int x_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_96(t);
        ;
        LocalPopChoice(x_5);
      }
    else
      {
        t = w_5;
        {
          ATerm e_2 = NULL,f_2 = NULL,h_2 = NULL,i_2 = NULL,k_2 = NULL,l_2 = NULL,j_1 = NULL;
          t = u_96(t);
          l_2 = t;
          if(match_cons(t, sym__2))
            {
              f_2 = ATgetArgument(t, 0);
              h_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_2);
          e_2 = t;
          t = f_2;
          t = w_96(t);
          i_2 = t;
          t = h_2;
          t = m_2(t);
          k_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_2, k_2);
          j_1 = t;
          t = SSLsetAnnotations(j_1, e_2);
          t = v_96(t);
        }
      }
    return(t);
  }
  t = m_2(t);
  return(t);
}
ATerm t_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_5 = ATgetArgument(t, 0);
      if(((ATgetType(y_5) != AT_LIST) || !(ATisEmpty(y_5))))
        _fail(t);
      {
        ATerm b_6 = ATgetArgument(t, 1);
        if(((ATgetType(b_6) != AT_LIST) || !(ATisEmpty(b_6))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm j_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_6 = ATgetArgument(t, 0);
      if(((ATgetType(c_6) == AT_LIST) && !(ATisEmpty(c_6))))
        {
          j_21 = ATgetFirst((ATermList) c_6);
          l_21 = (ATerm) ATgetNext((ATermList) c_6);
        }
      else
        _fail(t);
      {
        ATerm f_6 = ATgetArgument(t, 1);
        if(((ATgetType(f_6) == AT_LIST) && !(ATisEmpty(f_6))))
          {
            m_21 = ATgetFirst((ATermList) f_6);
            n_21 = (ATerm) ATgetNext((ATermList) f_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_21, m_21), (ATerm) ATmakeAppl(sym__2, l_21, n_21));
  return(t);
}
ATerm y_0 (ATerm t)
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
ATerm z_0 (ATerm t)
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
ATerm d_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_6 = ATgetArgument(t, 0);
      if(((ATgetType(g_6) != AT_LIST) || !(ATisEmpty(g_6))))
        _fail(t);
      {
        ATerm h_6 = ATgetArgument(t, 1);
        if(((ATgetType(h_6) != AT_LIST) || !(ATisEmpty(h_6))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_6 = ATgetArgument(t, 0);
      if(((ATgetType(i_6) == AT_LIST) && !(ATisEmpty(i_6))))
        {
          o_27 = ATgetFirst((ATermList) i_6);
          p_27 = (ATerm) ATgetNext((ATermList) i_6);
        }
      else
        _fail(t);
      {
        ATerm j_6 = ATgetArgument(t, 1);
        if(((ATgetType(j_6) == AT_LIST) && !(ATisEmpty(j_6))))
          {
            q_27 = ATgetFirst((ATermList) j_6);
            r_27 = (ATerm) ATgetNext((ATermList) j_6);
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
ATerm i_1 (ATerm t)
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
ATerm k_1 (ATerm t)
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
ATerm l_1 (ATerm t)
{
  ATerm k_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm m_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(l_6);
      {
        ATerm z_38 = NULL,a_39 = NULL;
        z_38 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm n_6 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        a_39 = t;
        t = SSLgetAnnotations(z_38);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_6 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) o_6) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_6 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(p_6) != AT_LIST) || !(ATisEmpty(p_6))))
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
      t = k_6;
      {
        ATerm r_6 = t;
        int s_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm t_6 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) t_6) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm u_6 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(s_6);
            _fail(t);
          }
        else
          {
            t = r_6;
          }
      }
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm k_48 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_48, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_6), term_x_6));
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm m_48 = NULL,n_48 = NULL;
  n_48 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_48 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, m_48, term_x_6);
    }
  else
    {
      t = n_48;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm y_48 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      y_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, y_48, term_x_6);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL;
  a_49 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_48 = ATgetArgument(t, 0);
      {
        ATerm z_6 = t;
        int a_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, z_48, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_6), term_x_6));
            ;
            LocalPopChoice(a_7);
          }
        else
          {
            t = z_6;
            t = a_49;
          }
      }
    }
  else
    {
      t = a_49;
    }
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm q_49 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      q_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, q_49, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_6), term_x_6));
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm r_49 = NULL,s_49 = NULL;
  s_49 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      r_49 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, r_49, term_x_6);
    }
  else
    {
      t = s_49;
    }
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL;
    d_14 = t;
    if(match_cons(t, sym_Test_1))
      {
        c_14 = ATgetArgument(t, 0);
        t = c_14;
        if(match_cons(t, sym_Id_0))
          {
            ATerm c_7 = t;
            int d_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_e_7;
                t = r_0(t);
                ;
                LocalPopChoice(d_7);
              }
            else
              {
                t = c_7;
                {
                  ATerm f_7 = t;
                  int g_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL;
                      t = d_14;
                      t = new_0_0(t);
                      f_14 = t;
                      t = bottomup_1_0(r_0, t);
                      q_14 = t;
                      t = (ATerm) ATempty;
                      t = r_0(t);
                      r_14 = t;
                      t = (ATerm) ATinsert(CheckATermList(r_14), q_14);
                      t = r_0(t);
                      g_14 = t;
                      t = f_14;
                      t = bottomup_1_0(r_0, t);
                      p_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, p_14);
                      t = r_0(t);
                      o_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, o_14);
                      t = r_0(t);
                      i_14 = t;
                      t = c_14;
                      t = bottomup_1_0(r_0, t);
                      k_14 = t;
                      t = f_14;
                      t = bottomup_1_0(r_0, t);
                      n_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, n_14);
                      t = r_0(t);
                      m_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, m_14);
                      t = r_0(t);
                      l_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, k_14, l_14);
                      t = r_0(t);
                      j_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_14, j_14);
                      t = r_0(t);
                      h_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, g_14, h_14);
                      t = r_0(t);
                      ;
                      LocalPopChoice(g_7);
                    }
                  else
                    {
                      t = f_7;
                      t = d_14;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm h_7 = t;
                int i_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_k_7;
                    t = r_0(t);
                    ;
                    LocalPopChoice(i_7);
                  }
                else
                  {
                    t = h_7;
                    {
                      ATerm l_7 = t;
                      int n_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm v_14 = NULL,y_14 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,q_15 = NULL,s_15 = NULL,y_15 = NULL,a_16 = NULL,b_16 = NULL;
                          t = d_14;
                          t = new_0_0(t);
                          v_14 = t;
                          t = bottomup_1_0(r_0, t);
                          a_16 = t;
                          t = (ATerm) ATempty;
                          t = r_0(t);
                          b_16 = t;
                          t = (ATerm) ATinsert(CheckATermList(b_16), a_16);
                          t = r_0(t);
                          y_14 = t;
                          t = v_14;
                          t = bottomup_1_0(r_0, t);
                          y_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, y_15);
                          t = r_0(t);
                          s_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, s_15);
                          t = r_0(t);
                          c_15 = t;
                          t = c_14;
                          t = bottomup_1_0(r_0, t);
                          k_15 = t;
                          t = v_14;
                          t = bottomup_1_0(r_0, t);
                          q_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, q_15);
                          t = r_0(t);
                          m_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, m_15);
                          t = r_0(t);
                          l_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, k_15, l_15);
                          t = r_0(t);
                          d_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_15, d_15);
                          t = r_0(t);
                          b_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, y_14, b_15);
                          t = r_0(t);
                          ;
                          LocalPopChoice(n_7);
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
                if(match_cons(t, sym_Test_1))
                  {
                    z_13 = ATgetArgument(t, 0);
                    {
                      ATerm o_7 = t;
                      int p_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, z_13);
                          t = r_0(t);
                          ;
                          LocalPopChoice(p_7);
                        }
                      else
                        {
                          t = o_7;
                          {
                            ATerm q_7 = t;
                            int r_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
                                t = d_14;
                                t = new_0_0(t);
                                k_16 = t;
                                t = bottomup_1_0(r_0, t);
                                h_17 = t;
                                t = (ATerm) ATempty;
                                t = r_0(t);
                                i_17 = t;
                                t = (ATerm) ATinsert(CheckATermList(i_17), h_17);
                                t = r_0(t);
                                l_16 = t;
                                t = k_16;
                                t = bottomup_1_0(r_0, t);
                                g_17 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, g_17);
                                t = r_0(t);
                                f_17 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, f_17);
                                t = r_0(t);
                                n_16 = t;
                                t = c_14;
                                t = bottomup_1_0(r_0, t);
                                p_16 = t;
                                t = k_16;
                                t = bottomup_1_0(r_0, t);
                                y_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, y_16);
                                t = r_0(t);
                                x_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, x_16);
                                t = r_0(t);
                                w_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_16, w_16);
                                t = r_0(t);
                                o_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, n_16, o_16);
                                t = r_0(t);
                                m_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, l_16, m_16);
                                t = r_0(t);
                                ;
                                LocalPopChoice(r_7);
                              }
                            else
                              {
                                t = q_7;
                                t = d_14;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm s_7 = t;
                    int t_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_17 = NULL,u_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,h_18 = NULL,j_18 = NULL;
                        t = d_14;
                        t = new_0_0(t);
                        p_17 = t;
                        t = bottomup_1_0(r_0, t);
                        h_18 = t;
                        t = (ATerm) ATempty;
                        t = r_0(t);
                        j_18 = t;
                        t = (ATerm) ATinsert(CheckATermList(j_18), h_18);
                        t = r_0(t);
                        u_17 = t;
                        t = p_17;
                        t = bottomup_1_0(r_0, t);
                        e_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, e_18);
                        t = r_0(t);
                        d_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, d_18);
                        t = r_0(t);
                        x_17 = t;
                        t = c_14;
                        t = bottomup_1_0(r_0, t);
                        z_17 = t;
                        t = p_17;
                        t = bottomup_1_0(r_0, t);
                        c_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, c_18);
                        t = r_0(t);
                        b_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, b_18);
                        t = r_0(t);
                        a_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, z_17, a_18);
                        t = r_0(t);
                        y_17 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, x_17, y_17);
                        t = r_0(t);
                        w_17 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, u_17, w_17);
                        t = r_0(t);
                        ;
                        LocalPopChoice(t_7);
                      }
                    else
                      {
                        t = s_7;
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
                ATerm u_7 = t;
                int v_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_k_7;
                    t = r_0(t);
                    ;
                    LocalPopChoice(v_7);
                  }
                else
                  {
                    t = u_7;
                    t = d_14;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm w_7 = t;
                    int x_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_e_7;
                        t = r_0(t);
                        ;
                        LocalPopChoice(x_7);
                      }
                    else
                      {
                        t = w_7;
                        t = d_14;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        z_13 = ATgetArgument(t, 0);
                        {
                          ATerm y_7 = t;
                          int z_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, z_13);
                              t = r_0(t);
                              ;
                              LocalPopChoice(z_7);
                            }
                          else
                            {
                              t = y_7;
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
                                        ATerm a_8 = t;
                                        int c_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_k_7;
                                            t = r_0(t);
                                            ;
                                            LocalPopChoice(c_8);
                                          }
                                        else
                                          {
                                            t = a_8;
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
                                              ATerm d_8 = t;
                                              int e_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm p_20 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                  t = r_0(t);
                                                  p_20 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, p_20);
                                                  t = r_0(t);
                                                  ;
                                                  LocalPopChoice(e_8);
                                                }
                                              else
                                                {
                                                  t = d_8;
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
                                                      ATerm g_8 = t;
                                                      int h_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, v_13, u_13);
                                                          {
                                                            ATerm i_8 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm n_4 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    n_4 = ATgetArgument(t, 0);
                                                                    if((n_4 != ATgetArgument(t, 1)))
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
                                                                t = i_8;
                                                              }
                                                            t = term_k_7;
                                                            t = bottomup_1_0(r_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(h_8);
                                                        }
                                                      else
                                                        {
                                                          t = g_8;
                                                          {
                                                            ATerm j_8 = t;
                                                            int k_8 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm f_21 = NULL;
                                                                t = u_13;
                                                                if((v_13 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, q_13, p_13);
                                                                t = genzip_4_0(t_0, x_0, y_0, z_0, t);
                                                                f_21 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, f_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, v_13, q_13)), y_13));
                                                                t = bottomup_1_0(r_0, t);
                                                                ;
                                                                LocalPopChoice(k_8);
                                                              }
                                                            else
                                                              {
                                                                t = j_8;
                                                                {
                                                                  ATerm l_8 = t;
                                                                  int m_8 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm u_21 = NULL;
                                                                      t = w_13;
                                                                      if((z_13 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, z_13);
                                                                      t = r_0(t);
                                                                      u_21 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_21, y_13);
                                                                      t = r_0(t);
                                                                      ;
                                                                      LocalPopChoice(m_8);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = l_8;
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
                                                    ATerm n_8 = t;
                                                    int o_8 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm y_21 = NULL;
                                                        t = w_13;
                                                        if((z_13 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, z_13);
                                                        t = r_0(t);
                                                        y_21 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, y_21, y_13);
                                                        t = r_0(t);
                                                        ;
                                                        LocalPopChoice(o_8);
                                                      }
                                                    else
                                                      {
                                                        t = n_8;
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
                                                      ATerm p_8 = t;
                                                      int q_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm c_22 = NULL;
                                                          t = w_13;
                                                          if((z_13 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, z_13);
                                                          t = r_0(t);
                                                          c_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_22, y_13);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(q_8);
                                                        }
                                                      else
                                                        {
                                                          t = p_8;
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
                                                          ATerm r_8 = t;
                                                          int s_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_22 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                              t = r_0(t);
                                                              h_22 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, h_22);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(s_8);
                                                            }
                                                          else
                                                            {
                                                              t = r_8;
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
                                        ATerm t_8 = t;
                                        int u_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_k_7;
                                            t = r_0(t);
                                            ;
                                            LocalPopChoice(u_8);
                                          }
                                        else
                                          {
                                            t = t_8;
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
                                              ATerm v_8 = t;
                                              int w_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm q_22 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                  t = r_0(t);
                                                  q_22 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, q_22);
                                                  t = r_0(t);
                                                  ;
                                                  LocalPopChoice(w_8);
                                                }
                                              else
                                                {
                                                  t = v_8;
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
                                                  ATerm x_8 = t;
                                                  int y_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm u_22 = NULL;
                                                      t = w_13;
                                                      if((z_13 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, z_13);
                                                      t = r_0(t);
                                                      u_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_22, y_13);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(y_8);
                                                    }
                                                  else
                                                    {
                                                      t = x_8;
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
                                                      ATerm z_8 = t;
                                                      int a_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm y_22 = NULL;
                                                          t = w_13;
                                                          if((z_13 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, z_13);
                                                          t = r_0(t);
                                                          y_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, y_13);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(a_9);
                                                        }
                                                      else
                                                        {
                                                          t = z_8;
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
                                                          ATerm b_9 = t;
                                                          int c_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm d_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                              t = r_0(t);
                                                              d_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, d_23);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(c_9);
                                                            }
                                                          else
                                                            {
                                                              t = b_9;
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
                                            ATerm d_9 = t;
                                            int e_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = r_0(t);
                                                ;
                                                LocalPopChoice(e_9);
                                              }
                                            else
                                              {
                                                t = d_9;
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
                                                  ATerm f_9 = t;
                                                  int g_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm m_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                      t = r_0(t);
                                                      m_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, m_23);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(g_9);
                                                    }
                                                  else
                                                    {
                                                      t = f_9;
                                                      t = d_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm h_9 = t;
                                                int i_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm j_9 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(i_9);
                                                    {
                                                      ATerm k_9 = t;
                                                      int l_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm r_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, w_13);
                                                          t = r_0(t);
                                                          r_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, r_23, y_13);
                                                          t = r_0(t);
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
                                                    t = h_9;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        z_13 = ATgetArgument(t, 0);
                                                        t = z_13;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            v_13 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm m_9 = t;
                                                              int n_9 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm x_23 = NULL,y_23 = NULL;
                                                                  t = u_13;
                                                                  if((v_13 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, v_13);
                                                                  t = r_0(t);
                                                                  y_23 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, y_23);
                                                                  t = r_0(t);
                                                                  x_23 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_23, y_13);
                                                                  t = r_0(t);
                                                                  ;
                                                                  LocalPopChoice(n_9);
                                                                }
                                                              else
                                                                {
                                                                  t = m_9;
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
                                                              ATerm o_9 = t;
                                                              int p_9 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm h_24 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                                  t = r_0(t);
                                                                  h_24 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, h_24);
                                                                  t = r_0(t);
                                                                  ;
                                                                  LocalPopChoice(p_9);
                                                                }
                                                              else
                                                                {
                                                                  t = o_9;
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
                                            ATerm q_9 = t;
                                            int r_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = r_0(t);
                                                ;
                                                LocalPopChoice(r_9);
                                              }
                                            else
                                              {
                                                t = q_9;
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
                                                  ATerm s_9 = t;
                                                  int t_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm y_24 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                      t = r_0(t);
                                                      y_24 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, y_24);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(t_9);
                                                    }
                                                  else
                                                    {
                                                      t = s_9;
                                                      t = d_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm u_9 = t;
                                                int v_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm w_9 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(v_9);
                                                    {
                                                      ATerm x_9 = t;
                                                      int y_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm e_25 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, w_13);
                                                          t = r_0(t);
                                                          e_25 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_25, y_13);
                                                          t = r_0(t);
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
                                                    t = u_9;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        z_13 = ATgetArgument(t, 0);
                                                        a_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm z_9 = t;
                                                          int a_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm m_25 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                              t = r_0(t);
                                                              m_25 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, m_25);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(a_10);
                                                            }
                                                          else
                                                            {
                                                              t = z_9;
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
                                            ATerm b_10 = t;
                                            int c_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = r_0(t);
                                                ;
                                                LocalPopChoice(c_10);
                                              }
                                            else
                                              {
                                                t = b_10;
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
                                                  ATerm d_10 = t;
                                                  int e_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_25 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                      t = r_0(t);
                                                      x_25 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, x_25);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(e_10);
                                                    }
                                                  else
                                                    {
                                                      t = d_10;
                                                      t = d_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm f_10 = t;
                                                int g_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm h_10 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(g_10);
                                                    {
                                                      ATerm i_10 = t;
                                                      int j_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm d_26 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, w_13, r_13, s_13);
                                                          t = r_0(t);
                                                          d_26 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_26, y_13);
                                                          t = r_0(t);
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
                                                    t = f_10;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        z_13 = ATgetArgument(t, 0);
                                                        a_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm k_10 = t;
                                                          int l_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                              t = r_0(t);
                                                              i_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, i_26);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(l_10);
                                                            }
                                                          else
                                                            {
                                                              t = k_10;
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
                                            ATerm m_10 = t;
                                            int n_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = r_0(t);
                                                ;
                                                LocalPopChoice(n_10);
                                              }
                                            else
                                              {
                                                t = m_10;
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
                                                  ATerm o_10 = t;
                                                  int p_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm r_26 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                      t = r_0(t);
                                                      r_26 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, r_26);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(p_10);
                                                    }
                                                  else
                                                    {
                                                      t = o_10;
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
                                                      ATerm q_10 = t;
                                                      int r_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm w_26 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                          t = r_0(t);
                                                          w_26 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, w_26);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(r_10);
                                                        }
                                                      else
                                                        {
                                                          t = q_10;
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
                                        ATerm s_10 = t;
                                        int t_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_k_7;
                                            t = r_0(t);
                                            ;
                                            LocalPopChoice(t_10);
                                          }
                                        else
                                          {
                                            t = s_10;
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
                                              ATerm u_10 = t;
                                              int v_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm g_27 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                  t = r_0(t);
                                                  g_27 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, g_27);
                                                  t = r_0(t);
                                                  ;
                                                  LocalPopChoice(v_10);
                                                }
                                              else
                                                {
                                                  t = u_10;
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
                                                      ATerm w_10 = t;
                                                      int x_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, v_13, w_13);
                                                          {
                                                            ATerm y_10 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm u_4 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    u_4 = ATgetArgument(t, 0);
                                                                    if((u_4 != ATgetArgument(t, 1)))
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
                                                                t = y_10;
                                                              }
                                                            t = term_k_7;
                                                            t = bottomup_1_0(r_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(x_10);
                                                        }
                                                      else
                                                        {
                                                          t = w_10;
                                                          {
                                                            ATerm z_10 = t;
                                                            int a_11 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm l_27 = NULL;
                                                                t = w_13;
                                                                if((v_13 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, q_13, r_13);
                                                                t = genzip_4_0(d_1, f_1, i_1, k_1, t);
                                                                l_27 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, l_27), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, v_13, q_13)));
                                                                t = bottomup_1_0(r_0, t);
                                                                ;
                                                                LocalPopChoice(a_11);
                                                              }
                                                            else
                                                              {
                                                                t = z_10;
                                                                {
                                                                  ATerm b_11 = t;
                                                                  int c_11 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = x_13;
                                                                      if((z_13 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, z_13);
                                                                      t = r_0(t);
                                                                      ;
                                                                      LocalPopChoice(c_11);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = b_11;
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
                                                    ATerm d_11 = t;
                                                    int e_11 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = x_13;
                                                        if((z_13 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, z_13);
                                                        t = r_0(t);
                                                        ;
                                                        LocalPopChoice(e_11);
                                                      }
                                                    else
                                                      {
                                                        t = d_11;
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
                                                      ATerm f_11 = t;
                                                      int g_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = x_13;
                                                          if((z_13 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, z_13);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(g_11);
                                                        }
                                                      else
                                                        {
                                                          t = f_11;
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
                                                          ATerm h_11 = t;
                                                          int i_11 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_28 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                              t = r_0(t);
                                                              f_28 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, f_28);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(i_11);
                                                            }
                                                          else
                                                            {
                                                              t = h_11;
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
                                        ATerm j_11 = t;
                                        int k_11 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_k_7;
                                            t = r_0(t);
                                            ;
                                            LocalPopChoice(k_11);
                                          }
                                        else
                                          {
                                            t = j_11;
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
                                              ATerm l_11 = t;
                                              int m_11 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm o_28 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                  t = r_0(t);
                                                  o_28 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, o_28);
                                                  t = r_0(t);
                                                  ;
                                                  LocalPopChoice(m_11);
                                                }
                                              else
                                                {
                                                  t = l_11;
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
                                                  ATerm n_11 = t;
                                                  int o_11 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = x_13;
                                                      if((z_13 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, z_13);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(o_11);
                                                    }
                                                  else
                                                    {
                                                      t = n_11;
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
                                                      ATerm p_11 = t;
                                                      int q_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = x_13;
                                                          if((z_13 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, z_13);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(q_11);
                                                        }
                                                      else
                                                        {
                                                          t = p_11;
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
                                                          ATerm r_11 = t;
                                                          int s_11 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm x_28 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                              t = r_0(t);
                                                              x_28 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, x_28);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(s_11);
                                                            }
                                                          else
                                                            {
                                                              t = r_11;
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
                                            ATerm t_11 = t;
                                            int u_11 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = r_0(t);
                                                ;
                                                LocalPopChoice(u_11);
                                              }
                                            else
                                              {
                                                t = t_11;
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
                                                  ATerm v_11 = t;
                                                  int w_11 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm n_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                      t = r_0(t);
                                                      n_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, n_29);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(w_11);
                                                    }
                                                  else
                                                    {
                                                      t = v_11;
                                                      t = d_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm x_11 = t;
                                                int g_12 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm h_12 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(g_12);
                                                    {
                                                      ATerm l_12 = t;
                                                      int n_12 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, x_13);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(n_12);
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
                                                    t = x_11;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        z_13 = ATgetArgument(t, 0);
                                                        t = z_13;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            v_13 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm o_12 = t;
                                                              int p_12 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm u_29 = NULL;
                                                                  t = w_13;
                                                                  if((v_13 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, v_13);
                                                                  t = r_0(t);
                                                                  u_29 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, u_29);
                                                                  t = r_0(t);
                                                                  ;
                                                                  LocalPopChoice(p_12);
                                                                }
                                                              else
                                                                {
                                                                  t = o_12;
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
                                                              ATerm q_12 = t;
                                                              int r_12 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm h_30 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                                  t = r_0(t);
                                                                  h_30 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, h_30);
                                                                  t = r_0(t);
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
                                            ATerm s_12 = t;
                                            int t_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = r_0(t);
                                                ;
                                                LocalPopChoice(t_12);
                                              }
                                            else
                                              {
                                                t = s_12;
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
                                                  ATerm u_12 = t;
                                                  int v_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_30 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                      t = r_0(t);
                                                      x_30 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, x_30);
                                                      t = r_0(t);
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
                                                ATerm w_12 = t;
                                                int x_12 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm y_12 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(x_12);
                                                    {
                                                      ATerm z_12 = t;
                                                      int a_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, x_13);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(a_13);
                                                        }
                                                      else
                                                        {
                                                          t = z_12;
                                                          t = d_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = w_12;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        z_13 = ATgetArgument(t, 0);
                                                        a_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_13 = t;
                                                          int c_13 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                              t = r_0(t);
                                                              h_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, h_31);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(c_13);
                                                            }
                                                          else
                                                            {
                                                              t = b_13;
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
                                            ATerm d_13 = t;
                                            int e_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = r_0(t);
                                                ;
                                                LocalPopChoice(e_13);
                                              }
                                            else
                                              {
                                                t = d_13;
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
                                                  ATerm f_13 = t;
                                                  int g_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm v_31 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                      t = r_0(t);
                                                      v_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, v_31);
                                                      t = r_0(t);
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
                                                ATerm h_13 = t;
                                                int e_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm s_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(e_14);
                                                    {
                                                      ATerm t_14 = t;
                                                      int u_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, x_13, y_13, t_13);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(u_14);
                                                        }
                                                      else
                                                        {
                                                          t = t_14;
                                                          t = d_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = h_13;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        z_13 = ATgetArgument(t, 0);
                                                        a_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm w_14 = t;
                                                          int x_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm k_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                              t = r_0(t);
                                                              k_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, k_32);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(x_14);
                                                            }
                                                          else
                                                            {
                                                              t = w_14;
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
                                                ATerm z_14 = t;
                                                int a_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_k_7;
                                                    t = r_0(t);
                                                    ;
                                                    LocalPopChoice(a_15);
                                                  }
                                                else
                                                  {
                                                    t = z_14;
                                                    {
                                                      ATerm e_15 = t;
                                                      int f_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm z_32 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_14, y_13);
                                                          t = r_0(t);
                                                          z_32 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, x_13, z_32);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(f_15);
                                                        }
                                                      else
                                                        {
                                                          t = e_15;
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
                                                      ATerm g_15 = t;
                                                      int h_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm h_33 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                          t = r_0(t);
                                                          h_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, h_33);
                                                          t = r_0(t);
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
                                                                ATerm l_33 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, c_14, y_13);
                                                                t = r_0(t);
                                                                l_33 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, x_13, l_33);
                                                                t = r_0(t);
                                                                ;
                                                                LocalPopChoice(j_15);
                                                              }
                                                            else
                                                              {
                                                                t = i_15;
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
                                                          ATerm n_15 = t;
                                                          int o_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, c_14, y_13);
                                                              t = r_0(t);
                                                              q_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, x_13, q_33);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(o_15);
                                                            }
                                                          else
                                                            {
                                                              t = n_15;
                                                              {
                                                                ATerm p_15 = t;
                                                                int r_15 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm w_33 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                                    t = r_0(t);
                                                                    w_33 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, w_33);
                                                                    t = r_0(t);
                                                                    ;
                                                                    LocalPopChoice(r_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = p_15;
                                                                    t = d_14;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm t_15 = t;
                                                        int u_15 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm b_34 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, c_14, y_13);
                                                            t = r_0(t);
                                                            b_34 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, x_13, b_34);
                                                            t = r_0(t);
                                                            ;
                                                            LocalPopChoice(u_15);
                                                          }
                                                        else
                                                          {
                                                            t = t_15;
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
                                                    ATerm v_15 = t;
                                                    int w_15 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_k_7;
                                                        t = r_0(t);
                                                        ;
                                                        LocalPopChoice(w_15);
                                                      }
                                                    else
                                                      {
                                                        t = v_15;
                                                        {
                                                          ATerm x_15 = t;
                                                          int z_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, c_14, y_13);
                                                              t = r_0(t);
                                                              n_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, x_13, n_34);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(z_15);
                                                            }
                                                          else
                                                            {
                                                              t = x_15;
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
                                                          ATerm c_16 = t;
                                                          int d_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm s_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                              t = r_0(t);
                                                              s_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, s_34);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(d_16);
                                                            }
                                                          else
                                                            {
                                                              t = c_16;
                                                              {
                                                                ATerm e_16 = t;
                                                                int f_16 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm z_34 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, c_14, y_13);
                                                                    t = r_0(t);
                                                                    z_34 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, x_13, z_34);
                                                                    t = r_0(t);
                                                                    ;
                                                                    LocalPopChoice(f_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = e_16;
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
                                                              ATerm g_16 = t;
                                                              int h_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm f_35 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, c_14, y_13);
                                                                  t = r_0(t);
                                                                  f_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, x_13, f_35);
                                                                  t = r_0(t);
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
                                                                        ATerm l_35 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                                        t = r_0(t);
                                                                        l_35 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, l_35);
                                                                        t = r_0(t);
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
                                                            ATerm q_16 = t;
                                                            int r_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm x_35 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, c_14, y_13);
                                                                t = r_0(t);
                                                                x_35 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, x_13, x_35);
                                                                t = r_0(t);
                                                                ;
                                                                LocalPopChoice(r_16);
                                                              }
                                                            else
                                                              {
                                                                t = q_16;
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
                                                    ATerm s_16 = t;
                                                    int t_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_k_7;
                                                        t = r_0(t);
                                                        ;
                                                        LocalPopChoice(t_16);
                                                      }
                                                    else
                                                      {
                                                        t = s_16;
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
                                                          ATerm u_16 = t;
                                                          int v_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_36 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                              t = r_0(t);
                                                              h_36 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, h_36);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(v_16);
                                                            }
                                                          else
                                                            {
                                                              t = u_16;
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
                                                              ATerm z_16 = t;
                                                              int a_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm o_36 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_14, b_14);
                                                                  t = r_0(t);
                                                                  o_36 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, z_13, o_36);
                                                                  t = r_0(t);
                                                                  ;
                                                                  LocalPopChoice(a_17);
                                                                }
                                                              else
                                                                {
                                                                  t = z_16;
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
                            ATerm b_17 = t;
                            int c_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_e_7;
                                t = r_0(t);
                                ;
                                LocalPopChoice(c_17);
                              }
                            else
                              {
                                t = b_17;
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
                            ATerm d_17 = t;
                            int e_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_e_7;
                                t = r_0(t);
                                ;
                                LocalPopChoice(e_17);
                              }
                            else
                              {
                                t = d_17;
                                {
                                  ATerm j_17 = t;
                                  int k_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = b_14;
                                      if((c_14 != t))
                                        {
                                          _fail(t);
                                        }
                                      ;
                                      LocalPopChoice(k_17);
                                    }
                                  else
                                    {
                                      t = j_17;
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
                                      ATerm l_17 = t;
                                      int m_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm u_38 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, a_14, b_14);
                                          t = r_0(t);
                                          u_38 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, z_13, u_38);
                                          t = r_0(t);
                                          ;
                                          LocalPopChoice(m_17);
                                        }
                                      else
                                        {
                                          t = l_17;
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
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        z_13 = ATgetArgument(t, 0);
                                        {
                                          ATerm q_17 = t;
                                          int r_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = b_14;
                                              if((c_14 != t))
                                                {
                                                  _fail(t);
                                                }
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
                                                    t = z_13;
                                                    t = topdown_1_0(l_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, z_13);
                                                    t = bottomup_1_0(r_0, t);
                                                    ;
                                                    LocalPopChoice(t_17);
                                                  }
                                                else
                                                  {
                                                    t = s_17;
                                                    t = d_14;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm v_17 = t;
                                        int f_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = b_14;
                                            if((c_14 != t))
                                              {
                                                _fail(t);
                                              }
                                            ;
                                            LocalPopChoice(f_18);
                                          }
                                        else
                                          {
                                            t = v_17;
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
                                ATerm g_18 = t;
                                int i_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_e_7;
                                    t = r_0(t);
                                    ;
                                    LocalPopChoice(i_18);
                                  }
                                else
                                  {
                                    t = g_18;
                                    t = b_14;
                                  }
                              }
                            else
                              {
                                ATerm k_18 = t;
                                int l_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_e_7;
                                    t = r_0(t);
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
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = c_14;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm m_18 = t;
                                    int n_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_k_7;
                                        t = r_0(t);
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
                                        t = term_k_7;
                                        t = r_0(t);
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
                                        ATerm q_18 = t;
                                        int r_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm u_39 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, c_14, x_13);
                                            t = conc_0_0(t);
                                            u_39 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, u_39, y_13);
                                            t = bottomup_1_0(r_0, t);
                                            ;
                                            LocalPopChoice(r_18);
                                          }
                                        else
                                          {
                                            t = q_18;
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
                        ATerm s_18 = t;
                        int t_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm u_18 = ATgetArgument(t, 0);
                                b_14 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(t_18);
                            t = b_14;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm v_18 = t;
                                int w_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_e_7;
                                    t = r_0(t);
                                    ;
                                    LocalPopChoice(w_18);
                                  }
                                else
                                  {
                                    t = v_18;
                                    t = d_14;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm x_18 = t;
                                    int y_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_k_7;
                                        t = r_0(t);
                                        ;
                                        LocalPopChoice(y_18);
                                      }
                                    else
                                      {
                                        t = x_18;
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
                            t = s_18;
                            if(match_cons(t, sym_All_1))
                              {
                                c_14 = ATgetArgument(t, 0);
                                t = c_14;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm z_18 = t;
                                    int a_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_e_7;
                                        t = r_0(t);
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
                                        ATerm b_19 = t;
                                        int c_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_e_7;
                                            t = r_0(t);
                                            ;
                                            LocalPopChoice(c_19);
                                          }
                                        else
                                          {
                                            t = b_19;
                                            {
                                              ATerm d_19 = t;
                                              int e_19 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,m_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL;
                                                  t = d_14;
                                                  t = new_0_0(t);
                                                  f_40 = t;
                                                  t = bottomup_1_0(r_0, t);
                                                  v_40 = t;
                                                  t = (ATerm) ATempty;
                                                  t = r_0(t);
                                                  w_40 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(w_40), v_40);
                                                  t = r_0(t);
                                                  g_40 = t;
                                                  t = f_40;
                                                  t = bottomup_1_0(r_0, t);
                                                  u_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, u_40);
                                                  t = r_0(t);
                                                  t_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, t_40);
                                                  t = r_0(t);
                                                  i_40 = t;
                                                  t = c_14;
                                                  t = bottomup_1_0(r_0, t);
                                                  o_40 = t;
                                                  t = f_40;
                                                  t = bottomup_1_0(r_0, t);
                                                  r_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, r_40);
                                                  t = r_0(t);
                                                  q_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, q_40);
                                                  t = r_0(t);
                                                  p_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_40, p_40);
                                                  t = r_0(t);
                                                  m_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_40, m_40);
                                                  t = r_0(t);
                                                  h_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, g_40, h_40);
                                                  t = r_0(t);
                                                  ;
                                                  LocalPopChoice(e_19);
                                                }
                                              else
                                                {
                                                  t = d_19;
                                                  t = d_14;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm f_19 = t;
                                            int g_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = r_0(t);
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
                                                      ATerm z_40 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL;
                                                      t = d_14;
                                                      t = new_0_0(t);
                                                      z_40 = t;
                                                      t = bottomup_1_0(r_0, t);
                                                      m_41 = t;
                                                      t = (ATerm) ATempty;
                                                      t = r_0(t);
                                                      n_41 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(n_41), m_41);
                                                      t = r_0(t);
                                                      c_41 = t;
                                                      t = z_40;
                                                      t = bottomup_1_0(r_0, t);
                                                      l_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, l_41);
                                                      t = r_0(t);
                                                      k_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, k_41);
                                                      t = r_0(t);
                                                      e_41 = t;
                                                      t = c_14;
                                                      t = bottomup_1_0(r_0, t);
                                                      g_41 = t;
                                                      t = z_40;
                                                      t = bottomup_1_0(r_0, t);
                                                      j_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, j_41);
                                                      t = r_0(t);
                                                      i_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, i_41);
                                                      t = r_0(t);
                                                      h_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_41, h_41);
                                                      t = r_0(t);
                                                      f_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_41, f_41);
                                                      t = r_0(t);
                                                      d_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, c_41, d_41);
                                                      t = r_0(t);
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
                                                              ATerm j_19 = t;
                                                              int k_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, l_13);
                                                                  t = r_0(t);
                                                                  u_41 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_41, m_13);
                                                                  t = r_0(t);
                                                                  t_41 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_13, t_41);
                                                                  t = r_0(t);
                                                                  s_41 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, s_41);
                                                                  t = r_0(t);
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
                                                                        ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL;
                                                                        t = d_14;
                                                                        t = new_0_0(t);
                                                                        w_41 = t;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        h_42 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = r_0(t);
                                                                        i_42 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(i_42), h_42);
                                                                        t = r_0(t);
                                                                        x_41 = t;
                                                                        t = w_41;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        g_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, g_42);
                                                                        t = r_0(t);
                                                                        f_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, f_42);
                                                                        t = r_0(t);
                                                                        z_41 = t;
                                                                        t = c_14;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        b_42 = t;
                                                                        t = w_41;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        e_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, e_42);
                                                                        t = r_0(t);
                                                                        d_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, d_42);
                                                                        t = r_0(t);
                                                                        c_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, b_42, c_42);
                                                                        t = r_0(t);
                                                                        a_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, z_41, a_42);
                                                                        t = r_0(t);
                                                                        y_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, x_41, y_41);
                                                                        t = r_0(t);
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
                                                          }
                                                        else
                                                          {
                                                            ATerm n_19 = t;
                                                            int o_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL;
                                                                t = d_14;
                                                                t = new_0_0(t);
                                                                l_42 = t;
                                                                t = bottomup_1_0(r_0, t);
                                                                b_43 = t;
                                                                t = (ATerm) ATempty;
                                                                t = r_0(t);
                                                                c_43 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(c_43), b_43);
                                                                t = r_0(t);
                                                                m_42 = t;
                                                                t = l_42;
                                                                t = bottomup_1_0(r_0, t);
                                                                a_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, a_43);
                                                                t = r_0(t);
                                                                z_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, z_42);
                                                                t = r_0(t);
                                                                t_42 = t;
                                                                t = c_14;
                                                                t = bottomup_1_0(r_0, t);
                                                                v_42 = t;
                                                                t = l_42;
                                                                t = bottomup_1_0(r_0, t);
                                                                y_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, y_42);
                                                                t = r_0(t);
                                                                x_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, x_42);
                                                                t = r_0(t);
                                                                w_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, v_42, w_42);
                                                                t = r_0(t);
                                                                u_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, t_42, u_42);
                                                                t = r_0(t);
                                                                n_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, m_42, n_42);
                                                                t = r_0(t);
                                                                ;
                                                                LocalPopChoice(o_19);
                                                              }
                                                            else
                                                              {
                                                                t = n_19;
                                                                t = d_14;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = z_13;
                                                        {
                                                          ATerm p_19 = t;
                                                          int q_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_43 = NULL,g_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL;
                                                              t = d_14;
                                                              t = new_0_0(t);
                                                              f_43 = t;
                                                              t = bottomup_1_0(r_0, t);
                                                              s_43 = t;
                                                              t = (ATerm) ATempty;
                                                              t = r_0(t);
                                                              t_43 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(t_43), s_43);
                                                              t = r_0(t);
                                                              g_43 = t;
                                                              t = f_43;
                                                              t = bottomup_1_0(r_0, t);
                                                              r_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, r_43);
                                                              t = r_0(t);
                                                              q_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, q_43);
                                                              t = r_0(t);
                                                              k_43 = t;
                                                              t = c_14;
                                                              t = bottomup_1_0(r_0, t);
                                                              m_43 = t;
                                                              t = f_43;
                                                              t = bottomup_1_0(r_0, t);
                                                              p_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, p_43);
                                                              t = r_0(t);
                                                              o_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, o_43);
                                                              t = r_0(t);
                                                              n_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_43, n_43);
                                                              t = r_0(t);
                                                              l_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, k_43, l_43);
                                                              t = r_0(t);
                                                              j_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_43, j_43);
                                                              t = r_0(t);
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
                                                else
                                                  {
                                                    t = z_13;
                                                    {
                                                      ATerm r_19 = t;
                                                      int s_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL;
                                                          t = d_14;
                                                          t = new_0_0(t);
                                                          w_43 = t;
                                                          t = bottomup_1_0(r_0, t);
                                                          h_44 = t;
                                                          t = (ATerm) ATempty;
                                                          t = r_0(t);
                                                          i_44 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(i_44), h_44);
                                                          t = r_0(t);
                                                          x_43 = t;
                                                          t = w_43;
                                                          t = bottomup_1_0(r_0, t);
                                                          g_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, g_44);
                                                          t = r_0(t);
                                                          f_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, f_44);
                                                          t = r_0(t);
                                                          z_43 = t;
                                                          t = c_14;
                                                          t = bottomup_1_0(r_0, t);
                                                          b_44 = t;
                                                          t = w_43;
                                                          t = bottomup_1_0(r_0, t);
                                                          e_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, e_44);
                                                          t = r_0(t);
                                                          d_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, d_44);
                                                          t = r_0(t);
                                                          c_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_44, c_44);
                                                          t = r_0(t);
                                                          a_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_43, a_44);
                                                          t = r_0(t);
                                                          y_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, x_43, y_43);
                                                          t = r_0(t);
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
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    z_13 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm t_19 = t;
                                                      int u_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, z_13);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(u_19);
                                                        }
                                                      else
                                                        {
                                                          t = t_19;
                                                          {
                                                            ATerm v_19 = t;
                                                            int w_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL;
                                                                t = d_14;
                                                                t = new_0_0(t);
                                                                m_44 = t;
                                                                t = bottomup_1_0(r_0, t);
                                                                x_44 = t;
                                                                t = (ATerm) ATempty;
                                                                t = r_0(t);
                                                                y_44 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(y_44), x_44);
                                                                t = r_0(t);
                                                                n_44 = t;
                                                                t = m_44;
                                                                t = bottomup_1_0(r_0, t);
                                                                w_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, w_44);
                                                                t = r_0(t);
                                                                v_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, v_44);
                                                                t = r_0(t);
                                                                p_44 = t;
                                                                t = c_14;
                                                                t = bottomup_1_0(r_0, t);
                                                                r_44 = t;
                                                                t = m_44;
                                                                t = bottomup_1_0(r_0, t);
                                                                u_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, u_44);
                                                                t = r_0(t);
                                                                t_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, t_44);
                                                                t = r_0(t);
                                                                s_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, r_44, s_44);
                                                                t = r_0(t);
                                                                q_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_44, q_44);
                                                                t = r_0(t);
                                                                o_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, n_44, o_44);
                                                                t = r_0(t);
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
                                                  }
                                                else
                                                  {
                                                    ATerm x_19 = t;
                                                    int y_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
                                                        t = d_14;
                                                        t = new_0_0(t);
                                                        b_45 = t;
                                                        t = bottomup_1_0(r_0, t);
                                                        m_45 = t;
                                                        t = (ATerm) ATempty;
                                                        t = r_0(t);
                                                        n_45 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(n_45), m_45);
                                                        t = r_0(t);
                                                        c_45 = t;
                                                        t = b_45;
                                                        t = bottomup_1_0(r_0, t);
                                                        l_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, l_45);
                                                        t = r_0(t);
                                                        k_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, k_45);
                                                        t = r_0(t);
                                                        e_45 = t;
                                                        t = c_14;
                                                        t = bottomup_1_0(r_0, t);
                                                        g_45 = t;
                                                        t = b_45;
                                                        t = bottomup_1_0(r_0, t);
                                                        j_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, j_45);
                                                        t = r_0(t);
                                                        i_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, i_45);
                                                        t = r_0(t);
                                                        h_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_45, h_45);
                                                        t = r_0(t);
                                                        f_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, e_45, f_45);
                                                        t = r_0(t);
                                                        d_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, c_45, d_45);
                                                        t = r_0(t);
                                                        ;
                                                        LocalPopChoice(y_19);
                                                      }
                                                    else
                                                      {
                                                        t = x_19;
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
                                            ATerm z_19 = t;
                                            int a_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_7;
                                                t = r_0(t);
                                                ;
                                                LocalPopChoice(a_20);
                                              }
                                            else
                                              {
                                                t = z_19;
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
                                                ATerm b_20 = t;
                                                int c_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_k_7;
                                                    t = r_0(t);
                                                    ;
                                                    LocalPopChoice(c_20);
                                                  }
                                                else
                                                  {
                                                    t = b_20;
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
                                                    ATerm d_20 = t;
                                                    int e_20 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_k_7;
                                                        t = r_0(t);
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
                                                ATerm f_20 = t;
                                                int g_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm h_20 = ATgetArgument(t, 0);
                                                        b_14 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(g_20);
                                                    t = b_14;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm i_20 = t;
                                                        int j_20 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_k_7;
                                                            t = r_0(t);
                                                            ;
                                                            LocalPopChoice(j_20);
                                                          }
                                                        else
                                                          {
                                                            t = i_20;
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
                                                    t = f_20;
                                                    {
                                                      ATerm k_20 = t;
                                                      int l_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm m_20 = ATgetArgument(t, 0);
                                                              b_14 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(l_20);
                                                          {
                                                            ATerm n_20 = t;
                                                            int o_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = b_14;
                                                                t = fetch_1_0(m_1, t);
                                                                t = term_k_7;
                                                                t = bottomup_1_0(r_0, t);
                                                                ;
                                                                LocalPopChoice(o_20);
                                                              }
                                                            else
                                                              {
                                                                t = n_20;
                                                                t = d_14;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = k_20;
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
                                                                            ATerm q_20 = t;
                                                                            int r_20 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm v_46 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, a_14, b_14);
                                                                                t = r_0(t);
                                                                                v_46 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, z_13, v_46);
                                                                                t = r_0(t);
                                                                                ;
                                                                                LocalPopChoice(r_20);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = q_20;
                                                                                {
                                                                                  ATerm s_20 = t;
                                                                                  int t_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = b_14;
                                                                                      if((c_14 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
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
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm u_20 = t;
                                                                          int v_20 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = b_14;
                                                                              if((c_14 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              ;
                                                                              LocalPopChoice(v_20);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_20;
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
                                                                      ATerm w_20 = t;
                                                                      int x_20 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_14, b_14);
                                                                          t = r_0(t);
                                                                          ;
                                                                          LocalPopChoice(x_20);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = w_20;
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
                                                                        ATerm y_20 = t;
                                                                        int z_20 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, c_14, b_14);
                                                                            t = r_0(t);
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
                                                                                ATerm a_21 = t;
                                                                                int b_21 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm j_47 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, a_14);
                                                                                    t = r_0(t);
                                                                                    j_47 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, z_13, j_47);
                                                                                    t = r_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(b_21);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = a_21;
                                                                                    t = d_14;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm c_21 = t;
                                                                                  int d_21 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_k_7;
                                                                                      t = r_0(t);
                                                                                      ;
                                                                                      LocalPopChoice(d_21);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = c_21;
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
                                                                                    ATerm e_21 = t;
                                                                                    int g_21 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm r_47 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, a_14);
                                                                                        t = r_0(t);
                                                                                        r_47 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, z_13, r_47);
                                                                                        t = r_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(g_21);
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
                                                                                      ATerm h_21 = t;
                                                                                      int i_21 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_k_7;
                                                                                          t = r_0(t);
                                                                                          ;
                                                                                          LocalPopChoice(i_21);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = h_21;
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
                                                                                        ATerm k_21 = t;
                                                                                        int s_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm y_47 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, a_14);
                                                                                            t = r_0(t);
                                                                                            y_47 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, y_47);
                                                                                            t = r_0(t);
                                                                                            ;
                                                                                            LocalPopChoice(s_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = k_21;
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
                                                                                              t = term_e_7;
                                                                                              t = r_0(t);
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
                                                                                  if(match_cons(t, sym_RDefT_4))
                                                                                    {
                                                                                      c_14 = ATgetArgument(t, 0);
                                                                                      b_14 = ATgetArgument(t, 1);
                                                                                      j_13 = ATgetArgument(t, 2);
                                                                                      i_13 = ATgetArgument(t, 3);
                                                                                      {
                                                                                        ATerm w_21 = t;
                                                                                        int x_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm g_48 = NULL,j_48 = NULL;
                                                                                            t = b_14;
                                                                                            t = map1_1_0(n_1, t);
                                                                                            g_48 = t;
                                                                                            t = j_13;
                                                                                            t = map1_1_0(o_1, t);
                                                                                            j_48 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, c_14, g_48, j_48, i_13);
                                                                                            t = bottomup_1_0(r_0, t);
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
                                                                                      if(match_cons(t, sym_SDefT_4))
                                                                                        {
                                                                                          c_14 = ATgetArgument(t, 0);
                                                                                          b_14 = ATgetArgument(t, 1);
                                                                                          j_13 = ATgetArgument(t, 2);
                                                                                          i_13 = ATgetArgument(t, 3);
                                                                                          {
                                                                                            ATerm z_21 = t;
                                                                                            int a_22 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm v_48 = NULL,x_48 = NULL;
                                                                                                t = j_13;
                                                                                                t = map1_1_0(p_1, t);
                                                                                                v_48 = t;
                                                                                                t = b_14;
                                                                                                t = map_1_0(v_1, t);
                                                                                                x_48 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, c_14, x_48, v_48, i_13);
                                                                                                t = bottomup_1_0(r_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(a_22);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = z_21;
                                                                                                {
                                                                                                  ATerm b_22 = t;
                                                                                                  int d_22 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm h_49 = NULL,p_49 = NULL;
                                                                                                      t = b_14;
                                                                                                      t = map1_1_0(b_2, t);
                                                                                                      h_49 = t;
                                                                                                      t = j_13;
                                                                                                      t = map_1_0(c_2, t);
                                                                                                      p_49 = t;
                                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, c_14, h_49, p_49, i_13);
                                                                                                      t = bottomup_1_0(r_0, t);
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
                                                                                                ATerm e_22 = t;
                                                                                                int f_22 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL;
                                                                                                    t = term_g_22;
                                                                                                    t = bottomup_1_0(r_0, t);
                                                                                                    b_50 = t;
                                                                                                    t = (ATerm) ATempty;
                                                                                                    t = r_0(t);
                                                                                                    e_50 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(e_50), j_13);
                                                                                                    t = r_0(t);
                                                                                                    d_50 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(d_50), c_14);
                                                                                                    t = r_0(t);
                                                                                                    c_50 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Op_2, b_50, c_50);
                                                                                                    t = r_0(t);
                                                                                                    a_50 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_App_2, b_14, a_50);
                                                                                                    t = r_0(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(f_22);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = e_22;
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
                                                                                                    ATerm i_22 = t;
                                                                                                    int j_22 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, b_14);
                                                                                                        t = r_0(t);
                                                                                                        k_50 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, j_13);
                                                                                                        t = r_0(t);
                                                                                                        n_50 = t;
                                                                                                        t = (ATerm) ATempty;
                                                                                                        t = r_0(t);
                                                                                                        o_50 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(o_50), n_50);
                                                                                                        t = r_0(t);
                                                                                                        m_50 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(m_50), c_14);
                                                                                                        t = r_0(t);
                                                                                                        l_50 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(l_50), k_50);
                                                                                                        t = r_0(t);
                                                                                                        j_50 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, j_50);
                                                                                                        t = r_0(t);
                                                                                                        ;
                                                                                                        LocalPopChoice(j_22);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = i_22;
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
                                                                                                        ATerm k_22 = t;
                                                                                                        int l_22 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm s_50 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Match_1, b_14);
                                                                                                            t = r_0(t);
                                                                                                            s_50 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, c_14, s_50);
                                                                                                            t = r_0(t);
                                                                                                            ;
                                                                                                            LocalPopChoice(l_22);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = k_22;
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
                                                                                                            ATerm m_22 = t;
                                                                                                            int n_22 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                ATerm w_50 = NULL;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, c_14);
                                                                                                                t = r_0(t);
                                                                                                                w_50 = t;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, w_50, b_14);
                                                                                                                t = r_0(t);
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
                                                                                                          if(match_cons(t, sym_BA_2))
                                                                                                            {
                                                                                                              c_14 = ATgetArgument(t, 0);
                                                                                                              b_14 = ATgetArgument(t, 1);
                                                                                                              {
                                                                                                                ATerm o_22 = t;
                                                                                                                int p_22 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    ATerm b_51 = NULL;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, b_14);
                                                                                                                    t = r_0(t);
                                                                                                                    b_51 = t;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, b_51, c_14);
                                                                                                                    t = r_0(t);
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
                                                                                                                          ATerm r_22 = t;
                                                                                                                          int s_22 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm n_51 = NULL;
                                                                                                                              t = (ATerm) ATmakeAppl(sym__2, c_14, x_13);
                                                                                                                              t = conc_0_0(t);
                                                                                                                              n_51 = t;
                                                                                                                              t = (ATerm) ATmakeAppl(sym_Let_2, n_51, y_13);
                                                                                                                              t = bottomup_1_0(r_0, t);
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
                                                                                                                                                              ATerm t_22 = t;
                                                                                                                                                              int v_22 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  t = w_13;
                                                                                                                                                                  if((v_13 != t))
                                                                                                                                                                    {
                                                                                                                                                                      _fail(t);
                                                                                                                                                                    }
                                                                                                                                                                  t = o_13;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm w_22 = t;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        ATerm g_2 (ATerm t)
                                                                                                                                                                        {
                                                                                                                                                                          if(match_cons(t, sym_CallT_3))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm x_22 = ATgetArgument(t, 0);
                                                                                                                                                                              if(match_cons(x_22, sym_SVar_1))
                                                                                                                                                                                {
                                                                                                                                                                                  if((v_13 != ATgetArgument(x_22, 0)))
                                                                                                                                                                                    {
                                                                                                                                                                                      _fail(ATgetArgument(x_22, 0));
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              {
                                                                                                                                                                                ATerm z_22 = ATgetArgument(t, 1);
                                                                                                                                                                                if(((ATgetType(z_22) != AT_LIST) || !(ATisEmpty(z_22))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                              {
                                                                                                                                                                                ATerm a_23 = ATgetArgument(t, 2);
                                                                                                                                                                                if(((ATgetType(a_23) != AT_LIST) || !(ATisEmpty(a_23))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          return(t);
                                                                                                                                                                        }
                                                                                                                                                                        t = oncetd_1_0(g_2, t);
                                                                                                                                                                        PopChoice();
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = w_22;
                                                                                                                                                                      }
                                                                                                                                                                    t = o_13;
                                                                                                                                                                    t = bottomup_1_0(r_0, t);
                                                                                                                                                                  }
                                                                                                                                                                  ;
                                                                                                                                                                  LocalPopChoice(v_22);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = t_22;
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
  t = bottomup_1_0(r_0, t);
  return(t);
}
ATerm map_1_0 (ATerm c_107 (ATerm), ATerm t)
{
  ATerm q_53 (ATerm t)
  {
    ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL;
    n_53 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_53;
      }
    else
      {
        ATerm k_5 = NULL,n_5 = NULL,o_5 = NULL,u_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_53 = ATgetFirst((ATermList) t);
            p_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_53);
        k_5 = t;
        t = o_53;
        t = c_107(t);
        n_5 = t;
        t = p_53;
        t = q_53(t);
        o_5 = t;
        t = (ATerm) ATinsert(CheckATermList(o_5), n_5);
        u_2 = t;
        t = SSLsetAnnotations(u_2, k_5);
      }
    return(t);
  }
  t = q_53(t);
  return(t);
}
ATerm Cons_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm t)
{
  ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL,w_2 = NULL;
  x_53 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_53 = ATgetFirst((ATermList) t);
      u_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_53);
  s_53 = t;
  t = t_53;
  t = b_76(t);
  v_53 = t;
  t = u_53;
  t = c_76(t);
  w_53 = t;
  t = (ATerm) ATinsert(CheckATermList(w_53), v_53);
  w_2 = t;
  t = SSLsetAnnotations(w_2, s_53);
  return(t);
}
ATerm y_11 (ATerm j_49, ATerm k_49, ATerm t)
{
  ATerm y_53 = NULL;
  t = SSL_fputc(j_49, k_49);
  y_53 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_53);
  return(t);
}
ATerm z_11 (ATerm x_52, ATerm y_52, ATerm t)
{
  ATerm z_53 = NULL;
  t = SSL_write_term_to_stream_text(x_52, y_52);
  z_53 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_53);
  return(t);
}
ATerm b_12 (ATerm d_113 (ATerm), ATerm v_477, ATerm b_53, ATerm t)
{
  ATerm c_54 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_477, term_b_23);
  t = e_12(t);
  c_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_54, b_53);
  t = d_113(t);
  t = fclose_0_0(t);
  t = b_53;
  return(t);
}
ATerm a_12 (ATerm t_52, ATerm u_52, ATerm t)
{
  ATerm d_54 = NULL;
  t = SSL_write_term_to_stream_baf(t_52, u_52);
  d_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_54);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_23 = ATgetArgument(t, 0);
      if(match_cons(c_23, sym_Stream_1))
        {
          g_54 = ATgetArgument(c_23, 0);
        }
      else
        _fail(t);
      h_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12(g_54, h_54, t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm i_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_23 = ATgetArgument(t, 0);
      if(match_cons(e_23, sym_Stream_1))
        {
          q_54 = ATgetArgument(e_23, 0);
        }
      else
        _fail(t);
      r_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_11(q_54, r_54, t);
  i_54 = t;
  t = term_f_23;
  o_54 = t;
  t = i_54;
  if(match_cons(t, sym_Stream_1))
    {
      p_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_f_23, i_54);
  t = y_11(o_54, p_54, t);
  return(t);
}
ATerm output_1_0 (ATerm m_117 (ATerm), ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL;
  t = m_117(t);
  f_54 = t;
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_23;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        t = term_j_23;
      }
    e_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_54, f_54);
    {
      ATerm k_23 = t;
      int l_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_n_23;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, e_54, f_54);
          LocalPopChoice(l_23);
          if(match_cons(t, sym__2))
            {
              ATerm o_23 = ATgetArgument(t, 0);
              ATerm p_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_12(j_2, e_54, f_54, t);
        }
      else
        {
          t = k_23;
          if(match_cons(t, sym__2))
            {
              ATerm q_23 = ATgetArgument(t, 0);
              ATerm s_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_12(q_2, e_54, f_54, t);
        }
    }
  }
  return(t);
}
ATerm g_55 (ATerm z_54, ATerm t)
{
  t = SSL_fclose(z_54);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL;
  d_55 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_55 = ATgetArgument(t, 0);
      {
        ATerm t_23 = t;
        int u_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_55);
            ;
            LocalPopChoice(u_23);
          }
        else
          {
            t = t_23;
            t = g_55(d_55, t);
          }
      }
    }
  else
    {
      t = g_55(d_55, t);
    }
  return(t);
}
ATerm c_12 (ATerm z_52, ATerm t)
{
  t = SSL_read_term_from_stream(z_52);
  return(t);
}
ATerm d_12 (ATerm l_49, ATerm m_49, ATerm t)
{
  ATerm h_55 = NULL;
  t = SSL_fopen(l_49, m_49);
  h_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_55);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_55 = NULL;
  t = SSL_stdin_stream();
  i_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_55);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_55 = NULL;
  t = SSL_stdout_stream();
  j_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_55);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_55 = NULL;
  t = SSL_stderr_stream();
  k_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_55);
  return(t);
}
ATerm s_56 (ATerm q_55, ATerm t)
{
  ATerm r_55 = NULL;
  t = SSL_explode_term(q_55);
  if(match_cons(t, sym__2))
    {
      ATerm v_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_23 = ATgetArgument(t, 1);
        if(((ATgetType(w_23) == AT_LIST) && !(ATisEmpty(w_23))))
          {
            r_55 = ATgetFirst((ATermList) w_23);
            {
              ATerm z_23 = (ATerm) ATgetNext((ATermList) w_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_55;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_55;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_55;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_55;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm t_56 (ATerm u_55, ATerm v_55, ATerm w_55, ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL,c_56 = NULL,y_2 = NULL;
  t = SSLgetAnnotations(w_55);
  z_55 = t;
  t = u_55;
  if(match_cons(t, sym_Path_1))
    {
      c_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_56, v_55);
  y_2 = t;
  t = SSLsetAnnotations(y_2, z_55);
  if(match_cons(t, sym__2))
    {
      x_55 = ATgetArgument(t, 0);
      y_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_12(x_55, y_55, t);
  return(t);
}
ATerm u_56 (ATerm e_56, ATerm f_56, ATerm g_56, ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL,m_56 = NULL,z_2 = NULL;
  t = SSLgetAnnotations(g_56);
  j_56 = t;
  t = SSL_is_string(e_56);
  m_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_56, f_56);
  z_2 = t;
  t = SSLsetAnnotations(z_2, j_56);
  if(match_cons(t, sym__2))
    {
      h_56 = ATgetArgument(t, 0);
      i_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_12(h_56, i_56, t);
  return(t);
}
ATerm e_12 (ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL;
  p_56 = t;
  if(match_cons(t, sym__2))
    {
      q_56 = ATgetArgument(t, 0);
      r_56 = ATgetArgument(t, 1);
      {
        ATerm a_24 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_56(p_56, t);
            ;
            LocalPopChoice(b_24);
          }
        else
          {
            t = a_24;
            {
              ATerm c_24 = t;
              int d_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_56(q_56, r_56, p_56, t);
                  ;
                  LocalPopChoice(d_24);
                }
              else
                {
                  t = c_24;
                  t = u_56(q_56, r_56, p_56, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_56(p_56, t);
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL,x_56 = NULL;
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_56 = NULL;
      y_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_56, term_i_24);
      t = e_12(t);
      ;
      LocalPopChoice(g_24);
    }
  else
    {
      t = f_24;
      t = debug_1_0(r_2, t);
      _fail(t);
    }
  w_56 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_12(x_56, t);
  v_56 = t;
  t = w_56;
  t = fclose_0_0(t);
  t = v_56;
  return(t);
}
ATerm input_1_0 (ATerm n_117 (ATerm), ATerm t)
{
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      t = term_m_24;
    }
  t = ReadFromFile_0_0(t);
  t = n_117(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL;
  a_57 = t;
  t = term_n_24;
  t = whoami_0_0(t);
  b_57 = t;
  t = term_o_24;
  d_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_24), b_57), term_p_24);
  e_57 = t;
  t = SSL_printnl(d_57, e_57);
  t = term_r_24;
  c_57 = t;
  t = SSL_exit(c_57);
  t = a_57;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm g_57 = NULL;
  g_57 = t;
  if(match_string(t, "-k"))
    {
      t = g_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_57;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL;
  h_57 = t;
  t = SSL_string_to_int(h_57);
  i_57 = t;
  t = term_s_24;
  j_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_24, i_57);
  t = m_12(j_57, i_57, t);
  t = h_57;
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_t_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_2, t_2, v_2, t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm l_57 = NULL;
  l_57 = t;
  if(match_string(t, "-S"))
    {
      t = l_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_57;
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm m_57 = NULL,n_57 = NULL;
  t = term_u_24;
  m_57 = t;
  t = term_v_24;
  n_57 = t;
  t = term_w_24;
  t = m_12(m_57, n_57, t);
  t = term_x_24;
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm c_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL;
  o_57 = t;
  t = SSL_string_to_int(o_57);
  p_57 = t;
  t = term_u_24;
  q_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_24, p_57);
  t = m_12(q_57, p_57, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_57);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm h_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm r_57 = NULL,s_57 = NULL;
  t = term_b_25;
  r_57 = t;
  t = term_n_24;
  s_57 = t;
  t = term_c_25;
  t = m_12(r_57, s_57, t);
  t = term_d_25;
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_f_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_2, a_3, b_3, t);
      ;
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      {
        ATerm i_25 = t;
        int j_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_3, e_3, f_3, t);
            ;
            LocalPopChoice(j_25);
          }
        else
          {
            t = i_25;
            t = Option_3_0(h_3, i_3, l_3, t);
          }
      }
    }
  return(t);
}
ATerm m_12 (ATerm a_54, ATerm b_54, ATerm t)
{
  ATerm t_57 = NULL;
  t = term_k_25;
  t_57 = t;
  t = SSL_table_put(t_57, a_54, b_54);
  t = (ATerm) ATmakeAppl(sym__3, term_k_25, a_54, b_54);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_57 = NULL,a_58 = NULL,b_58 = NULL;
      t = term_n_24;
      t = h_0(t);
      z_57 = t;
      t = term_l_25;
      a_58 = t;
      t = term_n_25;
      b_58 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_25, term_n_25, z_57);
      t = k_12(a_58, b_58, z_57, t);
      _fail(t);
    }
  else
    {
      ATerm e_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_57 = ATgetFirst((ATermList) t);
          y_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_57;
      t = d_0(t);
      t = term_n_24;
      t = g_0(t);
      e_58 = t;
      t = (ATerm) ATinsert(CheckATermList(y_57), e_58);
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm l_58 = NULL;
  l_58 = t;
  if(match_string(t, "-o"))
    {
      t = l_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_58;
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm m_58 = NULL,n_58 = NULL;
  m_58 = t;
  t = term_i_23;
  n_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_23, m_58);
  t = m_12(n_58, m_58, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_58);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_o_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_3, o_3, q_3, t);
  return(t);
}
ATerm k_12 (ATerm y_58, ATerm z_58, ATerm x_58, ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL;
  p_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_58, z_58);
  {
    ATerm p_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_25 = ATgetArgument(t, 0);
            ATerm s_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_58, z_58);
        t = j_12(y_58, z_58, t);
        ;
        LocalPopChoice(q_25);
      }
    else
      {
        t = p_25;
        t = (ATerm) ATempty;
      }
    q_58 = t;
    t = (ATerm) ATinsert(CheckATermList(q_58), x_58);
    r_58 = t;
    t = SSL_table_put(y_58, z_58, r_58);
    t = p_58;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL;
      t = term_n_24;
      t = m_0(t);
      g_59 = t;
      t = term_l_25;
      h_59 = t;
      t = term_n_25;
      i_59 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_25, term_n_25, g_59);
      t = k_12(h_59, i_59, g_59, t);
      _fail(t);
    }
  else
    {
      ATerm m_59 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_59 = ATgetFirst((ATermList) t);
          d_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_59;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_59 = ATgetFirst((ATermList) t);
          f_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_59;
      t = k_0(t);
      t = e_59;
      t = l_0(t);
      m_59 = t;
      t = (ATerm) ATinsert(CheckATermList(f_59), m_59);
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm p_59 = NULL;
  p_59 = t;
  if(match_string(t, "-i"))
    {
      t = p_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_59;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm q_59 = NULL,r_59 = NULL;
  q_59 = t;
  t = term_l_24;
  r_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_24, q_59);
  t = m_12(r_59, q_59, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_59);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_t_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_3, v_3, a_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_24;
  t = whoami_0_0(t);
  s_59 = t;
  t = term_o_24;
  u_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_25), s_59);
  v_59 = t;
  t = SSL_printnl(u_59, v_59);
  t = term_r_24;
  t_59 = t;
  t = SSL_exit(t_59);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_v_25;
  t = get_config_0_0(t);
  return(t);
}
ATerm f_12 (ATerm j_46, ATerm k_46, ATerm t)
{
  ATerm w_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_46, k_46);
      ;
      LocalPopChoice(y_25);
    }
  else
    {
      t = w_25;
      t = SSL_addr(j_46, k_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL;
  x_59 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_59;
      t = s_105(t);
    }
  else
    {
      ATerm c_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_59 = ATgetFirst((ATermList) t);
          z_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_59;
      t = foldr_2_0(s_105, t_105, t);
      c_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_59, c_60);
      t = t_105(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_v_24;
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm d_6 = NULL,e_6 = NULL;
  if(match_cons(t, sym__2))
    {
      d_6 = ATgetArgument(t, 0);
      e_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_12(d_6, e_6, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_60 = NULL,z_5 = NULL,a_6 = NULL;
  t = times_0_0(t);
  a_6 = t;
  t = SSL_explode_term(a_6);
  if(match_cons(t, sym__2))
    {
      ATerm z_25 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5;
  t = foldr_2_0(c_4, d_4, t);
  f_60 = t;
  t = SSL_TicksToSeconds(f_60);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_60 = NULL,t_60 = NULL,u_60 = NULL;
  s_60 = t;
  if(match_cons(t, sym__2))
    {
      t_60 = ATgetArgument(t, 0);
      u_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_60;
        if((t_60 != t))
          {
            _fail(t);
          }
        t = s_60;
        ;
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        t = (ATerm) ATmakeAppl(sym__2, t_60, u_60);
        {
          ATerm c_26 = t;
          int e_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_60, u_60);
              ;
              LocalPopChoice(e_26);
            }
          else
            {
              t = c_26;
              t = SSL_gtr(t_60, u_60);
            }
          t = (ATerm) ATmakeAppl(sym__2, t_60, u_60);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_114 (ATerm), ATerm t)
{
  ATerm y_60 = NULL;
  y_60 = t;
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_61 = NULL;
        t = term_u_24;
        t = get_config_0_0(t);
        a_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_61, term_r_24);
        t = geq_0_0(t);
        t = y_60;
        t = n_114(t);
        ;
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
        t = y_60;
      }
  }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL,g_61 = NULL,h_61 = NULL;
  t = run_time_0_0(t);
  d_61 = t;
  t = term_n_24;
  t = whoami_0_0(t);
  e_61 = t;
  t = term_o_24;
  g_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_26), d_61), term_h_26), e_61);
  h_61 = t;
  t = SSL_printnl(g_61, h_61);
  t = (ATerm) ATmakeAppl(sym__2, term_o_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_26), d_61), term_h_26), e_61));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_61 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_24;
  i_61 = t;
  t = SSL_exit(i_61);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm q_61 = NULL,r_61 = NULL;
  r_61 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = r_61;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          q_61 = ATgetArgument(t, 0);
          {
            ATerm q_6 = NULL,d_3 = NULL;
            t = SSLgetAnnotations(r_61);
            q_6 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, q_61);
            d_3 = t;
            t = SSLsetAnnotations(d_3, q_6);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = r_61;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_117 (ATerm), ATerm t)
{
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
      t = fetch_1_0(g_4, t);
    }
  t = d_117(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm u_61 = NULL,v_61 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_61 = ATgetFirst((ATermList) t);
      v_61 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_61 = NULL,a_62 = NULL;
        ATerm h_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_61)), not_null(a_62));
          return(t);
        }
        t = v_61;
        t = j_0(t);
        if(((z_61 != NULL) && (z_61 != t)))
          _fail(t);
        else
          z_61 = t;
        t = u_61;
        t = i_0(t);
        if(((a_62 != NULL) && (a_62 != t)))
          _fail(t);
        else
          a_62 = t;
        t = v_61;
        t = reverse_acc_2_0(i_0, h_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_24;
      t = j_0(t);
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL,g_3 = NULL;
  g_62 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_62);
  e_62 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_62);
  g_3 = t;
  t = SSLsetAnnotations(g_3, e_62);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm i_62 = NULL;
  i_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_62), term_n_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL;
  ATerm o_26 = t;
  int p_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_26);
    }
  else
    {
      t = o_26;
      t = fetch_1_0(i_4, t);
    }
  t = term_q_26;
  t = echo_0_0(t);
  t = term_l_25;
  c_62 = t;
  t = term_n_25;
  d_62 = t;
  t = term_s_26;
  t = j_12(c_62, d_62, t);
  t = reverse_acc_2_0(_id, j_4, t);
  t = map_1_0(k_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm m_107 (ATerm), ATerm t)
{
  ATerm g_63 (ATerm t)
  {
    ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL;
    d_63 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_63 = ATgetFirst((ATermList) t);
        f_63 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_26 = t;
      int u_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_6 = NULL,b_7 = NULL,j_3 = NULL;
          t = SSLgetAnnotations(d_63);
          y_6 = t;
          t = e_63;
          t = m_107(t);
          b_7 = t;
          t = (ATerm) ATinsert(CheckATermList(f_63), b_7);
          j_3 = t;
          t = SSLsetAnnotations(j_3, y_6);
          ;
          LocalPopChoice(u_26);
        }
      else
        {
          t = t_26;
          {
            ATerm j_7 = NULL,m_7 = NULL,k_3 = NULL;
            t = SSLgetAnnotations(d_63);
            j_7 = t;
            t = f_63;
            t = g_63(t);
            m_7 = t;
            t = (ATerm) ATinsert(CheckATermList(m_7), e_63);
            k_3 = t;
            t = SSLsetAnnotations(k_3, j_7);
          }
        }
    }
    return(t);
  }
  t = g_63(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL;
  k_63 = t;
  {
    ATerm v_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_63;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_26 = ATgetFirst((ATermList) t);
                ATerm z_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_63;
          }
        ;
        LocalPopChoice(x_26);
      }
    else
      {
        t = v_26;
        t = (ATerm) ATinsert(ATempty, k_63);
      }
    l_63 = t;
    t = term_j_23;
    m_63 = t;
    t = SSL_printnl(m_63, l_63);
    t = k_63;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_v_25;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm i_12 (ATerm j_40, ATerm k_40, ATerm t)
{
  t = SSL_strcat(j_40, k_40);
  return(t);
}
ATerm debug_1_0 (ATerm b_113 (ATerm), ATerm t)
{
  ATerm q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL;
  q_63 = t;
  t = b_113(t);
  r_63 = t;
  t = term_o_24;
  s_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_63), r_63);
  t_63 = t;
  t = SSL_printnl(s_63, t_63);
  t = q_63;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(b_27);
    }
  else
    {
      t = a_27;
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_c_27;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_64 = NULL;
      b_64 = t;
      t = SSL_is_string(b_64);
      ;
      LocalPopChoice(e_27);
    }
  else
    {
      t = d_27;
      {
        ATerm f_27 = t;
        int h_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(l_4, t);
            ;
            LocalPopChoice(h_27);
          }
        else
          {
            t = f_27;
            {
              ATerm j_64 = NULL,k_64 = NULL,l_64 = NULL;
              j_64 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_64 = ATgetArgument(t, 0);
                  t = k_64;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_64 = ATgetArgument(t, 0);
                      t = k_64;
                      {
                        ATerm i_27 = t;
                        int j_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(j_27);
                          }
                        else
                          {
                            t = i_27;
                            t = debug_1_0(m_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_64 = NULL,q_64 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_64 = ATgetArgument(t, 0);
                          l_64 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_64;
                      t = eval_config_0_0(t);
                      p_64 = t;
                      t = l_64;
                      t = eval_config_0_0(t);
                      q_64 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_64, q_64);
                      t = i_12(p_64, q_64, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm j_12 (ATerm p_60, ATerm q_60, ATerm t)
{
  t = SSL_table_get(p_60, q_60);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm u_64 = NULL,v_64 = NULL;
  u_64 = t;
  t = term_k_25;
  v_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_25, u_64);
  t = j_12(v_64, u_64, t);
  {
    ATerm k_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_64 = NULL,x_64 = NULL;
        t = eval_config_0_0(t);
        w_64 = t;
        t = term_k_25;
        x_64 = t;
        t = SSL_table_put(x_64, u_64, w_64);
        t = w_64;
        ;
        LocalPopChoice(m_27);
      }
    else
      {
        t = k_27;
      }
  }
  return(t);
}
ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm a_65 = NULL,b_65 = NULL;
  t = term_n_27;
  a_65 = t;
  t = term_n_24;
  b_65 = t;
  t = term_w_27;
  t = m_12(a_65, b_65, t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_x_27;
  return(t);
}
ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL;
  t = term_n_27;
  e_65 = t;
  t = term_n_24;
  f_65 = t;
  t = term_w_27;
  t = m_12(e_65, f_65, t);
  t = term_y_27;
  c_65 = t;
  t = term_n_24;
  d_65 = t;
  t = term_z_27;
  t = m_12(c_65, d_65, t);
  t = term_a_28;
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_b_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_4, p_4, q_4, t);
      ;
      LocalPopChoice(d_28);
    }
  else
    {
      t = c_28;
      t = Option_3_0(r_4, s_4, t_4, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_119 (ATerm), ATerm t)
{
  ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,p_65 = NULL,q_65 = NULL,n_3 = NULL;
  k_65 = t;
  {
    ATerm e_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_28;
        t = g_119(t);
        ;
        LocalPopChoice(g_28);
      }
    else
      {
        t = e_28;
      }
    t = k_65;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_65 = ATgetFirst((ATermList) t);
        n_65 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_65);
    l_65 = t;
    t = term_v_25;
    q_65 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_v_25, m_65);
    t = m_12(q_65, m_65, t);
    t = n_65;
    {
      ATerm a_66 (ATerm t)
      {
        ATerm i_28 = t;
        int j_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_28 = t;
            int l_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_65 = NULL;
                t_65 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = t_65;
                ;
                LocalPopChoice(l_28);
              }
            else
              {
                t = k_28;
                t = g_119(t);
                t = Cons_2_0(_id, a_66, t);
              }
            ;
            LocalPopChoice(j_28);
          }
        else
          {
            t = i_28;
            {
              ATerm w_65 = NULL,x_65 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_65 = ATgetFirst((ATermList) t);
                  x_65 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_65), (ATerm) ATmakeAppl(sym_Undefined_1, w_65));
            }
          }
        return(t);
      }
      t = a_66(t);
      p_65 = t;
      t = (ATerm) ATinsert(CheckATermList(p_65), (ATerm) ATmakeAppl(sym_Program_1, m_65));
      n_3 = t;
      t = SSLsetAnnotations(n_3, l_65);
    }
  }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm m_66 = NULL;
  m_66 = t;
  if(match_string(t, "--help"))
    {
      t = m_66;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_66;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_66;
        }
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL;
  t = term_m_26;
  n_66 = t;
  t = term_n_24;
  o_66 = t;
  t = term_m_28;
  t = m_12(n_66, o_66, t);
  t = term_n_28;
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_p_28;
  return(t);
}
ATerm z_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_119 (ATerm), ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL;
  h_66 = t;
  t = term_l_25;
  j_66 = t;
  t = term_n_25;
  k_66 = t;
  t = (ATerm) ATempty;
  l_66 = t;
  t = SSL_table_put(j_66, k_66, l_66);
  t = h_66;
  {
    ATerm v_4 (ATerm t)
    {
      ATerm q_28 = t;
      int r_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_119(t);
          ;
          LocalPopChoice(r_28);
        }
      else
        {
          t = q_28;
          {
            ATerm s_28 = t;
            int t_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_4, x_4, y_4, t);
                ;
                LocalPopChoice(t_28);
              }
            else
              {
                t = s_28;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_4, t);
    {
      ATerm u_28 = t;
      int v_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_66 = NULL;
          v_66 = t;
          {
            ATerm w_28 = t;
            int y_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_8 = NULL;
                t = v_66;
                {
                  ATerm z_28 = t;
                  int a_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_m_26;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(a_29);
                    }
                  else
                    {
                      t = z_28;
                      t = fetch_1_0(z_4, t);
                    }
                  t = v_66;
                  t = default_system_usage_0_0(t);
                  t = term_v_24;
                  b_8 = t;
                  t = SSL_exit(b_8);
                }
                ;
                LocalPopChoice(y_28);
              }
            else
              {
                t = w_28;
                {
                  ATerm f_8 = NULL;
                  t = term_n_27;
                  t = get_config_0_0(t);
                  t = v_66;
                  t = default_system_about_0_0(t);
                  t = term_v_24;
                  f_8 = t;
                  t = SSL_exit(f_8);
                }
              }
          }
          ;
          LocalPopChoice(v_28);
        }
      else
        {
          t = u_28;
          {
            ATerm b_29 = t;
            int c_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL;
                ATerm a_5 (ATerm t)
                {
                  ATerm z_66 = NULL,a_67 = NULL,b_67 = NULL,p_3 = NULL;
                  b_67 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      a_67 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(b_67);
                  z_66 = t;
                  t = a_67;
                  if(((f_66 != NULL) && (f_66 != t)))
                    _fail(t);
                  else
                    f_66 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, a_67);
                  p_3 = t;
                  t = SSLsetAnnotations(p_3, z_66);
                  return(t);
                }
                t = fetch_1_0(a_5, t);
                t = term_o_24;
                x_66 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_66)), term_d_29);
                y_66 = t;
                t = SSL_printnl(x_66, y_66);
                t = (ATerm) ATmakeAppl(sym__2, term_o_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_66)), term_d_29));
                t = default_system_usage_0_0(t);
                t = term_r_24;
                w_66 = t;
                t = SSL_exit(w_66);
                ;
                LocalPopChoice(c_29);
              }
            else
              {
                t = b_29;
              }
          }
        }
      g_66 = t;
      t = term_l_25;
      i_66 = t;
      t = SSL_table_destroy(i_66);
      t = g_66;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm t)
{
  ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL;
  t = parse_options_1_0(f_117, t);
  g_67 = t;
  t = term_e_29;
  j_67 = t;
  t = SSL_table_create(j_67);
  t = term_e_29;
  h_67 = t;
  t = term_f_29;
  i_67 = t;
  t = SSL_table_put(h_67, i_67, g_67);
  t = g_67;
  t = h_117(t);
  {
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_117, t);
        ;
        LocalPopChoice(h_29);
      }
    else
      {
        t = g_29;
        {
          ATerm i_29 = t;
          int j_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_117(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(j_29);
            }
          else
            {
              t = i_29;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm k_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(l_29);
    }
  else
    {
      t = k_29;
      {
        ATerm m_29 = t;
        int o_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(o_29);
          }
        else
          {
            t = m_29;
            {
              ATerm p_29 = t;
              int q_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(d_5, e_5, f_5, t);
                  ;
                  LocalPopChoice(q_29);
                }
              else
                {
                  t = p_29;
                  {
                    ATerm r_29 = t;
                    int s_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(s_29);
                      }
                    else
                      {
                        t = r_29;
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
ATerm c_5 (ATerm t)
{
  t = input_1_0(g_5, t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm l_67 = NULL,m_67 = NULL;
  t = term_n_23;
  l_67 = t;
  t = term_n_24;
  m_67 = t;
  t = term_t_29;
  t = m_12(l_67, m_67, t);
  t = term_v_29;
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_w_29;
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = output_1_0(h_5, t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL,z_3 = NULL,y_3 = NULL;
  v_67 = t;
  if(match_cons(t, sym_Specification_1))
    {
      p_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_67);
  o_67 = t;
  t = p_67;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_67 = ATgetFirst((ATermList) t);
      s_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_67);
  q_67 = t;
  t = s_67;
  t = Cons_2_0(i_5, j_5, t);
  t_67 = t;
  t = (ATerm) ATinsert(CheckATermList(t_67), r_67);
  y_3 = t;
  t = SSLsetAnnotations(y_3, q_67);
  u_67 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, u_67);
  z_3 = t;
  t = SSLsetAnnotations(z_3, o_67);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL,t_3 = NULL;
  z_67 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      x_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_67);
  w_67 = t;
  t = x_67;
  t = map_1_0(l_5, t);
  y_67 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, y_67);
  t_3 = t;
  t = SSLsetAnnotations(t_3, w_67);
  return(t);
}
ATerm j_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,s_3 = NULL;
  g_68 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      b_68 = ATgetArgument(t, 0);
      c_68 = ATgetArgument(t, 1);
      d_68 = ATgetArgument(t, 2);
      e_68 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_68);
  a_68 = t;
  t = e_68;
  t = simplify_0_0(t);
  f_68 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, b_68, c_68, d_68, f_68);
  s_3 = t;
  t = SSLsetAnnotations(s_3, a_68);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(b_5, default_usage_0_0, _id, c_5, t);
  return(t);
}
