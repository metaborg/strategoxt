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
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_k_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_p_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_i_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_q_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_q_24;
ATerm term_n_24;
ATerm term_s_23;
ATerm term_p_23;
ATerm term_n_23;
ATerm term_i_23;
ATerm term_c_23;
ATerm term_k_22;
ATerm term_k_7;
ATerm term_d_7;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
void init_constant_terms (void)
{
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_Sort_2, term_s_6, (ATerm) ATempty);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_ConstType_1, term_t_6);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__2, term_e_25, term_f_25);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_25);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_x_24);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__2, term_x_25, term_y_25);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym__2, term_z_27, term_x_24);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym__2, term_c_28, term_x_24);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym__2, term_z_26, term_x_24);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym__2, term_s_23, term_x_24);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm alltd_1_0 (ATerm y_115 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm h_114 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm k_115 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm y_125 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm f_2 (ATerm s_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm genzip_4_0 (ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm u_118 (ATerm), ATerm v_118 (ATerm), ATerm);
ATerm Anno__Cong_____2_0 (ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm);
ATerm s_0 (ATerm);
ATerm v_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm x_1 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm simplify_0_0 (ATerm);
ATerm map_1_0 (ATerm i_125 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm);
ATerm n_11 (ATerm d_74, ATerm e_74, ATerm);
ATerm o_11 (ATerm r_77, ATerm s_77, ATerm);
ATerm q_11 (ATerm o_135 (ATerm), ATerm k_556, ATerm v_77, ATerm);
ATerm p_11 (ATerm n_77, ATerm o_77, ATerm);
ATerm n_2 (ATerm);
ATerm x_2 (ATerm);
ATerm output_1_0 (ATerm x_139 (ATerm), ATerm);
ATerm s_55 (ATerm m_55, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm r_11 (ATerm t_77, ATerm);
ATerm s_11 (ATerm f_74, ATerm g_74, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm e_57 (ATerm c_56, ATerm);
ATerm f_57 (ATerm g_56, ATerm h_56, ATerm j_56, ATerm);
ATerm g_57 (ATerm r_56, ATerm s_56, ATerm t_56, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm y_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm y_139 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm d_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm o_3 (ATerm);
ATerm r_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm b_12 (ATerm u_78, ATerm v_78, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm s_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm z_11 (ATerm h_69, ATerm i_69, ATerm g_69, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm b_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm u_11 (ATerm l_67, ATerm m_67, ATerm);
ATerm foldr_2_0 (ATerm a_128 (ATerm), ATerm b_128 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm c_4 (ATerm);
ATerm g_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_136 (ATerm), ATerm);
ATerm j_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm k_4 (ATerm);
ATerm need_help_1_0 (ATerm o_139 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm s_125 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm x_11 (ATerm e_60, ATerm f_60, ATerm);
ATerm debug_1_0 (ATerm m_135 (ATerm), ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm y_11 (ATerm y_70, ATerm z_70, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm s_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm r_141 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm e_5 (ATerm);
ATerm parse_options_1_0 (ATerm q_141 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm alltd_1_0 (ATerm y_115 (ATerm), ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm r_0 = t;
    int s_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_115(t);
        ;
        LocalPopChoice(s_5);
      }
    else
      {
        t = r_0;
        t = SRTS_all(c_0, t);
      }
    return(t);
  }
  t = c_0(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm h_114 (ATerm), ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    t = bottomup_1_0(h_114, t);
    return(t);
  }
  t = SRTS_all(e_0, t);
  t = h_114(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm k_115 (ATerm), ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm t_5 = t;
    int u_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_115(t);
        ;
        LocalPopChoice(u_5);
      }
    else
      {
        t = t_5;
        t = SRTS_one(o_2, t);
      }
    return(t);
  }
  t = o_2(t);
  return(t);
}
ATerm at_end_1_0 (ATerm y_125 (ATerm), ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm c_1 = NULL,d_1 = NULL,e_1 = NULL;
    e_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_1 = ATgetFirst((ATermList) t);
        d_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_0 = NULL,i_1 = NULL,u_0 = NULL;
          t = SSLgetAnnotations(e_1);
          t_0 = t;
          t = d_1;
          t = h_1(t);
          i_1 = t;
          t = (ATerm) ATinsert(CheckATermList(i_1), c_1);
          u_0 = t;
          t = SSLsetAnnotations(u_0, t_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_1;
        t = y_125(t);
      }
    return(t);
  }
  t = h_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_0 = NULL,j_0 = NULL,o_0 = NULL;
  h_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_0;
    }
  else
    {
      ATerm l_0 (ATerm t)
      {
        t = not_null(o_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((j_0 != NULL) && (j_0 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            j_0 = ATgetFirst((ATermList) t);
          if(((o_0 != NULL) && (o_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(j_0);
      t = at_end_1_0(l_0, t);
    }
  return(t);
}
ATerm f_2 (ATerm s_1, ATerm t)
{
  ATerm v_1 = NULL;
  t = SSL_explode_term(s_1);
  if(match_cons(t, sym__2))
    {
      ATerm w_5 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_5) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm y_1 = NULL,a_2 = NULL,b_2 = NULL;
  if(((b_2 != NULL) && (b_2 != t)))
    _fail(t);
  else
    b_2 = t;
  if(match_cons(t, sym__2))
    {
      y_1 = ATgetArgument(t, 0);
      a_2 = ATgetArgument(t, 1);
      {
        ATerm x_5 = t;
        int y_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_0 (ATerm t)
            {
              t = not_null(a_2);
              return(t);
            }
            t = not_null(y_1);
            t = at_end_1_0(p_0, t);
            ;
            LocalPopChoice(y_5);
          }
        else
          {
            t = x_5;
            t = f_2(not_null(b_2), t);
          }
      }
    }
  else
    {
      t = f_2(not_null(b_2), t);
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,h_4 = NULL;
  e_4 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_4 = ATgetFirst((ATermList) t);
      h_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm z_5 = t;
    int a_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_1 = NULL,t_1 = NULL,u_1 = NULL,w_1 = NULL,z_1 = NULL,m_2 = NULL,v_2 = NULL,x_0 = NULL,w_0 = NULL;
        t = SSLgetAnnotations(e_4);
        z_1 = t;
        t = f_4;
        t = n_0(t);
        m_2 = t;
        t = (ATerm) ATinsert(CheckATermList(h_4), m_2);
        w_0 = t;
        t = SSLsetAnnotations(w_0, z_1);
        v_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_1 = ATgetFirst((ATermList) t);
            u_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_2);
        r_1 = t;
        t = u_1;
        {
          ATerm b_6 = t;
          int c_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(c_6);
            }
          else
            {
              t = b_6;
            }
          w_1 = t;
          t = (ATerm) ATinsert(CheckATermList(w_1), t_1);
          x_0 = t;
          t = SSLsetAnnotations(x_0, r_1);
        }
        ;
        LocalPopChoice(a_6);
      }
    else
      {
        t = z_5;
        {
          ATerm d_4 = NULL,l_4 = NULL,y_0 = NULL;
          t = SSLgetAnnotations(e_4);
          d_4 = t;
          t = h_4;
          t = map1_1_0(n_0, t);
          l_4 = t;
          t = (ATerm) ATinsert(CheckATermList(l_4), f_4);
          y_0 = t;
          t = SSLsetAnnotations(y_0, d_4);
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
ATerm genzip_4_0 (ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm u_118 (ATerm), ATerm v_118 (ATerm), ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm d_6 = t;
    int e_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_118(t);
        ;
        LocalPopChoice(e_6);
      }
    else
      {
        t = d_6;
        {
          ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,j_1 = NULL;
          t = t_118(t);
          u_2 = t;
          if(match_cons(t, sym__2))
            {
              q_2 = ATgetArgument(t, 0);
              r_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_2);
          p_2 = t;
          t = q_2;
          t = v_118(t);
          s_2 = t;
          t = r_2;
          t = w_2(t);
          t_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_2, t_2);
          j_1 = t;
          t = SSLsetAnnotations(j_1, p_2);
          t = u_118(t);
        }
      }
    return(t);
  }
  t = w_2(t);
  return(t);
}
ATerm Anno__Cong_____2_0 (ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL,k_2 = NULL,l_2 = NULL;
  l_2 = t;
  g_2 = t;
  t = SSLgetAnnotations(l_2);
  i_2 = t;
  t = g_2;
  t = h_112(t);
  h_2 = t;
  t = i_2;
  t = i_112(t);
  k_2 = t;
  t = SSLsetAnnotations(h_2, k_2);
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm f_6 = t;
  int g_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,t_4 = NULL,c_3 = NULL;
      a_14 = t;
      if(match_cons(t, sym_Op_2))
        {
          b_14 = ATgetArgument(t, 0);
          c_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_14);
      t_4 = t;
      t = b_14;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Op_2, b_14, c_14);
      c_3 = t;
      t = SSLsetAnnotations(c_3, t_4);
      ;
      LocalPopChoice(g_6);
    }
  else
    {
      t = f_6;
      t = Anno__Cong_____2_0(v_0, z_0, t);
    }
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,e_3 = NULL;
  f_14 = t;
  if(match_cons(t, sym_Var_1))
    {
      e_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_14);
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, e_14);
  e_3 = t;
  t = SSLsetAnnotations(e_3, d_14);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
  n_14 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_14;
    }
  else
    {
      ATerm d_5 = NULL,f_3 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_14 = ATgetFirst((ATermList) t);
          p_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_14);
      d_5 = t;
      t = o_14;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      t = p_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(p_14), o_14);
      f_3 = t;
      t = SSLsetAnnotations(f_3, d_5);
    }
  return(t);
}
ATerm a_1 (ATerm t)
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
ATerm b_1 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,k_23 = NULL,l_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_6 = ATgetArgument(t, 0);
      if(((ATgetType(j_6) == AT_LIST) && !(ATisEmpty(j_6))))
        {
          g_23 = ATgetFirst((ATermList) j_6);
          h_23 = (ATerm) ATgetNext((ATermList) j_6);
        }
      else
        _fail(t);
      {
        ATerm k_6 = ATgetArgument(t, 1);
        if(((ATgetType(k_6) == AT_LIST) && !(ATisEmpty(k_6))))
          {
            k_23 = ATgetFirst((ATermList) k_6);
            l_23 = (ATerm) ATgetNext((ATermList) k_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_23, k_23), (ATerm) ATmakeAppl(sym__2, h_23, l_23));
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm o_23 = NULL,t_23 = NULL;
  if(match_cons(t, sym__2))
    {
      o_23 = ATgetArgument(t, 0);
      t_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_23), o_23);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL;
  if(match_cons(t, sym__2))
    {
      w_23 = ATgetArgument(t, 0);
      x_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_23), (ATerm) ATmakeAppl(sym_Match_1, x_23));
  return(t);
}
ATerm k_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_6 = ATgetArgument(t, 0);
      if(((ATgetType(m_6) != AT_LIST) || !(ATisEmpty(m_6))))
        _fail(t);
      {
        ATerm n_6 = ATgetArgument(t, 1);
        if(((ATgetType(n_6) != AT_LIST) || !(ATisEmpty(n_6))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_6 = ATgetArgument(t, 0);
      if(((ATgetType(q_6) == AT_LIST) && !(ATisEmpty(q_6))))
        {
          y_30 = ATgetFirst((ATermList) q_6);
          z_30 = (ATerm) ATgetNext((ATermList) q_6);
        }
      else
        _fail(t);
      {
        ATerm r_6 = ATgetArgument(t, 1);
        if(((ATgetType(r_6) == AT_LIST) && !(ATisEmpty(r_6))))
          {
            a_31 = ATgetFirst((ATermList) r_6);
            b_31 = (ATerm) ATgetNext((ATermList) r_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_30, a_31), (ATerm) ATmakeAppl(sym__2, z_30, b_31));
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL;
  if(match_cons(t, sym__2))
    {
      c_31 = ATgetArgument(t, 0);
      d_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_31), c_31);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL;
  if(match_cons(t, sym__2))
    {
      e_31 = ATgetArgument(t, 0);
      f_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_31), (ATerm) ATmakeAppl(sym_Match_1, f_31));
  return(t);
}
ATerm o_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm n_49 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_49, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_6), term_u_6));
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL;
  p_49 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      o_49 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, o_49, term_u_6);
    }
  else
    {
      t = p_49;
    }
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm c_50 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      c_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, c_50, term_u_6);
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL;
  e_50 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_50 = ATgetArgument(t, 0);
      {
        ATerm v_6 = t;
        int w_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, d_50, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_6), term_u_6));
            ;
            LocalPopChoice(w_6);
          }
        else
          {
            t = v_6;
            t = e_50;
          }
      }
    }
  else
    {
      t = e_50;
    }
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm p_50 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      p_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_50, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_6), term_u_6));
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm q_50 = NULL,s_50 = NULL;
  s_50 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      q_50 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, q_50, term_u_6);
    }
  else
    {
      t = s_50;
    }
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    ATerm r_53 (ATerm r_13, ATerm t)
    {
      t = r_13;
      {
        ATerm x_6 = t;
        if((PushChoice() == 0))
          {
            t = oncetd_1_0(s_0, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_6;
          }
        t = (ATerm) ATmakeAppl(sym_Build_1, r_13);
        t = bottomup_1_0(q_0, t);
      }
      return(t);
    }
    ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,w_14 = NULL,y_14 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,r_15 = NULL,s_15 = NULL,y_15 = NULL,a_16 = NULL,b_16 = NULL,f_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL;
    l_16 = t;
    if(match_cons(t, sym_Test_1))
      {
        k_16 = ATgetArgument(t, 0);
        t = k_16;
        if(match_cons(t, sym_Id_0))
          {
            ATerm y_6 = t;
            int z_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_d_7;
                t = q_0(t);
                ;
                LocalPopChoice(z_6);
              }
            else
              {
                t = y_6;
                {
                  ATerm g_7 = t;
                  int h_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,w_16 = NULL,x_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,f_17 = NULL;
                      t = l_16;
                      t = new_0_0(t);
                      n_16 = t;
                      t = bottomup_1_0(q_0, t);
                      c_17 = t;
                      t = (ATerm) ATempty;
                      t = q_0(t);
                      f_17 = t;
                      t = (ATerm) ATinsert(CheckATermList(f_17), c_17);
                      t = q_0(t);
                      o_16 = t;
                      t = n_16;
                      t = bottomup_1_0(q_0, t);
                      b_17 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, b_17);
                      t = q_0(t);
                      a_17 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, a_17);
                      t = q_0(t);
                      q_16 = t;
                      t = k_16;
                      t = bottomup_1_0(q_0, t);
                      s_16 = t;
                      t = n_16;
                      t = bottomup_1_0(q_0, t);
                      z_16 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, z_16);
                      t = q_0(t);
                      x_16 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, x_16);
                      t = q_0(t);
                      w_16 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_16, w_16);
                      t = q_0(t);
                      r_16 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_16, r_16);
                      t = q_0(t);
                      p_16 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, o_16, p_16);
                      t = q_0(t);
                      ;
                      LocalPopChoice(h_7);
                    }
                  else
                    {
                      t = g_7;
                      t = l_16;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm i_7 = t;
                int j_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_k_7;
                    t = q_0(t);
                    ;
                    LocalPopChoice(j_7);
                  }
                else
                  {
                    t = i_7;
                    {
                      ATerm l_7 = t;
                      int m_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,p_17 = NULL,q_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,c_18 = NULL;
                          t = l_16;
                          t = new_0_0(t);
                          j_17 = t;
                          t = bottomup_1_0(q_0, t);
                          y_17 = t;
                          t = (ATerm) ATempty;
                          t = q_0(t);
                          c_18 = t;
                          t = (ATerm) ATinsert(CheckATermList(c_18), y_17);
                          t = q_0(t);
                          k_17 = t;
                          t = j_17;
                          t = bottomup_1_0(q_0, t);
                          x_17 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, x_17);
                          t = q_0(t);
                          w_17 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, w_17);
                          t = q_0(t);
                          p_17 = t;
                          t = k_16;
                          t = bottomup_1_0(q_0, t);
                          s_17 = t;
                          t = j_17;
                          t = bottomup_1_0(q_0, t);
                          v_17 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, v_17);
                          t = q_0(t);
                          u_17 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, u_17);
                          t = q_0(t);
                          t_17 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, s_17, t_17);
                          t = q_0(t);
                          q_17 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_17, q_17);
                          t = q_0(t);
                          l_17 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, k_17, l_17);
                          t = q_0(t);
                          ;
                          LocalPopChoice(m_7);
                        }
                      else
                        {
                          t = l_7;
                          t = l_16;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    f_16 = ATgetArgument(t, 0);
                    {
                      ATerm n_7 = t;
                      int o_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, f_16);
                          t = q_0(t);
                          ;
                          LocalPopChoice(o_7);
                        }
                      else
                        {
                          t = n_7;
                          {
                            ATerm p_7 = t;
                            int q_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,z_18 = NULL,e_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
                                t = l_16;
                                t = new_0_0(t);
                                p_18 = t;
                                t = bottomup_1_0(q_0, t);
                                j_19 = t;
                                t = (ATerm) ATempty;
                                t = q_0(t);
                                k_19 = t;
                                t = (ATerm) ATinsert(CheckATermList(k_19), j_19);
                                t = q_0(t);
                                q_18 = t;
                                t = p_18;
                                t = bottomup_1_0(q_0, t);
                                i_19 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, i_19);
                                t = q_0(t);
                                h_19 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, h_19);
                                t = q_0(t);
                                v_18 = t;
                                t = k_16;
                                t = bottomup_1_0(q_0, t);
                                x_18 = t;
                                t = p_18;
                                t = bottomup_1_0(q_0, t);
                                g_19 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, g_19);
                                t = q_0(t);
                                e_19 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, e_19);
                                t = q_0(t);
                                z_18 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, x_18, z_18);
                                t = q_0(t);
                                w_18 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, v_18, w_18);
                                t = q_0(t);
                                r_18 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, q_18, r_18);
                                t = q_0(t);
                                ;
                                LocalPopChoice(q_7);
                              }
                            else
                              {
                                t = p_7;
                                t = l_16;
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
                        ATerm n_19 = NULL,q_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,b_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL;
                        t = l_16;
                        t = new_0_0(t);
                        n_19 = t;
                        t = bottomup_1_0(q_0, t);
                        e_20 = t;
                        t = (ATerm) ATempty;
                        t = q_0(t);
                        f_20 = t;
                        t = (ATerm) ATinsert(CheckATermList(f_20), e_20);
                        t = q_0(t);
                        q_19 = t;
                        t = n_19;
                        t = bottomup_1_0(q_0, t);
                        d_20 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, d_20);
                        t = q_0(t);
                        b_20 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, b_20);
                        t = q_0(t);
                        t_19 = t;
                        t = k_16;
                        t = bottomup_1_0(q_0, t);
                        v_19 = t;
                        t = n_19;
                        t = bottomup_1_0(q_0, t);
                        y_19 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, y_19);
                        t = q_0(t);
                        x_19 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, x_19);
                        t = q_0(t);
                        w_19 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, v_19, w_19);
                        t = q_0(t);
                        u_19 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, t_19, u_19);
                        t = q_0(t);
                        s_19 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, q_19, s_19);
                        t = q_0(t);
                        ;
                        LocalPopChoice(t_7);
                      }
                    else
                      {
                        t = s_7;
                        t = l_16;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            k_16 = ATgetArgument(t, 0);
            t = k_16;
            if(match_cons(t, sym_Id_0))
              {
                ATerm u_7 = t;
                int v_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_k_7;
                    t = q_0(t);
                    ;
                    LocalPopChoice(v_7);
                  }
                else
                  {
                    t = u_7;
                    t = l_16;
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
                        t = term_d_7;
                        t = q_0(t);
                        ;
                        LocalPopChoice(x_7);
                      }
                    else
                      {
                        t = w_7;
                        t = l_16;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        f_16 = ATgetArgument(t, 0);
                        {
                          ATerm y_7 = t;
                          int a_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, f_16);
                              t = q_0(t);
                              ;
                              LocalPopChoice(a_8);
                            }
                          else
                            {
                              t = y_7;
                              t = l_16;
                            }
                        }
                      }
                    else
                      {
                        t = l_16;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                k_16 = ATgetArgument(t, 0);
                j_16 = ATgetArgument(t, 1);
                t = j_16;
                if(match_cons(t, sym_Id_0))
                  {
                    t = k_16;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = j_16;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = k_16;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                f_16 = ATgetArgument(t, 0);
                                i_16 = ATgetArgument(t, 1);
                                t = k_16;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    f_16 = ATgetArgument(t, 0);
                                    i_16 = ATgetArgument(t, 1);
                                    t = k_16;
                                  }
                                else
                                  {
                                    t = k_16;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        a_16 = ATgetArgument(t, 0);
                        b_16 = ATgetArgument(t, 1);
                        t = a_16;
                        if(match_cons(t, sym_Match_1))
                          {
                            y_15 = ATgetArgument(t, 0);
                            t = y_15;
                            if(match_cons(t, sym_Op_2))
                              {
                                r_15 = ATgetArgument(t, 0);
                                c_15 = ATgetArgument(t, 1);
                                t = k_16;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = j_16;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm b_8 = t;
                                        int d_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_k_7;
                                            t = q_0(t);
                                            ;
                                            LocalPopChoice(d_8);
                                          }
                                        else
                                          {
                                            t = b_8;
                                            t = l_16;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_16 = ATgetArgument(t, 0);
                                            i_16 = ATgetArgument(t, 1);
                                            {
                                              ATerm e_8 = t;
                                              int f_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm v_22 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                  t = q_0(t);
                                                  v_22 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, v_22);
                                                  t = q_0(t);
                                                  ;
                                                  LocalPopChoice(f_8);
                                                }
                                              else
                                                {
                                                  t = e_8;
                                                  t = l_16;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                f_16 = ATgetArgument(t, 0);
                                                t = f_16;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    s_15 = ATgetArgument(t, 0);
                                                    d_15 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm g_8 = t;
                                                      int h_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, s_15, r_15);
                                                          {
                                                            ATerm i_8 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm o_5 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    o_5 = ATgetArgument(t, 0);
                                                                    if((o_5 != ATgetArgument(t, 1)))
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
                                                            t = bottomup_1_0(q_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(h_8);
                                                        }
                                                      else
                                                        {
                                                          t = g_8;
                                                          {
                                                            ATerm j_8 = t;
                                                            int l_8 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm e_23 = NULL;
                                                                t = r_15;
                                                                if((s_15 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, d_15, c_15);
                                                                t = genzip_4_0(a_1, b_1, f_1, g_1, t);
                                                                e_23 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, e_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, s_15, d_15)), b_16));
                                                                t = bottomup_1_0(q_0, t);
                                                                ;
                                                                LocalPopChoice(l_8);
                                                              }
                                                            else
                                                              {
                                                                t = j_8;
                                                                {
                                                                  ATerm m_8 = t;
                                                                  int o_8 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm a_24 = NULL;
                                                                      t = y_15;
                                                                      if((f_16 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, f_16);
                                                                      t = q_0(t);
                                                                      a_24 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_24, b_16);
                                                                      t = q_0(t);
                                                                      ;
                                                                      LocalPopChoice(o_8);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = m_8;
                                                                      t = l_16;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm p_8 = t;
                                                    int q_8 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm g_24 = NULL;
                                                        t = y_15;
                                                        if((f_16 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, f_16);
                                                        t = q_0(t);
                                                        g_24 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_24, b_16);
                                                        t = q_0(t);
                                                        ;
                                                        LocalPopChoice(q_8);
                                                      }
                                                    else
                                                      {
                                                        t = p_8;
                                                        t = l_16;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    f_16 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm r_8 = t;
                                                      int s_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm r_24 = NULL;
                                                          t = y_15;
                                                          if((f_16 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, f_16);
                                                          t = q_0(t);
                                                          r_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, r_24, b_16);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(s_8);
                                                        }
                                                      else
                                                        {
                                                          t = r_8;
                                                          t = l_16;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_16 = ATgetArgument(t, 0);
                                                        i_16 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_8 = t;
                                                          int u_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm w_24 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                              t = q_0(t);
                                                              w_24 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_16, w_24);
                                                              t = q_0(t);
                                                              ;
                                                              LocalPopChoice(u_8);
                                                            }
                                                          else
                                                            {
                                                              t = t_8;
                                                              t = l_16;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = l_16;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = k_16;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = j_16;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm v_8 = t;
                                        int w_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_k_7;
                                            t = q_0(t);
                                            ;
                                            LocalPopChoice(w_8);
                                          }
                                        else
                                          {
                                            t = v_8;
                                            t = l_16;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_16 = ATgetArgument(t, 0);
                                            i_16 = ATgetArgument(t, 1);
                                            {
                                              ATerm x_8 = t;
                                              int y_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm h_25 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                  t = q_0(t);
                                                  h_25 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, h_25);
                                                  t = q_0(t);
                                                  ;
                                                  LocalPopChoice(y_8);
                                                }
                                              else
                                                {
                                                  t = x_8;
                                                  t = l_16;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                f_16 = ATgetArgument(t, 0);
                                                {
                                                  ATerm z_8 = t;
                                                  int a_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm l_25 = NULL;
                                                      t = y_15;
                                                      if((f_16 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, f_16);
                                                      t = q_0(t);
                                                      l_25 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_25, b_16);
                                                      t = q_0(t);
                                                      ;
                                                      LocalPopChoice(a_9);
                                                    }
                                                  else
                                                    {
                                                      t = z_8;
                                                      t = l_16;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    f_16 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm b_9 = t;
                                                      int d_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm p_25 = NULL;
                                                          t = y_15;
                                                          if((f_16 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, f_16);
                                                          t = q_0(t);
                                                          p_25 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_25, b_16);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(d_9);
                                                        }
                                                      else
                                                        {
                                                          t = b_9;
                                                          t = l_16;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_16 = ATgetArgument(t, 0);
                                                        i_16 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm e_9 = t;
                                                          int f_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_25 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                              t = q_0(t);
                                                              u_25 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_16, u_25);
                                                              t = q_0(t);
                                                              ;
                                                              LocalPopChoice(f_9);
                                                            }
                                                          else
                                                            {
                                                              t = e_9;
                                                              t = l_16;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = l_16;
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
                                y_15 = ATgetArgument(t, 0);
                                t = y_15;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    r_15 = ATgetArgument(t, 0);
                                    t = k_16;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = j_16;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm h_9 = t;
                                            int m_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = q_0(t);
                                                ;
                                                LocalPopChoice(m_9);
                                              }
                                            else
                                              {
                                                t = h_9;
                                                t = l_16;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_16 = ATgetArgument(t, 0);
                                                i_16 = ATgetArgument(t, 1);
                                                {
                                                  ATerm n_9 = t;
                                                  int o_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm d_26 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                      t = q_0(t);
                                                      d_26 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, d_26);
                                                      t = q_0(t);
                                                      ;
                                                      LocalPopChoice(o_9);
                                                    }
                                                  else
                                                    {
                                                      t = n_9;
                                                      t = l_16;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm p_9 = t;
                                                int q_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm r_9 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(q_9);
                                                    {
                                                      ATerm s_9 = t;
                                                      int t_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm h_26 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, y_15);
                                                          t = q_0(t);
                                                          h_26 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_26, b_16);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(t_9);
                                                        }
                                                      else
                                                        {
                                                          t = s_9;
                                                          t = l_16;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = p_9;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        f_16 = ATgetArgument(t, 0);
                                                        t = f_16;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            s_15 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm u_9 = t;
                                                              int v_9 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm l_26 = NULL,m_26 = NULL;
                                                                  t = r_15;
                                                                  if((s_15 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, s_15);
                                                                  t = q_0(t);
                                                                  m_26 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, m_26);
                                                                  t = q_0(t);
                                                                  l_26 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, l_26, b_16);
                                                                  t = q_0(t);
                                                                  ;
                                                                  LocalPopChoice(v_9);
                                                                }
                                                              else
                                                                {
                                                                  t = u_9;
                                                                  t = l_16;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = l_16;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_16 = ATgetArgument(t, 0);
                                                            i_16 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm w_9 = t;
                                                              int x_9 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm s_26 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                                  t = q_0(t);
                                                                  s_26 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_16, s_26);
                                                                  t = q_0(t);
                                                                  ;
                                                                  LocalPopChoice(x_9);
                                                                }
                                                              else
                                                                {
                                                                  t = w_9;
                                                                  t = l_16;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = l_16;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = k_16;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = j_16;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm y_9 = t;
                                            int z_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = q_0(t);
                                                ;
                                                LocalPopChoice(z_9);
                                              }
                                            else
                                              {
                                                t = y_9;
                                                t = l_16;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_16 = ATgetArgument(t, 0);
                                                i_16 = ATgetArgument(t, 1);
                                                {
                                                  ATerm a_10 = t;
                                                  int b_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm d_27 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                      t = q_0(t);
                                                      d_27 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, d_27);
                                                      t = q_0(t);
                                                      ;
                                                      LocalPopChoice(b_10);
                                                    }
                                                  else
                                                    {
                                                      t = a_10;
                                                      t = l_16;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm c_10 = t;
                                                int d_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm e_10 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(d_10);
                                                    {
                                                      ATerm f_10 = t;
                                                      int g_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm o_27 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, y_15);
                                                          t = q_0(t);
                                                          o_27 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, o_27, b_16);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(g_10);
                                                        }
                                                      else
                                                        {
                                                          t = f_10;
                                                          t = l_16;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = c_10;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_16 = ATgetArgument(t, 0);
                                                        i_16 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_10 = t;
                                                          int i_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm w_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                              t = q_0(t);
                                                              w_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_16, w_27);
                                                              t = q_0(t);
                                                              ;
                                                              LocalPopChoice(i_10);
                                                            }
                                                          else
                                                            {
                                                              t = h_10;
                                                              t = l_16;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = l_16;
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
                                    y_15 = ATgetArgument(t, 0);
                                    k_15 = ATgetArgument(t, 1);
                                    l_15 = ATgetArgument(t, 2);
                                    t = k_16;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = j_16;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm j_10 = t;
                                            int k_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = q_0(t);
                                                ;
                                                LocalPopChoice(k_10);
                                              }
                                            else
                                              {
                                                t = j_10;
                                                t = l_16;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_16 = ATgetArgument(t, 0);
                                                i_16 = ATgetArgument(t, 1);
                                                {
                                                  ATerm l_10 = t;
                                                  int m_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                      t = q_0(t);
                                                      p_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, p_28);
                                                      t = q_0(t);
                                                      ;
                                                      LocalPopChoice(m_10);
                                                    }
                                                  else
                                                    {
                                                      t = l_10;
                                                      t = l_16;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm n_10 = t;
                                                int o_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm p_10 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(o_10);
                                                    {
                                                      ATerm q_10 = t;
                                                      int r_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm z_28 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, y_15, k_15, l_15);
                                                          t = q_0(t);
                                                          z_28 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_28, b_16);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(r_10);
                                                        }
                                                      else
                                                        {
                                                          t = q_10;
                                                          t = l_16;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = n_10;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_16 = ATgetArgument(t, 0);
                                                        i_16 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_10 = t;
                                                          int t_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                              t = q_0(t);
                                                              g_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_16, g_29);
                                                              t = q_0(t);
                                                              ;
                                                              LocalPopChoice(t_10);
                                                            }
                                                          else
                                                            {
                                                              t = s_10;
                                                              t = l_16;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = l_16;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = k_16;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = j_16;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm u_10 = t;
                                            int v_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = q_0(t);
                                                ;
                                                LocalPopChoice(v_10);
                                              }
                                            else
                                              {
                                                t = u_10;
                                                t = l_16;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_16 = ATgetArgument(t, 0);
                                                i_16 = ATgetArgument(t, 1);
                                                {
                                                  ATerm w_10 = t;
                                                  int x_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm w_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                      t = q_0(t);
                                                      w_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, w_29);
                                                      t = q_0(t);
                                                      ;
                                                      LocalPopChoice(x_10);
                                                    }
                                                  else
                                                    {
                                                      t = w_10;
                                                      t = l_16;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    f_16 = ATgetArgument(t, 0);
                                                    i_16 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm y_10 = t;
                                                      int z_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm d_30 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                          t = q_0(t);
                                                          d_30 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, f_16, d_30);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(z_10);
                                                        }
                                                      else
                                                        {
                                                          t = y_10;
                                                          t = l_16;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = l_16;
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
                            a_16 = ATgetArgument(t, 0);
                            t = a_16;
                            if(match_cons(t, sym_Op_2))
                              {
                                y_15 = ATgetArgument(t, 0);
                                k_15 = ATgetArgument(t, 1);
                                t = k_16;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = j_16;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm a_11 = t;
                                        int b_11 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_k_7;
                                            t = q_0(t);
                                            ;
                                            LocalPopChoice(b_11);
                                          }
                                        else
                                          {
                                            t = a_11;
                                            t = l_16;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_16 = ATgetArgument(t, 0);
                                            i_16 = ATgetArgument(t, 1);
                                            {
                                              ATerm c_11 = t;
                                              int d_11 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm r_30 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                  t = q_0(t);
                                                  r_30 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, r_30);
                                                  t = q_0(t);
                                                  ;
                                                  LocalPopChoice(d_11);
                                                }
                                              else
                                                {
                                                  t = c_11;
                                                  t = l_16;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                f_16 = ATgetArgument(t, 0);
                                                t = f_16;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    s_15 = ATgetArgument(t, 0);
                                                    d_15 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm e_11 = t;
                                                      int f_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, s_15, y_15);
                                                          {
                                                            ATerm g_11 = t;
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
                                                                t = g_11;
                                                              }
                                                            t = term_k_7;
                                                            t = bottomup_1_0(q_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(f_11);
                                                        }
                                                      else
                                                        {
                                                          t = e_11;
                                                          {
                                                            ATerm h_11 = t;
                                                            int i_11 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm x_30 = NULL;
                                                                t = y_15;
                                                                if((s_15 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, d_15, k_15);
                                                                t = genzip_4_0(k_1, l_1, m_1, n_1, t);
                                                                x_30 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_30), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, s_15, d_15)));
                                                                t = bottomup_1_0(q_0, t);
                                                                ;
                                                                LocalPopChoice(i_11);
                                                              }
                                                            else
                                                              {
                                                                t = h_11;
                                                                {
                                                                  ATerm j_11 = t;
                                                                  int k_11 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = a_16;
                                                                      if((f_16 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, f_16);
                                                                      t = q_0(t);
                                                                      ;
                                                                      LocalPopChoice(k_11);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = j_11;
                                                                      t = l_16;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm l_11 = t;
                                                    int m_11 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = a_16;
                                                        if((f_16 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, f_16);
                                                        t = q_0(t);
                                                        ;
                                                        LocalPopChoice(m_11);
                                                      }
                                                    else
                                                      {
                                                        t = l_11;
                                                        t = l_16;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    f_16 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm t_11 = t;
                                                      int v_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = a_16;
                                                          if((f_16 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, f_16);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(v_11);
                                                        }
                                                      else
                                                        {
                                                          t = t_11;
                                                          t = l_16;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_16 = ATgetArgument(t, 0);
                                                        i_16 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm w_11 = t;
                                                          int a_12 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                              t = q_0(t);
                                                              r_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_16, r_31);
                                                              t = q_0(t);
                                                              ;
                                                              LocalPopChoice(a_12);
                                                            }
                                                          else
                                                            {
                                                              t = w_11;
                                                              t = l_16;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = l_16;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = k_16;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = j_16;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm c_12 = t;
                                        int d_12 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_k_7;
                                            t = q_0(t);
                                            ;
                                            LocalPopChoice(d_12);
                                          }
                                        else
                                          {
                                            t = c_12;
                                            t = l_16;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_16 = ATgetArgument(t, 0);
                                            i_16 = ATgetArgument(t, 1);
                                            {
                                              ATerm e_12 = t;
                                              int f_12 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm b_32 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                  t = q_0(t);
                                                  b_32 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, b_32);
                                                  t = q_0(t);
                                                  ;
                                                  LocalPopChoice(f_12);
                                                }
                                              else
                                                {
                                                  t = e_12;
                                                  t = l_16;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                f_16 = ATgetArgument(t, 0);
                                                {
                                                  ATerm g_12 = t;
                                                  int h_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = a_16;
                                                      if((f_16 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, f_16);
                                                      t = q_0(t);
                                                      ;
                                                      LocalPopChoice(h_12);
                                                    }
                                                  else
                                                    {
                                                      t = g_12;
                                                      t = l_16;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    f_16 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm i_12 = t;
                                                      int j_12 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = a_16;
                                                          if((f_16 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, f_16);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(j_12);
                                                        }
                                                      else
                                                        {
                                                          t = i_12;
                                                          t = l_16;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_16 = ATgetArgument(t, 0);
                                                        i_16 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm k_12 = t;
                                                          int l_12 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                              t = q_0(t);
                                                              n_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_16, n_32);
                                                              t = q_0(t);
                                                              ;
                                                              LocalPopChoice(l_12);
                                                            }
                                                          else
                                                            {
                                                              t = k_12;
                                                              t = l_16;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = l_16;
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
                                a_16 = ATgetArgument(t, 0);
                                t = a_16;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    y_15 = ATgetArgument(t, 0);
                                    t = k_16;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = j_16;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm m_12 = t;
                                            int n_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = q_0(t);
                                                ;
                                                LocalPopChoice(n_12);
                                              }
                                            else
                                              {
                                                t = m_12;
                                                t = l_16;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_16 = ATgetArgument(t, 0);
                                                i_16 = ATgetArgument(t, 1);
                                                {
                                                  ATerm o_12 = t;
                                                  int p_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm z_32 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                      t = q_0(t);
                                                      z_32 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, z_32);
                                                      t = q_0(t);
                                                      ;
                                                      LocalPopChoice(p_12);
                                                    }
                                                  else
                                                    {
                                                      t = o_12;
                                                      t = l_16;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm q_12 = t;
                                                int r_12 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm s_12 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(r_12);
                                                    {
                                                      ATerm t_12 = t;
                                                      int u_12 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, a_16);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(u_12);
                                                        }
                                                      else
                                                        {
                                                          t = t_12;
                                                          t = l_16;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = q_12;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        f_16 = ATgetArgument(t, 0);
                                                        t = f_16;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            s_15 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm v_12 = t;
                                                              int w_12 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm l_33 = NULL;
                                                                  t = y_15;
                                                                  if((s_15 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, s_15);
                                                                  t = q_0(t);
                                                                  l_33 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, l_33);
                                                                  t = q_0(t);
                                                                  ;
                                                                  LocalPopChoice(w_12);
                                                                }
                                                              else
                                                                {
                                                                  t = v_12;
                                                                  t = l_16;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = l_16;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_16 = ATgetArgument(t, 0);
                                                            i_16 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm x_12 = t;
                                                              int y_12 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm s_33 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                                  t = q_0(t);
                                                                  s_33 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_16, s_33);
                                                                  t = q_0(t);
                                                                  ;
                                                                  LocalPopChoice(y_12);
                                                                }
                                                              else
                                                                {
                                                                  t = x_12;
                                                                  t = l_16;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = l_16;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = k_16;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = j_16;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm z_12 = t;
                                            int a_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = q_0(t);
                                                ;
                                                LocalPopChoice(a_13);
                                              }
                                            else
                                              {
                                                t = z_12;
                                                t = l_16;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_16 = ATgetArgument(t, 0);
                                                i_16 = ATgetArgument(t, 1);
                                                {
                                                  ATerm b_13 = t;
                                                  int c_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_34 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                      t = q_0(t);
                                                      e_34 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, e_34);
                                                      t = q_0(t);
                                                      ;
                                                      LocalPopChoice(c_13);
                                                    }
                                                  else
                                                    {
                                                      t = b_13;
                                                      t = l_16;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm d_13 = t;
                                                int e_13 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm f_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(e_13);
                                                    {
                                                      ATerm g_13 = t;
                                                      int h_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, a_16);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(h_13);
                                                        }
                                                      else
                                                        {
                                                          t = g_13;
                                                          t = l_16;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = d_13;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_16 = ATgetArgument(t, 0);
                                                        i_16 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm i_13 = t;
                                                          int j_13 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                              t = q_0(t);
                                                              n_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_16, n_34);
                                                              t = q_0(t);
                                                              ;
                                                              LocalPopChoice(j_13);
                                                            }
                                                          else
                                                            {
                                                              t = i_13;
                                                              t = l_16;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = l_16;
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
                                    a_16 = ATgetArgument(t, 0);
                                    b_16 = ATgetArgument(t, 1);
                                    m_15 = ATgetArgument(t, 2);
                                    t = k_16;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = j_16;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm k_13 = t;
                                            int l_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = q_0(t);
                                                ;
                                                LocalPopChoice(l_13);
                                              }
                                            else
                                              {
                                                t = k_13;
                                                t = l_16;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_16 = ATgetArgument(t, 0);
                                                i_16 = ATgetArgument(t, 1);
                                                {
                                                  ATerm m_13 = t;
                                                  int n_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm a_35 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                      t = q_0(t);
                                                      a_35 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, a_35);
                                                      t = q_0(t);
                                                      ;
                                                      LocalPopChoice(n_13);
                                                    }
                                                  else
                                                    {
                                                      t = m_13;
                                                      t = l_16;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm o_13 = t;
                                                int p_13 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm q_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(p_13);
                                                    {
                                                      ATerm s_13 = t;
                                                      int t_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, a_16, b_16, m_15);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(t_13);
                                                        }
                                                      else
                                                        {
                                                          t = s_13;
                                                          t = l_16;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = o_13;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_16 = ATgetArgument(t, 0);
                                                        i_16 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm u_13 = t;
                                                          int v_13 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm s_35 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                              t = q_0(t);
                                                              s_35 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_16, s_35);
                                                              t = q_0(t);
                                                              ;
                                                              LocalPopChoice(v_13);
                                                            }
                                                          else
                                                            {
                                                              t = u_13;
                                                              t = l_16;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = l_16;
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
                                        a_16 = ATgetArgument(t, 0);
                                        b_16 = ATgetArgument(t, 1);
                                        t = k_16;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = j_16;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm w_13 = t;
                                                int x_13 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_k_7;
                                                    t = q_0(t);
                                                    ;
                                                    LocalPopChoice(x_13);
                                                  }
                                                else
                                                  {
                                                    t = w_13;
                                                    {
                                                      ATerm y_13 = t;
                                                      int z_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm m_36 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, k_16, b_16);
                                                          t = q_0(t);
                                                          m_36 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, a_16, m_36);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(z_13);
                                                        }
                                                      else
                                                        {
                                                          t = y_13;
                                                          t = l_16;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    f_16 = ATgetArgument(t, 0);
                                                    i_16 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm g_14 = t;
                                                      int h_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm r_36 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                          t = q_0(t);
                                                          r_36 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, r_36);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(h_14);
                                                        }
                                                      else
                                                        {
                                                          t = g_14;
                                                          {
                                                            ATerm i_14 = t;
                                                            int j_14 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm v_36 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, k_16, b_16);
                                                                t = q_0(t);
                                                                v_36 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, a_16, v_36);
                                                                t = q_0(t);
                                                                ;
                                                                LocalPopChoice(j_14);
                                                              }
                                                            else
                                                              {
                                                                t = i_14;
                                                                t = l_16;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_16 = ATgetArgument(t, 0);
                                                        i_16 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm k_14 = t;
                                                          int l_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_37 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, k_16, b_16);
                                                              t = q_0(t);
                                                              a_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, a_16, a_37);
                                                              t = q_0(t);
                                                              ;
                                                              LocalPopChoice(l_14);
                                                            }
                                                          else
                                                            {
                                                              t = k_14;
                                                              {
                                                                ATerm m_14 = t;
                                                                int u_14 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm e_37 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                                    t = q_0(t);
                                                                    e_37 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, f_16, e_37);
                                                                    t = q_0(t);
                                                                    ;
                                                                    LocalPopChoice(u_14);
                                                                  }
                                                                else
                                                                  {
                                                                    t = m_14;
                                                                    t = l_16;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm v_14 = t;
                                                        int x_14 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm j_37 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, k_16, b_16);
                                                            t = q_0(t);
                                                            j_37 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, a_16, j_37);
                                                            t = q_0(t);
                                                            ;
                                                            LocalPopChoice(x_14);
                                                          }
                                                        else
                                                          {
                                                            t = v_14;
                                                            t = l_16;
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
                                            a_16 = ATgetArgument(t, 0);
                                            b_16 = ATgetArgument(t, 1);
                                            t = k_16;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = j_16;
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
                                                        t = q_0(t);
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
                                                              ATerm u_37 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, k_16, b_16);
                                                              t = q_0(t);
                                                              u_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_16, u_37);
                                                              t = q_0(t);
                                                              ;
                                                              LocalPopChoice(f_15);
                                                            }
                                                          else
                                                            {
                                                              t = e_15;
                                                              t = l_16;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        f_16 = ATgetArgument(t, 0);
                                                        i_16 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm g_15 = t;
                                                          int h_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_37 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                              t = q_0(t);
                                                              z_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, z_37);
                                                              t = q_0(t);
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
                                                                    ATerm f_38 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, k_16, b_16);
                                                                    t = q_0(t);
                                                                    f_38 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, a_16, f_38);
                                                                    t = q_0(t);
                                                                    ;
                                                                    LocalPopChoice(j_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = i_15;
                                                                    t = l_16;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_16 = ATgetArgument(t, 0);
                                                            i_16 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm n_15 = t;
                                                              int o_15 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm k_38 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, k_16, b_16);
                                                                  t = q_0(t);
                                                                  k_38 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, a_16, k_38);
                                                                  t = q_0(t);
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
                                                                        ATerm q_38 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                                        t = q_0(t);
                                                                        q_38 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, f_16, q_38);
                                                                        t = q_0(t);
                                                                        ;
                                                                        LocalPopChoice(q_15);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = p_15;
                                                                        t = l_16;
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
                                                                ATerm v_38 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, k_16, b_16);
                                                                t = q_0(t);
                                                                v_38 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, a_16, v_38);
                                                                t = q_0(t);
                                                                ;
                                                                LocalPopChoice(u_15);
                                                              }
                                                            else
                                                              {
                                                                t = t_15;
                                                                t = l_16;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = k_16;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = j_16;
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
                                                        t = q_0(t);
                                                        ;
                                                        LocalPopChoice(w_15);
                                                      }
                                                    else
                                                      {
                                                        t = v_15;
                                                        t = l_16;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        f_16 = ATgetArgument(t, 0);
                                                        i_16 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm x_15 = t;
                                                          int z_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm d_39 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                              t = q_0(t);
                                                              d_39 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, d_39);
                                                              t = q_0(t);
                                                              ;
                                                              LocalPopChoice(z_15);
                                                            }
                                                          else
                                                            {
                                                              t = x_15;
                                                              t = l_16;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_16 = ATgetArgument(t, 0);
                                                            i_16 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm c_16 = t;
                                                              int d_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm i_39 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, j_16);
                                                                  t = q_0(t);
                                                                  i_39 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_16, i_39);
                                                                  t = q_0(t);
                                                                  ;
                                                                  LocalPopChoice(d_16);
                                                                }
                                                              else
                                                                {
                                                                  t = c_16;
                                                                  t = l_16;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = l_16;
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
                    k_16 = ATgetArgument(t, 0);
                    j_16 = ATgetArgument(t, 1);
                    t = j_16;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = k_16;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm e_16 = t;
                            int g_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_d_7;
                                t = q_0(t);
                                ;
                                LocalPopChoice(g_16);
                              }
                            else
                              {
                                t = e_16;
                                t = k_16;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = j_16;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    f_16 = ATgetArgument(t, 0);
                                    i_16 = ATgetArgument(t, 1);
                                    t = k_16;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        f_16 = ATgetArgument(t, 0);
                                        t = k_16;
                                      }
                                    else
                                      {
                                        t = k_16;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = k_16;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm h_16 = t;
                            int m_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_d_7;
                                t = q_0(t);
                                ;
                                LocalPopChoice(m_16);
                              }
                            else
                              {
                                t = h_16;
                                {
                                  ATerm t_16 = t;
                                  int u_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = j_16;
                                      if((k_16 != t))
                                        {
                                          _fail(t);
                                        }
                                      ;
                                      LocalPopChoice(u_16);
                                    }
                                  else
                                    {
                                      t = t_16;
                                      t = l_16;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = j_16;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    f_16 = ATgetArgument(t, 0);
                                    i_16 = ATgetArgument(t, 1);
                                    {
                                      ATerm v_16 = t;
                                      int y_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm r_40 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, i_16, j_16);
                                          t = q_0(t);
                                          r_40 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, f_16, r_40);
                                          t = q_0(t);
                                          ;
                                          LocalPopChoice(y_16);
                                        }
                                      else
                                        {
                                          t = v_16;
                                          {
                                            ATerm d_17 = t;
                                            int e_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = j_16;
                                                if((k_16 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                ;
                                                LocalPopChoice(e_17);
                                              }
                                            else
                                              {
                                                t = d_17;
                                                t = l_16;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        f_16 = ATgetArgument(t, 0);
                                        {
                                          ATerm g_17 = t;
                                          int h_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = j_16;
                                              if((k_16 != t))
                                                {
                                                  _fail(t);
                                                }
                                              ;
                                              LocalPopChoice(h_17);
                                            }
                                          else
                                            {
                                              t = g_17;
                                              {
                                                ATerm i_17 = t;
                                                int m_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = r_53(f_16, t);
                                                    ;
                                                    LocalPopChoice(m_17);
                                                  }
                                                else
                                                  {
                                                    t = i_17;
                                                    t = l_16;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm n_17 = t;
                                        int o_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = j_16;
                                            if((k_16 != t))
                                              {
                                                _fail(t);
                                              }
                                            ;
                                            LocalPopChoice(o_17);
                                          }
                                        else
                                          {
                                            t = n_17;
                                            t = l_16;
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
                        k_16 = ATgetArgument(t, 0);
                        j_16 = ATgetArgument(t, 1);
                        t = j_16;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = k_16;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm r_17 = t;
                                int z_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_d_7;
                                    t = q_0(t);
                                    ;
                                    LocalPopChoice(z_17);
                                  }
                                else
                                  {
                                    t = r_17;
                                    t = j_16;
                                  }
                              }
                            else
                              {
                                ATerm a_18 = t;
                                int b_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_d_7;
                                    t = q_0(t);
                                    ;
                                    LocalPopChoice(b_18);
                                  }
                                else
                                  {
                                    t = a_18;
                                    t = l_16;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = k_16;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm d_18 = t;
                                    int e_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_k_7;
                                        t = q_0(t);
                                        ;
                                        LocalPopChoice(e_18);
                                      }
                                    else
                                      {
                                        t = d_18;
                                        t = j_16;
                                      }
                                  }
                                else
                                  {
                                    ATerm f_18 = t;
                                    int g_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_k_7;
                                        t = q_0(t);
                                        ;
                                        LocalPopChoice(g_18);
                                      }
                                    else
                                      {
                                        t = f_18;
                                        t = l_16;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    a_16 = ATgetArgument(t, 0);
                                    b_16 = ATgetArgument(t, 1);
                                    t = k_16;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = j_16;
                                      }
                                    else
                                      {
                                        ATerm h_18 = t;
                                        int i_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm n_41 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, k_16, a_16);
                                            t = conc_0_0(t);
                                            n_41 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, n_41, b_16);
                                            t = bottomup_1_0(q_0, t);
                                            ;
                                            LocalPopChoice(i_18);
                                          }
                                        else
                                          {
                                            t = h_18;
                                            t = l_16;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = k_16;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = j_16;
                                      }
                                    else
                                      {
                                        t = l_16;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm j_18 = t;
                        int k_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm l_18 = ATgetArgument(t, 0);
                                j_16 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(k_18);
                            t = j_16;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm m_18 = t;
                                int n_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_d_7;
                                    t = q_0(t);
                                    ;
                                    LocalPopChoice(n_18);
                                  }
                                else
                                  {
                                    t = m_18;
                                    t = l_16;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm o_18 = t;
                                    int s_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_k_7;
                                        t = q_0(t);
                                        ;
                                        LocalPopChoice(s_18);
                                      }
                                    else
                                      {
                                        t = o_18;
                                        t = l_16;
                                      }
                                  }
                                else
                                  {
                                    t = l_16;
                                  }
                              }
                          }
                        else
                          {
                            t = j_18;
                            if(match_cons(t, sym_All_1))
                              {
                                k_16 = ATgetArgument(t, 0);
                                t = k_16;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm t_18 = t;
                                    int u_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_d_7;
                                        t = q_0(t);
                                        ;
                                        LocalPopChoice(u_18);
                                      }
                                    else
                                      {
                                        t = t_18;
                                        t = l_16;
                                      }
                                  }
                                else
                                  {
                                    t = l_16;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    k_16 = ATgetArgument(t, 0);
                                    t = k_16;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm y_18 = t;
                                        int a_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_d_7;
                                            t = q_0(t);
                                            ;
                                            LocalPopChoice(a_19);
                                          }
                                        else
                                          {
                                            t = y_18;
                                            {
                                              ATerm b_19 = t;
                                              int c_19 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL;
                                                  t = l_16;
                                                  t = new_0_0(t);
                                                  y_41 = t;
                                                  t = bottomup_1_0(q_0, t);
                                                  j_42 = t;
                                                  t = (ATerm) ATempty;
                                                  t = q_0(t);
                                                  k_42 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(k_42), j_42);
                                                  t = q_0(t);
                                                  z_41 = t;
                                                  t = y_41;
                                                  t = bottomup_1_0(q_0, t);
                                                  i_42 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, i_42);
                                                  t = q_0(t);
                                                  h_42 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, h_42);
                                                  t = q_0(t);
                                                  b_42 = t;
                                                  t = k_16;
                                                  t = bottomup_1_0(q_0, t);
                                                  d_42 = t;
                                                  t = y_41;
                                                  t = bottomup_1_0(q_0, t);
                                                  g_42 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, g_42);
                                                  t = q_0(t);
                                                  f_42 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, f_42);
                                                  t = q_0(t);
                                                  e_42 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, d_42, e_42);
                                                  t = q_0(t);
                                                  c_42 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_42, c_42);
                                                  t = q_0(t);
                                                  a_42 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, z_41, a_42);
                                                  t = q_0(t);
                                                  ;
                                                  LocalPopChoice(c_19);
                                                }
                                              else
                                                {
                                                  t = b_19;
                                                  t = l_16;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm d_19 = t;
                                            int f_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = q_0(t);
                                                ;
                                                LocalPopChoice(f_19);
                                              }
                                            else
                                              {
                                                t = d_19;
                                                {
                                                  ATerm l_19 = t;
                                                  int m_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL;
                                                      t = l_16;
                                                      t = new_0_0(t);
                                                      n_42 = t;
                                                      t = bottomup_1_0(q_0, t);
                                                      y_42 = t;
                                                      t = (ATerm) ATempty;
                                                      t = q_0(t);
                                                      z_42 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(z_42), y_42);
                                                      t = q_0(t);
                                                      o_42 = t;
                                                      t = n_42;
                                                      t = bottomup_1_0(q_0, t);
                                                      x_42 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, x_42);
                                                      t = q_0(t);
                                                      w_42 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, w_42);
                                                      t = q_0(t);
                                                      q_42 = t;
                                                      t = k_16;
                                                      t = bottomup_1_0(q_0, t);
                                                      s_42 = t;
                                                      t = n_42;
                                                      t = bottomup_1_0(q_0, t);
                                                      v_42 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, v_42);
                                                      t = q_0(t);
                                                      u_42 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, u_42);
                                                      t = q_0(t);
                                                      t_42 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_42, t_42);
                                                      t = q_0(t);
                                                      r_42 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_42, r_42);
                                                      t = q_0(t);
                                                      p_42 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, o_42, p_42);
                                                      t = q_0(t);
                                                      ;
                                                      LocalPopChoice(m_19);
                                                    }
                                                  else
                                                    {
                                                      t = l_19;
                                                      t = l_16;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_16 = ATgetArgument(t, 0);
                                                i_16 = ATgetArgument(t, 1);
                                                t = i_16;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    s_14 = ATgetArgument(t, 0);
                                                    w_14 = ATgetArgument(t, 1);
                                                    t = s_14;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        t_14 = ATgetArgument(t, 0);
                                                        t = f_16;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            s_15 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm o_19 = t;
                                                              int p_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, t_14);
                                                                  t = q_0(t);
                                                                  g_43 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_43, w_14);
                                                                  t = q_0(t);
                                                                  f_43 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, s_15, f_43);
                                                                  t = q_0(t);
                                                                  e_43 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, e_43);
                                                                  t = q_0(t);
                                                                  ;
                                                                  LocalPopChoice(p_19);
                                                                }
                                                              else
                                                                {
                                                                  t = o_19;
                                                                  {
                                                                    ATerm r_19 = t;
                                                                    int z_19 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL;
                                                                        t = l_16;
                                                                        t = new_0_0(t);
                                                                        i_43 = t;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        t_43 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = q_0(t);
                                                                        u_43 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(u_43), t_43);
                                                                        t = q_0(t);
                                                                        j_43 = t;
                                                                        t = i_43;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        s_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, s_43);
                                                                        t = q_0(t);
                                                                        r_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, r_43);
                                                                        t = q_0(t);
                                                                        l_43 = t;
                                                                        t = k_16;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        n_43 = t;
                                                                        t = i_43;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        q_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, q_43);
                                                                        t = q_0(t);
                                                                        p_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, p_43);
                                                                        t = q_0(t);
                                                                        o_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, n_43, o_43);
                                                                        t = q_0(t);
                                                                        m_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, l_43, m_43);
                                                                        t = q_0(t);
                                                                        k_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, j_43, k_43);
                                                                        t = q_0(t);
                                                                        ;
                                                                        LocalPopChoice(z_19);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_19;
                                                                        t = l_16;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm a_20 = t;
                                                            int c_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
                                                                t = l_16;
                                                                t = new_0_0(t);
                                                                x_43 = t;
                                                                t = bottomup_1_0(q_0, t);
                                                                i_44 = t;
                                                                t = (ATerm) ATempty;
                                                                t = q_0(t);
                                                                j_44 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(j_44), i_44);
                                                                t = q_0(t);
                                                                y_43 = t;
                                                                t = x_43;
                                                                t = bottomup_1_0(q_0, t);
                                                                h_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, h_44);
                                                                t = q_0(t);
                                                                g_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, g_44);
                                                                t = q_0(t);
                                                                a_44 = t;
                                                                t = k_16;
                                                                t = bottomup_1_0(q_0, t);
                                                                c_44 = t;
                                                                t = x_43;
                                                                t = bottomup_1_0(q_0, t);
                                                                f_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, f_44);
                                                                t = q_0(t);
                                                                e_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, e_44);
                                                                t = q_0(t);
                                                                d_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, c_44, d_44);
                                                                t = q_0(t);
                                                                b_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, a_44, b_44);
                                                                t = q_0(t);
                                                                z_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, y_43, z_43);
                                                                t = q_0(t);
                                                                ;
                                                                LocalPopChoice(c_20);
                                                              }
                                                            else
                                                              {
                                                                t = a_20;
                                                                t = l_16;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = f_16;
                                                        {
                                                          ATerm g_20 = t;
                                                          int h_20 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL;
                                                              t = l_16;
                                                              t = new_0_0(t);
                                                              m_44 = t;
                                                              t = bottomup_1_0(q_0, t);
                                                              x_44 = t;
                                                              t = (ATerm) ATempty;
                                                              t = q_0(t);
                                                              y_44 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(y_44), x_44);
                                                              t = q_0(t);
                                                              n_44 = t;
                                                              t = m_44;
                                                              t = bottomup_1_0(q_0, t);
                                                              w_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, w_44);
                                                              t = q_0(t);
                                                              v_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, v_44);
                                                              t = q_0(t);
                                                              p_44 = t;
                                                              t = k_16;
                                                              t = bottomup_1_0(q_0, t);
                                                              r_44 = t;
                                                              t = m_44;
                                                              t = bottomup_1_0(q_0, t);
                                                              u_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, u_44);
                                                              t = q_0(t);
                                                              t_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, t_44);
                                                              t = q_0(t);
                                                              s_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, r_44, s_44);
                                                              t = q_0(t);
                                                              q_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_44, q_44);
                                                              t = q_0(t);
                                                              o_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, n_44, o_44);
                                                              t = q_0(t);
                                                              ;
                                                              LocalPopChoice(h_20);
                                                            }
                                                          else
                                                            {
                                                              t = g_20;
                                                              t = l_16;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = f_16;
                                                    {
                                                      ATerm i_20 = t;
                                                      int j_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,g_45 = NULL,h_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL;
                                                          t = l_16;
                                                          t = new_0_0(t);
                                                          b_45 = t;
                                                          t = bottomup_1_0(q_0, t);
                                                          o_45 = t;
                                                          t = (ATerm) ATempty;
                                                          t = q_0(t);
                                                          p_45 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(p_45), o_45);
                                                          t = q_0(t);
                                                          c_45 = t;
                                                          t = b_45;
                                                          t = bottomup_1_0(q_0, t);
                                                          n_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, n_45);
                                                          t = q_0(t);
                                                          m_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, m_45);
                                                          t = q_0(t);
                                                          e_45 = t;
                                                          t = k_16;
                                                          t = bottomup_1_0(q_0, t);
                                                          h_45 = t;
                                                          t = b_45;
                                                          t = bottomup_1_0(q_0, t);
                                                          l_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, l_45);
                                                          t = q_0(t);
                                                          k_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, k_45);
                                                          t = q_0(t);
                                                          j_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_45, j_45);
                                                          t = q_0(t);
                                                          g_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_45, g_45);
                                                          t = q_0(t);
                                                          d_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, c_45, d_45);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(j_20);
                                                        }
                                                      else
                                                        {
                                                          t = i_20;
                                                          t = l_16;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    f_16 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm k_20 = t;
                                                      int l_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, f_16);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(l_20);
                                                        }
                                                      else
                                                        {
                                                          t = k_20;
                                                          {
                                                            ATerm m_20 = t;
                                                            int n_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL;
                                                                t = l_16;
                                                                t = new_0_0(t);
                                                                t_45 = t;
                                                                t = bottomup_1_0(q_0, t);
                                                                e_46 = t;
                                                                t = (ATerm) ATempty;
                                                                t = q_0(t);
                                                                f_46 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(f_46), e_46);
                                                                t = q_0(t);
                                                                u_45 = t;
                                                                t = t_45;
                                                                t = bottomup_1_0(q_0, t);
                                                                d_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, d_46);
                                                                t = q_0(t);
                                                                c_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, c_46);
                                                                t = q_0(t);
                                                                w_45 = t;
                                                                t = k_16;
                                                                t = bottomup_1_0(q_0, t);
                                                                y_45 = t;
                                                                t = t_45;
                                                                t = bottomup_1_0(q_0, t);
                                                                b_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, b_46);
                                                                t = q_0(t);
                                                                a_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, a_46);
                                                                t = q_0(t);
                                                                z_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, y_45, z_45);
                                                                t = q_0(t);
                                                                x_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, w_45, x_45);
                                                                t = q_0(t);
                                                                v_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, u_45, v_45);
                                                                t = q_0(t);
                                                                ;
                                                                LocalPopChoice(n_20);
                                                              }
                                                            else
                                                              {
                                                                t = m_20;
                                                                t = l_16;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm o_20 = t;
                                                    int p_20 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL;
                                                        t = l_16;
                                                        t = new_0_0(t);
                                                        i_46 = t;
                                                        t = bottomup_1_0(q_0, t);
                                                        t_46 = t;
                                                        t = (ATerm) ATempty;
                                                        t = q_0(t);
                                                        u_46 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(u_46), t_46);
                                                        t = q_0(t);
                                                        j_46 = t;
                                                        t = i_46;
                                                        t = bottomup_1_0(q_0, t);
                                                        s_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, s_46);
                                                        t = q_0(t);
                                                        r_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, r_46);
                                                        t = q_0(t);
                                                        l_46 = t;
                                                        t = k_16;
                                                        t = bottomup_1_0(q_0, t);
                                                        n_46 = t;
                                                        t = i_46;
                                                        t = bottomup_1_0(q_0, t);
                                                        q_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, q_46);
                                                        t = q_0(t);
                                                        p_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, p_46);
                                                        t = q_0(t);
                                                        o_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, n_46, o_46);
                                                        t = q_0(t);
                                                        m_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, l_46, m_46);
                                                        t = q_0(t);
                                                        k_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, j_46, k_46);
                                                        t = q_0(t);
                                                        ;
                                                        LocalPopChoice(p_20);
                                                      }
                                                    else
                                                      {
                                                        t = o_20;
                                                        t = l_16;
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
                                        k_16 = ATgetArgument(t, 0);
                                        t = k_16;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm q_20 = t;
                                            int r_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_d_7;
                                                t = q_0(t);
                                                ;
                                                LocalPopChoice(r_20);
                                              }
                                            else
                                              {
                                                t = q_20;
                                                t = l_16;
                                              }
                                          }
                                        else
                                          {
                                            t = l_16;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            k_16 = ATgetArgument(t, 0);
                                            t = k_16;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm s_20 = t;
                                                int t_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_k_7;
                                                    t = q_0(t);
                                                    ;
                                                    LocalPopChoice(t_20);
                                                  }
                                                else
                                                  {
                                                    t = s_20;
                                                    t = l_16;
                                                  }
                                              }
                                            else
                                              {
                                                t = l_16;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                k_16 = ATgetArgument(t, 0);
                                                t = k_16;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm u_20 = t;
                                                    int v_20 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_k_7;
                                                        t = q_0(t);
                                                        ;
                                                        LocalPopChoice(v_20);
                                                      }
                                                    else
                                                      {
                                                        t = u_20;
                                                        t = l_16;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = l_16;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm w_20 = t;
                                                int x_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm y_20 = ATgetArgument(t, 0);
                                                        j_16 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(x_20);
                                                    t = j_16;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm z_20 = t;
                                                        int a_21 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_k_7;
                                                            t = q_0(t);
                                                            ;
                                                            LocalPopChoice(a_21);
                                                          }
                                                        else
                                                          {
                                                            t = z_20;
                                                            t = l_16;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = l_16;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = w_20;
                                                    {
                                                      ATerm b_21 = t;
                                                      int c_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm d_21 = ATgetArgument(t, 0);
                                                              j_16 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(c_21);
                                                          {
                                                            ATerm e_21 = t;
                                                            int f_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = j_16;
                                                                t = fetch_1_0(o_1, t);
                                                                t = term_k_7;
                                                                t = bottomup_1_0(q_0, t);
                                                                ;
                                                                LocalPopChoice(f_21);
                                                              }
                                                            else
                                                              {
                                                                t = e_21;
                                                                t = l_16;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = b_21;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              k_16 = ATgetArgument(t, 0);
                                                              j_16 = ATgetArgument(t, 1);
                                                              t = j_16;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = k_16;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = j_16;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          f_16 = ATgetArgument(t, 0);
                                                                          i_16 = ATgetArgument(t, 1);
                                                                          t = k_16;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = k_16;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = k_16;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = j_16;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          f_16 = ATgetArgument(t, 0);
                                                                          i_16 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm g_21 = t;
                                                                            int h_21 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm d_48 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, i_16, j_16);
                                                                                t = q_0(t);
                                                                                d_48 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, f_16, d_48);
                                                                                t = q_0(t);
                                                                                ;
                                                                                LocalPopChoice(h_21);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = g_21;
                                                                                {
                                                                                  ATerm i_21 = t;
                                                                                  int j_21 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = j_16;
                                                                                      if((k_16 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      ;
                                                                                      LocalPopChoice(j_21);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = i_21;
                                                                                      t = l_16;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm k_21 = t;
                                                                          int l_21 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = j_16;
                                                                              if((k_16 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              ;
                                                                              LocalPopChoice(l_21);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = k_21;
                                                                              t = l_16;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  k_16 = ATgetArgument(t, 0);
                                                                  j_16 = ATgetArgument(t, 1);
                                                                  r_14 = ATgetArgument(t, 2);
                                                                  t = r_14;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm m_21 = t;
                                                                      int n_21 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, k_16, j_16);
                                                                          t = q_0(t);
                                                                          ;
                                                                          LocalPopChoice(n_21);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = m_21;
                                                                          t = l_16;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = l_16;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      k_16 = ATgetArgument(t, 0);
                                                                      j_16 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm o_21 = t;
                                                                        int p_21 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, k_16, j_16);
                                                                            t = q_0(t);
                                                                            ;
                                                                            LocalPopChoice(p_21);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = o_21;
                                                                            t = l_16;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          k_16 = ATgetArgument(t, 0);
                                                                          t = k_16;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              f_16 = ATgetFirst((ATermList) t);
                                                                              i_16 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm q_21 = t;
                                                                                int r_21 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm r_48 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, i_16);
                                                                                    t = q_0(t);
                                                                                    r_48 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, f_16, r_48);
                                                                                    t = q_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(r_21);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_21;
                                                                                    t = l_16;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm s_21 = t;
                                                                                  int t_21 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_k_7;
                                                                                      t = q_0(t);
                                                                                      ;
                                                                                      LocalPopChoice(t_21);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = s_21;
                                                                                      t = l_16;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = l_16;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              k_16 = ATgetArgument(t, 0);
                                                                              t = k_16;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  f_16 = ATgetFirst((ATermList) t);
                                                                                  i_16 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm u_21 = t;
                                                                                    int v_21 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm x_48 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, i_16);
                                                                                        t = q_0(t);
                                                                                        x_48 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, f_16, x_48);
                                                                                        t = q_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(v_21);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = u_21;
                                                                                        t = l_16;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm w_21 = t;
                                                                                      int x_21 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_k_7;
                                                                                          t = q_0(t);
                                                                                          ;
                                                                                          LocalPopChoice(x_21);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = w_21;
                                                                                          t = l_16;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = l_16;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  k_16 = ATgetArgument(t, 0);
                                                                                  t = k_16;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      f_16 = ATgetFirst((ATermList) t);
                                                                                      i_16 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm y_21 = t;
                                                                                        int z_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm d_49 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, i_16);
                                                                                            t = q_0(t);
                                                                                            d_49 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, d_49);
                                                                                            t = q_0(t);
                                                                                            ;
                                                                                            LocalPopChoice(z_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = y_21;
                                                                                            t = l_16;
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
                                                                                              t = term_d_7;
                                                                                              t = q_0(t);
                                                                                              ;
                                                                                              LocalPopChoice(b_22);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = a_22;
                                                                                              t = l_16;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = l_16;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_RDefT_4))
                                                                                    {
                                                                                      k_16 = ATgetArgument(t, 0);
                                                                                      j_16 = ATgetArgument(t, 1);
                                                                                      r_14 = ATgetArgument(t, 2);
                                                                                      q_14 = ATgetArgument(t, 3);
                                                                                      {
                                                                                        ATerm c_22 = t;
                                                                                        int d_22 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm k_49 = NULL,m_49 = NULL;
                                                                                            t = j_16;
                                                                                            t = map1_1_0(p_1, t);
                                                                                            k_49 = t;
                                                                                            t = r_14;
                                                                                            t = map1_1_0(q_1, t);
                                                                                            m_49 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, k_16, k_49, m_49, q_14);
                                                                                            t = bottomup_1_0(q_0, t);
                                                                                            ;
                                                                                            LocalPopChoice(d_22);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = c_22;
                                                                                            t = l_16;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_SDefT_4))
                                                                                        {
                                                                                          k_16 = ATgetArgument(t, 0);
                                                                                          j_16 = ATgetArgument(t, 1);
                                                                                          r_14 = ATgetArgument(t, 2);
                                                                                          q_14 = ATgetArgument(t, 3);
                                                                                          {
                                                                                            ATerm e_22 = t;
                                                                                            int f_22 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm y_49 = NULL,b_50 = NULL;
                                                                                                t = r_14;
                                                                                                t = map1_1_0(x_1, t);
                                                                                                y_49 = t;
                                                                                                t = j_16;
                                                                                                t = map_1_0(c_2, t);
                                                                                                b_50 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, k_16, b_50, y_49, q_14);
                                                                                                t = bottomup_1_0(q_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(f_22);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = e_22;
                                                                                                {
                                                                                                  ATerm g_22 = t;
                                                                                                  int h_22 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm l_50 = NULL,n_50 = NULL;
                                                                                                      t = j_16;
                                                                                                      t = map1_1_0(d_2, t);
                                                                                                      l_50 = t;
                                                                                                      t = r_14;
                                                                                                      t = map_1_0(e_2, t);
                                                                                                      n_50 = t;
                                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, k_16, l_50, n_50, q_14);
                                                                                                      t = bottomup_1_0(q_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(h_22);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = g_22;
                                                                                                      t = l_16;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_InfixApp_3))
                                                                                            {
                                                                                              k_16 = ATgetArgument(t, 0);
                                                                                              j_16 = ATgetArgument(t, 1);
                                                                                              r_14 = ATgetArgument(t, 2);
                                                                                              {
                                                                                                ATerm i_22 = t;
                                                                                                int j_22 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL,f_51 = NULL;
                                                                                                    t = term_k_22;
                                                                                                    t = bottomup_1_0(q_0, t);
                                                                                                    c_51 = t;
                                                                                                    t = (ATerm) ATempty;
                                                                                                    t = q_0(t);
                                                                                                    f_51 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(f_51), r_14);
                                                                                                    t = q_0(t);
                                                                                                    e_51 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(e_51), k_16);
                                                                                                    t = q_0(t);
                                                                                                    d_51 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Op_2, c_51, d_51);
                                                                                                    t = q_0(t);
                                                                                                    b_51 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_App_2, j_16, b_51);
                                                                                                    t = q_0(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(j_22);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = i_22;
                                                                                                    t = l_16;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_BAM_3))
                                                                                                {
                                                                                                  k_16 = ATgetArgument(t, 0);
                                                                                                  j_16 = ATgetArgument(t, 1);
                                                                                                  r_14 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm l_22 = t;
                                                                                                    int m_22 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, j_16);
                                                                                                        t = q_0(t);
                                                                                                        m_51 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, r_14);
                                                                                                        t = q_0(t);
                                                                                                        p_51 = t;
                                                                                                        t = (ATerm) ATempty;
                                                                                                        t = q_0(t);
                                                                                                        q_51 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(q_51), p_51);
                                                                                                        t = q_0(t);
                                                                                                        o_51 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(o_51), k_16);
                                                                                                        t = q_0(t);
                                                                                                        n_51 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(n_51), m_51);
                                                                                                        t = q_0(t);
                                                                                                        l_51 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, l_51);
                                                                                                        t = q_0(t);
                                                                                                        ;
                                                                                                        LocalPopChoice(m_22);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = l_22;
                                                                                                        t = l_16;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_AM_2))
                                                                                                    {
                                                                                                      k_16 = ATgetArgument(t, 0);
                                                                                                      j_16 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm n_22 = t;
                                                                                                        int o_22 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm u_51 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Match_1, j_16);
                                                                                                            t = q_0(t);
                                                                                                            u_51 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, k_16, u_51);
                                                                                                            t = q_0(t);
                                                                                                            ;
                                                                                                            LocalPopChoice(o_22);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = n_22;
                                                                                                            t = l_16;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_MA_2))
                                                                                                        {
                                                                                                          k_16 = ATgetArgument(t, 0);
                                                                                                          j_16 = ATgetArgument(t, 1);
                                                                                                          {
                                                                                                            ATerm p_22 = t;
                                                                                                            int q_22 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                ATerm y_51 = NULL;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, k_16);
                                                                                                                t = q_0(t);
                                                                                                                y_51 = t;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, y_51, j_16);
                                                                                                                t = q_0(t);
                                                                                                                ;
                                                                                                                LocalPopChoice(q_22);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = p_22;
                                                                                                                t = l_16;
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_BA_2))
                                                                                                            {
                                                                                                              k_16 = ATgetArgument(t, 0);
                                                                                                              j_16 = ATgetArgument(t, 1);
                                                                                                              {
                                                                                                                ATerm r_22 = t;
                                                                                                                int s_22 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    ATerm c_52 = NULL;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, j_16);
                                                                                                                    t = q_0(t);
                                                                                                                    c_52 = t;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, c_52, k_16);
                                                                                                                    t = q_0(t);
                                                                                                                    ;
                                                                                                                    LocalPopChoice(s_22);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = r_22;
                                                                                                                    t = l_16;
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_Let_2))
                                                                                                                {
                                                                                                                  k_16 = ATgetArgument(t, 0);
                                                                                                                  j_16 = ATgetArgument(t, 1);
                                                                                                                  t = j_16;
                                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                                    {
                                                                                                                      a_16 = ATgetArgument(t, 0);
                                                                                                                      b_16 = ATgetArgument(t, 1);
                                                                                                                      t = k_16;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = j_16;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          ATerm t_22 = t;
                                                                                                                          int u_22 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm n_52 = NULL;
                                                                                                                              t = (ATerm) ATmakeAppl(sym__2, k_16, a_16);
                                                                                                                              t = conc_0_0(t);
                                                                                                                              n_52 = t;
                                                                                                                              t = (ATerm) ATmakeAppl(sym_Let_2, n_52, b_16);
                                                                                                                              t = bottomup_1_0(q_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(u_22);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = t_22;
                                                                                                                              t = l_16;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_CallT_3))
                                                                                                                        {
                                                                                                                          a_16 = ATgetArgument(t, 0);
                                                                                                                          b_16 = ATgetArgument(t, 1);
                                                                                                                          m_15 = ATgetArgument(t, 2);
                                                                                                                          t = m_15;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = b_16;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = a_16;
                                                                                                                                  if(match_cons(t, sym_SVar_1))
                                                                                                                                    {
                                                                                                                                      y_15 = ATgetArgument(t, 0);
                                                                                                                                      t = k_16;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = j_16;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              f_16 = ATgetFirst((ATermList) t);
                                                                                                                                              i_16 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                              t = i_16;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = f_16;
                                                                                                                                                  if(match_cons(t, sym_SDefT_4))
                                                                                                                                                    {
                                                                                                                                                      s_15 = ATgetArgument(t, 0);
                                                                                                                                                      d_15 = ATgetArgument(t, 1);
                                                                                                                                                      y_14 = ATgetArgument(t, 2);
                                                                                                                                                      b_15 = ATgetArgument(t, 3);
                                                                                                                                                      t = y_14;
                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                        {
                                                                                                                                                          t = d_15;
                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                            {
                                                                                                                                                              ATerm w_22 = t;
                                                                                                                                                              int x_22 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  t = y_15;
                                                                                                                                                                  if((s_15 != t))
                                                                                                                                                                    {
                                                                                                                                                                      _fail(t);
                                                                                                                                                                    }
                                                                                                                                                                  t = b_15;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm y_22 = t;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        ATerm j_2 (ATerm t)
                                                                                                                                                                        {
                                                                                                                                                                          if(match_cons(t, sym_CallT_3))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm z_22 = ATgetArgument(t, 0);
                                                                                                                                                                              if(match_cons(z_22, sym_SVar_1))
                                                                                                                                                                                {
                                                                                                                                                                                  if(((s_15 != NULL) && (s_15 != ATgetArgument(z_22, 0))))
                                                                                                                                                                                    _fail(ATgetArgument(z_22, 0));
                                                                                                                                                                                  else
                                                                                                                                                                                    s_15 = ATgetArgument(z_22, 0);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              {
                                                                                                                                                                                ATerm a_23 = ATgetArgument(t, 1);
                                                                                                                                                                                if(((ATgetType(a_23) != AT_LIST) || !(ATisEmpty(a_23))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                              {
                                                                                                                                                                                ATerm b_23 = ATgetArgument(t, 2);
                                                                                                                                                                                if(((ATgetType(b_23) != AT_LIST) || !(ATisEmpty(b_23))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          return(t);
                                                                                                                                                                        }
                                                                                                                                                                        t = oncetd_1_0(j_2, t);
                                                                                                                                                                        PopChoice();
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = y_22;
                                                                                                                                                                      }
                                                                                                                                                                    t = not_null(b_15);
                                                                                                                                                                    t = bottomup_1_0(q_0, t);
                                                                                                                                                                  }
                                                                                                                                                                  ;
                                                                                                                                                                  LocalPopChoice(x_22);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = w_22;
                                                                                                                                                                  t = l_16;
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = l_16;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = l_16;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = l_16;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = l_16;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = l_16;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = k_16;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = j_16;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = l_16;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = k_16;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                    {
                                                                                                                                      t = j_16;
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = l_16;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = k_16;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = j_16;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = l_16;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = k_16;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = j_16;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = l_16;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_As_2))
                                                                                                                    {
                                                                                                                      k_16 = ATgetArgument(t, 0);
                                                                                                                      j_16 = ATgetArgument(t, 1);
                                                                                                                      t = k_16;
                                                                                                                      if(match_cons(t, sym_Wld_0))
                                                                                                                        {
                                                                                                                          t = j_16;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = l_16;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = l_16;
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
  t = bottomup_1_0(q_0, t);
  return(t);
}
ATerm map_1_0 (ATerm i_125 (ATerm), ATerm t)
{
  ATerm j_54 (ATerm t)
  {
    ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL;
    g_54 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_54;
      }
    else
      {
        ATerm l_6 = NULL,o_6 = NULL,p_6 = NULL,k_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_54 = ATgetFirst((ATermList) t);
            i_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_54);
        l_6 = t;
        t = h_54;
        t = i_125(t);
        o_6 = t;
        t = i_54;
        t = j_54(t);
        p_6 = t;
        t = (ATerm) ATinsert(CheckATermList(p_6), o_6);
        k_3 = t;
        t = SSLsetAnnotations(k_3, l_6);
      }
    return(t);
  }
  t = j_54(t);
  return(t);
}
ATerm Cons_2_0 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,n_3 = NULL;
  q_54 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_54 = ATgetFirst((ATermList) t);
      n_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_54);
  l_54 = t;
  t = m_54;
  t = b_98(t);
  o_54 = t;
  t = n_54;
  t = c_98(t);
  p_54 = t;
  t = (ATerm) ATinsert(CheckATermList(p_54), o_54);
  n_3 = t;
  t = SSLsetAnnotations(n_3, l_54);
  return(t);
}
ATerm n_11 (ATerm d_74, ATerm e_74, ATerm t)
{
  ATerm r_54 = NULL;
  t = SSL_fputc(d_74, e_74);
  r_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_54);
  return(t);
}
ATerm o_11 (ATerm r_77, ATerm s_77, ATerm t)
{
  ATerm s_54 = NULL;
  t = SSL_write_term_to_stream_text(r_77, s_77);
  s_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_54);
  return(t);
}
ATerm q_11 (ATerm o_135 (ATerm), ATerm k_556, ATerm v_77, ATerm t)
{
  ATerm t_54 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_556, term_c_23);
  t = open_stream_0_0(t);
  t_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_54, v_77);
  t = o_135(t);
  t = fclose_0_0(t);
  t = v_77;
  return(t);
}
ATerm p_11 (ATerm n_77, ATerm o_77, ATerm t)
{
  ATerm u_54 = NULL;
  t = SSL_write_term_to_stream_baf(n_77, o_77);
  u_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_54);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_23 = ATgetArgument(t, 0);
      if(match_cons(d_23, sym_Stream_1))
        {
          x_54 = ATgetArgument(d_23, 0);
        }
      else
        _fail(t);
      y_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_11(x_54, y_54, t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm z_54 = NULL,a_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_23 = ATgetArgument(t, 0);
      if(match_cons(f_23, sym_Stream_1))
        {
          d_55 = ATgetArgument(f_23, 0);
        }
      else
        _fail(t);
      e_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_11(d_55, e_55, t);
  z_54 = t;
  t = term_i_23;
  a_55 = t;
  t = z_54;
  if(match_cons(t, sym_Stream_1))
    {
      c_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_i_23, z_54);
  t = n_11(a_55, c_55, t);
  return(t);
}
ATerm output_1_0 (ATerm x_139 (ATerm), ATerm t)
{
  ATerm v_54 = NULL,w_54 = NULL;
  t = x_139(t);
  w_54 = t;
  {
    ATerm j_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_23;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = j_23;
        t = term_p_23;
      }
    v_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_54, w_54);
    {
      ATerm q_23 = t;
      int r_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_s_23;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, v_54, w_54);
          LocalPopChoice(r_23);
          if(match_cons(t, sym__2))
            {
              ATerm u_23 = ATgetArgument(t, 0);
              ATerm v_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_11(n_2, v_54, w_54, t);
        }
      else
        {
          t = q_23;
          if(match_cons(t, sym__2))
            {
              ATerm y_23 = ATgetArgument(t, 0);
              ATerm z_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_11(x_2, v_54, w_54, t);
        }
    }
  }
  return(t);
}
ATerm s_55 (ATerm m_55, ATerm t)
{
  t = SSL_fclose(m_55);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL;
  q_55 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_55 = ATgetArgument(t, 0);
      {
        ATerm b_24 = t;
        int c_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_55);
            ;
            LocalPopChoice(c_24);
          }
        else
          {
            t = b_24;
            t = s_55(q_55, t);
          }
      }
    }
  else
    {
      t = s_55(q_55, t);
    }
  return(t);
}
ATerm r_11 (ATerm t_77, ATerm t)
{
  t = SSL_read_term_from_stream(t_77);
  return(t);
}
ATerm s_11 (ATerm f_74, ATerm g_74, ATerm t)
{
  ATerm t_55 = NULL;
  t = SSL_fopen(f_74, g_74);
  t_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_55);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_55 = NULL;
  t = SSL_stdin_stream();
  u_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_55);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_55 = NULL;
  t = SSL_stdout_stream();
  v_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_55);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_55 = NULL;
  t = SSL_stderr_stream();
  w_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_55);
  return(t);
}
ATerm e_57 (ATerm c_56, ATerm t)
{
  ATerm d_56 = NULL;
  t = SSL_explode_term(c_56);
  if(match_cons(t, sym__2))
    {
      ATerm d_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_24 = ATgetArgument(t, 1);
        if(((ATgetType(e_24) == AT_LIST) && !(ATisEmpty(e_24))))
          {
            d_56 = ATgetFirst((ATermList) e_24);
            {
              ATerm f_24 = (ATerm) ATgetNext((ATermList) e_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_56;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_56;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_56;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_56;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm f_57 (ATerm g_56, ATerm h_56, ATerm j_56, ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL,p_56 = NULL,p_3 = NULL;
  t = SSLgetAnnotations(j_56);
  m_56 = t;
  t = g_56;
  if(match_cons(t, sym_Path_1))
    {
      p_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_56, h_56);
  p_3 = t;
  t = SSLsetAnnotations(p_3, m_56);
  if(match_cons(t, sym__2))
    {
      k_56 = ATgetArgument(t, 0);
      l_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11(k_56, l_56, t);
  return(t);
}
ATerm g_57 (ATerm r_56, ATerm s_56, ATerm t_56, ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL,z_56 = NULL,q_3 = NULL;
  t = SSLgetAnnotations(t_56);
  w_56 = t;
  t = SSL_is_string(r_56);
  z_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_56, s_56);
  q_3 = t;
  t = SSLsetAnnotations(q_3, w_56);
  if(match_cons(t, sym__2))
    {
      u_56 = ATgetArgument(t, 0);
      v_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11(u_56, v_56, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_24 = ATgetArgument(t, 0);
      ATerm i_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  b_57 = t;
  if(match_cons(t, sym__2))
    {
      c_57 = ATgetArgument(t, 0);
      d_57 = ATgetArgument(t, 1);
      {
        ATerm j_24 = t;
        int k_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_57(b_57, t);
            ;
            LocalPopChoice(k_24);
          }
        else
          {
            t = j_24;
            {
              ATerm l_24 = t;
              int m_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_57(c_57, d_57, b_57, t);
                  ;
                  LocalPopChoice(m_24);
                }
              else
                {
                  t = l_24;
                  t = g_57(c_57, d_57, b_57, t);
                }
            }
          }
      }
    }
  else
    {
      t = e_57(b_57, t);
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_n_24;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL;
  ATerm o_24 = t;
  int p_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_57 = NULL;
      k_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_57, term_q_24);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(p_24);
    }
  else
    {
      t = o_24;
      t = debug_1_0(y_2, t);
      _fail(t);
    }
  i_57 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(j_57, t);
  h_57 = t;
  t = i_57;
  t = fclose_0_0(t);
  t = h_57;
  return(t);
}
ATerm input_1_0 (ATerm y_139 (ATerm), ATerm t)
{
  ATerm s_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_24);
    }
  else
    {
      t = s_24;
      t = term_v_24;
    }
  t = ReadFromFile_0_0(t);
  t = y_139(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL,q_57 = NULL,r_57 = NULL;
  m_57 = t;
  t = term_x_24;
  t = whoami_0_0(t);
  n_57 = t;
  t = term_y_24;
  q_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_25), n_57), term_z_24);
  r_57 = t;
  t = SSL_printnl(q_57, r_57);
  t = term_b_25;
  o_57 = t;
  t = SSL_exit(o_57);
  t = m_57;
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm t_57 = NULL;
  t_57 = t;
  if(match_string(t, "-k"))
    {
      t = t_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_57;
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL;
  u_57 = t;
  t = SSL_string_to_int(u_57);
  v_57 = t;
  t = term_c_25;
  w_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_25, v_57);
  t = b_12(w_57, v_57, t);
  t = u_57;
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_d_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_2, a_3, b_3, t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm y_57 = NULL;
  y_57 = t;
  if(match_string(t, "-S"))
    {
      t = y_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_57;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL;
  t = term_e_25;
  z_57 = t;
  t = term_f_25;
  a_58 = t;
  t = term_g_25;
  t = b_12(z_57, a_58, t);
  t = term_i_25;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_j_25;
  return(t);
}
ATerm i_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL;
  b_58 = t;
  t = SSL_string_to_int(b_58);
  c_58 = t;
  t = term_e_25;
  d_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_25, c_58);
  t = b_12(d_58, c_58, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_58);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_k_25;
  return(t);
}
ATerm m_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL;
  t = term_m_25;
  e_58 = t;
  t = term_x_24;
  f_58 = t;
  t = term_n_25;
  t = b_12(e_58, f_58, t);
  t = term_o_25;
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_q_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_3, g_3, h_3, t);
      ;
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      {
        ATerm t_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_3, j_3, l_3, t);
            ;
            LocalPopChoice(v_25);
          }
        else
          {
            t = t_25;
            t = Option_3_0(m_3, o_3, r_3, t);
          }
      }
    }
  return(t);
}
ATerm b_12 (ATerm u_78, ATerm v_78, ATerm t)
{
  ATerm g_58 = NULL;
  t = term_w_25;
  g_58 = t;
  t = SSL_table_put(g_58, u_78, v_78);
  t = (ATerm) ATmakeAppl(sym__3, term_w_25, u_78, v_78);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_58 = NULL,m_58 = NULL,n_58 = NULL;
      t = term_x_24;
      t = d_0(t);
      l_58 = t;
      t = term_x_25;
      m_58 = t;
      t = term_y_25;
      n_58 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_25, term_y_25, l_58);
      t = z_11(m_58, n_58, l_58, t);
      _fail(t);
    }
  else
    {
      ATerm q_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_58 = ATgetFirst((ATermList) t);
          k_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_58;
      t = a_0(t);
      t = term_x_24;
      t = b_0(t);
      q_58 = t;
      t = (ATerm) ATinsert(CheckATermList(k_58), q_58);
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm s_58 = NULL;
  s_58 = t;
  if(match_string(t, "-o"))
    {
      t = s_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_58;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL;
  t_58 = t;
  t = term_n_23;
  u_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_23, t_58);
  t = b_12(u_58, t_58, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_58);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_z_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_3, u_3, v_3, t);
  return(t);
}
ATerm z_11 (ATerm h_69, ATerm i_69, ATerm g_69, ATerm t)
{
  ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL;
  x_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_69, i_69);
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_26 = ATgetArgument(t, 0);
            ATerm e_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_69, i_69);
        t = y_11(h_69, i_69, t);
        ;
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        t = (ATerm) ATempty;
      }
    y_58 = t;
    t = (ATerm) ATinsert(CheckATermList(y_58), g_69);
    z_58 = t;
    t = SSL_table_put(h_69, i_69, z_58);
    t = x_58;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL;
      t = term_x_24;
      t = m_0(t);
      k_59 = t;
      t = term_x_25;
      l_59 = t;
      t = term_y_25;
      m_59 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_25, term_y_25, k_59);
      t = z_11(l_59, m_59, k_59, t);
      _fail(t);
    }
  else
    {
      ATerm q_59 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_59 = ATgetFirst((ATermList) t);
          h_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_59;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_59 = ATgetFirst((ATermList) t);
          j_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_59;
      t = i_0(t);
      t = i_59;
      t = k_0(t);
      q_59 = t;
      t = (ATerm) ATinsert(CheckATermList(j_59), q_59);
    }
  return(t);
}
ATerm x_3 (ATerm t)
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
ATerm y_3 (ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL;
  t_59 = t;
  t = term_u_24;
  u_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_24, t_59);
  t = b_12(u_59, t_59, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, t_59);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_3, y_3, b_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_24;
  t = whoami_0_0(t);
  v_59 = t;
  t = term_y_24;
  x_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_26), v_59);
  y_59 = t;
  t = SSL_printnl(x_59, y_59);
  t = term_b_25;
  w_59 = t;
  t = SSL_exit(w_59);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm u_11 (ATerm l_67, ATerm m_67, ATerm t)
{
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_67, m_67);
      ;
      LocalPopChoice(k_26);
    }
  else
    {
      t = j_26;
      t = SSL_addr(l_67, m_67);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_128 (ATerm), ATerm b_128 (ATerm), ATerm t)
{
  ATerm a_60 = NULL,b_60 = NULL,c_60 = NULL;
  a_60 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_60;
      t = a_128(t);
    }
  else
    {
      ATerm i_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_60 = ATgetFirst((ATermList) t);
          c_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_60;
      t = foldr_2_0(a_128, b_128, t);
      i_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_60, i_60);
      t = b_128(t);
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
  t = term_f_25;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL;
  if(match_cons(t, sym__2))
    {
      e_7 = ATgetArgument(t, 0);
      f_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_11(e_7, f_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_60 = NULL,a_7 = NULL,b_7 = NULL;
  t = times_0_0(t);
  b_7 = t;
  t = SSL_explode_term(b_7);
  if(match_cons(t, sym__2))
    {
      ATerm n_26 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7;
  t = foldr_2_0(c_4, g_4, t);
  l_60 = t;
  t = SSL_TicksToSeconds(l_60);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL;
  w_60 = t;
  if(match_cons(t, sym__2))
    {
      x_60 = ATgetArgument(t, 0);
      y_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_60;
        if((x_60 != t))
          {
            _fail(t);
          }
        t = w_60;
        ;
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        t = (ATerm) ATmakeAppl(sym__2, x_60, y_60);
        {
          ATerm q_26 = t;
          int r_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_60, y_60);
              ;
              LocalPopChoice(r_26);
            }
          else
            {
              t = q_26;
              t = SSL_gtr(x_60, y_60);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_60, y_60);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_136 (ATerm), ATerm t)
{
  ATerm c_61 = NULL;
  c_61 = t;
  {
    ATerm t_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_61 = NULL;
        t = term_e_25;
        t = get_config_0_0(t);
        e_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_61, term_b_25);
        t = geq_0_0(t);
        t = c_61;
        t = y_136(t);
        ;
        LocalPopChoice(u_26);
      }
    else
      {
        t = t_26;
        t = c_61;
      }
  }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL,j_61 = NULL,k_61 = NULL;
  t = run_time_0_0(t);
  g_61 = t;
  t = term_x_24;
  t = whoami_0_0(t);
  h_61 = t;
  t = term_y_24;
  j_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_26), g_61), term_v_26), h_61);
  k_61 = t;
  t = SSL_printnl(j_61, k_61);
  t = (ATerm) ATmakeAppl(sym__2, term_y_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_26), g_61), term_v_26), h_61));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_61 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_25;
  l_61 = t;
  t = SSL_exit(l_61);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL;
  c_62 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_62;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_62 = ATgetArgument(t, 0);
          {
            ATerm r_7 = NULL,t_3 = NULL;
            t = SSLgetAnnotations(c_62);
            r_7 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_62);
            t_3 = t;
            t = SSLsetAnnotations(t_3, r_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_62;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm o_139 (ATerm), ATerm t)
{
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      t = fetch_1_0(k_4, t);
    }
  t = o_139(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm h_62 = NULL,i_62 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_62 = ATgetFirst((ATermList) t);
      i_62 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_62 = NULL,n_62 = NULL;
        ATerm m_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_62)), not_null(n_62));
          return(t);
        }
        t = not_null(i_62);
        t = g_0(t);
        if(((m_62 != NULL) && (m_62 != t)))
          _fail(t);
        else
          m_62 = t;
        t = not_null(h_62);
        t = f_0(t);
        if(((n_62 != NULL) && (n_62 != t)))
          _fail(t);
        else
          n_62 = t;
        t = not_null(i_62);
        t = reverse_acc_2_0(f_0, m_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_24;
      t = g_0(t);
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL,w_3 = NULL;
  t_62 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_62);
  r_62 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_62);
  w_3 = t;
  t = SSLsetAnnotations(w_3, r_62);
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm v_62 = NULL;
  v_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_62), term_a_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_62 = NULL,q_62 = NULL;
  ATerm b_27 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_27);
    }
  else
    {
      t = b_27;
      t = fetch_1_0(n_4, t);
    }
  t = term_e_27;
  t = echo_0_0(t);
  t = term_x_25;
  p_62 = t;
  t = term_y_25;
  q_62 = t;
  t = term_f_27;
  t = y_11(p_62, q_62, t);
  t = reverse_acc_2_0(_id, o_4, t);
  t = map_1_0(p_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm s_125 (ATerm), ATerm t)
{
  ATerm s_63 (ATerm t)
  {
    ATerm p_63 = NULL,q_63 = NULL,r_63 = NULL;
    p_63 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_63 = ATgetFirst((ATermList) t);
        r_63 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_27 = t;
      int h_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_7 = NULL,c_8 = NULL,z_3 = NULL;
          t = SSLgetAnnotations(p_63);
          z_7 = t;
          t = q_63;
          t = s_125(t);
          c_8 = t;
          t = (ATerm) ATinsert(CheckATermList(r_63), c_8);
          z_3 = t;
          t = SSLsetAnnotations(z_3, z_7);
          ;
          LocalPopChoice(h_27);
        }
      else
        {
          t = g_27;
          {
            ATerm k_8 = NULL,n_8 = NULL,a_4 = NULL;
            t = SSLgetAnnotations(p_63);
            k_8 = t;
            t = r_63;
            t = s_63(t);
            n_8 = t;
            t = (ATerm) ATinsert(CheckATermList(n_8), q_63);
            a_4 = t;
            t = SSLsetAnnotations(a_4, k_8);
          }
        }
    }
    return(t);
  }
  t = s_63(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL;
  w_63 = t;
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_63;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_27 = ATgetFirst((ATermList) t);
                ATerm l_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_63;
          }
        ;
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        t = (ATerm) ATinsert(ATempty, w_63);
      }
    x_63 = t;
    t = term_p_23;
    y_63 = t;
    t = SSL_printnl(y_63, x_63);
    t = w_63;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm x_11 (ATerm e_60, ATerm f_60, ATerm t)
{
  t = SSL_strcat(e_60, f_60);
  return(t);
}
ATerm debug_1_0 (ATerm m_135 (ATerm), ATerm t)
{
  ATerm c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL;
  c_64 = t;
  t = m_135(t);
  d_64 = t;
  t = term_y_24;
  e_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_64), d_64);
  f_64 = t;
  t = SSL_printnl(e_64, f_64);
  t = c_64;
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_p_27;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_64 = NULL;
      m_64 = t;
      t = SSL_is_string(m_64);
      ;
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      {
        ATerm s_27 = t;
        int t_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(q_4, t);
            ;
            LocalPopChoice(t_27);
          }
        else
          {
            t = s_27;
            {
              ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL;
              s_64 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_64 = ATgetArgument(t, 0);
                  t = t_64;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_64 = ATgetArgument(t, 0);
                      t = t_64;
                      {
                        ATerm u_27 = t;
                        int v_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(v_27);
                          }
                        else
                          {
                            t = u_27;
                            t = debug_1_0(r_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_64 = NULL,z_64 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_64 = ATgetArgument(t, 0);
                          u_64 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_64;
                      t = eval_config_0_0(t);
                      y_64 = t;
                      t = u_64;
                      t = eval_config_0_0(t);
                      z_64 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_64, z_64);
                      t = x_11(y_64, z_64, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm y_11 (ATerm y_70, ATerm z_70, ATerm t)
{
  t = SSL_table_get(y_70, z_70);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm d_65 = NULL,e_65 = NULL;
  d_65 = t;
  t = term_w_25;
  e_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_25, d_65);
  t = y_11(e_65, d_65, t);
  {
    ATerm x_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_65 = NULL,g_65 = NULL;
        t = eval_config_0_0(t);
        f_65 = t;
        t = term_w_25;
        g_65 = t;
        t = SSL_table_put(g_65, d_65, f_65);
        t = f_65;
        ;
        LocalPopChoice(y_27);
      }
    else
      {
        t = x_27;
      }
  }
  return(t);
}
ATerm s_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm l_65 = NULL,m_65 = NULL;
  t = term_z_27;
  l_65 = t;
  t = term_x_24;
  m_65 = t;
  t = term_a_28;
  t = b_12(l_65, m_65, t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_b_28;
  return(t);
}
ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL;
  t = term_z_27;
  p_65 = t;
  t = term_x_24;
  q_65 = t;
  t = term_a_28;
  t = b_12(p_65, q_65, t);
  t = term_c_28;
  n_65 = t;
  t = term_x_24;
  o_65 = t;
  t = term_d_28;
  t = b_12(n_65, o_65, t);
  t = term_e_28;
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_f_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_4, u_4, v_4, t);
      ;
      LocalPopChoice(h_28);
    }
  else
    {
      t = g_28;
      t = Option_3_0(w_4, x_4, y_4, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_141 (ATerm), ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,a_66 = NULL,b_66 = NULL,i_4 = NULL;
  if(((v_65 != NULL) && (v_65 != t)))
    _fail(t);
  else
    v_65 = t;
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_28;
        t = r_141(t);
        ;
        LocalPopChoice(j_28);
      }
    else
      {
        t = i_28;
      }
    t = not_null(v_65);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((x_65 != NULL) && (x_65 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          x_65 = ATgetFirst((ATermList) t);
        if(((y_65 != NULL) && (y_65 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          y_65 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(v_65));
    if(((w_65 != NULL) && (w_65 != t)))
      _fail(t);
    else
      w_65 = t;
    t = term_i_26;
    if(((b_66 != NULL) && (b_66 != t)))
      _fail(t);
    else
      b_66 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_i_26, not_null(x_65));
    t = b_12(not_null(b_66), not_null(x_65), t);
    t = not_null(y_65);
    {
      ATerm l_66 (ATerm t)
      {
        ATerm l_28 = t;
        int m_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_28 = t;
            int o_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_66 = NULL;
                e_66 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = e_66;
                ;
                LocalPopChoice(o_28);
              }
            else
              {
                t = n_28;
                t = r_141(t);
                t = Cons_2_0(_id, l_66, t);
              }
            ;
            LocalPopChoice(m_28);
          }
        else
          {
            t = l_28;
            {
              ATerm h_66 = NULL,i_66 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_66 = ATgetFirst((ATermList) t);
                  i_66 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_66), (ATerm) ATmakeAppl(sym_Undefined_1, h_66));
            }
          }
        return(t);
      }
      t = l_66(t);
      if(((a_66 != NULL) && (a_66 != t)))
        _fail(t);
      else
        a_66 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(a_66)), (ATerm) ATmakeAppl(sym_Program_1, not_null(x_65)));
      if(((i_4 != NULL) && (i_4 != t)))
        _fail(t);
      else
        i_4 = t;
      t = SSLsetAnnotations(not_null(i_4), not_null(w_65));
    }
  }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm x_66 = NULL;
  x_66 = t;
  if(match_string(t, "--help"))
    {
      t = x_66;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_66;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_66;
        }
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm y_66 = NULL,z_66 = NULL;
  t = term_z_26;
  y_66 = t;
  t = term_x_24;
  z_66 = t;
  t = term_q_28;
  t = b_12(y_66, z_66, t);
  t = term_r_28;
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_s_28;
  return(t);
}
ATerm e_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm q_141 (ATerm), ATerm t)
{
  ATerm q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL;
  if(((s_66 != NULL) && (s_66 != t)))
    _fail(t);
  else
    s_66 = t;
  t = term_x_25;
  if(((u_66 != NULL) && (u_66 != t)))
    _fail(t);
  else
    u_66 = t;
  t = term_y_25;
  if(((v_66 != NULL) && (v_66 != t)))
    _fail(t);
  else
    v_66 = t;
  t = (ATerm) ATempty;
  if(((w_66 != NULL) && (w_66 != t)))
    _fail(t);
  else
    w_66 = t;
  t = SSL_table_put(not_null(u_66), not_null(v_66), not_null(w_66));
  t = not_null(s_66);
  {
    ATerm z_4 (ATerm t)
    {
      ATerm t_28 = t;
      int u_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_141(t);
          ;
          LocalPopChoice(u_28);
        }
      else
        {
          t = t_28;
          {
            ATerm v_28 = t;
            int w_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_5, b_5, c_5, t);
                ;
                LocalPopChoice(w_28);
              }
            else
              {
                t = v_28;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_4, t);
    {
      ATerm x_28 = t;
      int y_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_67 = NULL;
          g_67 = t;
          {
            ATerm a_29 = t;
            int b_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_9 = NULL;
                t = g_67;
                {
                  ATerm c_29 = t;
                  int d_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_z_26;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(d_29);
                    }
                  else
                    {
                      t = c_29;
                      t = fetch_1_0(e_5, t);
                    }
                  t = g_67;
                  t = default_system_usage_0_0(t);
                  t = term_f_25;
                  c_9 = t;
                  t = SSL_exit(c_9);
                }
                ;
                LocalPopChoice(b_29);
              }
            else
              {
                t = a_29;
                {
                  ATerm g_9 = NULL;
                  t = term_z_27;
                  t = get_config_0_0(t);
                  t = g_67;
                  t = default_system_about_0_0(t);
                  t = term_f_25;
                  g_9 = t;
                  t = SSL_exit(g_9);
                }
              }
          }
          ;
          LocalPopChoice(y_28);
        }
      else
        {
          t = x_28;
          {
            ATerm e_29 = t;
            int f_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_67 = NULL,i_67 = NULL,j_67 = NULL;
                ATerm f_5 (ATerm t)
                {
                  ATerm k_67 = NULL,n_67 = NULL,o_67 = NULL,c_7 = NULL;
                  o_67 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      n_67 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(o_67);
                  k_67 = t;
                  t = n_67;
                  if(((q_66 != NULL) && (q_66 != t)))
                    _fail(t);
                  else
                    q_66 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, n_67);
                  c_7 = t;
                  t = SSLsetAnnotations(c_7, k_67);
                  return(t);
                }
                t = fetch_1_0(f_5, t);
                t = term_y_24;
                if(((i_67 != NULL) && (i_67 != t)))
                  _fail(t);
                else
                  i_67 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_66)), term_h_29);
                if(((j_67 != NULL) && (j_67 != t)))
                  _fail(t);
                else
                  j_67 = t;
                t = SSL_printnl(not_null(i_67), not_null(j_67));
                t = (ATerm) ATmakeAppl(sym__2, term_y_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_66)), term_h_29));
                t = default_system_usage_0_0(t);
                t = term_b_25;
                if(((h_67 != NULL) && (h_67 != t)))
                  _fail(t);
                else
                  h_67 = t;
                t = SSL_exit(not_null(h_67));
                ;
                LocalPopChoice(f_29);
              }
            else
              {
                t = e_29;
              }
          }
        }
      if(((r_66 != NULL) && (r_66 != t)))
        _fail(t);
      else
        r_66 = t;
      t = term_x_25;
      if(((t_66 != NULL) && (t_66 != t)))
        _fail(t);
      else
        t_66 = t;
      t = SSL_table_destroy(not_null(t_66));
      t = not_null(r_66);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm t)
{
  ATerm t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL;
  t = parse_options_1_0(q_139, t);
  t_67 = t;
  t = term_i_29;
  w_67 = t;
  t = SSL_table_create(w_67);
  t = term_i_29;
  u_67 = t;
  t = term_j_29;
  v_67 = t;
  t = SSL_table_put(u_67, v_67, t_67);
  t = t_67;
  t = s_139(t);
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(r_139, t);
        ;
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        {
          ATerm m_29 = t;
          int n_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_139(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_29);
            }
          else
            {
              t = m_29;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm o_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(p_29);
    }
  else
    {
      t = o_29;
      {
        ATerm q_29 = t;
        int r_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(r_29);
          }
        else
          {
            t = q_29;
            {
              ATerm s_29 = t;
              int t_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(i_5, j_5, k_5, t);
                  ;
                  LocalPopChoice(t_29);
                }
              else
                {
                  t = s_29;
                  {
                    ATerm u_29 = t;
                    int v_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(v_29);
                      }
                    else
                      {
                        t = u_29;
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
ATerm h_5 (ATerm t)
{
  t = input_1_0(l_5, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm y_67 = NULL,z_67 = NULL;
  t = term_s_23;
  y_67 = t;
  t = term_x_24;
  z_67 = t;
  t = term_x_29;
  t = b_12(y_67, z_67, t);
  t = term_y_29;
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_z_29;
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = output_1_0(m_5, t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,l_9 = NULL,k_9 = NULL;
  i_68 = t;
  if(match_cons(t, sym_Specification_1))
    {
      c_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_68);
  b_68 = t;
  t = c_68;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_68 = ATgetFirst((ATermList) t);
      f_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_68);
  d_68 = t;
  t = f_68;
  t = Cons_2_0(n_5, p_5, t);
  g_68 = t;
  t = (ATerm) ATinsert(CheckATermList(g_68), e_68);
  k_9 = t;
  t = SSLsetAnnotations(k_9, d_68);
  h_68 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, h_68);
  l_9 = t;
  t = SSLsetAnnotations(l_9, b_68);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL,j_9 = NULL;
  m_68 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      k_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_68);
  j_68 = t;
  t = k_68;
  t = map_1_0(q_5, t);
  l_68 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, l_68);
  j_9 = t;
  t = SSLsetAnnotations(j_9, j_68);
  return(t);
}
ATerm p_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,i_9 = NULL;
  u_68 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      o_68 = ATgetArgument(t, 0);
      p_68 = ATgetArgument(t, 1);
      q_68 = ATgetArgument(t, 2);
      s_68 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_68);
  n_68 = t;
  t = s_68;
  t = simplify_0_0(t);
  t = alltd_1_0(r_5, t);
  t_68 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, o_68, p_68, q_68, t_68);
  i_9 = t;
  t = SSLsetAnnotations(i_9, n_68);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm v_68 = NULL,w_68 = NULL;
  w_68 = t;
  if(match_cons(t, sym_Var_1))
    {
      v_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_68);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_30 = ATgetFirst((ATermList) t);
      ATerm b_30 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(b_30) != AT_LIST) || !(ATisEmpty(b_30))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, v_68);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(g_5, default_usage_0_0, _id, h_5, t);
  return(t);
}
