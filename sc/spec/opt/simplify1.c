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
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_g_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_k_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_s_26;
ATerm term_q_26;
ATerm term_d_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_l_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
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
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_n_24;
ATerm term_k_24;
ATerm term_o_23;
ATerm term_l_23;
ATerm term_i_23;
ATerm term_b_23;
ATerm term_y_22;
ATerm term_g_22;
ATerm term_g_7;
ATerm term_w_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_m_6;
void init_constant_terms (void)
{
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_Sort_2, term_m_6, (ATerm) ATempty);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_ConstType_1, term_p_6);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
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
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym__2, term_s_25, term_u_25);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym__2, term_u_27, term_s_24);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym__2, term_x_27, term_s_24);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym__2, term_v_26, term_s_24);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_s_24);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm bottomup_1_0 (ATerm f_114 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm i_115 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm w_125 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm e_2 (ATerm r_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm genzip_4_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm);
ATerm Anno__Cong_____2_0 (ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm);
ATerm r_0 (ATerm);
ATerm u_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm w_1 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm simplify_0_0 (ATerm);
ATerm map_1_0 (ATerm g_125 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm);
ATerm m_11 (ATerm b_74, ATerm c_74, ATerm);
ATerm n_11 (ATerm p_77, ATerm q_77, ATerm);
ATerm p_11 (ATerm m_135 (ATerm), ATerm t_555, ATerm t_77, ATerm);
ATerm o_11 (ATerm l_77, ATerm m_77, ATerm);
ATerm m_2 (ATerm);
ATerm w_2 (ATerm);
ATerm output_1_0 (ATerm v_139 (ATerm), ATerm);
ATerm p_55 (ATerm j_55, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_11 (ATerm r_77, ATerm);
ATerm r_11 (ATerm d_74, ATerm e_74, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm b_57 (ATerm z_55, ATerm);
ATerm c_57 (ATerm d_56, ATerm e_56, ATerm f_56, ATerm);
ATerm d_57 (ATerm o_56, ATerm p_56, ATerm q_56, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm w_139 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm c_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm n_3 (ATerm);
ATerm q_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm a_12 (ATerm s_78, ATerm t_78, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm y_11 (ATerm f_69, ATerm g_69, ATerm e_69, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm a_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm t_11 (ATerm j_67, ATerm k_67, ATerm);
ATerm foldr_2_0 (ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm b_4 (ATerm);
ATerm f_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm w_136 (ATerm), ATerm);
ATerm i_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm j_4 (ATerm);
ATerm need_help_1_0 (ATerm m_139 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm q_125 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm w_11 (ATerm c_60, ATerm d_60, ATerm);
ATerm debug_1_0 (ATerm k_135 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm x_11 (ATerm w_70, ATerm x_70, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm p_141 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm parse_options_1_0 (ATerm o_141 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm o_139 (ATerm), ATerm p_139 (ATerm), ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm f_114 (ATerm), ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = bottomup_1_0(f_114, t);
    return(t);
  }
  t = SRTS_all(c_0, t);
  t = f_114(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm i_115 (ATerm), ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm q_0 = t;
    int q_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_115(t);
        ;
        LocalPopChoice(q_5);
      }
    else
      {
        t = q_0;
        t = SRTS_one(n_2, t);
      }
    return(t);
  }
  t = n_2(t);
  return(t);
}
ATerm at_end_1_0 (ATerm w_125 (ATerm), ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm b_1 = NULL,c_1 = NULL,d_1 = NULL;
    d_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_1 = ATgetFirst((ATermList) t);
        c_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_0 = NULL,h_1 = NULL,t_0 = NULL;
          t = SSLgetAnnotations(d_1);
          s_0 = t;
          t = c_1;
          t = g_1(t);
          h_1 = t;
          t = (ATerm) ATinsert(CheckATermList(h_1), b_1);
          t_0 = t;
          t = SSLsetAnnotations(t_0, s_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_1;
        t = w_125(t);
      }
    return(t);
  }
  t = g_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_0 = NULL,h_0 = NULL,l_0 = NULL;
  e_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_0;
    }
  else
    {
      ATerm j_0 (ATerm t)
      {
        t = not_null(l_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((h_0 != NULL) && (h_0 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            h_0 = ATgetFirst((ATermList) t);
          if(((l_0 != NULL) && (l_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(h_0);
      t = at_end_1_0(j_0, t);
    }
  return(t);
}
ATerm e_2 (ATerm r_1, ATerm t)
{
  ATerm u_1 = NULL;
  t = SSL_explode_term(r_1);
  if(match_cons(t, sym__2))
    {
      ATerm r_5 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_5) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm x_1 = NULL,z_1 = NULL,a_2 = NULL;
  if(((a_2 != NULL) && (a_2 != t)))
    _fail(t);
  else
    a_2 = t;
  if(match_cons(t, sym__2))
    {
      x_1 = ATgetArgument(t, 0);
      z_1 = ATgetArgument(t, 1);
      {
        ATerm s_5 = t;
        int t_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_0 (ATerm t)
            {
              t = not_null(z_1);
              return(t);
            }
            t = not_null(x_1);
            t = at_end_1_0(o_0, t);
            ;
            LocalPopChoice(t_5);
          }
        else
          {
            t = s_5;
            t = e_2(not_null(a_2), t);
          }
      }
    }
  else
    {
      t = e_2(not_null(a_2), t);
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL,g_4 = NULL;
  d_4 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_4 = ATgetFirst((ATermList) t);
      g_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm v_5 = t;
    int w_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_1 = NULL,s_1 = NULL,t_1 = NULL,v_1 = NULL,y_1 = NULL,l_2 = NULL,u_2 = NULL,w_0 = NULL,v_0 = NULL;
        t = SSLgetAnnotations(d_4);
        y_1 = t;
        t = e_4;
        t = n_0(t);
        l_2 = t;
        t = (ATerm) ATinsert(CheckATermList(g_4), l_2);
        v_0 = t;
        t = SSLsetAnnotations(v_0, y_1);
        u_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_1 = ATgetFirst((ATermList) t);
            t_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_2);
        q_1 = t;
        t = t_1;
        {
          ATerm x_5 = t;
          int y_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(y_5);
            }
          else
            {
              t = x_5;
            }
          v_1 = t;
          t = (ATerm) ATinsert(CheckATermList(v_1), s_1);
          w_0 = t;
          t = SSLsetAnnotations(w_0, q_1);
        }
        ;
        LocalPopChoice(w_5);
      }
    else
      {
        t = v_5;
        {
          ATerm c_4 = NULL,k_4 = NULL,x_0 = NULL;
          t = SSLgetAnnotations(d_4);
          c_4 = t;
          t = g_4;
          t = map1_1_0(n_0, t);
          k_4 = t;
          t = (ATerm) ATinsert(CheckATermList(k_4), e_4);
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
ATerm genzip_4_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm z_5 = t;
    int a_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_118(t);
        ;
        LocalPopChoice(a_6);
      }
    else
      {
        t = z_5;
        {
          ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,i_1 = NULL;
          t = r_118(t);
          t_2 = t;
          if(match_cons(t, sym__2))
            {
              p_2 = ATgetArgument(t, 0);
              q_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_2);
          o_2 = t;
          t = p_2;
          t = t_118(t);
          r_2 = t;
          t = q_2;
          t = v_2(t);
          s_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_2, s_2);
          i_1 = t;
          t = SSLsetAnnotations(i_1, o_2);
          t = s_118(t);
        }
      }
    return(t);
  }
  t = v_2(t);
  return(t);
}
ATerm Anno__Cong_____2_0 (ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,j_2 = NULL,k_2 = NULL;
  k_2 = t;
  f_2 = t;
  t = SSLgetAnnotations(k_2);
  h_2 = t;
  t = f_2;
  t = f_112(t);
  g_2 = t;
  t = h_2;
  t = g_112(t);
  j_2 = t;
  t = SSLsetAnnotations(g_2, j_2);
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm b_6 = t;
  int c_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,s_4 = NULL,b_3 = NULL;
      z_13 = t;
      if(match_cons(t, sym_Op_2))
        {
          a_14 = ATgetArgument(t, 0);
          b_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_13);
      s_4 = t;
      t = a_14;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Op_2, a_14, b_14);
      b_3 = t;
      t = SSLsetAnnotations(b_3, s_4);
      ;
      LocalPopChoice(c_6);
    }
  else
    {
      t = b_6;
      t = Anno__Cong_____2_0(u_0, y_0, t);
    }
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,d_3 = NULL;
  e_14 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_14);
  c_14 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, d_14);
  d_3 = t;
  t = SSLsetAnnotations(d_3, c_14);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
  m_14 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_14;
    }
  else
    {
      ATerm c_5 = NULL,e_3 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_14 = ATgetFirst((ATermList) t);
          o_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_14);
      c_5 = t;
      t = n_14;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      t = o_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(o_14), n_14);
      e_3 = t;
      t = SSLsetAnnotations(e_3, c_5);
    }
  return(t);
}
ATerm z_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_6 = ATgetArgument(t, 0);
      if(((ATgetType(d_6) != AT_LIST) || !(ATisEmpty(d_6))))
        _fail(t);
      {
        ATerm e_6 = ATgetArgument(t, 1);
        if(((ATgetType(e_6) != AT_LIST) || !(ATisEmpty(e_6))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm d_23 = NULL,f_23 = NULL,g_23 = NULL,j_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_6 = ATgetArgument(t, 0);
      if(((ATgetType(f_6) == AT_LIST) && !(ATisEmpty(f_6))))
        {
          d_23 = ATgetFirst((ATermList) f_6);
          f_23 = (ATerm) ATgetNext((ATermList) f_6);
        }
      else
        _fail(t);
      {
        ATerm g_6 = ATgetArgument(t, 1);
        if(((ATgetType(g_6) == AT_LIST) && !(ATisEmpty(g_6))))
          {
            g_23 = ATgetFirst((ATermList) g_6);
            j_23 = (ATerm) ATgetNext((ATermList) g_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_23, g_23), (ATerm) ATmakeAppl(sym__2, f_23, j_23));
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm k_23 = NULL,s_23 = NULL;
  if(match_cons(t, sym__2))
    {
      k_23 = ATgetArgument(t, 0);
      s_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_23), k_23);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL;
  if(match_cons(t, sym__2))
    {
      v_23 = ATgetArgument(t, 0);
      w_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, v_23), (ATerm) ATmakeAppl(sym_Match_1, w_23));
  return(t);
}
ATerm j_1 (ATerm t)
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
ATerm k_1 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_6 = ATgetArgument(t, 0);
      if(((ATgetType(j_6) == AT_LIST) && !(ATisEmpty(j_6))))
        {
          x_30 = ATgetFirst((ATermList) j_6);
          y_30 = (ATerm) ATgetNext((ATermList) j_6);
        }
      else
        _fail(t);
      {
        ATerm l_6 = ATgetArgument(t, 1);
        if(((ATgetType(l_6) == AT_LIST) && !(ATisEmpty(l_6))))
          {
            z_30 = ATgetFirst((ATermList) l_6);
            a_31 = (ATerm) ATgetNext((ATermList) l_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_30, z_30), (ATerm) ATmakeAppl(sym__2, y_30, a_31));
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm b_31 = NULL,e_31 = NULL;
  if(match_cons(t, sym__2))
    {
      b_31 = ATgetArgument(t, 0);
      e_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_31), b_31);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL;
  if(match_cons(t, sym__2))
    {
      f_31 = ATgetArgument(t, 0);
      g_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_31), (ATerm) ATmakeAppl(sym_Match_1, g_31));
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
  ATerm k_49 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_49, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_6), term_q_6));
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL;
  m_49 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      l_49 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, l_49, term_q_6);
    }
  else
    {
      t = m_49;
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm z_49 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_49, term_q_6);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL;
  b_50 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      a_50 = ATgetArgument(t, 0);
      {
        ATerm r_6 = t;
        int s_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, a_50, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_6), term_q_6));
            ;
            LocalPopChoice(s_6);
          }
        else
          {
            t = r_6;
            t = b_50;
          }
      }
    }
  else
    {
      t = b_50;
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm l_50 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      l_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, l_50, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_6), term_q_6));
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL;
  o_50 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_50 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, n_50, term_q_6);
    }
  else
    {
      t = o_50;
    }
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm o_53 (ATerm q_13, ATerm t)
    {
      t = q_13;
      {
        ATerm t_6 = t;
        if((PushChoice() == 0))
          {
            t = oncetd_1_0(r_0, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = t_6;
          }
        t = (ATerm) ATmakeAppl(sym_Build_1, q_13);
        t = bottomup_1_0(p_0, t);
      }
      return(t);
    }
    ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,v_14 = NULL,y_14 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,q_15 = NULL,s_15 = NULL,y_15 = NULL,a_16 = NULL,b_16 = NULL,f_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL;
    k_16 = t;
    if(match_cons(t, sym_Test_1))
      {
        j_16 = ATgetArgument(t, 0);
        t = j_16;
        if(match_cons(t, sym_Id_0))
          {
            ATerm u_6 = t;
            int v_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_w_6;
                t = p_0(t);
                ;
                LocalPopChoice(v_6);
              }
            else
              {
                t = u_6;
                {
                  ATerm x_6 = t;
                  int y_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,w_16 = NULL,x_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL;
                      t = k_16;
                      t = new_0_0(t);
                      m_16 = t;
                      t = bottomup_1_0(p_0, t);
                      b_17 = t;
                      t = (ATerm) ATempty;
                      t = p_0(t);
                      c_17 = t;
                      t = (ATerm) ATinsert(CheckATermList(c_17), b_17);
                      t = p_0(t);
                      n_16 = t;
                      t = m_16;
                      t = bottomup_1_0(p_0, t);
                      a_17 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, a_17);
                      t = p_0(t);
                      z_16 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, z_16);
                      t = p_0(t);
                      p_16 = t;
                      t = j_16;
                      t = bottomup_1_0(p_0, t);
                      r_16 = t;
                      t = m_16;
                      t = bottomup_1_0(p_0, t);
                      x_16 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, x_16);
                      t = p_0(t);
                      w_16 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, w_16);
                      t = p_0(t);
                      s_16 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, r_16, s_16);
                      t = p_0(t);
                      q_16 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_16, q_16);
                      t = p_0(t);
                      o_16 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, n_16, o_16);
                      t = p_0(t);
                      ;
                      LocalPopChoice(y_6);
                    }
                  else
                    {
                      t = x_6;
                      t = k_16;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm c_7 = t;
                int f_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_g_7;
                    t = p_0(t);
                    ;
                    LocalPopChoice(f_7);
                  }
                else
                  {
                    t = c_7;
                    {
                      ATerm h_7 = t;
                      int i_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,p_17 = NULL,q_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL;
                          t = k_16;
                          t = new_0_0(t);
                          i_17 = t;
                          t = bottomup_1_0(p_0, t);
                          x_17 = t;
                          t = (ATerm) ATempty;
                          t = p_0(t);
                          y_17 = t;
                          t = (ATerm) ATinsert(CheckATermList(y_17), x_17);
                          t = p_0(t);
                          j_17 = t;
                          t = i_17;
                          t = bottomup_1_0(p_0, t);
                          w_17 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, w_17);
                          t = p_0(t);
                          v_17 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, v_17);
                          t = p_0(t);
                          l_17 = t;
                          t = j_16;
                          t = bottomup_1_0(p_0, t);
                          q_17 = t;
                          t = i_17;
                          t = bottomup_1_0(p_0, t);
                          u_17 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, u_17);
                          t = p_0(t);
                          t_17 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, t_17);
                          t = p_0(t);
                          s_17 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, q_17, s_17);
                          t = p_0(t);
                          p_17 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, l_17, p_17);
                          t = p_0(t);
                          k_17 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, j_17, k_17);
                          t = p_0(t);
                          ;
                          LocalPopChoice(i_7);
                        }
                      else
                        {
                          t = h_7;
                          t = k_16;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    b_16 = ATgetArgument(t, 0);
                    {
                      ATerm j_7 = t;
                      int k_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, b_16);
                          t = p_0(t);
                          ;
                          LocalPopChoice(k_7);
                        }
                      else
                        {
                          t = j_7;
                          {
                            ATerm l_7 = t;
                            int m_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm i_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,z_18 = NULL,e_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
                                t = k_16;
                                t = new_0_0(t);
                                i_18 = t;
                                t = bottomup_1_0(p_0, t);
                                i_19 = t;
                                t = (ATerm) ATempty;
                                t = p_0(t);
                                j_19 = t;
                                t = (ATerm) ATinsert(CheckATermList(j_19), i_19);
                                t = p_0(t);
                                p_18 = t;
                                t = i_18;
                                t = bottomup_1_0(p_0, t);
                                h_19 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, h_19);
                                t = p_0(t);
                                g_19 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, g_19);
                                t = p_0(t);
                                r_18 = t;
                                t = j_16;
                                t = bottomup_1_0(p_0, t);
                                w_18 = t;
                                t = i_18;
                                t = bottomup_1_0(p_0, t);
                                e_19 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, e_19);
                                t = p_0(t);
                                z_18 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, z_18);
                                t = p_0(t);
                                x_18 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, w_18, x_18);
                                t = p_0(t);
                                v_18 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, r_18, v_18);
                                t = p_0(t);
                                q_18 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, p_18, q_18);
                                t = p_0(t);
                                ;
                                LocalPopChoice(m_7);
                              }
                            else
                              {
                                t = l_7;
                                t = k_16;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm n_7 = t;
                    int o_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_19 = NULL,n_19 = NULL,q_19 = NULL,r_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,b_20 = NULL,d_20 = NULL,e_20 = NULL;
                        t = k_16;
                        t = new_0_0(t);
                        m_19 = t;
                        t = bottomup_1_0(p_0, t);
                        d_20 = t;
                        t = (ATerm) ATempty;
                        t = p_0(t);
                        e_20 = t;
                        t = (ATerm) ATinsert(CheckATermList(e_20), d_20);
                        t = p_0(t);
                        n_19 = t;
                        t = m_19;
                        t = bottomup_1_0(p_0, t);
                        b_20 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, b_20);
                        t = p_0(t);
                        y_19 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, y_19);
                        t = p_0(t);
                        r_19 = t;
                        t = j_16;
                        t = bottomup_1_0(p_0, t);
                        u_19 = t;
                        t = m_19;
                        t = bottomup_1_0(p_0, t);
                        x_19 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, x_19);
                        t = p_0(t);
                        w_19 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, w_19);
                        t = p_0(t);
                        v_19 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, u_19, v_19);
                        t = p_0(t);
                        t_19 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, r_19, t_19);
                        t = p_0(t);
                        q_19 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, n_19, q_19);
                        t = p_0(t);
                        ;
                        LocalPopChoice(o_7);
                      }
                    else
                      {
                        t = n_7;
                        t = k_16;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            j_16 = ATgetArgument(t, 0);
            t = j_16;
            if(match_cons(t, sym_Id_0))
              {
                ATerm p_7 = t;
                int r_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_g_7;
                    t = p_0(t);
                    ;
                    LocalPopChoice(r_7);
                  }
                else
                  {
                    t = p_7;
                    t = k_16;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm s_7 = t;
                    int t_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_w_6;
                        t = p_0(t);
                        ;
                        LocalPopChoice(t_7);
                      }
                    else
                      {
                        t = s_7;
                        t = k_16;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        b_16 = ATgetArgument(t, 0);
                        {
                          ATerm u_7 = t;
                          int v_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, b_16);
                              t = p_0(t);
                              ;
                              LocalPopChoice(v_7);
                            }
                          else
                            {
                              t = u_7;
                              t = k_16;
                            }
                        }
                      }
                    else
                      {
                        t = k_16;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                j_16 = ATgetArgument(t, 0);
                i_16 = ATgetArgument(t, 1);
                t = i_16;
                if(match_cons(t, sym_Id_0))
                  {
                    t = j_16;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = i_16;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = j_16;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                b_16 = ATgetArgument(t, 0);
                                f_16 = ATgetArgument(t, 1);
                                t = j_16;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    b_16 = ATgetArgument(t, 0);
                                    f_16 = ATgetArgument(t, 1);
                                    t = j_16;
                                  }
                                else
                                  {
                                    t = j_16;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        y_15 = ATgetArgument(t, 0);
                        a_16 = ATgetArgument(t, 1);
                        t = y_15;
                        if(match_cons(t, sym_Match_1))
                          {
                            s_15 = ATgetArgument(t, 0);
                            t = s_15;
                            if(match_cons(t, sym_Op_2))
                              {
                                m_15 = ATgetArgument(t, 0);
                                b_15 = ATgetArgument(t, 1);
                                t = j_16;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = i_16;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm w_7 = t;
                                        int x_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_g_7;
                                            t = p_0(t);
                                            ;
                                            LocalPopChoice(x_7);
                                          }
                                        else
                                          {
                                            t = w_7;
                                            t = k_16;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            b_16 = ATgetArgument(t, 0);
                                            f_16 = ATgetArgument(t, 1);
                                            {
                                              ATerm z_7 = t;
                                              int a_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm s_22 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                  t = p_0(t);
                                                  s_22 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_16, s_22);
                                                  t = p_0(t);
                                                  ;
                                                  LocalPopChoice(a_8);
                                                }
                                              else
                                                {
                                                  t = z_7;
                                                  t = k_16;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                b_16 = ATgetArgument(t, 0);
                                                t = b_16;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    q_15 = ATgetArgument(t, 0);
                                                    c_15 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm c_8 = t;
                                                      int d_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, q_15, m_15);
                                                          {
                                                            ATerm e_8 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm n_5 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    n_5 = ATgetArgument(t, 0);
                                                                    if((n_5 != ATgetArgument(t, 1)))
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
                                                                t = e_8;
                                                              }
                                                            t = term_g_7;
                                                            t = bottomup_1_0(p_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(d_8);
                                                        }
                                                      else
                                                        {
                                                          t = c_8;
                                                          {
                                                            ATerm f_8 = t;
                                                            int g_8 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm c_23 = NULL;
                                                                t = m_15;
                                                                if((q_15 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, c_15, b_15);
                                                                t = genzip_4_0(z_0, a_1, e_1, f_1, t);
                                                                c_23 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, q_15, c_15)), a_16));
                                                                t = bottomup_1_0(p_0, t);
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
                                                                      ATerm z_23 = NULL;
                                                                      t = s_15;
                                                                      if((b_16 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, b_16);
                                                                      t = p_0(t);
                                                                      z_23 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_23, a_16);
                                                                      t = p_0(t);
                                                                      ;
                                                                      LocalPopChoice(i_8);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = h_8;
                                                                      t = k_16;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm k_8 = t;
                                                    int l_8 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm f_24 = NULL;
                                                        t = s_15;
                                                        if((b_16 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, b_16);
                                                        t = p_0(t);
                                                        f_24 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, f_24, a_16);
                                                        t = p_0(t);
                                                        ;
                                                        LocalPopChoice(l_8);
                                                      }
                                                    else
                                                      {
                                                        t = k_8;
                                                        t = k_16;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    b_16 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm n_8 = t;
                                                      int o_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_24 = NULL;
                                                          t = s_15;
                                                          if((b_16 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, b_16);
                                                          t = p_0(t);
                                                          j_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, a_16);
                                                          t = p_0(t);
                                                          ;
                                                          LocalPopChoice(o_8);
                                                        }
                                                      else
                                                        {
                                                          t = n_8;
                                                          t = k_16;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        b_16 = ATgetArgument(t, 0);
                                                        f_16 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm p_8 = t;
                                                          int q_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_24 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                              t = p_0(t);
                                                              u_24 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, b_16, u_24);
                                                              t = p_0(t);
                                                              ;
                                                              LocalPopChoice(q_8);
                                                            }
                                                          else
                                                            {
                                                              t = p_8;
                                                              t = k_16;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_16;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = j_16;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = i_16;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm r_8 = t;
                                        int s_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_g_7;
                                            t = p_0(t);
                                            ;
                                            LocalPopChoice(s_8);
                                          }
                                        else
                                          {
                                            t = r_8;
                                            t = k_16;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            b_16 = ATgetArgument(t, 0);
                                            f_16 = ATgetArgument(t, 1);
                                            {
                                              ATerm t_8 = t;
                                              int u_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm f_25 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                  t = p_0(t);
                                                  f_25 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_16, f_25);
                                                  t = p_0(t);
                                                  ;
                                                  LocalPopChoice(u_8);
                                                }
                                              else
                                                {
                                                  t = t_8;
                                                  t = k_16;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                b_16 = ATgetArgument(t, 0);
                                                {
                                                  ATerm v_8 = t;
                                                  int w_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm k_25 = NULL;
                                                      t = s_15;
                                                      if((b_16 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, b_16);
                                                      t = p_0(t);
                                                      k_25 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, k_25, a_16);
                                                      t = p_0(t);
                                                      ;
                                                      LocalPopChoice(w_8);
                                                    }
                                                  else
                                                    {
                                                      t = v_8;
                                                      t = k_16;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    b_16 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm x_8 = t;
                                                      int y_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm o_25 = NULL;
                                                          t = s_15;
                                                          if((b_16 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, b_16);
                                                          t = p_0(t);
                                                          o_25 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, o_25, a_16);
                                                          t = p_0(t);
                                                          ;
                                                          LocalPopChoice(y_8);
                                                        }
                                                      else
                                                        {
                                                          t = x_8;
                                                          t = k_16;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        b_16 = ATgetArgument(t, 0);
                                                        f_16 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm z_8 = t;
                                                          int a_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm t_25 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                              t = p_0(t);
                                                              t_25 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, b_16, t_25);
                                                              t = p_0(t);
                                                              ;
                                                              LocalPopChoice(a_9);
                                                            }
                                                          else
                                                            {
                                                              t = z_8;
                                                              t = k_16;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_16;
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
                                s_15 = ATgetArgument(t, 0);
                                t = s_15;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    m_15 = ATgetArgument(t, 0);
                                    t = j_16;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_16;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm c_9 = t;
                                            int d_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_g_7;
                                                t = p_0(t);
                                                ;
                                                LocalPopChoice(d_9);
                                              }
                                            else
                                              {
                                                t = c_9;
                                                t = k_16;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                b_16 = ATgetArgument(t, 0);
                                                f_16 = ATgetArgument(t, 1);
                                                {
                                                  ATerm e_9 = t;
                                                  int g_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm c_26 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                      t = p_0(t);
                                                      c_26 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_16, c_26);
                                                      t = p_0(t);
                                                      ;
                                                      LocalPopChoice(g_9);
                                                    }
                                                  else
                                                    {
                                                      t = e_9;
                                                      t = k_16;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm l_9 = t;
                                                int m_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm n_9 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(m_9);
                                                    {
                                                      ATerm o_9 = t;
                                                      int p_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm g_26 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_15);
                                                          t = p_0(t);
                                                          g_26 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_26, a_16);
                                                          t = p_0(t);
                                                          ;
                                                          LocalPopChoice(p_9);
                                                        }
                                                      else
                                                        {
                                                          t = o_9;
                                                          t = k_16;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = l_9;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        b_16 = ATgetArgument(t, 0);
                                                        t = b_16;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            q_15 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm q_9 = t;
                                                              int r_9 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm k_26 = NULL,l_26 = NULL;
                                                                  t = m_15;
                                                                  if((q_15 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, q_15);
                                                                  t = p_0(t);
                                                                  l_26 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, l_26);
                                                                  t = p_0(t);
                                                                  k_26 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, k_26, a_16);
                                                                  t = p_0(t);
                                                                  ;
                                                                  LocalPopChoice(r_9);
                                                                }
                                                              else
                                                                {
                                                                  t = q_9;
                                                                  t = k_16;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = k_16;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            b_16 = ATgetArgument(t, 0);
                                                            f_16 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm s_9 = t;
                                                              int t_9 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm r_26 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                                  t = p_0(t);
                                                                  r_26 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, b_16, r_26);
                                                                  t = p_0(t);
                                                                  ;
                                                                  LocalPopChoice(t_9);
                                                                }
                                                              else
                                                                {
                                                                  t = s_9;
                                                                  t = k_16;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = k_16;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = j_16;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_16;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm u_9 = t;
                                            int v_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_g_7;
                                                t = p_0(t);
                                                ;
                                                LocalPopChoice(v_9);
                                              }
                                            else
                                              {
                                                t = u_9;
                                                t = k_16;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                b_16 = ATgetArgument(t, 0);
                                                f_16 = ATgetArgument(t, 1);
                                                {
                                                  ATerm w_9 = t;
                                                  int x_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm j_27 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                      t = p_0(t);
                                                      j_27 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_16, j_27);
                                                      t = p_0(t);
                                                      ;
                                                      LocalPopChoice(x_9);
                                                    }
                                                  else
                                                    {
                                                      t = w_9;
                                                      t = k_16;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm y_9 = t;
                                                int z_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm a_10 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(z_9);
                                                    {
                                                      ATerm b_10 = t;
                                                      int c_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm q_27 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_15);
                                                          t = p_0(t);
                                                          q_27 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, q_27, a_16);
                                                          t = p_0(t);
                                                          ;
                                                          LocalPopChoice(c_10);
                                                        }
                                                      else
                                                        {
                                                          t = b_10;
                                                          t = k_16;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = y_9;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        b_16 = ATgetArgument(t, 0);
                                                        f_16 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm d_10 = t;
                                                          int e_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                              t = p_0(t);
                                                              z_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, b_16, z_27);
                                                              t = p_0(t);
                                                              ;
                                                              LocalPopChoice(e_10);
                                                            }
                                                          else
                                                            {
                                                              t = d_10;
                                                              t = k_16;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_16;
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
                                    s_15 = ATgetArgument(t, 0);
                                    d_15 = ATgetArgument(t, 1);
                                    k_15 = ATgetArgument(t, 2);
                                    t = j_16;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_16;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm f_10 = t;
                                            int g_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_g_7;
                                                t = p_0(t);
                                                ;
                                                LocalPopChoice(g_10);
                                              }
                                            else
                                              {
                                                t = f_10;
                                                t = k_16;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                b_16 = ATgetArgument(t, 0);
                                                f_16 = ATgetArgument(t, 1);
                                                {
                                                  ATerm h_10 = t;
                                                  int i_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm r_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                      t = p_0(t);
                                                      r_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_16, r_28);
                                                      t = p_0(t);
                                                      ;
                                                      LocalPopChoice(i_10);
                                                    }
                                                  else
                                                    {
                                                      t = h_10;
                                                      t = k_16;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm j_10 = t;
                                                int k_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm l_10 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(k_10);
                                                    {
                                                      ATerm m_10 = t;
                                                      int n_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm y_28 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, s_15, d_15, k_15);
                                                          t = p_0(t);
                                                          y_28 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_28, a_16);
                                                          t = p_0(t);
                                                          ;
                                                          LocalPopChoice(n_10);
                                                        }
                                                      else
                                                        {
                                                          t = m_10;
                                                          t = k_16;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = j_10;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        b_16 = ATgetArgument(t, 0);
                                                        f_16 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm o_10 = t;
                                                          int p_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                              t = p_0(t);
                                                              g_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, b_16, g_29);
                                                              t = p_0(t);
                                                              ;
                                                              LocalPopChoice(p_10);
                                                            }
                                                          else
                                                            {
                                                              t = o_10;
                                                              t = k_16;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_16;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = j_16;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_16;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm q_10 = t;
                                            int r_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_g_7;
                                                t = p_0(t);
                                                ;
                                                LocalPopChoice(r_10);
                                              }
                                            else
                                              {
                                                t = q_10;
                                                t = k_16;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                b_16 = ATgetArgument(t, 0);
                                                f_16 = ATgetArgument(t, 1);
                                                {
                                                  ATerm s_10 = t;
                                                  int t_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm v_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                      t = p_0(t);
                                                      v_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_16, v_29);
                                                      t = p_0(t);
                                                      ;
                                                      LocalPopChoice(t_10);
                                                    }
                                                  else
                                                    {
                                                      t = s_10;
                                                      t = k_16;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    b_16 = ATgetArgument(t, 0);
                                                    f_16 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm u_10 = t;
                                                      int v_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm c_30 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                          t = p_0(t);
                                                          c_30 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, b_16, c_30);
                                                          t = p_0(t);
                                                          ;
                                                          LocalPopChoice(v_10);
                                                        }
                                                      else
                                                        {
                                                          t = u_10;
                                                          t = k_16;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = k_16;
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
                            y_15 = ATgetArgument(t, 0);
                            t = y_15;
                            if(match_cons(t, sym_Op_2))
                              {
                                s_15 = ATgetArgument(t, 0);
                                d_15 = ATgetArgument(t, 1);
                                t = j_16;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = i_16;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm w_10 = t;
                                        int x_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_g_7;
                                            t = p_0(t);
                                            ;
                                            LocalPopChoice(x_10);
                                          }
                                        else
                                          {
                                            t = w_10;
                                            t = k_16;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            b_16 = ATgetArgument(t, 0);
                                            f_16 = ATgetArgument(t, 1);
                                            {
                                              ATerm y_10 = t;
                                              int z_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm r_30 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                  t = p_0(t);
                                                  r_30 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_16, r_30);
                                                  t = p_0(t);
                                                  ;
                                                  LocalPopChoice(z_10);
                                                }
                                              else
                                                {
                                                  t = y_10;
                                                  t = k_16;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                b_16 = ATgetArgument(t, 0);
                                                t = b_16;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    q_15 = ATgetArgument(t, 0);
                                                    c_15 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm a_11 = t;
                                                      int b_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, q_15, s_15);
                                                          {
                                                            ATerm c_11 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm u_5 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    u_5 = ATgetArgument(t, 0);
                                                                    if((u_5 != ATgetArgument(t, 1)))
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
                                                                t = c_11;
                                                              }
                                                            t = term_g_7;
                                                            t = bottomup_1_0(p_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(b_11);
                                                        }
                                                      else
                                                        {
                                                          t = a_11;
                                                          {
                                                            ATerm d_11 = t;
                                                            int e_11 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm w_30 = NULL;
                                                                t = s_15;
                                                                if((q_15 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, c_15, d_15);
                                                                t = genzip_4_0(j_1, k_1, l_1, m_1, t);
                                                                w_30 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_30), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, q_15, c_15)));
                                                                t = bottomup_1_0(p_0, t);
                                                                ;
                                                                LocalPopChoice(e_11);
                                                              }
                                                            else
                                                              {
                                                                t = d_11;
                                                                {
                                                                  ATerm f_11 = t;
                                                                  int g_11 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = y_15;
                                                                      if((b_16 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, b_16);
                                                                      t = p_0(t);
                                                                      ;
                                                                      LocalPopChoice(g_11);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = f_11;
                                                                      t = k_16;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm h_11 = t;
                                                    int i_11 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = y_15;
                                                        if((b_16 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, b_16);
                                                        t = p_0(t);
                                                        ;
                                                        LocalPopChoice(i_11);
                                                      }
                                                    else
                                                      {
                                                        t = h_11;
                                                        t = k_16;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    b_16 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm j_11 = t;
                                                      int k_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = y_15;
                                                          if((b_16 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, b_16);
                                                          t = p_0(t);
                                                          ;
                                                          LocalPopChoice(k_11);
                                                        }
                                                      else
                                                        {
                                                          t = j_11;
                                                          t = k_16;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        b_16 = ATgetArgument(t, 0);
                                                        f_16 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm l_11 = t;
                                                          int s_11 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                              t = p_0(t);
                                                              q_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, b_16, q_31);
                                                              t = p_0(t);
                                                              ;
                                                              LocalPopChoice(s_11);
                                                            }
                                                          else
                                                            {
                                                              t = l_11;
                                                              t = k_16;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_16;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = j_16;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = i_16;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm u_11 = t;
                                        int v_11 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_g_7;
                                            t = p_0(t);
                                            ;
                                            LocalPopChoice(v_11);
                                          }
                                        else
                                          {
                                            t = u_11;
                                            t = k_16;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            b_16 = ATgetArgument(t, 0);
                                            f_16 = ATgetArgument(t, 1);
                                            {
                                              ATerm z_11 = t;
                                              int b_12 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm a_32 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                  t = p_0(t);
                                                  a_32 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_16, a_32);
                                                  t = p_0(t);
                                                  ;
                                                  LocalPopChoice(b_12);
                                                }
                                              else
                                                {
                                                  t = z_11;
                                                  t = k_16;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                b_16 = ATgetArgument(t, 0);
                                                {
                                                  ATerm c_12 = t;
                                                  int d_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = y_15;
                                                      if((b_16 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, b_16);
                                                      t = p_0(t);
                                                      ;
                                                      LocalPopChoice(d_12);
                                                    }
                                                  else
                                                    {
                                                      t = c_12;
                                                      t = k_16;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    b_16 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm e_12 = t;
                                                      int f_12 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = y_15;
                                                          if((b_16 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, b_16);
                                                          t = p_0(t);
                                                          ;
                                                          LocalPopChoice(f_12);
                                                        }
                                                      else
                                                        {
                                                          t = e_12;
                                                          t = k_16;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        b_16 = ATgetArgument(t, 0);
                                                        f_16 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm g_12 = t;
                                                          int h_12 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                              t = p_0(t);
                                                              n_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, b_16, n_32);
                                                              t = p_0(t);
                                                              ;
                                                              LocalPopChoice(h_12);
                                                            }
                                                          else
                                                            {
                                                              t = g_12;
                                                              t = k_16;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_16;
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
                                    s_15 = ATgetArgument(t, 0);
                                    t = j_16;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_16;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm i_12 = t;
                                            int j_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_g_7;
                                                t = p_0(t);
                                                ;
                                                LocalPopChoice(j_12);
                                              }
                                            else
                                              {
                                                t = i_12;
                                                t = k_16;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                b_16 = ATgetArgument(t, 0);
                                                f_16 = ATgetArgument(t, 1);
                                                {
                                                  ATerm k_12 = t;
                                                  int l_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm z_32 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                      t = p_0(t);
                                                      z_32 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_16, z_32);
                                                      t = p_0(t);
                                                      ;
                                                      LocalPopChoice(l_12);
                                                    }
                                                  else
                                                    {
                                                      t = k_12;
                                                      t = k_16;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm m_12 = t;
                                                int n_12 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm o_12 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(n_12);
                                                    {
                                                      ATerm p_12 = t;
                                                      int q_12 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, y_15);
                                                          t = p_0(t);
                                                          ;
                                                          LocalPopChoice(q_12);
                                                        }
                                                      else
                                                        {
                                                          t = p_12;
                                                          t = k_16;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = m_12;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        b_16 = ATgetArgument(t, 0);
                                                        t = b_16;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            q_15 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm r_12 = t;
                                                              int s_12 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm l_33 = NULL;
                                                                  t = s_15;
                                                                  if((q_15 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, q_15);
                                                                  t = p_0(t);
                                                                  l_33 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, l_33);
                                                                  t = p_0(t);
                                                                  ;
                                                                  LocalPopChoice(s_12);
                                                                }
                                                              else
                                                                {
                                                                  t = r_12;
                                                                  t = k_16;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = k_16;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            b_16 = ATgetArgument(t, 0);
                                                            f_16 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm t_12 = t;
                                                              int u_12 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm s_33 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                                  t = p_0(t);
                                                                  s_33 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, b_16, s_33);
                                                                  t = p_0(t);
                                                                  ;
                                                                  LocalPopChoice(u_12);
                                                                }
                                                              else
                                                                {
                                                                  t = t_12;
                                                                  t = k_16;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = k_16;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = j_16;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_16;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm v_12 = t;
                                            int w_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_g_7;
                                                t = p_0(t);
                                                ;
                                                LocalPopChoice(w_12);
                                              }
                                            else
                                              {
                                                t = v_12;
                                                t = k_16;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                b_16 = ATgetArgument(t, 0);
                                                f_16 = ATgetArgument(t, 1);
                                                {
                                                  ATerm x_12 = t;
                                                  int y_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_34 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                      t = p_0(t);
                                                      e_34 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_16, e_34);
                                                      t = p_0(t);
                                                      ;
                                                      LocalPopChoice(y_12);
                                                    }
                                                  else
                                                    {
                                                      t = x_12;
                                                      t = k_16;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm z_12 = t;
                                                int a_13 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm b_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(a_13);
                                                    {
                                                      ATerm c_13 = t;
                                                      int d_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, y_15);
                                                          t = p_0(t);
                                                          ;
                                                          LocalPopChoice(d_13);
                                                        }
                                                      else
                                                        {
                                                          t = c_13;
                                                          t = k_16;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = z_12;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        b_16 = ATgetArgument(t, 0);
                                                        f_16 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm e_13 = t;
                                                          int f_13 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm m_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                              t = p_0(t);
                                                              m_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, b_16, m_34);
                                                              t = p_0(t);
                                                              ;
                                                              LocalPopChoice(f_13);
                                                            }
                                                          else
                                                            {
                                                              t = e_13;
                                                              t = k_16;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_16;
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
                                    a_16 = ATgetArgument(t, 1);
                                    l_15 = ATgetArgument(t, 2);
                                    t = j_16;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_16;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm g_13 = t;
                                            int h_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_g_7;
                                                t = p_0(t);
                                                ;
                                                LocalPopChoice(h_13);
                                              }
                                            else
                                              {
                                                t = g_13;
                                                t = k_16;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                b_16 = ATgetArgument(t, 0);
                                                f_16 = ATgetArgument(t, 1);
                                                {
                                                  ATerm i_13 = t;
                                                  int j_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm c_35 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                      t = p_0(t);
                                                      c_35 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_16, c_35);
                                                      t = p_0(t);
                                                      ;
                                                      LocalPopChoice(j_13);
                                                    }
                                                  else
                                                    {
                                                      t = i_13;
                                                      t = k_16;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm k_13 = t;
                                                int l_13 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm m_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(l_13);
                                                    {
                                                      ATerm n_13 = t;
                                                      int o_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, y_15, a_16, l_15);
                                                          t = p_0(t);
                                                          ;
                                                          LocalPopChoice(o_13);
                                                        }
                                                      else
                                                        {
                                                          t = n_13;
                                                          t = k_16;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = k_13;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        b_16 = ATgetArgument(t, 0);
                                                        f_16 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm p_13 = t;
                                                          int r_13 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm t_35 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                              t = p_0(t);
                                                              t_35 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, b_16, t_35);
                                                              t = p_0(t);
                                                              ;
                                                              LocalPopChoice(r_13);
                                                            }
                                                          else
                                                            {
                                                              t = p_13;
                                                              t = k_16;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_16;
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
                                        y_15 = ATgetArgument(t, 0);
                                        a_16 = ATgetArgument(t, 1);
                                        t = j_16;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = i_16;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm s_13 = t;
                                                int t_13 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_g_7;
                                                    t = p_0(t);
                                                    ;
                                                    LocalPopChoice(t_13);
                                                  }
                                                else
                                                  {
                                                    t = s_13;
                                                    {
                                                      ATerm u_13 = t;
                                                      int v_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm l_36 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_16, a_16);
                                                          t = p_0(t);
                                                          l_36 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, y_15, l_36);
                                                          t = p_0(t);
                                                          ;
                                                          LocalPopChoice(v_13);
                                                        }
                                                      else
                                                        {
                                                          t = u_13;
                                                          t = k_16;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    b_16 = ATgetArgument(t, 0);
                                                    f_16 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm w_13 = t;
                                                      int x_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm q_36 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                          t = p_0(t);
                                                          q_36 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_16, q_36);
                                                          t = p_0(t);
                                                          ;
                                                          LocalPopChoice(x_13);
                                                        }
                                                      else
                                                        {
                                                          t = w_13;
                                                          {
                                                            ATerm y_13 = t;
                                                            int f_14 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm u_36 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, j_16, a_16);
                                                                t = p_0(t);
                                                                u_36 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, y_15, u_36);
                                                                t = p_0(t);
                                                                ;
                                                                LocalPopChoice(f_14);
                                                              }
                                                            else
                                                              {
                                                                t = y_13;
                                                                t = k_16;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        b_16 = ATgetArgument(t, 0);
                                                        f_16 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm g_14 = t;
                                                          int h_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_36 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, j_16, a_16);
                                                              t = p_0(t);
                                                              z_36 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, y_15, z_36);
                                                              t = p_0(t);
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
                                                                    ATerm d_37 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                                    t = p_0(t);
                                                                    d_37 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, b_16, d_37);
                                                                    t = p_0(t);
                                                                    ;
                                                                    LocalPopChoice(j_14);
                                                                  }
                                                                else
                                                                  {
                                                                    t = i_14;
                                                                    t = k_16;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm k_14 = t;
                                                        int l_14 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm i_37 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, j_16, a_16);
                                                            t = p_0(t);
                                                            i_37 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, y_15, i_37);
                                                            t = p_0(t);
                                                            ;
                                                            LocalPopChoice(l_14);
                                                          }
                                                        else
                                                          {
                                                            t = k_14;
                                                            t = k_16;
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
                                            y_15 = ATgetArgument(t, 0);
                                            a_16 = ATgetArgument(t, 1);
                                            t = j_16;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = i_16;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm u_14 = t;
                                                    int w_14 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_g_7;
                                                        t = p_0(t);
                                                        ;
                                                        LocalPopChoice(w_14);
                                                      }
                                                    else
                                                      {
                                                        t = u_14;
                                                        {
                                                          ATerm x_14 = t;
                                                          int z_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_37 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, j_16, a_16);
                                                              t = p_0(t);
                                                              v_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, y_15, v_37);
                                                              t = p_0(t);
                                                              ;
                                                              LocalPopChoice(z_14);
                                                            }
                                                          else
                                                            {
                                                              t = x_14;
                                                              t = k_16;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        b_16 = ATgetArgument(t, 0);
                                                        f_16 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_15 = t;
                                                          int e_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_38 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                              t = p_0(t);
                                                              a_38 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_16, a_38);
                                                              t = p_0(t);
                                                              ;
                                                              LocalPopChoice(e_15);
                                                            }
                                                          else
                                                            {
                                                              t = a_15;
                                                              {
                                                                ATerm f_15 = t;
                                                                int g_15 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm e_38 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, j_16, a_16);
                                                                    t = p_0(t);
                                                                    e_38 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, y_15, e_38);
                                                                    t = p_0(t);
                                                                    ;
                                                                    LocalPopChoice(g_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = f_15;
                                                                    t = k_16;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            b_16 = ATgetArgument(t, 0);
                                                            f_16 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm h_15 = t;
                                                              int i_15 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm j_38 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, j_16, a_16);
                                                                  t = p_0(t);
                                                                  j_38 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, y_15, j_38);
                                                                  t = p_0(t);
                                                                  ;
                                                                  LocalPopChoice(i_15);
                                                                }
                                                              else
                                                                {
                                                                  t = h_15;
                                                                  {
                                                                    ATerm j_15 = t;
                                                                    int n_15 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm n_38 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                                        t = p_0(t);
                                                                        n_38 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, b_16, n_38);
                                                                        t = p_0(t);
                                                                        ;
                                                                        LocalPopChoice(n_15);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = j_15;
                                                                        t = k_16;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm o_15 = t;
                                                            int p_15 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm s_38 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, j_16, a_16);
                                                                t = p_0(t);
                                                                s_38 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, y_15, s_38);
                                                                t = p_0(t);
                                                                ;
                                                                LocalPopChoice(p_15);
                                                              }
                                                            else
                                                              {
                                                                t = o_15;
                                                                t = k_16;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = j_16;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = i_16;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm r_15 = t;
                                                    int t_15 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_g_7;
                                                        t = p_0(t);
                                                        ;
                                                        LocalPopChoice(t_15);
                                                      }
                                                    else
                                                      {
                                                        t = r_15;
                                                        t = k_16;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        b_16 = ATgetArgument(t, 0);
                                                        f_16 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm u_15 = t;
                                                          int v_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_39 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                              t = p_0(t);
                                                              a_39 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_16, a_39);
                                                              t = p_0(t);
                                                              ;
                                                              LocalPopChoice(v_15);
                                                            }
                                                          else
                                                            {
                                                              t = u_15;
                                                              t = k_16;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            b_16 = ATgetArgument(t, 0);
                                                            f_16 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm w_15 = t;
                                                              int x_15 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm f_39 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, i_16);
                                                                  t = p_0(t);
                                                                  f_39 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, b_16, f_39);
                                                                  t = p_0(t);
                                                                  ;
                                                                  LocalPopChoice(x_15);
                                                                }
                                                              else
                                                                {
                                                                  t = w_15;
                                                                  t = k_16;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = k_16;
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
                    j_16 = ATgetArgument(t, 0);
                    i_16 = ATgetArgument(t, 1);
                    t = i_16;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = j_16;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm z_15 = t;
                            int c_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_w_6;
                                t = p_0(t);
                                ;
                                LocalPopChoice(c_16);
                              }
                            else
                              {
                                t = z_15;
                                t = j_16;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = i_16;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    b_16 = ATgetArgument(t, 0);
                                    f_16 = ATgetArgument(t, 1);
                                    t = j_16;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        b_16 = ATgetArgument(t, 0);
                                        t = j_16;
                                      }
                                    else
                                      {
                                        t = j_16;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = j_16;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm d_16 = t;
                            int e_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_w_6;
                                t = p_0(t);
                                ;
                                LocalPopChoice(e_16);
                              }
                            else
                              {
                                t = d_16;
                                {
                                  ATerm g_16 = t;
                                  int h_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = i_16;
                                      if((j_16 != t))
                                        {
                                          _fail(t);
                                        }
                                      ;
                                      LocalPopChoice(h_16);
                                    }
                                  else
                                    {
                                      t = g_16;
                                      t = k_16;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = i_16;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    b_16 = ATgetArgument(t, 0);
                                    f_16 = ATgetArgument(t, 1);
                                    {
                                      ATerm l_16 = t;
                                      int t_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm o_40 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, f_16, i_16);
                                          t = p_0(t);
                                          o_40 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, b_16, o_40);
                                          t = p_0(t);
                                          ;
                                          LocalPopChoice(t_16);
                                        }
                                      else
                                        {
                                          t = l_16;
                                          {
                                            ATerm u_16 = t;
                                            int v_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = i_16;
                                                if((j_16 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                ;
                                                LocalPopChoice(v_16);
                                              }
                                            else
                                              {
                                                t = u_16;
                                                t = k_16;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        b_16 = ATgetArgument(t, 0);
                                        {
                                          ATerm y_16 = t;
                                          int d_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = i_16;
                                              if((j_16 != t))
                                                {
                                                  _fail(t);
                                                }
                                              ;
                                              LocalPopChoice(d_17);
                                            }
                                          else
                                            {
                                              t = y_16;
                                              {
                                                ATerm e_17 = t;
                                                int f_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = o_53(b_16, t);
                                                    ;
                                                    LocalPopChoice(f_17);
                                                  }
                                                else
                                                  {
                                                    t = e_17;
                                                    t = k_16;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm g_17 = t;
                                        int h_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = i_16;
                                            if((j_16 != t))
                                              {
                                                _fail(t);
                                              }
                                            ;
                                            LocalPopChoice(h_17);
                                          }
                                        else
                                          {
                                            t = g_17;
                                            t = k_16;
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
                        j_16 = ATgetArgument(t, 0);
                        i_16 = ATgetArgument(t, 1);
                        t = i_16;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = j_16;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm m_17 = t;
                                int n_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_w_6;
                                    t = p_0(t);
                                    ;
                                    LocalPopChoice(n_17);
                                  }
                                else
                                  {
                                    t = m_17;
                                    t = i_16;
                                  }
                              }
                            else
                              {
                                ATerm o_17 = t;
                                int r_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_w_6;
                                    t = p_0(t);
                                    ;
                                    LocalPopChoice(r_17);
                                  }
                                else
                                  {
                                    t = o_17;
                                    t = k_16;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = j_16;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm z_17 = t;
                                    int a_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_g_7;
                                        t = p_0(t);
                                        ;
                                        LocalPopChoice(a_18);
                                      }
                                    else
                                      {
                                        t = z_17;
                                        t = i_16;
                                      }
                                  }
                                else
                                  {
                                    ATerm b_18 = t;
                                    int c_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_g_7;
                                        t = p_0(t);
                                        ;
                                        LocalPopChoice(c_18);
                                      }
                                    else
                                      {
                                        t = b_18;
                                        t = k_16;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    y_15 = ATgetArgument(t, 0);
                                    a_16 = ATgetArgument(t, 1);
                                    t = j_16;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = i_16;
                                      }
                                    else
                                      {
                                        ATerm d_18 = t;
                                        int e_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm k_41 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, j_16, y_15);
                                            t = conc_0_0(t);
                                            k_41 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, k_41, a_16);
                                            t = bottomup_1_0(p_0, t);
                                            ;
                                            LocalPopChoice(e_18);
                                          }
                                        else
                                          {
                                            t = d_18;
                                            t = k_16;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = j_16;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = i_16;
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
                        ATerm f_18 = t;
                        int g_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm h_18 = ATgetArgument(t, 0);
                                i_16 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(g_18);
                            t = i_16;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm j_18 = t;
                                int k_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_w_6;
                                    t = p_0(t);
                                    ;
                                    LocalPopChoice(k_18);
                                  }
                                else
                                  {
                                    t = j_18;
                                    t = k_16;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm l_18 = t;
                                    int m_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_g_7;
                                        t = p_0(t);
                                        ;
                                        LocalPopChoice(m_18);
                                      }
                                    else
                                      {
                                        t = l_18;
                                        t = k_16;
                                      }
                                  }
                                else
                                  {
                                    t = k_16;
                                  }
                              }
                          }
                        else
                          {
                            t = f_18;
                            if(match_cons(t, sym_All_1))
                              {
                                j_16 = ATgetArgument(t, 0);
                                t = j_16;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm n_18 = t;
                                    int o_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_w_6;
                                        t = p_0(t);
                                        ;
                                        LocalPopChoice(o_18);
                                      }
                                    else
                                      {
                                        t = n_18;
                                        t = k_16;
                                      }
                                  }
                                else
                                  {
                                    t = k_16;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    j_16 = ATgetArgument(t, 0);
                                    t = j_16;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm s_18 = t;
                                        int t_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_w_6;
                                            t = p_0(t);
                                            ;
                                            LocalPopChoice(t_18);
                                          }
                                        else
                                          {
                                            t = s_18;
                                            {
                                              ATerm u_18 = t;
                                              int y_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL;
                                                  t = k_16;
                                                  t = new_0_0(t);
                                                  v_41 = t;
                                                  t = bottomup_1_0(p_0, t);
                                                  g_42 = t;
                                                  t = (ATerm) ATempty;
                                                  t = p_0(t);
                                                  h_42 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(h_42), g_42);
                                                  t = p_0(t);
                                                  w_41 = t;
                                                  t = v_41;
                                                  t = bottomup_1_0(p_0, t);
                                                  f_42 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, f_42);
                                                  t = p_0(t);
                                                  e_42 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, e_42);
                                                  t = p_0(t);
                                                  y_41 = t;
                                                  t = j_16;
                                                  t = bottomup_1_0(p_0, t);
                                                  a_42 = t;
                                                  t = v_41;
                                                  t = bottomup_1_0(p_0, t);
                                                  d_42 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, d_42);
                                                  t = p_0(t);
                                                  c_42 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, c_42);
                                                  t = p_0(t);
                                                  b_42 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_42, b_42);
                                                  t = p_0(t);
                                                  z_41 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_41, z_41);
                                                  t = p_0(t);
                                                  x_41 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_41, x_41);
                                                  t = p_0(t);
                                                  ;
                                                  LocalPopChoice(y_18);
                                                }
                                              else
                                                {
                                                  t = u_18;
                                                  t = k_16;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm a_19 = t;
                                            int b_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_g_7;
                                                t = p_0(t);
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
                                                      ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL;
                                                      t = k_16;
                                                      t = new_0_0(t);
                                                      k_42 = t;
                                                      t = bottomup_1_0(p_0, t);
                                                      v_42 = t;
                                                      t = (ATerm) ATempty;
                                                      t = p_0(t);
                                                      w_42 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(w_42), v_42);
                                                      t = p_0(t);
                                                      l_42 = t;
                                                      t = k_42;
                                                      t = bottomup_1_0(p_0, t);
                                                      u_42 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, u_42);
                                                      t = p_0(t);
                                                      t_42 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, t_42);
                                                      t = p_0(t);
                                                      n_42 = t;
                                                      t = j_16;
                                                      t = bottomup_1_0(p_0, t);
                                                      p_42 = t;
                                                      t = k_42;
                                                      t = bottomup_1_0(p_0, t);
                                                      s_42 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, s_42);
                                                      t = p_0(t);
                                                      r_42 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, r_42);
                                                      t = p_0(t);
                                                      q_42 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_42, q_42);
                                                      t = p_0(t);
                                                      o_42 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_42, o_42);
                                                      t = p_0(t);
                                                      m_42 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, l_42, m_42);
                                                      t = p_0(t);
                                                      ;
                                                      LocalPopChoice(d_19);
                                                    }
                                                  else
                                                    {
                                                      t = c_19;
                                                      t = k_16;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                b_16 = ATgetArgument(t, 0);
                                                f_16 = ATgetArgument(t, 1);
                                                t = f_16;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    r_14 = ATgetArgument(t, 0);
                                                    t_14 = ATgetArgument(t, 1);
                                                    t = r_14;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        s_14 = ATgetArgument(t, 0);
                                                        t = b_16;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            q_15 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm f_19 = t;
                                                              int k_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, s_14);
                                                                  t = p_0(t);
                                                                  d_43 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, d_43, t_14);
                                                                  t = p_0(t);
                                                                  c_43 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_15, c_43);
                                                                  t = p_0(t);
                                                                  b_43 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, b_43);
                                                                  t = p_0(t);
                                                                  ;
                                                                  LocalPopChoice(k_19);
                                                                }
                                                              else
                                                                {
                                                                  t = f_19;
                                                                  {
                                                                    ATerm l_19 = t;
                                                                    int o_19 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL;
                                                                        t = k_16;
                                                                        t = new_0_0(t);
                                                                        f_43 = t;
                                                                        t = bottomup_1_0(p_0, t);
                                                                        q_43 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = p_0(t);
                                                                        r_43 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(r_43), q_43);
                                                                        t = p_0(t);
                                                                        g_43 = t;
                                                                        t = f_43;
                                                                        t = bottomup_1_0(p_0, t);
                                                                        p_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, p_43);
                                                                        t = p_0(t);
                                                                        o_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, o_43);
                                                                        t = p_0(t);
                                                                        i_43 = t;
                                                                        t = j_16;
                                                                        t = bottomup_1_0(p_0, t);
                                                                        k_43 = t;
                                                                        t = f_43;
                                                                        t = bottomup_1_0(p_0, t);
                                                                        n_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, n_43);
                                                                        t = p_0(t);
                                                                        m_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, m_43);
                                                                        t = p_0(t);
                                                                        l_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, k_43, l_43);
                                                                        t = p_0(t);
                                                                        j_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, i_43, j_43);
                                                                        t = p_0(t);
                                                                        h_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, g_43, h_43);
                                                                        t = p_0(t);
                                                                        ;
                                                                        LocalPopChoice(o_19);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = l_19;
                                                                        t = k_16;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm p_19 = t;
                                                            int s_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL;
                                                                t = k_16;
                                                                t = new_0_0(t);
                                                                u_43 = t;
                                                                t = bottomup_1_0(p_0, t);
                                                                f_44 = t;
                                                                t = (ATerm) ATempty;
                                                                t = p_0(t);
                                                                g_44 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(g_44), f_44);
                                                                t = p_0(t);
                                                                v_43 = t;
                                                                t = u_43;
                                                                t = bottomup_1_0(p_0, t);
                                                                e_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, e_44);
                                                                t = p_0(t);
                                                                d_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, d_44);
                                                                t = p_0(t);
                                                                x_43 = t;
                                                                t = j_16;
                                                                t = bottomup_1_0(p_0, t);
                                                                z_43 = t;
                                                                t = u_43;
                                                                t = bottomup_1_0(p_0, t);
                                                                c_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, c_44);
                                                                t = p_0(t);
                                                                b_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, b_44);
                                                                t = p_0(t);
                                                                a_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, z_43, a_44);
                                                                t = p_0(t);
                                                                y_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, x_43, y_43);
                                                                t = p_0(t);
                                                                w_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, v_43, w_43);
                                                                t = p_0(t);
                                                                ;
                                                                LocalPopChoice(s_19);
                                                              }
                                                            else
                                                              {
                                                                t = p_19;
                                                                t = k_16;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = b_16;
                                                        {
                                                          ATerm z_19 = t;
                                                          int a_20 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL;
                                                              t = k_16;
                                                              t = new_0_0(t);
                                                              j_44 = t;
                                                              t = bottomup_1_0(p_0, t);
                                                              u_44 = t;
                                                              t = (ATerm) ATempty;
                                                              t = p_0(t);
                                                              v_44 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(v_44), u_44);
                                                              t = p_0(t);
                                                              k_44 = t;
                                                              t = j_44;
                                                              t = bottomup_1_0(p_0, t);
                                                              t_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, t_44);
                                                              t = p_0(t);
                                                              s_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, s_44);
                                                              t = p_0(t);
                                                              m_44 = t;
                                                              t = j_16;
                                                              t = bottomup_1_0(p_0, t);
                                                              o_44 = t;
                                                              t = j_44;
                                                              t = bottomup_1_0(p_0, t);
                                                              r_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, r_44);
                                                              t = p_0(t);
                                                              q_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, q_44);
                                                              t = p_0(t);
                                                              p_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, o_44, p_44);
                                                              t = p_0(t);
                                                              n_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_44, n_44);
                                                              t = p_0(t);
                                                              l_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, k_44, l_44);
                                                              t = p_0(t);
                                                              ;
                                                              LocalPopChoice(a_20);
                                                            }
                                                          else
                                                            {
                                                              t = z_19;
                                                              t = k_16;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = b_16;
                                                    {
                                                      ATerm c_20 = t;
                                                      int f_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,e_45 = NULL,f_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL;
                                                          t = k_16;
                                                          t = new_0_0(t);
                                                          y_44 = t;
                                                          t = bottomup_1_0(p_0, t);
                                                          l_45 = t;
                                                          t = (ATerm) ATempty;
                                                          t = p_0(t);
                                                          m_45 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(m_45), l_45);
                                                          t = p_0(t);
                                                          z_44 = t;
                                                          t = y_44;
                                                          t = bottomup_1_0(p_0, t);
                                                          k_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, k_45);
                                                          t = p_0(t);
                                                          j_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, j_45);
                                                          t = p_0(t);
                                                          b_45 = t;
                                                          t = j_16;
                                                          t = bottomup_1_0(p_0, t);
                                                          e_45 = t;
                                                          t = y_44;
                                                          t = bottomup_1_0(p_0, t);
                                                          i_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, i_45);
                                                          t = p_0(t);
                                                          h_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, h_45);
                                                          t = p_0(t);
                                                          f_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_45, f_45);
                                                          t = p_0(t);
                                                          c_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_45, c_45);
                                                          t = p_0(t);
                                                          a_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, z_44, a_45);
                                                          t = p_0(t);
                                                          ;
                                                          LocalPopChoice(f_20);
                                                        }
                                                      else
                                                        {
                                                          t = c_20;
                                                          t = k_16;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    b_16 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm g_20 = t;
                                                      int h_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, b_16);
                                                          t = p_0(t);
                                                          ;
                                                          LocalPopChoice(h_20);
                                                        }
                                                      else
                                                        {
                                                          t = g_20;
                                                          {
                                                            ATerm i_20 = t;
                                                            int j_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL;
                                                                t = k_16;
                                                                t = new_0_0(t);
                                                                q_45 = t;
                                                                t = bottomup_1_0(p_0, t);
                                                                b_46 = t;
                                                                t = (ATerm) ATempty;
                                                                t = p_0(t);
                                                                c_46 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(c_46), b_46);
                                                                t = p_0(t);
                                                                r_45 = t;
                                                                t = q_45;
                                                                t = bottomup_1_0(p_0, t);
                                                                a_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, a_46);
                                                                t = p_0(t);
                                                                z_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, z_45);
                                                                t = p_0(t);
                                                                t_45 = t;
                                                                t = j_16;
                                                                t = bottomup_1_0(p_0, t);
                                                                v_45 = t;
                                                                t = q_45;
                                                                t = bottomup_1_0(p_0, t);
                                                                y_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, y_45);
                                                                t = p_0(t);
                                                                x_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, x_45);
                                                                t = p_0(t);
                                                                w_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, v_45, w_45);
                                                                t = p_0(t);
                                                                u_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, t_45, u_45);
                                                                t = p_0(t);
                                                                s_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, r_45, s_45);
                                                                t = p_0(t);
                                                                ;
                                                                LocalPopChoice(j_20);
                                                              }
                                                            else
                                                              {
                                                                t = i_20;
                                                                t = k_16;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm k_20 = t;
                                                    int l_20 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL;
                                                        t = k_16;
                                                        t = new_0_0(t);
                                                        f_46 = t;
                                                        t = bottomup_1_0(p_0, t);
                                                        q_46 = t;
                                                        t = (ATerm) ATempty;
                                                        t = p_0(t);
                                                        r_46 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(r_46), q_46);
                                                        t = p_0(t);
                                                        g_46 = t;
                                                        t = f_46;
                                                        t = bottomup_1_0(p_0, t);
                                                        p_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, p_46);
                                                        t = p_0(t);
                                                        o_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, o_46);
                                                        t = p_0(t);
                                                        i_46 = t;
                                                        t = j_16;
                                                        t = bottomup_1_0(p_0, t);
                                                        k_46 = t;
                                                        t = f_46;
                                                        t = bottomup_1_0(p_0, t);
                                                        n_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, n_46);
                                                        t = p_0(t);
                                                        m_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, m_46);
                                                        t = p_0(t);
                                                        l_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, k_46, l_46);
                                                        t = p_0(t);
                                                        j_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, i_46, j_46);
                                                        t = p_0(t);
                                                        h_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, g_46, h_46);
                                                        t = p_0(t);
                                                        ;
                                                        LocalPopChoice(l_20);
                                                      }
                                                    else
                                                      {
                                                        t = k_20;
                                                        t = k_16;
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
                                        j_16 = ATgetArgument(t, 0);
                                        t = j_16;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm m_20 = t;
                                            int n_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_6;
                                                t = p_0(t);
                                                ;
                                                LocalPopChoice(n_20);
                                              }
                                            else
                                              {
                                                t = m_20;
                                                t = k_16;
                                              }
                                          }
                                        else
                                          {
                                            t = k_16;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            j_16 = ATgetArgument(t, 0);
                                            t = j_16;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm o_20 = t;
                                                int p_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_g_7;
                                                    t = p_0(t);
                                                    ;
                                                    LocalPopChoice(p_20);
                                                  }
                                                else
                                                  {
                                                    t = o_20;
                                                    t = k_16;
                                                  }
                                              }
                                            else
                                              {
                                                t = k_16;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                j_16 = ATgetArgument(t, 0);
                                                t = j_16;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm q_20 = t;
                                                    int r_20 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_g_7;
                                                        t = p_0(t);
                                                        ;
                                                        LocalPopChoice(r_20);
                                                      }
                                                    else
                                                      {
                                                        t = q_20;
                                                        t = k_16;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = k_16;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm s_20 = t;
                                                int t_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm u_20 = ATgetArgument(t, 0);
                                                        i_16 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(t_20);
                                                    t = i_16;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm v_20 = t;
                                                        int w_20 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_g_7;
                                                            t = p_0(t);
                                                            ;
                                                            LocalPopChoice(w_20);
                                                          }
                                                        else
                                                          {
                                                            t = v_20;
                                                            t = k_16;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = k_16;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = s_20;
                                                    {
                                                      ATerm x_20 = t;
                                                      int y_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm z_20 = ATgetArgument(t, 0);
                                                              i_16 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(y_20);
                                                          {
                                                            ATerm a_21 = t;
                                                            int b_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = i_16;
                                                                t = fetch_1_0(n_1, t);
                                                                t = term_g_7;
                                                                t = bottomup_1_0(p_0, t);
                                                                ;
                                                                LocalPopChoice(b_21);
                                                              }
                                                            else
                                                              {
                                                                t = a_21;
                                                                t = k_16;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = x_20;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              j_16 = ATgetArgument(t, 0);
                                                              i_16 = ATgetArgument(t, 1);
                                                              t = i_16;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = j_16;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = i_16;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          b_16 = ATgetArgument(t, 0);
                                                                          f_16 = ATgetArgument(t, 1);
                                                                          t = j_16;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = j_16;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = j_16;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = i_16;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          b_16 = ATgetArgument(t, 0);
                                                                          f_16 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm c_21 = t;
                                                                            int d_21 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm a_48 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, f_16, i_16);
                                                                                t = p_0(t);
                                                                                a_48 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, b_16, a_48);
                                                                                t = p_0(t);
                                                                                ;
                                                                                LocalPopChoice(d_21);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = c_21;
                                                                                {
                                                                                  ATerm e_21 = t;
                                                                                  int f_21 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = i_16;
                                                                                      if((j_16 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      ;
                                                                                      LocalPopChoice(f_21);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = e_21;
                                                                                      t = k_16;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm g_21 = t;
                                                                          int h_21 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = i_16;
                                                                              if((j_16 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              ;
                                                                              LocalPopChoice(h_21);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = g_21;
                                                                              t = k_16;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  j_16 = ATgetArgument(t, 0);
                                                                  i_16 = ATgetArgument(t, 1);
                                                                  q_14 = ATgetArgument(t, 2);
                                                                  t = q_14;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm i_21 = t;
                                                                      int j_21 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_16, i_16);
                                                                          t = p_0(t);
                                                                          ;
                                                                          LocalPopChoice(j_21);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = i_21;
                                                                          t = k_16;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = k_16;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      j_16 = ATgetArgument(t, 0);
                                                                      i_16 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm k_21 = t;
                                                                        int l_21 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, j_16, i_16);
                                                                            t = p_0(t);
                                                                            ;
                                                                            LocalPopChoice(l_21);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = k_21;
                                                                            t = k_16;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          j_16 = ATgetArgument(t, 0);
                                                                          t = j_16;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              b_16 = ATgetFirst((ATermList) t);
                                                                              f_16 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm m_21 = t;
                                                                                int n_21 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm o_48 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, f_16);
                                                                                    t = p_0(t);
                                                                                    o_48 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, b_16, o_48);
                                                                                    t = p_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(n_21);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = m_21;
                                                                                    t = k_16;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm o_21 = t;
                                                                                  int p_21 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_g_7;
                                                                                      t = p_0(t);
                                                                                      ;
                                                                                      LocalPopChoice(p_21);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = o_21;
                                                                                      t = k_16;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = k_16;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              j_16 = ATgetArgument(t, 0);
                                                                              t = j_16;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  b_16 = ATgetFirst((ATermList) t);
                                                                                  f_16 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm q_21 = t;
                                                                                    int r_21 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm u_48 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, f_16);
                                                                                        t = p_0(t);
                                                                                        u_48 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, b_16, u_48);
                                                                                        t = p_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(r_21);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = q_21;
                                                                                        t = k_16;
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
                                                                                          t = term_g_7;
                                                                                          t = p_0(t);
                                                                                          ;
                                                                                          LocalPopChoice(t_21);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = s_21;
                                                                                          t = k_16;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = k_16;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  j_16 = ATgetArgument(t, 0);
                                                                                  t = j_16;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      b_16 = ATgetFirst((ATermList) t);
                                                                                      f_16 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm u_21 = t;
                                                                                        int v_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm a_49 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, f_16);
                                                                                            t = p_0(t);
                                                                                            a_49 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, b_16, a_49);
                                                                                            t = p_0(t);
                                                                                            ;
                                                                                            LocalPopChoice(v_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = u_21;
                                                                                            t = k_16;
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
                                                                                              t = term_w_6;
                                                                                              t = p_0(t);
                                                                                              ;
                                                                                              LocalPopChoice(x_21);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = w_21;
                                                                                              t = k_16;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = k_16;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_RDefT_4))
                                                                                    {
                                                                                      j_16 = ATgetArgument(t, 0);
                                                                                      i_16 = ATgetArgument(t, 1);
                                                                                      q_14 = ATgetArgument(t, 2);
                                                                                      p_14 = ATgetArgument(t, 3);
                                                                                      {
                                                                                        ATerm y_21 = t;
                                                                                        int z_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm h_49 = NULL,j_49 = NULL;
                                                                                            t = i_16;
                                                                                            t = map1_1_0(o_1, t);
                                                                                            h_49 = t;
                                                                                            t = q_14;
                                                                                            t = map1_1_0(p_1, t);
                                                                                            j_49 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, j_16, h_49, j_49, p_14);
                                                                                            t = bottomup_1_0(p_0, t);
                                                                                            ;
                                                                                            LocalPopChoice(z_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = y_21;
                                                                                            t = k_16;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_SDefT_4))
                                                                                        {
                                                                                          j_16 = ATgetArgument(t, 0);
                                                                                          i_16 = ATgetArgument(t, 1);
                                                                                          q_14 = ATgetArgument(t, 2);
                                                                                          p_14 = ATgetArgument(t, 3);
                                                                                          {
                                                                                            ATerm a_22 = t;
                                                                                            int b_22 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm u_49 = NULL,x_49 = NULL;
                                                                                                t = q_14;
                                                                                                t = map1_1_0(w_1, t);
                                                                                                u_49 = t;
                                                                                                t = i_16;
                                                                                                t = map_1_0(b_2, t);
                                                                                                x_49 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, j_16, x_49, u_49, p_14);
                                                                                                t = bottomup_1_0(p_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(b_22);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = a_22;
                                                                                                {
                                                                                                  ATerm c_22 = t;
                                                                                                  int d_22 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm i_50 = NULL,k_50 = NULL;
                                                                                                      t = i_16;
                                                                                                      t = map1_1_0(c_2, t);
                                                                                                      i_50 = t;
                                                                                                      t = q_14;
                                                                                                      t = map_1_0(d_2, t);
                                                                                                      k_50 = t;
                                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, j_16, i_50, k_50, p_14);
                                                                                                      t = bottomup_1_0(p_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(d_22);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = c_22;
                                                                                                      t = k_16;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_InfixApp_3))
                                                                                            {
                                                                                              j_16 = ATgetArgument(t, 0);
                                                                                              i_16 = ATgetArgument(t, 1);
                                                                                              q_14 = ATgetArgument(t, 2);
                                                                                              {
                                                                                                ATerm e_22 = t;
                                                                                                int f_22 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL;
                                                                                                    t = term_g_22;
                                                                                                    t = bottomup_1_0(p_0, t);
                                                                                                    z_50 = t;
                                                                                                    t = (ATerm) ATempty;
                                                                                                    t = p_0(t);
                                                                                                    c_51 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(c_51), q_14);
                                                                                                    t = p_0(t);
                                                                                                    b_51 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(b_51), j_16);
                                                                                                    t = p_0(t);
                                                                                                    a_51 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Op_2, z_50, a_51);
                                                                                                    t = p_0(t);
                                                                                                    y_50 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_App_2, i_16, y_50);
                                                                                                    t = p_0(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(f_22);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = e_22;
                                                                                                    t = k_16;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_BAM_3))
                                                                                                {
                                                                                                  j_16 = ATgetArgument(t, 0);
                                                                                                  i_16 = ATgetArgument(t, 1);
                                                                                                  q_14 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm h_22 = t;
                                                                                                    int i_22 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, i_16);
                                                                                                        t = p_0(t);
                                                                                                        j_51 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, q_14);
                                                                                                        t = p_0(t);
                                                                                                        m_51 = t;
                                                                                                        t = (ATerm) ATempty;
                                                                                                        t = p_0(t);
                                                                                                        n_51 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(n_51), m_51);
                                                                                                        t = p_0(t);
                                                                                                        l_51 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(l_51), j_16);
                                                                                                        t = p_0(t);
                                                                                                        k_51 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(k_51), j_51);
                                                                                                        t = p_0(t);
                                                                                                        i_51 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, i_51);
                                                                                                        t = p_0(t);
                                                                                                        ;
                                                                                                        LocalPopChoice(i_22);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = h_22;
                                                                                                        t = k_16;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_AM_2))
                                                                                                    {
                                                                                                      j_16 = ATgetArgument(t, 0);
                                                                                                      i_16 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm j_22 = t;
                                                                                                        int k_22 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm r_51 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Match_1, i_16);
                                                                                                            t = p_0(t);
                                                                                                            r_51 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, j_16, r_51);
                                                                                                            t = p_0(t);
                                                                                                            ;
                                                                                                            LocalPopChoice(k_22);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = j_22;
                                                                                                            t = k_16;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_MA_2))
                                                                                                        {
                                                                                                          j_16 = ATgetArgument(t, 0);
                                                                                                          i_16 = ATgetArgument(t, 1);
                                                                                                          {
                                                                                                            ATerm l_22 = t;
                                                                                                            int m_22 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                ATerm v_51 = NULL;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, j_16);
                                                                                                                t = p_0(t);
                                                                                                                v_51 = t;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, v_51, i_16);
                                                                                                                t = p_0(t);
                                                                                                                ;
                                                                                                                LocalPopChoice(m_22);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = l_22;
                                                                                                                t = k_16;
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_BA_2))
                                                                                                            {
                                                                                                              j_16 = ATgetArgument(t, 0);
                                                                                                              i_16 = ATgetArgument(t, 1);
                                                                                                              {
                                                                                                                ATerm n_22 = t;
                                                                                                                int o_22 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    ATerm z_51 = NULL;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, i_16);
                                                                                                                    t = p_0(t);
                                                                                                                    z_51 = t;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, z_51, j_16);
                                                                                                                    t = p_0(t);
                                                                                                                    ;
                                                                                                                    LocalPopChoice(o_22);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = n_22;
                                                                                                                    t = k_16;
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_Let_2))
                                                                                                                {
                                                                                                                  j_16 = ATgetArgument(t, 0);
                                                                                                                  i_16 = ATgetArgument(t, 1);
                                                                                                                  t = i_16;
                                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                                    {
                                                                                                                      y_15 = ATgetArgument(t, 0);
                                                                                                                      a_16 = ATgetArgument(t, 1);
                                                                                                                      t = j_16;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = i_16;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          ATerm p_22 = t;
                                                                                                                          int q_22 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm k_52 = NULL;
                                                                                                                              t = (ATerm) ATmakeAppl(sym__2, j_16, y_15);
                                                                                                                              t = conc_0_0(t);
                                                                                                                              k_52 = t;
                                                                                                                              t = (ATerm) ATmakeAppl(sym_Let_2, k_52, a_16);
                                                                                                                              t = bottomup_1_0(p_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(q_22);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = p_22;
                                                                                                                              t = k_16;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_CallT_3))
                                                                                                                        {
                                                                                                                          y_15 = ATgetArgument(t, 0);
                                                                                                                          a_16 = ATgetArgument(t, 1);
                                                                                                                          l_15 = ATgetArgument(t, 2);
                                                                                                                          t = l_15;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = a_16;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = y_15;
                                                                                                                                  if(match_cons(t, sym_SVar_1))
                                                                                                                                    {
                                                                                                                                      s_15 = ATgetArgument(t, 0);
                                                                                                                                      t = j_16;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = i_16;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              b_16 = ATgetFirst((ATermList) t);
                                                                                                                                              f_16 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                              t = f_16;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = b_16;
                                                                                                                                                  if(match_cons(t, sym_SDefT_4))
                                                                                                                                                    {
                                                                                                                                                      q_15 = ATgetArgument(t, 0);
                                                                                                                                                      c_15 = ATgetArgument(t, 1);
                                                                                                                                                      v_14 = ATgetArgument(t, 2);
                                                                                                                                                      y_14 = ATgetArgument(t, 3);
                                                                                                                                                      t = v_14;
                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                        {
                                                                                                                                                          t = c_15;
                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                            {
                                                                                                                                                              ATerm r_22 = t;
                                                                                                                                                              int t_22 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  t = s_15;
                                                                                                                                                                  if((q_15 != t))
                                                                                                                                                                    {
                                                                                                                                                                      _fail(t);
                                                                                                                                                                    }
                                                                                                                                                                  t = y_14;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm u_22 = t;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        ATerm i_2 (ATerm t)
                                                                                                                                                                        {
                                                                                                                                                                          if(match_cons(t, sym_CallT_3))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm v_22 = ATgetArgument(t, 0);
                                                                                                                                                                              if(match_cons(v_22, sym_SVar_1))
                                                                                                                                                                                {
                                                                                                                                                                                  if(((q_15 != NULL) && (q_15 != ATgetArgument(v_22, 0))))
                                                                                                                                                                                    _fail(ATgetArgument(v_22, 0));
                                                                                                                                                                                  else
                                                                                                                                                                                    q_15 = ATgetArgument(v_22, 0);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              {
                                                                                                                                                                                ATerm w_22 = ATgetArgument(t, 1);
                                                                                                                                                                                if(((ATgetType(w_22) != AT_LIST) || !(ATisEmpty(w_22))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                              {
                                                                                                                                                                                ATerm x_22 = ATgetArgument(t, 2);
                                                                                                                                                                                if(((ATgetType(x_22) != AT_LIST) || !(ATisEmpty(x_22))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          return(t);
                                                                                                                                                                        }
                                                                                                                                                                        t = oncetd_1_0(i_2, t);
                                                                                                                                                                        PopChoice();
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = u_22;
                                                                                                                                                                      }
                                                                                                                                                                    t = not_null(y_14);
                                                                                                                                                                    t = bottomup_1_0(p_0, t);
                                                                                                                                                                  }
                                                                                                                                                                  ;
                                                                                                                                                                  LocalPopChoice(t_22);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = r_22;
                                                                                                                                                                  t = k_16;
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = k_16;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = k_16;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = k_16;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = k_16;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = k_16;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = j_16;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = i_16;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = k_16;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = j_16;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                    {
                                                                                                                                      t = i_16;
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = k_16;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = j_16;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = i_16;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = k_16;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = j_16;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = i_16;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = k_16;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_As_2))
                                                                                                                    {
                                                                                                                      j_16 = ATgetArgument(t, 0);
                                                                                                                      i_16 = ATgetArgument(t, 1);
                                                                                                                      t = j_16;
                                                                                                                      if(match_cons(t, sym_Wld_0))
                                                                                                                        {
                                                                                                                          t = i_16;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = k_16;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = k_16;
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
  t = bottomup_1_0(p_0, t);
  return(t);
}
ATerm map_1_0 (ATerm g_125 (ATerm), ATerm t)
{
  ATerm g_54 (ATerm t)
  {
    ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL;
    d_54 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_54;
      }
    else
      {
        ATerm k_6 = NULL,n_6 = NULL,o_6 = NULL,j_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_54 = ATgetFirst((ATermList) t);
            f_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_54);
        k_6 = t;
        t = e_54;
        t = g_125(t);
        n_6 = t;
        t = f_54;
        t = g_54(t);
        o_6 = t;
        t = (ATerm) ATinsert(CheckATermList(o_6), n_6);
        j_3 = t;
        t = SSLsetAnnotations(j_3, k_6);
      }
    return(t);
  }
  t = g_54(t);
  return(t);
}
ATerm Cons_2_0 (ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL,m_3 = NULL;
  n_54 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_54 = ATgetFirst((ATermList) t);
      k_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_54);
  i_54 = t;
  t = j_54;
  t = z_97(t);
  l_54 = t;
  t = k_54;
  t = a_98(t);
  m_54 = t;
  t = (ATerm) ATinsert(CheckATermList(m_54), l_54);
  m_3 = t;
  t = SSLsetAnnotations(m_3, i_54);
  return(t);
}
ATerm m_11 (ATerm b_74, ATerm c_74, ATerm t)
{
  ATerm o_54 = NULL;
  t = SSL_fputc(b_74, c_74);
  o_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_54);
  return(t);
}
ATerm n_11 (ATerm p_77, ATerm q_77, ATerm t)
{
  ATerm p_54 = NULL;
  t = SSL_write_term_to_stream_text(p_77, q_77);
  p_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_54);
  return(t);
}
ATerm p_11 (ATerm m_135 (ATerm), ATerm t_555, ATerm t_77, ATerm t)
{
  ATerm q_54 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_555, term_y_22);
  t = open_stream_0_0(t);
  q_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_54, t_77);
  t = m_135(t);
  t = fclose_0_0(t);
  t = t_77;
  return(t);
}
ATerm o_11 (ATerm l_77, ATerm m_77, ATerm t)
{
  ATerm r_54 = NULL;
  t = SSL_write_term_to_stream_baf(l_77, m_77);
  r_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_54);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm u_54 = NULL,v_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_22 = ATgetArgument(t, 0);
      if(match_cons(z_22, sym_Stream_1))
        {
          u_54 = ATgetArgument(z_22, 0);
        }
      else
        _fail(t);
      v_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_11(u_54, v_54, t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL,a_55 = NULL,b_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_23 = ATgetArgument(t, 0);
      if(match_cons(a_23, sym_Stream_1))
        {
          a_55 = ATgetArgument(a_23, 0);
        }
      else
        _fail(t);
      b_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11(a_55, b_55, t);
  w_54 = t;
  t = term_b_23;
  x_54 = t;
  t = w_54;
  if(match_cons(t, sym_Stream_1))
    {
      y_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_b_23, w_54);
  t = m_11(x_54, y_54, t);
  return(t);
}
ATerm output_1_0 (ATerm v_139 (ATerm), ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL;
  t = v_139(t);
  t_54 = t;
  {
    ATerm e_23 = t;
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
        t = e_23;
        t = term_l_23;
      }
    s_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_54, t_54);
    {
      ATerm m_23 = t;
      int n_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_o_23;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, s_54, t_54);
          LocalPopChoice(n_23);
          if(match_cons(t, sym__2))
            {
              ATerm p_23 = ATgetArgument(t, 0);
              ATerm q_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_11(m_2, s_54, t_54, t);
        }
      else
        {
          t = m_23;
          if(match_cons(t, sym__2))
            {
              ATerm r_23 = ATgetArgument(t, 0);
              ATerm t_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_11(w_2, s_54, t_54, t);
        }
    }
  }
  return(t);
}
ATerm p_55 (ATerm j_55, ATerm t)
{
  t = SSL_fclose(j_55);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL;
  n_55 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_55 = ATgetArgument(t, 0);
      {
        ATerm u_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_55);
            ;
            LocalPopChoice(x_23);
          }
        else
          {
            t = u_23;
            t = p_55(n_55, t);
          }
      }
    }
  else
    {
      t = p_55(n_55, t);
    }
  return(t);
}
ATerm q_11 (ATerm r_77, ATerm t)
{
  t = SSL_read_term_from_stream(r_77);
  return(t);
}
ATerm r_11 (ATerm d_74, ATerm e_74, ATerm t)
{
  ATerm q_55 = NULL;
  t = SSL_fopen(d_74, e_74);
  q_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_55);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_55 = NULL;
  t = SSL_stdin_stream();
  r_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_55);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_55 = NULL;
  t = SSL_stdout_stream();
  s_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_55);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_55 = NULL;
  t = SSL_stderr_stream();
  t_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_55);
  return(t);
}
ATerm b_57 (ATerm z_55, ATerm t)
{
  ATerm a_56 = NULL;
  t = SSL_explode_term(z_55);
  if(match_cons(t, sym__2))
    {
      ATerm y_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_24 = ATgetArgument(t, 1);
        if(((ATgetType(a_24) == AT_LIST) && !(ATisEmpty(a_24))))
          {
            a_56 = ATgetFirst((ATermList) a_24);
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
  t = a_56;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_56;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_56;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_56;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm c_57 (ATerm d_56, ATerm e_56, ATerm f_56, ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL,m_56 = NULL,o_3 = NULL;
  t = SSLgetAnnotations(f_56);
  j_56 = t;
  t = d_56;
  if(match_cons(t, sym_Path_1))
    {
      m_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_56, e_56);
  o_3 = t;
  t = SSLsetAnnotations(o_3, j_56);
  if(match_cons(t, sym__2))
    {
      h_56 = ATgetArgument(t, 0);
      i_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(h_56, i_56, t);
  return(t);
}
ATerm d_57 (ATerm o_56, ATerm p_56, ATerm q_56, ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL,w_56 = NULL,p_3 = NULL;
  t = SSLgetAnnotations(q_56);
  t_56 = t;
  t = SSL_is_string(o_56);
  w_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_56, p_56);
  p_3 = t;
  t = SSLsetAnnotations(p_3, t_56);
  if(match_cons(t, sym__2))
    {
      r_56 = ATgetArgument(t, 0);
      s_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(r_56, s_56, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_24 = ATgetArgument(t, 0);
      ATerm d_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  y_56 = t;
  if(match_cons(t, sym__2))
    {
      z_56 = ATgetArgument(t, 0);
      a_57 = ATgetArgument(t, 1);
      {
        ATerm e_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_57(y_56, t);
            ;
            LocalPopChoice(g_24);
          }
        else
          {
            t = e_24;
            {
              ATerm h_24 = t;
              int i_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_57(z_56, a_57, y_56, t);
                  ;
                  LocalPopChoice(i_24);
                }
              else
                {
                  t = h_24;
                  t = d_57(z_56, a_57, y_56, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_57(y_56, t);
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_k_24;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL;
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_57 = NULL;
      h_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_57, term_n_24);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      t = debug_1_0(x_2, t);
      _fail(t);
    }
  f_57 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_11(g_57, t);
  e_57 = t;
  t = f_57;
  t = fclose_0_0(t);
  t = e_57;
  return(t);
}
ATerm input_1_0 (ATerm w_139 (ATerm), ATerm t)
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
  t = w_139(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,o_57 = NULL;
  j_57 = t;
  t = term_s_24;
  t = whoami_0_0(t);
  k_57 = t;
  t = term_t_24;
  m_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_24), k_57), term_v_24);
  o_57 = t;
  t = SSL_printnl(m_57, o_57);
  t = term_x_24;
  l_57 = t;
  t = SSL_exit(l_57);
  t = j_57;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm q_57 = NULL;
  q_57 = t;
  if(match_string(t, "-k"))
    {
      t = q_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_57;
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL;
  r_57 = t;
  t = SSL_string_to_int(r_57);
  s_57 = t;
  t = term_y_24;
  t_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_24, s_57);
  t = a_12(t_57, s_57, t);
  t = r_57;
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_2, z_2, a_3, t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm v_57 = NULL;
  v_57 = t;
  if(match_string(t, "-S"))
    {
      t = v_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_57;
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL;
  t = term_a_25;
  w_57 = t;
  t = term_b_25;
  x_57 = t;
  t = term_c_25;
  t = a_12(w_57, x_57, t);
  t = term_d_25;
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_e_25;
  return(t);
}
ATerm h_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL,a_58 = NULL;
  y_57 = t;
  t = SSL_string_to_int(y_57);
  z_57 = t;
  t = term_a_25;
  a_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_25, z_57);
  t = a_12(a_58, z_57, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_57);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_g_25;
  return(t);
}
ATerm l_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL;
  t = term_h_25;
  b_58 = t;
  t = term_s_24;
  c_58 = t;
  t = term_i_25;
  t = a_12(b_58, c_58, t);
  t = term_j_25;
  return(t);
}
ATerm q_3 (ATerm t)
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
      t = Option_3_0(c_3, f_3, g_3, t);
      ;
      LocalPopChoice(n_25);
    }
  else
    {
      t = m_25;
      {
        ATerm p_25 = t;
        int q_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_3, i_3, k_3, t);
            ;
            LocalPopChoice(q_25);
          }
        else
          {
            t = p_25;
            t = Option_3_0(l_3, n_3, q_3, t);
          }
      }
    }
  return(t);
}
ATerm a_12 (ATerm s_78, ATerm t_78, ATerm t)
{
  ATerm d_58 = NULL;
  t = term_r_25;
  d_58 = t;
  t = SSL_table_put(d_58, s_78, t_78);
  t = (ATerm) ATmakeAppl(sym__3, term_r_25, s_78, t_78);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL;
      t = term_s_24;
      t = d_0(t);
      i_58 = t;
      t = term_s_25;
      j_58 = t;
      t = term_u_25;
      k_58 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_25, term_u_25, i_58);
      t = y_11(j_58, k_58, i_58, t);
      _fail(t);
    }
  else
    {
      ATerm n_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_58 = ATgetFirst((ATermList) t);
          h_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_58;
      t = a_0(t);
      t = term_s_24;
      t = b_0(t);
      n_58 = t;
      t = (ATerm) ATinsert(CheckATermList(h_58), n_58);
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm p_58 = NULL;
  p_58 = t;
  if(match_string(t, "-o"))
    {
      t = p_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_58;
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL;
  q_58 = t;
  t = term_i_23;
  r_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_23, q_58);
  t = a_12(r_58, q_58, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_58);
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_v_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_3, t_3, u_3, t);
  return(t);
}
ATerm y_11 (ATerm f_69, ATerm g_69, ATerm e_69, ATerm t)
{
  ATerm t_58 = NULL,v_58 = NULL,w_58 = NULL;
  t_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_69, g_69);
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_25 = ATgetArgument(t, 0);
            ATerm z_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_69, g_69);
        t = x_11(f_69, g_69, t);
        ;
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        t = (ATerm) ATempty;
      }
    v_58 = t;
    t = (ATerm) ATinsert(CheckATermList(v_58), e_69);
    w_58 = t;
    t = SSL_table_put(f_69, g_69, w_58);
    t = t_58;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_59 = NULL,i_59 = NULL,j_59 = NULL;
      t = term_s_24;
      t = m_0(t);
      h_59 = t;
      t = term_s_25;
      i_59 = t;
      t = term_u_25;
      j_59 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_25, term_u_25, h_59);
      t = y_11(i_59, j_59, h_59, t);
      _fail(t);
    }
  else
    {
      ATerm n_59 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_59 = ATgetFirst((ATermList) t);
          e_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_59;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_59 = ATgetFirst((ATermList) t);
          g_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_59;
      t = i_0(t);
      t = f_59;
      t = k_0(t);
      n_59 = t;
      t = (ATerm) ATinsert(CheckATermList(g_59), n_59);
    }
  return(t);
}
ATerm w_3 (ATerm t)
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
ATerm x_3 (ATerm t)
{
  ATerm q_59 = NULL,r_59 = NULL;
  q_59 = t;
  t = term_q_24;
  r_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_24, q_59);
  t = a_12(r_59, q_59, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_59);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_3, x_3, a_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_24;
  t = whoami_0_0(t);
  s_59 = t;
  t = term_t_24;
  u_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_26), s_59);
  v_59 = t;
  t = SSL_printnl(u_59, v_59);
  t = term_x_24;
  t_59 = t;
  t = SSL_exit(t_59);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm t_11 (ATerm j_67, ATerm k_67, ATerm t)
{
  ATerm e_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_67, k_67);
      ;
      LocalPopChoice(f_26);
    }
  else
    {
      t = e_26;
      t = SSL_addr(j_67, k_67);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL;
  x_59 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_59;
      t = y_127(t);
    }
  else
    {
      ATerm f_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_59 = ATgetFirst((ATermList) t);
          z_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_59;
      t = foldr_2_0(y_127, z_127, t);
      f_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_59, f_60);
      t = z_127(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_b_25;
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL;
  if(match_cons(t, sym__2))
    {
      d_7 = ATgetArgument(t, 0);
      e_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_11(d_7, e_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_60 = NULL,z_6 = NULL,a_7 = NULL;
  t = times_0_0(t);
  a_7 = t;
  t = SSL_explode_term(a_7);
  if(match_cons(t, sym__2))
    {
      ATerm h_26 = ATgetArgument(t, 0);
      z_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6;
  t = foldr_2_0(b_4, f_4, t);
  i_60 = t;
  t = SSL_TicksToSeconds(i_60);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL;
  t_60 = t;
  if(match_cons(t, sym__2))
    {
      u_60 = ATgetArgument(t, 0);
      v_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_60;
        if((u_60 != t))
          {
            _fail(t);
          }
        t = t_60;
        ;
        LocalPopChoice(j_26);
      }
    else
      {
        t = i_26;
        t = (ATerm) ATmakeAppl(sym__2, u_60, v_60);
        {
          ATerm m_26 = t;
          int n_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_60, v_60);
              ;
              LocalPopChoice(n_26);
            }
          else
            {
              t = m_26;
              t = SSL_gtr(u_60, v_60);
            }
          t = (ATerm) ATmakeAppl(sym__2, u_60, v_60);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_136 (ATerm), ATerm t)
{
  ATerm z_60 = NULL;
  z_60 = t;
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_61 = NULL;
        t = term_a_25;
        t = get_config_0_0(t);
        b_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_61, term_x_24);
        t = geq_0_0(t);
        t = z_60;
        t = w_136(t);
        ;
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        t = z_60;
      }
  }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL,g_61 = NULL,h_61 = NULL;
  t = run_time_0_0(t);
  d_61 = t;
  t = term_s_24;
  t = whoami_0_0(t);
  e_61 = t;
  t = term_t_24;
  g_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_26), d_61), term_q_26), e_61);
  h_61 = t;
  t = SSL_printnl(g_61, h_61);
  t = (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_26), d_61), term_q_26), e_61));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_61 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_25;
  i_61 = t;
  t = SSL_exit(i_61);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm y_61 = NULL,z_61 = NULL;
  z_61 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_61;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_61 = ATgetArgument(t, 0);
          {
            ATerm q_7 = NULL,s_3 = NULL;
            t = SSLgetAnnotations(z_61);
            q_7 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_61);
            s_3 = t;
            t = SSLsetAnnotations(s_3, q_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_61;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_139 (ATerm), ATerm t)
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      t = fetch_1_0(j_4, t);
    }
  t = m_139(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_62 = NULL,f_62 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_62 = ATgetFirst((ATermList) t);
      f_62 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_62 = NULL,k_62 = NULL;
        ATerm l_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_62)), not_null(k_62));
          return(t);
        }
        t = not_null(f_62);
        t = g_0(t);
        if(((j_62 != NULL) && (j_62 != t)))
          _fail(t);
        else
          j_62 = t;
        t = not_null(c_62);
        t = f_0(t);
        if(((k_62 != NULL) && (k_62 != t)))
          _fail(t);
        else
          k_62 = t;
        t = not_null(f_62);
        t = reverse_acc_2_0(f_0, l_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_24;
      t = g_0(t);
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL,v_3 = NULL;
  q_62 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_62);
  o_62 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_62);
  v_3 = t;
  t = SSLsetAnnotations(v_3, o_62);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm s_62 = NULL;
  s_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_62), term_w_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL;
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      t = fetch_1_0(m_4, t);
    }
  t = term_z_26;
  t = echo_0_0(t);
  t = term_s_25;
  m_62 = t;
  t = term_u_25;
  n_62 = t;
  t = term_a_27;
  t = x_11(m_62, n_62, t);
  t = reverse_acc_2_0(_id, n_4, t);
  t = map_1_0(o_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm q_125 (ATerm), ATerm t)
{
  ATerm p_63 (ATerm t)
  {
    ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL;
    m_63 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_63 = ATgetFirst((ATermList) t);
        o_63 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_27 = t;
      int c_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_7 = NULL,b_8 = NULL,y_3 = NULL;
          t = SSLgetAnnotations(m_63);
          y_7 = t;
          t = n_63;
          t = q_125(t);
          b_8 = t;
          t = (ATerm) ATinsert(CheckATermList(o_63), b_8);
          y_3 = t;
          t = SSLsetAnnotations(y_3, y_7);
          ;
          LocalPopChoice(c_27);
        }
      else
        {
          t = b_27;
          {
            ATerm j_8 = NULL,m_8 = NULL,z_3 = NULL;
            t = SSLgetAnnotations(m_63);
            j_8 = t;
            t = o_63;
            t = p_63(t);
            m_8 = t;
            t = (ATerm) ATinsert(CheckATermList(m_8), n_63);
            z_3 = t;
            t = SSLsetAnnotations(z_3, j_8);
          }
        }
    }
    return(t);
  }
  t = p_63(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_63 = NULL,u_63 = NULL,v_63 = NULL;
  t_63 = t;
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_63;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_27 = ATgetFirst((ATermList) t);
                ATerm g_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_63;
          }
        ;
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        t = (ATerm) ATinsert(ATempty, t_63);
      }
    u_63 = t;
    t = term_l_23;
    v_63 = t;
    t = SSL_printnl(v_63, u_63);
    t = t_63;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm w_11 (ATerm c_60, ATerm d_60, ATerm t)
{
  t = SSL_strcat(c_60, d_60);
  return(t);
}
ATerm debug_1_0 (ATerm k_135 (ATerm), ATerm t)
{
  ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL;
  z_63 = t;
  t = k_135(t);
  a_64 = t;
  t = term_t_24;
  b_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_63), a_64);
  c_64 = t;
  t = SSL_printnl(b_64, c_64);
  t = z_63;
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_k_27;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_64 = NULL;
      j_64 = t;
      t = SSL_is_string(j_64);
      ;
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      {
        ATerm n_27 = t;
        int o_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_4, t);
            ;
            LocalPopChoice(o_27);
          }
        else
          {
            t = n_27;
            {
              ATerm p_64 = NULL,q_64 = NULL,r_64 = NULL;
              p_64 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_64 = ATgetArgument(t, 0);
                  t = q_64;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_64 = ATgetArgument(t, 0);
                      t = q_64;
                      {
                        ATerm p_27 = t;
                        int r_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(r_27);
                          }
                        else
                          {
                            t = p_27;
                            t = debug_1_0(q_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_64 = NULL,w_64 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_64 = ATgetArgument(t, 0);
                          r_64 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_64;
                      t = eval_config_0_0(t);
                      v_64 = t;
                      t = r_64;
                      t = eval_config_0_0(t);
                      w_64 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_64, w_64);
                      t = w_11(v_64, w_64, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm x_11 (ATerm w_70, ATerm x_70, ATerm t)
{
  t = SSL_table_get(w_70, x_70);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm a_65 = NULL,b_65 = NULL;
  a_65 = t;
  t = term_r_25;
  b_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_25, a_65);
  t = x_11(b_65, a_65, t);
  {
    ATerm s_27 = t;
    int t_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_65 = NULL,d_65 = NULL;
        t = eval_config_0_0(t);
        c_65 = t;
        t = term_r_25;
        d_65 = t;
        t = SSL_table_put(d_65, a_65, c_65);
        t = c_65;
        ;
        LocalPopChoice(t_27);
      }
    else
      {
        t = s_27;
      }
  }
  return(t);
}
ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm i_65 = NULL,j_65 = NULL;
  t = term_u_27;
  i_65 = t;
  t = term_s_24;
  j_65 = t;
  t = term_v_27;
  t = a_12(i_65, j_65, t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_w_27;
  return(t);
}
ATerm v_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL;
  t = term_u_27;
  m_65 = t;
  t = term_s_24;
  n_65 = t;
  t = term_v_27;
  t = a_12(m_65, n_65, t);
  t = term_x_27;
  k_65 = t;
  t = term_s_24;
  l_65 = t;
  t = term_y_27;
  t = a_12(k_65, l_65, t);
  t = term_a_28;
  return(t);
}
ATerm x_4 (ATerm t)
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
      t = Option_3_0(r_4, t_4, u_4, t);
      ;
      LocalPopChoice(d_28);
    }
  else
    {
      t = c_28;
      t = Option_3_0(v_4, w_4, x_4, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_141 (ATerm), ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,x_65 = NULL,y_65 = NULL,h_4 = NULL;
  if(((s_65 != NULL) && (s_65 != t)))
    _fail(t);
  else
    s_65 = t;
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_28;
        t = p_141(t);
        ;
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
      }
    t = not_null(s_65);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((u_65 != NULL) && (u_65 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          u_65 = ATgetFirst((ATermList) t);
        if(((v_65 != NULL) && (v_65 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          v_65 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(s_65));
    if(((t_65 != NULL) && (t_65 != t)))
      _fail(t);
    else
      t_65 = t;
    t = term_d_26;
    if(((y_65 != NULL) && (y_65 != t)))
      _fail(t);
    else
      y_65 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_d_26, not_null(u_65));
    t = a_12(not_null(y_65), not_null(u_65), t);
    t = not_null(v_65);
    {
      ATerm i_66 (ATerm t)
      {
        ATerm h_28 = t;
        int i_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_28 = t;
            int k_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_66 = NULL;
                b_66 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = b_66;
                ;
                LocalPopChoice(k_28);
              }
            else
              {
                t = j_28;
                t = p_141(t);
                t = Cons_2_0(_id, i_66, t);
              }
            ;
            LocalPopChoice(i_28);
          }
        else
          {
            t = h_28;
            {
              ATerm e_66 = NULL,f_66 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_66 = ATgetFirst((ATermList) t);
                  f_66 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(f_66), (ATerm) ATmakeAppl(sym_Undefined_1, e_66));
            }
          }
        return(t);
      }
      t = i_66(t);
      if(((x_65 != NULL) && (x_65 != t)))
        _fail(t);
      else
        x_65 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(x_65)), (ATerm) ATmakeAppl(sym_Program_1, not_null(u_65)));
      if(((h_4 != NULL) && (h_4 != t)))
        _fail(t);
      else
        h_4 = t;
      t = SSLsetAnnotations(not_null(h_4), not_null(t_65));
    }
  }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm u_66 = NULL;
  u_66 = t;
  if(match_string(t, "--help"))
    {
      t = u_66;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_66;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_66;
        }
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL;
  t = term_v_26;
  v_66 = t;
  t = term_s_24;
  w_66 = t;
  t = term_l_28;
  t = a_12(v_66, w_66, t);
  t = term_m_28;
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_n_28;
  return(t);
}
ATerm d_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_141 (ATerm), ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL;
  if(((p_66 != NULL) && (p_66 != t)))
    _fail(t);
  else
    p_66 = t;
  t = term_s_25;
  if(((r_66 != NULL) && (r_66 != t)))
    _fail(t);
  else
    r_66 = t;
  t = term_u_25;
  if(((s_66 != NULL) && (s_66 != t)))
    _fail(t);
  else
    s_66 = t;
  t = (ATerm) ATempty;
  if(((t_66 != NULL) && (t_66 != t)))
    _fail(t);
  else
    t_66 = t;
  t = SSL_table_put(not_null(r_66), not_null(s_66), not_null(t_66));
  t = not_null(p_66);
  {
    ATerm y_4 (ATerm t)
    {
      ATerm o_28 = t;
      int p_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_141(t);
          ;
          LocalPopChoice(p_28);
        }
      else
        {
          t = o_28;
          {
            ATerm q_28 = t;
            int s_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_4, a_5, b_5, t);
                ;
                LocalPopChoice(s_28);
              }
            else
              {
                t = q_28;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_4, t);
    {
      ATerm t_28 = t;
      int u_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_67 = NULL;
          d_67 = t;
          {
            ATerm v_28 = t;
            int w_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_9 = NULL;
                t = d_67;
                {
                  ATerm x_28 = t;
                  int z_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_v_26;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(z_28);
                    }
                  else
                    {
                      t = x_28;
                      t = fetch_1_0(d_5, t);
                    }
                  t = d_67;
                  t = default_system_usage_0_0(t);
                  t = term_b_25;
                  b_9 = t;
                  t = SSL_exit(b_9);
                }
                ;
                LocalPopChoice(w_28);
              }
            else
              {
                t = v_28;
                {
                  ATerm f_9 = NULL;
                  t = term_u_27;
                  t = get_config_0_0(t);
                  t = d_67;
                  t = default_system_about_0_0(t);
                  t = term_b_25;
                  f_9 = t;
                  t = SSL_exit(f_9);
                }
              }
          }
          ;
          LocalPopChoice(u_28);
        }
      else
        {
          t = t_28;
          {
            ATerm a_29 = t;
            int b_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_67 = NULL,f_67 = NULL,g_67 = NULL;
                ATerm e_5 (ATerm t)
                {
                  ATerm h_67 = NULL,i_67 = NULL,l_67 = NULL,b_7 = NULL;
                  l_67 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      i_67 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_67);
                  h_67 = t;
                  t = i_67;
                  if(((n_66 != NULL) && (n_66 != t)))
                    _fail(t);
                  else
                    n_66 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, i_67);
                  b_7 = t;
                  t = SSLsetAnnotations(b_7, h_67);
                  return(t);
                }
                t = fetch_1_0(e_5, t);
                t = term_t_24;
                if(((f_67 != NULL) && (f_67 != t)))
                  _fail(t);
                else
                  f_67 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_66)), term_c_29);
                if(((g_67 != NULL) && (g_67 != t)))
                  _fail(t);
                else
                  g_67 = t;
                t = SSL_printnl(not_null(f_67), not_null(g_67));
                t = (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_66)), term_c_29));
                t = default_system_usage_0_0(t);
                t = term_x_24;
                if(((e_67 != NULL) && (e_67 != t)))
                  _fail(t);
                else
                  e_67 = t;
                t = SSL_exit(not_null(e_67));
                ;
                LocalPopChoice(b_29);
              }
            else
              {
                t = a_29;
              }
          }
        }
      if(((o_66 != NULL) && (o_66 != t)))
        _fail(t);
      else
        o_66 = t;
      t = term_s_25;
      if(((q_66 != NULL) && (q_66 != t)))
        _fail(t);
      else
        q_66 = t;
      t = SSL_table_destroy(not_null(q_66));
      t = not_null(o_66);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_139 (ATerm), ATerm p_139 (ATerm), ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL;
  t = parse_options_1_0(o_139, t);
  q_67 = t;
  t = term_d_29;
  t_67 = t;
  t = SSL_table_create(t_67);
  t = term_d_29;
  r_67 = t;
  t = term_e_29;
  s_67 = t;
  t = SSL_table_put(r_67, s_67, q_67);
  t = q_67;
  t = q_139(t);
  {
    ATerm f_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_139, t);
        ;
        LocalPopChoice(h_29);
      }
    else
      {
        t = f_29;
        {
          ATerm i_29 = t;
          int j_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_139(t);
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
ATerm f_5 (ATerm t)
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
        int n_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = Option_3_0(h_5, i_5, j_5, t);
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
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(r_29);
                      }
                    else
                      {
                        t = q_29;
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
ATerm g_5 (ATerm t)
{
  t = input_1_0(k_5, t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm v_67 = NULL,w_67 = NULL;
  t = term_o_23;
  v_67 = t;
  t = term_s_24;
  w_67 = t;
  t = term_s_29;
  t = a_12(v_67, w_67, t);
  t = term_t_29;
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_u_29;
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = output_1_0(l_5, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,k_9 = NULL,j_9 = NULL;
  f_68 = t;
  if(match_cons(t, sym_Specification_1))
    {
      z_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_68);
  y_67 = t;
  t = z_67;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_68 = ATgetFirst((ATermList) t);
      c_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_67);
  a_68 = t;
  t = c_68;
  t = Cons_2_0(m_5, o_5, t);
  d_68 = t;
  t = (ATerm) ATinsert(CheckATermList(d_68), b_68);
  j_9 = t;
  t = SSLsetAnnotations(j_9, a_68);
  e_68 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, e_68);
  k_9 = t;
  t = SSLsetAnnotations(k_9, y_67);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,i_9 = NULL;
  j_68 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      h_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_68);
  g_68 = t;
  t = h_68;
  t = map_1_0(p_5, t);
  i_68 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, i_68);
  i_9 = t;
  t = SSLsetAnnotations(i_9, g_68);
  return(t);
}
ATerm o_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,q_68 = NULL,r_68 = NULL,h_9 = NULL;
  r_68 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      l_68 = ATgetArgument(t, 0);
      m_68 = ATgetArgument(t, 1);
      n_68 = ATgetArgument(t, 2);
      o_68 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_68);
  k_68 = t;
  t = o_68;
  t = simplify_0_0(t);
  q_68 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, l_68, m_68, n_68, q_68);
  h_9 = t;
  t = SSLsetAnnotations(h_9, k_68);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(f_5, default_usage_0_0, _id, g_5, t);
  return(t);
}
