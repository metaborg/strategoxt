#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_App_2;
Symbol sym_As_2;
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Undefined_0;
Symbol sym_Hashtable_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
static void init_module_constructors (void)
{
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
}
ATerm term_c_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_f_28;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_k_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_o_22;
ATerm term_k_22;
ATerm term_q_21;
ATerm term_z_5;
ATerm term_t_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_s_22);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_y_22);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_x_23);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym__2, term_i_24, term_k_24);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_24);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym__2, term_q_24, term_b_24);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_j_25);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_i_24);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_h_26);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym__2, term_y_24, term_z_24);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym__2, term_z_26, term_b_24);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym__2, term_c_27, term_b_24);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym__2, term_h_26, term_b_24);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym__3, term_y_24, term_z_24, (ATerm) ATempty);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_z_26);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym__2, term_y_22, term_b_24);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm alltd_1_0 (ATerm o_108 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm x_106 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm a_108 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm y_127 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm g_2 (ATerm w_1, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm w_106 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm l_111 (ATerm), ATerm t);
static ATerm u_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm simplify_0_0 (ATerm t);
ATerm map_1_0 (ATerm h_127 (ATerm), ATerm t);
static ATerm d_11 (ATerm w_44, ATerm x_44, ATerm t);
static ATerm e_11 (ATerm x_49, ATerm y_49, ATerm t);
static ATerm g_11 (ATerm a_121 (ATerm), ATerm s_434, ATerm d_50, ATerm t);
static ATerm f_11 (ATerm t_49, ATerm u_49, ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm output_1_0 (ATerm g_134 (ATerm), ATerm t);
static ATerm f_52 (ATerm z_51, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm h_11 (ATerm z_49, ATerm t);
static ATerm i_11 (ATerm p_43, ATerm q_43, ATerm t);
static ATerm j_11 (ATerm y_44, ATerm z_44, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm x_53 (ATerm q_52, ATerm t);
static ATerm y_53 (ATerm u_52, ATerm v_52, ATerm w_52, ATerm t);
static ATerm z_53 (ATerm h_53, ATerm i_53, ATerm j_53, ATerm t);
static ATerm k_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm h_134 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm t_11 (ATerm r_48, ATerm s_48, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_11 (ATerm v_53, ATerm w_53, ATerm u_53, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm l_11 (ATerm d_51, ATerm e_51, ATerm t);
ATerm foldr_2_0 (ATerm x_125 (ATerm), ATerm y_125 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_118 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm need_help_1_0 (ATerm x_133 (ATerm), ATerm t);
static ATerm u_11 (ATerm n_57, ATerm o_57, ATerm p_57, ATerm t);
ATerm lookup_table_0_1 (ATerm h_55, ATerm t);
ATerm new_hashtable_0_2 (ATerm v_57, ATerm w_57, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm n_11 (ATerm s_57, ATerm t_57, ATerm t);
static ATerm o_11 (ATerm x_57, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_127 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm v_11 (ATerm q_57, ATerm r_57, ATerm t);
static ATerm q_11 (ATerm o_55, ATerm p_55, ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm a_136 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm parse_options_1_0 (ATerm z_135 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm z_133 (ATerm), ATerm a_134 (ATerm), ATerm b_134 (ATerm), ATerm c_134 (ATerm), ATerm t);
static ATerm v_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm alltd_1_0 (ATerm o_108 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    ATerm q_0 = t;
    int l_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_108(t);
        LocalPopChoice(l_4);
      }
    else
      {
        t = q_0;
        t = SRTS_all(a_0, t);
      }
    return(t);
  }
  t = a_0(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm x_106 (ATerm), ATerm t)
{
  static ATerm b_0 (ATerm t)
  {
    t = bottomup_1_0(x_106, t);
    return(t);
  }
  t = SRTS_all(b_0, t);
  t = x_106(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm a_108 (ATerm), ATerm t)
{
  static ATerm p_2 (ATerm t)
  {
    ATerm m_4 = t;
    int n_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_108(t);
        LocalPopChoice(n_4);
      }
    else
      {
        t = m_4;
        t = SRTS_one(p_2, t);
      }
    return(t);
  }
  t = p_2(t);
  return(t);
}
ATerm at_end_1_0 (ATerm y_127 (ATerm), ATerm t)
{
  static ATerm q_1 (ATerm t)
  {
    ATerm g_1 = NULL,h_1 = NULL,m_1 = NULL;
    m_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_1 = ATgetFirst((ATermList) t);
        h_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_0 = NULL,c_1 = NULL,t_0 = NULL;
          t = SSLgetAnnotations(m_1);
          s_0 = t;
          t = h_1;
          t = q_1(t);
          c_1 = t;
          t = (ATerm) ATinsert(CheckATermList(c_1), g_1);
          t_0 = t;
          t = SSLsetAnnotations(t_0, s_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_1;
        t = y_127(t);
      }
    return(t);
  }
  t = q_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_0 = NULL,j_0 = NULL,m_0 = NULL;
  f_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_0;
    }
  else
    {
      static ATerm h_0 (ATerm t)
      {
        t = not_null(m_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_0 = ATgetFirst((ATermList) t);
          if(((m_0 != NULL) && (m_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_0;
      t = at_end_1_0(h_0, t);
    }
  return(t);
}
static ATerm g_2 (ATerm w_1, ATerm t)
{
  ATerm x_1 = NULL;
  t = SSL_explode_term(w_1);
  if(match_cons(t, sym__2))
    {
      ATerm o_4 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_4) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL,c_2 = NULL;
  c_2 = t;
  if(match_cons(t, sym__2))
    {
      a_2 = ATgetArgument(t, 0);
      b_2 = ATgetArgument(t, 1);
      {
        ATerm p_4 = t;
        int r_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_0 (ATerm t)
            {
              t = b_2;
              return(t);
            }
            t = a_2;
            t = at_end_1_0(o_0, t);
            LocalPopChoice(r_4);
          }
        else
          {
            t = p_4;
            t = g_2(c_2, t);
          }
      }
    }
  else
    {
      t = g_2(c_2, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm topdown_1_0 (ATerm w_106 (ATerm), ATerm t)
{
  static ATerm p_0 (ATerm t)
  {
    t = topdown_1_0(w_106, t);
    return(t);
  }
  t = w_106(t);
  t = SRTS_all(p_0, t);
  return(t);
}
ATerm genzip_4_0 (ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm l_111 (ATerm), ATerm t)
{
  static ATerm o_2 (ATerm t)
  {
    ATerm s_4 = t;
    int t_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_111(t);
        LocalPopChoice(t_4);
      }
    else
      {
        t = s_4;
        {
          ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,v_0 = NULL;
          t = j_111(t);
          n_2 = t;
          if(match_cons(t, sym__2))
            {
              j_2 = ATgetArgument(t, 0);
              k_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_2);
          i_2 = t;
          t = j_2;
          t = l_111(t);
          l_2 = t;
          t = k_2;
          t = o_2(t);
          m_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_2, m_2);
          v_0 = t;
          t = SSLsetAnnotations(v_0, i_2);
          t = k_111(t);
        }
      }
    return(t);
  }
  t = o_2(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_4 = ATgetArgument(t, 0);
      if(((ATgetType(u_4) != AT_LIST) || !(ATisEmpty(u_4))))
        _fail(t);
      {
        ATerm v_4 = ATgetArgument(t, 1);
        if(((ATgetType(v_4) != AT_LIST) || !(ATisEmpty(v_4))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm j_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_4 = ATgetArgument(t, 0);
      if(((ATgetType(x_4) == AT_LIST) && !(ATisEmpty(x_4))))
        {
          j_18 = ATgetFirst((ATermList) x_4);
          p_18 = (ATerm) ATgetNext((ATermList) x_4);
        }
      else
        _fail(t);
      {
        ATerm y_4 = ATgetArgument(t, 1);
        if(((ATgetType(y_4) == AT_LIST) && !(ATisEmpty(y_4))))
          {
            q_18 = ATgetFirst((ATermList) y_4);
            r_18 = (ATerm) ATgetNext((ATermList) y_4);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_18, q_18), (ATerm) ATmakeAppl(sym__2, p_18, r_18));
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm u_18 = NULL,y_18 = NULL;
  if(match_cons(t, sym__2))
    {
      u_18 = ATgetArgument(t, 0);
      y_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_18), u_18);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm z_18 = NULL,e_19 = NULL;
  if(match_cons(t, sym__2))
    {
      z_18 = ATgetArgument(t, 0);
      e_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_18), (ATerm) ATmakeAppl(sym_Match_1, e_19));
  return(t);
}
static ATerm a_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_4 = ATgetArgument(t, 0);
      if(((ATgetType(z_4) != AT_LIST) || !(ATisEmpty(z_4))))
        _fail(t);
      {
        ATerm a_5 = ATgetArgument(t, 1);
        if(((ATgetType(a_5) != AT_LIST) || !(ATisEmpty(a_5))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,t_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_5 = ATgetArgument(t, 0);
      if(((ATgetType(c_5) == AT_LIST) && !(ATisEmpty(c_5))))
        {
          o_25 = ATgetFirst((ATermList) c_5);
          p_25 = (ATerm) ATgetNext((ATermList) c_5);
        }
      else
        _fail(t);
      {
        ATerm d_5 = ATgetArgument(t, 1);
        if(((ATgetType(d_5) == AT_LIST) && !(ATisEmpty(d_5))))
          {
            q_25 = ATgetFirst((ATermList) d_5);
            t_25 = (ATerm) ATgetNext((ATermList) d_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_25, q_25), (ATerm) ATmakeAppl(sym__2, p_25, t_25));
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL;
  if(match_cons(t, sym__2))
    {
      u_25 = ATgetArgument(t, 0);
      v_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_25), u_25);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm w_25 = NULL,a_26 = NULL;
  if(match_cons(t, sym__2))
    {
      w_25 = ATgetArgument(t, 0);
      a_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_25), (ATerm) ATmakeAppl(sym_Match_1, a_26));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm e_5 = t;
  int f_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm h_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(f_5);
      {
        ATerm q_37 = NULL,r_37 = NULL;
        q_37 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm i_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        r_37 = t;
        t = SSLgetAnnotations(q_37);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_5 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) k_5) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_5 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(l_5) != AT_LIST) || !(ATisEmpty(l_5))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = r_37;
      }
    }
  else
    {
      t = e_5;
      {
        ATerm m_5 = t;
        int n_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm o_5 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) o_5) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm p_5 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(n_5);
            _fail(t);
          }
        else
          {
            t = m_5;
          }
      }
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  static ATerm r_0 (ATerm t)
  {
    ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,m_11 = NULL,p_11 = NULL,s_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
    k_12 = t;
    if(match_cons(t, sym_Test_1))
      {
        j_12 = ATgetArgument(t, 0);
        t = j_12;
        if(match_cons(t, sym_Id_0))
          {
            ATerm q_5 = t;
            int s_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_t_5;
                t = r_0(t);
                LocalPopChoice(s_5);
              }
            else
              {
                t = q_5;
                {
                  ATerm v_5 = t;
                  int w_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
                      t = k_12;
                      t = new_0_0(t);
                      m_12 = t;
                      t = bottomup_1_0(r_0, t);
                      x_12 = t;
                      t = (ATerm) ATempty;
                      t = r_0(t);
                      y_12 = t;
                      t = (ATerm) ATinsert(CheckATermList(y_12), x_12);
                      t = r_0(t);
                      n_12 = t;
                      t = m_12;
                      t = bottomup_1_0(r_0, t);
                      w_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, w_12);
                      t = r_0(t);
                      v_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, v_12);
                      t = r_0(t);
                      p_12 = t;
                      t = j_12;
                      t = bottomup_1_0(r_0, t);
                      r_12 = t;
                      t = m_12;
                      t = bottomup_1_0(r_0, t);
                      u_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, u_12);
                      t = r_0(t);
                      t_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, t_12);
                      t = r_0(t);
                      s_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, r_12, s_12);
                      t = r_0(t);
                      q_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_12, q_12);
                      t = r_0(t);
                      o_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, n_12, o_12);
                      t = r_0(t);
                      LocalPopChoice(w_5);
                    }
                  else
                    {
                      t = v_5;
                      t = k_12;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm x_5 = t;
                int y_5 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_z_5;
                    t = r_0(t);
                    LocalPopChoice(y_5);
                  }
                else
                  {
                    t = x_5;
                    {
                      ATerm a_6 = t;
                      int e_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL;
                          t = k_12;
                          t = new_0_0(t);
                          b_13 = t;
                          t = bottomup_1_0(r_0, t);
                          m_13 = t;
                          t = (ATerm) ATempty;
                          t = r_0(t);
                          n_13 = t;
                          t = (ATerm) ATinsert(CheckATermList(n_13), m_13);
                          t = r_0(t);
                          c_13 = t;
                          t = b_13;
                          t = bottomup_1_0(r_0, t);
                          l_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, l_13);
                          t = r_0(t);
                          k_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, k_13);
                          t = r_0(t);
                          e_13 = t;
                          t = j_12;
                          t = bottomup_1_0(r_0, t);
                          g_13 = t;
                          t = b_13;
                          t = bottomup_1_0(r_0, t);
                          j_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, j_13);
                          t = r_0(t);
                          i_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, i_13);
                          t = r_0(t);
                          h_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_13, h_13);
                          t = r_0(t);
                          f_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_13, f_13);
                          t = r_0(t);
                          d_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, c_13, d_13);
                          t = r_0(t);
                          LocalPopChoice(e_6);
                        }
                      else
                        {
                          t = a_6;
                          t = k_12;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    g_12 = ATgetArgument(t, 0);
                    {
                      ATerm f_6 = t;
                      int g_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, g_12);
                          t = r_0(t);
                          LocalPopChoice(g_6);
                        }
                      else
                        {
                          t = f_6;
                          {
                            ATerm k_6 = t;
                            int l_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,a_14 = NULL,c_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,n_14 = NULL,o_14 = NULL;
                                t = k_12;
                                t = new_0_0(t);
                                r_13 = t;
                                t = bottomup_1_0(r_0, t);
                                n_14 = t;
                                t = (ATerm) ATempty;
                                t = r_0(t);
                                o_14 = t;
                                t = (ATerm) ATinsert(CheckATermList(o_14), n_14);
                                t = r_0(t);
                                s_13 = t;
                                t = r_13;
                                t = bottomup_1_0(r_0, t);
                                g_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, g_14);
                                t = r_0(t);
                                f_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, f_14);
                                t = r_0(t);
                                u_13 = t;
                                t = j_12;
                                t = bottomup_1_0(r_0, t);
                                w_13 = t;
                                t = r_13;
                                t = bottomup_1_0(r_0, t);
                                e_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, e_14);
                                t = r_0(t);
                                c_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, c_14);
                                t = r_0(t);
                                a_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, w_13, a_14);
                                t = r_0(t);
                                v_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, u_13, v_13);
                                t = r_0(t);
                                t_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, s_13, t_13);
                                t = r_0(t);
                                LocalPopChoice(l_6);
                              }
                            else
                              {
                                t = k_6;
                                t = k_12;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm m_6 = t;
                    int n_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL,d_15 = NULL,e_15 = NULL,g_15 = NULL,l_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
                        t = k_12;
                        t = new_0_0(t);
                        x_14 = t;
                        t = bottomup_1_0(r_0, t);
                        r_15 = t;
                        t = (ATerm) ATempty;
                        t = r_0(t);
                        s_15 = t;
                        t = (ATerm) ATinsert(CheckATermList(s_15), r_15);
                        t = r_0(t);
                        y_14 = t;
                        t = x_14;
                        t = bottomup_1_0(r_0, t);
                        q_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, q_15);
                        t = r_0(t);
                        p_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, p_15);
                        t = r_0(t);
                        d_15 = t;
                        t = j_12;
                        t = bottomup_1_0(r_0, t);
                        g_15 = t;
                        t = x_14;
                        t = bottomup_1_0(r_0, t);
                        o_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, o_15);
                        t = r_0(t);
                        n_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, n_15);
                        t = r_0(t);
                        l_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_15, l_15);
                        t = r_0(t);
                        e_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, d_15, e_15);
                        t = r_0(t);
                        z_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, y_14, z_14);
                        t = r_0(t);
                        LocalPopChoice(n_6);
                      }
                    else
                      {
                        t = m_6;
                        t = k_12;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            j_12 = ATgetArgument(t, 0);
            t = j_12;
            if(match_cons(t, sym_Id_0))
              {
                ATerm o_6 = t;
                int p_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_z_5;
                    t = r_0(t);
                    LocalPopChoice(p_6);
                  }
                else
                  {
                    t = o_6;
                    t = k_12;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm r_6 = t;
                    int s_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_t_5;
                        t = r_0(t);
                        LocalPopChoice(s_6);
                      }
                    else
                      {
                        t = r_6;
                        t = k_12;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        g_12 = ATgetArgument(t, 0);
                        {
                          ATerm t_6 = t;
                          int u_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, g_12);
                              t = r_0(t);
                              LocalPopChoice(u_6);
                            }
                          else
                            {
                              t = t_6;
                              t = k_12;
                            }
                        }
                      }
                    else
                      {
                        t = k_12;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                j_12 = ATgetArgument(t, 0);
                i_12 = ATgetArgument(t, 1);
                t = i_12;
                if(match_cons(t, sym_Id_0))
                  {
                    t = j_12;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = i_12;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = j_12;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                g_12 = ATgetArgument(t, 0);
                                h_12 = ATgetArgument(t, 1);
                                t = j_12;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    g_12 = ATgetArgument(t, 0);
                                    h_12 = ATgetArgument(t, 1);
                                    t = j_12;
                                  }
                                else
                                  {
                                    t = j_12;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        e_12 = ATgetArgument(t, 0);
                        f_12 = ATgetArgument(t, 1);
                        t = e_12;
                        if(match_cons(t, sym_Match_1))
                          {
                            d_12 = ATgetArgument(t, 0);
                            t = d_12;
                            if(match_cons(t, sym_Op_2))
                              {
                                b_12 = ATgetArgument(t, 0);
                                w_11 = ATgetArgument(t, 1);
                                t = j_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = i_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm w_6 = t;
                                        int z_6 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_z_5;
                                            t = r_0(t);
                                            LocalPopChoice(z_6);
                                          }
                                        else
                                          {
                                            t = w_6;
                                            t = k_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            g_12 = ATgetArgument(t, 0);
                                            h_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm a_7 = t;
                                              int b_7 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm z_17 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                  t = r_0(t);
                                                  z_17 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, z_17);
                                                  t = r_0(t);
                                                  LocalPopChoice(b_7);
                                                }
                                              else
                                                {
                                                  t = a_7;
                                                  t = k_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                t = g_12;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    c_12 = ATgetArgument(t, 0);
                                                    x_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm c_7 = t;
                                                      int d_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, c_12, b_12);
                                                          {
                                                            ATerm e_7 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm p_1 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    p_1 = ATgetArgument(t, 0);
                                                                    if((p_1 != ATgetArgument(t, 1)))
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
                                                                t = e_7;
                                                              }
                                                          }
                                                          t = term_z_5;
                                                          t = bottomup_1_0(r_0, t);
                                                          LocalPopChoice(d_7);
                                                        }
                                                      else
                                                        {
                                                          t = c_7;
                                                          {
                                                            ATerm g_7 = t;
                                                            int j_7 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm i_18 = NULL;
                                                                t = b_12;
                                                                if((c_12 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, x_11, w_11);
                                                                t = genzip_4_0(u_0, w_0, y_0, z_0, t);
                                                                i_18 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, c_12, x_11)), f_12));
                                                                t = bottomup_1_0(r_0, t);
                                                                LocalPopChoice(j_7);
                                                              }
                                                            else
                                                              {
                                                                t = g_7;
                                                                {
                                                                  ATerm k_7 = t;
                                                                  int m_7 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm l_19 = NULL;
                                                                      t = d_12;
                                                                      if((g_12 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, g_12);
                                                                      t = r_0(t);
                                                                      l_19 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_19, f_12);
                                                                      t = r_0(t);
                                                                      LocalPopChoice(m_7);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = k_7;
                                                                      t = k_12;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm o_7 = t;
                                                    int q_7 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm t_19 = NULL;
                                                        t = d_12;
                                                        if((g_12 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, g_12);
                                                        t = r_0(t);
                                                        t_19 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, t_19, f_12);
                                                        t = r_0(t);
                                                        LocalPopChoice(q_7);
                                                      }
                                                    else
                                                      {
                                                        t = o_7;
                                                        t = k_12;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    g_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm w_7 = t;
                                                      int x_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_19 = NULL;
                                                          t = d_12;
                                                          if((g_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, g_12);
                                                          t = r_0(t);
                                                          x_19 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_19, f_12);
                                                          t = r_0(t);
                                                          LocalPopChoice(x_7);
                                                        }
                                                      else
                                                        {
                                                          t = w_7;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm y_7 = t;
                                                          int z_7 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm c_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                              t = r_0(t);
                                                              c_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, c_20);
                                                              t = r_0(t);
                                                              LocalPopChoice(z_7);
                                                            }
                                                          else
                                                            {
                                                              t = y_7;
                                                              t = k_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = j_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = i_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm a_8 = t;
                                        int b_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_z_5;
                                            t = r_0(t);
                                            LocalPopChoice(b_8);
                                          }
                                        else
                                          {
                                            t = a_8;
                                            t = k_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            g_12 = ATgetArgument(t, 0);
                                            h_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm c_8 = t;
                                              int d_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm l_20 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                  t = r_0(t);
                                                  l_20 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, l_20);
                                                  t = r_0(t);
                                                  LocalPopChoice(d_8);
                                                }
                                              else
                                                {
                                                  t = c_8;
                                                  t = k_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                {
                                                  ATerm e_8 = t;
                                                  int f_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_20 = NULL;
                                                      t = d_12;
                                                      if((g_12 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, g_12);
                                                      t = r_0(t);
                                                      p_20 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_20, f_12);
                                                      t = r_0(t);
                                                      LocalPopChoice(f_8);
                                                    }
                                                  else
                                                    {
                                                      t = e_8;
                                                      t = k_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    g_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm g_8 = t;
                                                      int h_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm t_20 = NULL;
                                                          t = d_12;
                                                          if((g_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, g_12);
                                                          t = r_0(t);
                                                          t_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_20, f_12);
                                                          t = r_0(t);
                                                          LocalPopChoice(h_8);
                                                        }
                                                      else
                                                        {
                                                          t = g_8;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm i_8 = t;
                                                          int j_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm y_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                              t = r_0(t);
                                                              y_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, y_20);
                                                              t = r_0(t);
                                                              LocalPopChoice(j_8);
                                                            }
                                                          else
                                                            {
                                                              t = i_8;
                                                              t = k_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_12;
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
                                d_12 = ATgetArgument(t, 0);
                                t = d_12;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    b_12 = ATgetArgument(t, 0);
                                    t = j_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm k_8 = t;
                                            int l_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_5;
                                                t = r_0(t);
                                                LocalPopChoice(l_8);
                                              }
                                            else
                                              {
                                                t = k_8;
                                                t = k_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                h_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm m_8 = t;
                                                  int n_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                      t = r_0(t);
                                                      p_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, p_21);
                                                      t = r_0(t);
                                                      LocalPopChoice(n_8);
                                                    }
                                                  else
                                                    {
                                                      t = m_8;
                                                      t = k_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm o_8 = t;
                                                int p_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm q_8 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(p_8);
                                                    {
                                                      ATerm r_8 = t;
                                                      int s_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm v_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, d_12);
                                                          t = r_0(t);
                                                          v_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_21, f_12);
                                                          t = r_0(t);
                                                          LocalPopChoice(s_8);
                                                        }
                                                      else
                                                        {
                                                          t = r_8;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = o_8;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        t = g_12;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            c_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm t_8 = t;
                                                              int u_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm f_22 = NULL,g_22 = NULL;
                                                                  t = b_12;
                                                                  if((c_12 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, c_12);
                                                                  t = r_0(t);
                                                                  g_22 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, g_22);
                                                                  t = r_0(t);
                                                                  f_22 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_22, f_12);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(u_8);
                                                                }
                                                              else
                                                                {
                                                                  t = t_8;
                                                                  t = k_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = k_12;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            g_12 = ATgetArgument(t, 0);
                                                            h_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm v_8 = t;
                                                              int w_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm m_22 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                                  t = r_0(t);
                                                                  m_22 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, m_22);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(w_8);
                                                                }
                                                              else
                                                                {
                                                                  t = v_8;
                                                                  t = k_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = k_12;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = j_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm x_8 = t;
                                            int y_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_5;
                                                t = r_0(t);
                                                LocalPopChoice(y_8);
                                              }
                                            else
                                              {
                                                t = x_8;
                                                t = k_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                h_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm z_8 = t;
                                                  int a_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm v_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                      t = r_0(t);
                                                      v_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, v_22);
                                                      t = r_0(t);
                                                      LocalPopChoice(a_9);
                                                    }
                                                  else
                                                    {
                                                      t = z_8;
                                                      t = k_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm b_9 = t;
                                                int c_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm d_9 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(c_9);
                                                    {
                                                      ATerm e_9 = t;
                                                      int f_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm b_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, d_12);
                                                          t = r_0(t);
                                                          b_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_23, f_12);
                                                          t = r_0(t);
                                                          LocalPopChoice(f_9);
                                                        }
                                                      else
                                                        {
                                                          t = e_9;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = b_9;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm g_9 = t;
                                                          int h_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                              t = r_0(t);
                                                              g_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, g_23);
                                                              t = r_0(t);
                                                              LocalPopChoice(h_9);
                                                            }
                                                          else
                                                            {
                                                              t = g_9;
                                                              t = k_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_12;
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
                                    d_12 = ATgetArgument(t, 0);
                                    y_11 = ATgetArgument(t, 1);
                                    z_11 = ATgetArgument(t, 2);
                                    t = j_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm i_9 = t;
                                            int j_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_5;
                                                t = r_0(t);
                                                LocalPopChoice(j_9);
                                              }
                                            else
                                              {
                                                t = i_9;
                                                t = k_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                h_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm k_9 = t;
                                                  int l_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                      t = r_0(t);
                                                      p_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, p_23);
                                                      t = r_0(t);
                                                      LocalPopChoice(l_9);
                                                    }
                                                  else
                                                    {
                                                      t = k_9;
                                                      t = k_12;
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
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, d_12, y_11, z_11);
                                                          t = r_0(t);
                                                          v_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_23, f_12);
                                                          t = r_0(t);
                                                          LocalPopChoice(q_9);
                                                        }
                                                      else
                                                        {
                                                          t = p_9;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = m_9;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm r_9 = t;
                                                          int s_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_24 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                              t = r_0(t);
                                                              a_24 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, a_24);
                                                              t = r_0(t);
                                                              LocalPopChoice(s_9);
                                                            }
                                                          else
                                                            {
                                                              t = r_9;
                                                              t = k_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = j_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm t_9 = t;
                                            int u_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_5;
                                                t = r_0(t);
                                                LocalPopChoice(u_9);
                                              }
                                            else
                                              {
                                                t = t_9;
                                                t = k_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                h_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm v_9 = t;
                                                  int w_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm j_24 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                      t = r_0(t);
                                                      j_24 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, j_24);
                                                      t = r_0(t);
                                                      LocalPopChoice(w_9);
                                                    }
                                                  else
                                                    {
                                                      t = v_9;
                                                      t = k_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    g_12 = ATgetArgument(t, 0);
                                                    h_12 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm x_9 = t;
                                                      int y_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm o_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                          t = r_0(t);
                                                          o_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, o_24);
                                                          t = r_0(t);
                                                          LocalPopChoice(y_9);
                                                        }
                                                      else
                                                        {
                                                          t = x_9;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = k_12;
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
                            e_12 = ATgetArgument(t, 0);
                            t = e_12;
                            if(match_cons(t, sym_Op_2))
                              {
                                d_12 = ATgetArgument(t, 0);
                                y_11 = ATgetArgument(t, 1);
                                t = j_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = i_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm z_9 = t;
                                        int a_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_z_5;
                                            t = r_0(t);
                                            LocalPopChoice(a_10);
                                          }
                                        else
                                          {
                                            t = z_9;
                                            t = k_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            g_12 = ATgetArgument(t, 0);
                                            h_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm b_10 = t;
                                              int c_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm d_25 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                  t = r_0(t);
                                                  d_25 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, d_25);
                                                  t = r_0(t);
                                                  LocalPopChoice(c_10);
                                                }
                                              else
                                                {
                                                  t = b_10;
                                                  t = k_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                t = g_12;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    c_12 = ATgetArgument(t, 0);
                                                    x_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm d_10 = t;
                                                      int e_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, c_12, d_12);
                                                          {
                                                            ATerm f_10 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm h_2 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    h_2 = ATgetArgument(t, 0);
                                                                    if((h_2 != ATgetArgument(t, 1)))
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
                                                                t = f_10;
                                                              }
                                                          }
                                                          t = term_z_5;
                                                          t = bottomup_1_0(r_0, t);
                                                          LocalPopChoice(e_10);
                                                        }
                                                      else
                                                        {
                                                          t = d_10;
                                                          {
                                                            ATerm g_10 = t;
                                                            int h_10 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm i_25 = NULL;
                                                                t = d_12;
                                                                if((c_12 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, x_11, y_11);
                                                                t = genzip_4_0(a_1, e_1, f_1, i_1, t);
                                                                i_25 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_25), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, c_12, x_11)));
                                                                t = bottomup_1_0(r_0, t);
                                                                LocalPopChoice(h_10);
                                                              }
                                                            else
                                                              {
                                                                t = g_10;
                                                                {
                                                                  ATerm i_10 = t;
                                                                  int j_10 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = e_12;
                                                                      if((g_12 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, g_12);
                                                                      t = r_0(t);
                                                                      LocalPopChoice(j_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = i_10;
                                                                      t = k_12;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm k_10 = t;
                                                    int l_10 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = e_12;
                                                        if((g_12 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, g_12);
                                                        t = r_0(t);
                                                        LocalPopChoice(l_10);
                                                      }
                                                    else
                                                      {
                                                        t = k_10;
                                                        t = k_12;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    g_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm m_10 = t;
                                                      int n_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = e_12;
                                                          if((g_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, g_12);
                                                          t = r_0(t);
                                                          LocalPopChoice(n_10);
                                                        }
                                                      else
                                                        {
                                                          t = m_10;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm o_10 = t;
                                                          int p_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm y_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                              t = r_0(t);
                                                              y_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, y_26);
                                                              t = r_0(t);
                                                              LocalPopChoice(p_10);
                                                            }
                                                          else
                                                            {
                                                              t = o_10;
                                                              t = k_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = j_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = i_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm q_10 = t;
                                        int r_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_z_5;
                                            t = r_0(t);
                                            LocalPopChoice(r_10);
                                          }
                                        else
                                          {
                                            t = q_10;
                                            t = k_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            g_12 = ATgetArgument(t, 0);
                                            h_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm s_10 = t;
                                              int t_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm l_27 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                  t = r_0(t);
                                                  l_27 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, l_27);
                                                  t = r_0(t);
                                                  LocalPopChoice(t_10);
                                                }
                                              else
                                                {
                                                  t = s_10;
                                                  t = k_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                {
                                                  ATerm u_10 = t;
                                                  int v_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = e_12;
                                                      if((g_12 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, g_12);
                                                      t = r_0(t);
                                                      LocalPopChoice(v_10);
                                                    }
                                                  else
                                                    {
                                                      t = u_10;
                                                      t = k_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    g_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm w_10 = t;
                                                      int x_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = e_12;
                                                          if((g_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, g_12);
                                                          t = r_0(t);
                                                          LocalPopChoice(x_10);
                                                        }
                                                      else
                                                        {
                                                          t = w_10;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm y_10 = t;
                                                          int z_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                              t = r_0(t);
                                                              z_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, z_27);
                                                              t = r_0(t);
                                                              LocalPopChoice(z_10);
                                                            }
                                                          else
                                                            {
                                                              t = y_10;
                                                              t = k_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_12;
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
                                e_12 = ATgetArgument(t, 0);
                                t = e_12;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    d_12 = ATgetArgument(t, 0);
                                    t = j_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm l_12 = t;
                                            int z_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_5;
                                                t = r_0(t);
                                                LocalPopChoice(z_12);
                                              }
                                            else
                                              {
                                                t = l_12;
                                                t = k_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                h_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm a_13 = t;
                                                  int o_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                      t = r_0(t);
                                                      o_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, o_28);
                                                      t = r_0(t);
                                                      LocalPopChoice(o_13);
                                                    }
                                                  else
                                                    {
                                                      t = a_13;
                                                      t = k_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm p_13 = t;
                                                int q_13 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm x_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(q_13);
                                                    {
                                                      ATerm y_13 = t;
                                                      int z_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, e_12);
                                                          t = r_0(t);
                                                          LocalPopChoice(z_13);
                                                        }
                                                      else
                                                        {
                                                          t = y_13;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = p_13;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        t = g_12;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            c_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm b_14 = t;
                                                              int d_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm v_28 = NULL;
                                                                  t = d_12;
                                                                  if((c_12 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, c_12);
                                                                  t = r_0(t);
                                                                  v_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, v_28);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(d_14);
                                                                }
                                                              else
                                                                {
                                                                  t = b_14;
                                                                  t = k_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = k_12;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            g_12 = ATgetArgument(t, 0);
                                                            h_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm h_14 = t;
                                                              int i_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm b_29 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                                  t = r_0(t);
                                                                  b_29 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, b_29);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(i_14);
                                                                }
                                                              else
                                                                {
                                                                  t = h_14;
                                                                  t = k_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = k_12;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = j_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm j_14 = t;
                                            int k_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_5;
                                                t = r_0(t);
                                                LocalPopChoice(k_14);
                                              }
                                            else
                                              {
                                                t = j_14;
                                                t = k_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                h_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm l_14 = t;
                                                  int m_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm m_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                      t = r_0(t);
                                                      m_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, m_29);
                                                      t = r_0(t);
                                                      LocalPopChoice(m_14);
                                                    }
                                                  else
                                                    {
                                                      t = l_14;
                                                      t = k_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm p_14 = t;
                                                int q_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm r_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(q_14);
                                                    {
                                                      ATerm s_14 = t;
                                                      int t_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, e_12);
                                                          t = r_0(t);
                                                          LocalPopChoice(t_14);
                                                        }
                                                      else
                                                        {
                                                          t = s_14;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = p_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm u_14 = t;
                                                          int v_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                              t = r_0(t);
                                                              v_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, v_29);
                                                              t = r_0(t);
                                                              LocalPopChoice(v_14);
                                                            }
                                                          else
                                                            {
                                                              t = u_14;
                                                              t = k_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_12;
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
                                    e_12 = ATgetArgument(t, 0);
                                    f_12 = ATgetArgument(t, 1);
                                    a_12 = ATgetArgument(t, 2);
                                    t = j_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm w_14 = t;
                                            int a_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_5;
                                                t = r_0(t);
                                                LocalPopChoice(a_15);
                                              }
                                            else
                                              {
                                                t = w_14;
                                                t = k_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                h_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm b_15 = t;
                                                  int c_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm g_30 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                      t = r_0(t);
                                                      g_30 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, g_30);
                                                      t = r_0(t);
                                                      LocalPopChoice(c_15);
                                                    }
                                                  else
                                                    {
                                                      t = b_15;
                                                      t = k_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm f_15 = t;
                                                int h_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm i_15 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(h_15);
                                                    {
                                                      ATerm j_15 = t;
                                                      int k_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, e_12, f_12, a_12);
                                                          t = r_0(t);
                                                          LocalPopChoice(k_15);
                                                        }
                                                      else
                                                        {
                                                          t = j_15;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = f_15;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm m_15 = t;
                                                          int t_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm s_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                              t = r_0(t);
                                                              s_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, s_30);
                                                              t = r_0(t);
                                                              LocalPopChoice(t_15);
                                                            }
                                                          else
                                                            {
                                                              t = m_15;
                                                              t = k_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_12;
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
                                        e_12 = ATgetArgument(t, 0);
                                        f_12 = ATgetArgument(t, 1);
                                        t = j_12;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = i_12;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm u_15 = t;
                                                int v_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_z_5;
                                                    t = r_0(t);
                                                    LocalPopChoice(v_15);
                                                  }
                                                else
                                                  {
                                                    t = u_15;
                                                    {
                                                      ATerm w_15 = t;
                                                      int x_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_31 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_12, f_12);
                                                          t = r_0(t);
                                                          j_31 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, e_12, j_31);
                                                          t = r_0(t);
                                                          LocalPopChoice(x_15);
                                                        }
                                                      else
                                                        {
                                                          t = w_15;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    g_12 = ATgetArgument(t, 0);
                                                    h_12 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm y_15 = t;
                                                      int z_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm q_31 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                          t = r_0(t);
                                                          q_31 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, q_31);
                                                          t = r_0(t);
                                                          LocalPopChoice(z_15);
                                                        }
                                                      else
                                                        {
                                                          t = y_15;
                                                          {
                                                            ATerm a_16 = t;
                                                            int b_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm u_31 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, j_12, f_12);
                                                                t = r_0(t);
                                                                u_31 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, e_12, u_31);
                                                                t = r_0(t);
                                                                LocalPopChoice(b_16);
                                                              }
                                                            else
                                                              {
                                                                t = a_16;
                                                                t = k_12;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm c_16 = t;
                                                          int d_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, j_12, f_12);
                                                              t = r_0(t);
                                                              z_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, e_12, z_31);
                                                              t = r_0(t);
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
                                                                    ATerm d_32 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                                    t = r_0(t);
                                                                    d_32 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, d_32);
                                                                    t = r_0(t);
                                                                    LocalPopChoice(f_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = e_16;
                                                                    t = k_12;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm g_16 = t;
                                                        int h_16 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm j_32 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, j_12, f_12);
                                                            t = r_0(t);
                                                            j_32 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, e_12, j_32);
                                                            t = r_0(t);
                                                            LocalPopChoice(h_16);
                                                          }
                                                        else
                                                          {
                                                            t = g_16;
                                                            t = k_12;
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
                                            e_12 = ATgetArgument(t, 0);
                                            f_12 = ATgetArgument(t, 1);
                                            t = j_12;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = i_12;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm i_16 = t;
                                                    int j_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_z_5;
                                                        t = r_0(t);
                                                        LocalPopChoice(j_16);
                                                      }
                                                    else
                                                      {
                                                        t = i_16;
                                                        {
                                                          ATerm k_16 = t;
                                                          int l_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, j_12, f_12);
                                                              t = r_0(t);
                                                              f_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, f_33);
                                                              t = r_0(t);
                                                              LocalPopChoice(l_16);
                                                            }
                                                          else
                                                            {
                                                              t = k_16;
                                                              t = k_12;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm m_16 = t;
                                                          int n_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                              t = r_0(t);
                                                              n_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, n_33);
                                                              t = r_0(t);
                                                              LocalPopChoice(n_16);
                                                            }
                                                          else
                                                            {
                                                              t = m_16;
                                                              {
                                                                ATerm o_16 = t;
                                                                int p_16 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm r_33 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, j_12, f_12);
                                                                    t = r_0(t);
                                                                    r_33 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, r_33);
                                                                    t = r_0(t);
                                                                    LocalPopChoice(p_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = o_16;
                                                                    t = k_12;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            g_12 = ATgetArgument(t, 0);
                                                            h_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm q_16 = t;
                                                              int r_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm z_33 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, j_12, f_12);
                                                                  t = r_0(t);
                                                                  z_33 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, z_33);
                                                                  t = r_0(t);
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
                                                                        ATerm d_34 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                                        t = r_0(t);
                                                                        d_34 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, d_34);
                                                                        t = r_0(t);
                                                                        LocalPopChoice(t_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = s_16;
                                                                        t = k_12;
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
                                                                ATerm j_34 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, j_12, f_12);
                                                                t = r_0(t);
                                                                j_34 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, j_34);
                                                                t = r_0(t);
                                                                LocalPopChoice(v_16);
                                                              }
                                                            else
                                                              {
                                                                t = u_16;
                                                                t = k_12;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = j_12;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = i_12;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm w_16 = t;
                                                    int x_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_z_5;
                                                        t = r_0(t);
                                                        LocalPopChoice(x_16);
                                                      }
                                                    else
                                                      {
                                                        t = w_16;
                                                        t = k_12;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm y_16 = t;
                                                          int z_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm t_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                              t = r_0(t);
                                                              t_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, t_34);
                                                              t = r_0(t);
                                                              LocalPopChoice(z_16);
                                                            }
                                                          else
                                                            {
                                                              t = y_16;
                                                              t = k_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            g_12 = ATgetArgument(t, 0);
                                                            h_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm a_17 = t;
                                                              int b_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm c_35 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                                  t = r_0(t);
                                                                  c_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, c_35);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(b_17);
                                                                }
                                                              else
                                                                {
                                                                  t = a_17;
                                                                  t = k_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = k_12;
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
                    j_12 = ATgetArgument(t, 0);
                    i_12 = ATgetArgument(t, 1);
                    t = i_12;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = j_12;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm c_17 = t;
                            int d_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_t_5;
                                t = r_0(t);
                                LocalPopChoice(d_17);
                              }
                            else
                              {
                                t = c_17;
                                t = j_12;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = i_12;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    g_12 = ATgetArgument(t, 0);
                                    h_12 = ATgetArgument(t, 1);
                                    t = j_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        g_12 = ATgetArgument(t, 0);
                                        t = j_12;
                                      }
                                    else
                                      {
                                        t = j_12;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = j_12;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm e_17 = t;
                            int f_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_t_5;
                                t = r_0(t);
                                LocalPopChoice(f_17);
                              }
                            else
                              {
                                t = e_17;
                                {
                                  ATerm g_17 = t;
                                  int h_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = i_12;
                                      if((j_12 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(h_17);
                                    }
                                  else
                                    {
                                      t = g_17;
                                      t = k_12;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = i_12;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    g_12 = ATgetArgument(t, 0);
                                    h_12 = ATgetArgument(t, 1);
                                    {
                                      ATerm i_17 = t;
                                      int j_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm i_37 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, h_12, i_12);
                                          t = r_0(t);
                                          i_37 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, g_12, i_37);
                                          t = r_0(t);
                                          LocalPopChoice(j_17);
                                        }
                                      else
                                        {
                                          t = i_17;
                                          {
                                            ATerm k_17 = t;
                                            int l_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = i_12;
                                                if((j_12 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(l_17);
                                              }
                                            else
                                              {
                                                t = k_17;
                                                t = k_12;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        g_12 = ATgetArgument(t, 0);
                                        {
                                          ATerm m_17 = t;
                                          int n_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = i_12;
                                              if((j_12 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(n_17);
                                            }
                                          else
                                            {
                                              t = m_17;
                                              {
                                                ATerm o_17 = t;
                                                int p_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = g_12;
                                                    t = topdown_1_0(j_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, g_12);
                                                    t = bottomup_1_0(r_0, t);
                                                    LocalPopChoice(p_17);
                                                  }
                                                else
                                                  {
                                                    t = o_17;
                                                    t = k_12;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm q_17 = t;
                                        int r_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = i_12;
                                            if((j_12 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(r_17);
                                          }
                                        else
                                          {
                                            t = q_17;
                                            t = k_12;
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
                        j_12 = ATgetArgument(t, 0);
                        i_12 = ATgetArgument(t, 1);
                        t = i_12;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = j_12;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm s_17 = t;
                                int t_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_t_5;
                                    t = r_0(t);
                                    LocalPopChoice(t_17);
                                  }
                                else
                                  {
                                    t = s_17;
                                    t = i_12;
                                  }
                              }
                            else
                              {
                                ATerm u_17 = t;
                                int v_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_t_5;
                                    t = r_0(t);
                                    LocalPopChoice(v_17);
                                  }
                                else
                                  {
                                    t = u_17;
                                    t = k_12;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = j_12;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm w_17 = t;
                                    int x_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_z_5;
                                        t = r_0(t);
                                        LocalPopChoice(x_17);
                                      }
                                    else
                                      {
                                        t = w_17;
                                        t = i_12;
                                      }
                                  }
                                else
                                  {
                                    ATerm y_17 = t;
                                    int a_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_z_5;
                                        t = r_0(t);
                                        LocalPopChoice(a_18);
                                      }
                                    else
                                      {
                                        t = y_17;
                                        t = k_12;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    e_12 = ATgetArgument(t, 0);
                                    f_12 = ATgetArgument(t, 1);
                                    t = j_12;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = i_12;
                                      }
                                    else
                                      {
                                        ATerm b_18 = t;
                                        int c_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm v_38 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, j_12, e_12);
                                            t = conc_0_0(t);
                                            v_38 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, v_38, f_12);
                                            t = bottomup_1_0(r_0, t);
                                            LocalPopChoice(c_18);
                                          }
                                        else
                                          {
                                            t = b_18;
                                            t = k_12;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = j_12;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = i_12;
                                      }
                                    else
                                      {
                                        t = k_12;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm d_18 = t;
                        int e_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm f_18 = ATgetArgument(t, 0);
                                i_12 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(e_18);
                            t = i_12;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm g_18 = t;
                                int h_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_t_5;
                                    t = r_0(t);
                                    LocalPopChoice(h_18);
                                  }
                                else
                                  {
                                    t = g_18;
                                    t = k_12;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm k_18 = t;
                                    int l_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_z_5;
                                        t = r_0(t);
                                        LocalPopChoice(l_18);
                                      }
                                    else
                                      {
                                        t = k_18;
                                        t = k_12;
                                      }
                                  }
                                else
                                  {
                                    t = k_12;
                                  }
                              }
                          }
                        else
                          {
                            t = d_18;
                            if(match_cons(t, sym_All_1))
                              {
                                j_12 = ATgetArgument(t, 0);
                                t = j_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm m_18 = t;
                                    int n_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_t_5;
                                        t = r_0(t);
                                        LocalPopChoice(n_18);
                                      }
                                    else
                                      {
                                        t = m_18;
                                        t = k_12;
                                      }
                                  }
                                else
                                  {
                                    t = k_12;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    j_12 = ATgetArgument(t, 0);
                                    t = j_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm o_18 = t;
                                        int s_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_t_5;
                                            t = r_0(t);
                                            LocalPopChoice(s_18);
                                          }
                                        else
                                          {
                                            t = o_18;
                                            {
                                              ATerm t_18 = t;
                                              int v_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,t_39 = NULL,u_39 = NULL;
                                                  t = k_12;
                                                  t = new_0_0(t);
                                                  g_39 = t;
                                                  t = bottomup_1_0(r_0, t);
                                                  t_39 = t;
                                                  t = (ATerm) ATempty;
                                                  t = r_0(t);
                                                  u_39 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(u_39), t_39);
                                                  t = r_0(t);
                                                  h_39 = t;
                                                  t = g_39;
                                                  t = bottomup_1_0(r_0, t);
                                                  q_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, q_39);
                                                  t = r_0(t);
                                                  p_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, p_39);
                                                  t = r_0(t);
                                                  j_39 = t;
                                                  t = j_12;
                                                  t = bottomup_1_0(r_0, t);
                                                  l_39 = t;
                                                  t = g_39;
                                                  t = bottomup_1_0(r_0, t);
                                                  o_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, o_39);
                                                  t = r_0(t);
                                                  n_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, n_39);
                                                  t = r_0(t);
                                                  m_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, l_39, m_39);
                                                  t = r_0(t);
                                                  k_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, j_39, k_39);
                                                  t = r_0(t);
                                                  i_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, h_39, i_39);
                                                  t = r_0(t);
                                                  LocalPopChoice(v_18);
                                                }
                                              else
                                                {
                                                  t = t_18;
                                                  t = k_12;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm w_18 = t;
                                            int x_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_5;
                                                t = r_0(t);
                                                LocalPopChoice(x_18);
                                              }
                                            else
                                              {
                                                t = w_18;
                                                {
                                                  ATerm a_19 = t;
                                                  int b_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
                                                      t = k_12;
                                                      t = new_0_0(t);
                                                      z_39 = t;
                                                      t = bottomup_1_0(r_0, t);
                                                      k_40 = t;
                                                      t = (ATerm) ATempty;
                                                      t = r_0(t);
                                                      l_40 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(l_40), k_40);
                                                      t = r_0(t);
                                                      a_40 = t;
                                                      t = z_39;
                                                      t = bottomup_1_0(r_0, t);
                                                      j_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, j_40);
                                                      t = r_0(t);
                                                      i_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, i_40);
                                                      t = r_0(t);
                                                      c_40 = t;
                                                      t = j_12;
                                                      t = bottomup_1_0(r_0, t);
                                                      e_40 = t;
                                                      t = z_39;
                                                      t = bottomup_1_0(r_0, t);
                                                      h_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, h_40);
                                                      t = r_0(t);
                                                      g_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, g_40);
                                                      t = r_0(t);
                                                      f_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_40, f_40);
                                                      t = r_0(t);
                                                      d_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_40, d_40);
                                                      t = r_0(t);
                                                      b_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, a_40, b_40);
                                                      t = r_0(t);
                                                      LocalPopChoice(b_19);
                                                    }
                                                  else
                                                    {
                                                      t = a_19;
                                                      t = k_12;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                h_12 = ATgetArgument(t, 1);
                                                t = h_12;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    b_11 = ATgetArgument(t, 0);
                                                    m_11 = ATgetArgument(t, 1);
                                                    t = b_11;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        c_11 = ATgetArgument(t, 0);
                                                        t = g_12;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            c_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm c_19 = t;
                                                              int d_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm q_40 = NULL,r_40 = NULL,t_40 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, c_11);
                                                                  t = r_0(t);
                                                                  t_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_40, m_11);
                                                                  t = r_0(t);
                                                                  r_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, c_12, r_40);
                                                                  t = r_0(t);
                                                                  q_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, q_40);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(d_19);
                                                                }
                                                              else
                                                                {
                                                                  t = c_19;
                                                                  {
                                                                    ATerm f_19 = t;
                                                                    int g_19 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,i_41 = NULL,j_41 = NULL;
                                                                        t = k_12;
                                                                        t = new_0_0(t);
                                                                        w_40 = t;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        i_41 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = r_0(t);
                                                                        j_41 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(j_41), i_41);
                                                                        t = r_0(t);
                                                                        x_40 = t;
                                                                        t = w_40;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        g_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, g_41);
                                                                        t = r_0(t);
                                                                        f_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, f_41);
                                                                        t = r_0(t);
                                                                        z_40 = t;
                                                                        t = j_12;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        b_41 = t;
                                                                        t = w_40;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        e_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, e_41);
                                                                        t = r_0(t);
                                                                        d_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, d_41);
                                                                        t = r_0(t);
                                                                        c_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, b_41, c_41);
                                                                        t = r_0(t);
                                                                        a_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, z_40, a_41);
                                                                        t = r_0(t);
                                                                        y_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, x_40, y_40);
                                                                        t = r_0(t);
                                                                        LocalPopChoice(g_19);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = f_19;
                                                                        t = k_12;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm h_19 = t;
                                                            int i_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,a_42 = NULL,b_42 = NULL;
                                                                t = k_12;
                                                                t = new_0_0(t);
                                                                o_41 = t;
                                                                t = bottomup_1_0(r_0, t);
                                                                a_42 = t;
                                                                t = (ATerm) ATempty;
                                                                t = r_0(t);
                                                                b_42 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(b_42), a_42);
                                                                t = r_0(t);
                                                                p_41 = t;
                                                                t = o_41;
                                                                t = bottomup_1_0(r_0, t);
                                                                y_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, y_41);
                                                                t = r_0(t);
                                                                x_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, x_41);
                                                                t = r_0(t);
                                                                r_41 = t;
                                                                t = j_12;
                                                                t = bottomup_1_0(r_0, t);
                                                                t_41 = t;
                                                                t = o_41;
                                                                t = bottomup_1_0(r_0, t);
                                                                w_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, w_41);
                                                                t = r_0(t);
                                                                v_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, v_41);
                                                                t = r_0(t);
                                                                u_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, t_41, u_41);
                                                                t = r_0(t);
                                                                s_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, r_41, s_41);
                                                                t = r_0(t);
                                                                q_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, p_41, q_41);
                                                                t = r_0(t);
                                                                LocalPopChoice(i_19);
                                                              }
                                                            else
                                                              {
                                                                t = h_19;
                                                                t = k_12;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = g_12;
                                                        {
                                                          ATerm j_19 = t;
                                                          int k_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL;
                                                              t = k_12;
                                                              t = new_0_0(t);
                                                              e_42 = t;
                                                              t = bottomup_1_0(r_0, t);
                                                              p_42 = t;
                                                              t = (ATerm) ATempty;
                                                              t = r_0(t);
                                                              q_42 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(q_42), p_42);
                                                              t = r_0(t);
                                                              f_42 = t;
                                                              t = e_42;
                                                              t = bottomup_1_0(r_0, t);
                                                              o_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, o_42);
                                                              t = r_0(t);
                                                              n_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, n_42);
                                                              t = r_0(t);
                                                              h_42 = t;
                                                              t = j_12;
                                                              t = bottomup_1_0(r_0, t);
                                                              j_42 = t;
                                                              t = e_42;
                                                              t = bottomup_1_0(r_0, t);
                                                              m_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, m_42);
                                                              t = r_0(t);
                                                              l_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, l_42);
                                                              t = r_0(t);
                                                              k_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, j_42, k_42);
                                                              t = r_0(t);
                                                              i_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_42, i_42);
                                                              t = r_0(t);
                                                              g_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_42, g_42);
                                                              t = r_0(t);
                                                              LocalPopChoice(k_19);
                                                            }
                                                          else
                                                            {
                                                              t = j_19;
                                                              t = k_12;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = g_12;
                                                    {
                                                      ATerm m_19 = t;
                                                      int n_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL;
                                                          t = k_12;
                                                          t = new_0_0(t);
                                                          t_42 = t;
                                                          t = bottomup_1_0(r_0, t);
                                                          e_43 = t;
                                                          t = (ATerm) ATempty;
                                                          t = r_0(t);
                                                          f_43 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(f_43), e_43);
                                                          t = r_0(t);
                                                          u_42 = t;
                                                          t = t_42;
                                                          t = bottomup_1_0(r_0, t);
                                                          d_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, d_43);
                                                          t = r_0(t);
                                                          c_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, c_43);
                                                          t = r_0(t);
                                                          w_42 = t;
                                                          t = j_12;
                                                          t = bottomup_1_0(r_0, t);
                                                          y_42 = t;
                                                          t = t_42;
                                                          t = bottomup_1_0(r_0, t);
                                                          b_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, b_43);
                                                          t = r_0(t);
                                                          a_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, a_43);
                                                          t = r_0(t);
                                                          z_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_42, z_42);
                                                          t = r_0(t);
                                                          x_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_42, x_42);
                                                          t = r_0(t);
                                                          v_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, u_42, v_42);
                                                          t = r_0(t);
                                                          LocalPopChoice(n_19);
                                                        }
                                                      else
                                                        {
                                                          t = m_19;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    g_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm o_19 = t;
                                                      int p_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, g_12);
                                                          t = r_0(t);
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
                                                                ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL;
                                                                t = k_12;
                                                                t = new_0_0(t);
                                                                j_43 = t;
                                                                t = bottomup_1_0(r_0, t);
                                                                w_43 = t;
                                                                t = (ATerm) ATempty;
                                                                t = r_0(t);
                                                                x_43 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(x_43), w_43);
                                                                t = r_0(t);
                                                                k_43 = t;
                                                                t = j_43;
                                                                t = bottomup_1_0(r_0, t);
                                                                v_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, v_43);
                                                                t = r_0(t);
                                                                u_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, u_43);
                                                                t = r_0(t);
                                                                m_43 = t;
                                                                t = j_12;
                                                                t = bottomup_1_0(r_0, t);
                                                                o_43 = t;
                                                                t = j_43;
                                                                t = bottomup_1_0(r_0, t);
                                                                t_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, t_43);
                                                                t = r_0(t);
                                                                s_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, s_43);
                                                                t = r_0(t);
                                                                r_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, o_43, r_43);
                                                                t = r_0(t);
                                                                n_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, m_43, n_43);
                                                                t = r_0(t);
                                                                l_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, k_43, l_43);
                                                                t = r_0(t);
                                                                LocalPopChoice(r_19);
                                                              }
                                                            else
                                                              {
                                                                t = q_19;
                                                                t = k_12;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm s_19 = t;
                                                    int u_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL;
                                                        t = k_12;
                                                        t = new_0_0(t);
                                                        a_44 = t;
                                                        t = bottomup_1_0(r_0, t);
                                                        m_44 = t;
                                                        t = (ATerm) ATempty;
                                                        t = r_0(t);
                                                        n_44 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(n_44), m_44);
                                                        t = r_0(t);
                                                        b_44 = t;
                                                        t = a_44;
                                                        t = bottomup_1_0(r_0, t);
                                                        l_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, l_44);
                                                        t = r_0(t);
                                                        j_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, j_44);
                                                        t = r_0(t);
                                                        d_44 = t;
                                                        t = j_12;
                                                        t = bottomup_1_0(r_0, t);
                                                        f_44 = t;
                                                        t = a_44;
                                                        t = bottomup_1_0(r_0, t);
                                                        i_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, i_44);
                                                        t = r_0(t);
                                                        h_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, h_44);
                                                        t = r_0(t);
                                                        g_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, f_44, g_44);
                                                        t = r_0(t);
                                                        e_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, d_44, e_44);
                                                        t = r_0(t);
                                                        c_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, b_44, c_44);
                                                        t = r_0(t);
                                                        LocalPopChoice(u_19);
                                                      }
                                                    else
                                                      {
                                                        t = s_19;
                                                        t = k_12;
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
                                        j_12 = ATgetArgument(t, 0);
                                        t = j_12;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm v_19 = t;
                                            int w_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_t_5;
                                                t = r_0(t);
                                                LocalPopChoice(w_19);
                                              }
                                            else
                                              {
                                                t = v_19;
                                                t = k_12;
                                              }
                                          }
                                        else
                                          {
                                            t = k_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            j_12 = ATgetArgument(t, 0);
                                            t = j_12;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm y_19 = t;
                                                int z_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_z_5;
                                                    t = r_0(t);
                                                    LocalPopChoice(z_19);
                                                  }
                                                else
                                                  {
                                                    t = y_19;
                                                    t = k_12;
                                                  }
                                              }
                                            else
                                              {
                                                t = k_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                j_12 = ATgetArgument(t, 0);
                                                t = j_12;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm a_20 = t;
                                                    int b_20 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_z_5;
                                                        t = r_0(t);
                                                        LocalPopChoice(b_20);
                                                      }
                                                    else
                                                      {
                                                        t = a_20;
                                                        t = k_12;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = k_12;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm d_20 = t;
                                                int e_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm f_20 = ATgetArgument(t, 0);
                                                        i_12 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(e_20);
                                                    t = i_12;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm g_20 = t;
                                                        int h_20 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_z_5;
                                                            t = r_0(t);
                                                            LocalPopChoice(h_20);
                                                          }
                                                        else
                                                          {
                                                            t = g_20;
                                                            t = k_12;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = k_12;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = d_20;
                                                    {
                                                      ATerm i_20 = t;
                                                      int j_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm k_20 = ATgetArgument(t, 0);
                                                              i_12 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(j_20);
                                                          {
                                                            ATerm m_20 = t;
                                                            int n_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = i_12;
                                                                t = fetch_1_0(k_1, t);
                                                                t = term_z_5;
                                                                t = bottomup_1_0(r_0, t);
                                                                LocalPopChoice(n_20);
                                                              }
                                                            else
                                                              {
                                                                t = m_20;
                                                                t = k_12;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = i_20;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              j_12 = ATgetArgument(t, 0);
                                                              i_12 = ATgetArgument(t, 1);
                                                              t = i_12;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = j_12;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = i_12;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          g_12 = ATgetArgument(t, 0);
                                                                          h_12 = ATgetArgument(t, 1);
                                                                          t = j_12;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = j_12;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = j_12;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = i_12;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          g_12 = ATgetArgument(t, 0);
                                                                          h_12 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm o_20 = t;
                                                                            int q_20 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm a_46 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, h_12, i_12);
                                                                                t = r_0(t);
                                                                                a_46 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, g_12, a_46);
                                                                                t = r_0(t);
                                                                                LocalPopChoice(q_20);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = o_20;
                                                                                {
                                                                                  ATerm r_20 = t;
                                                                                  int s_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = i_12;
                                                                                      if((j_12 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(s_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = r_20;
                                                                                      t = k_12;
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
                                                                              t = i_12;
                                                                              if((j_12 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(v_20);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_20;
                                                                              t = k_12;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  j_12 = ATgetArgument(t, 0);
                                                                  i_12 = ATgetArgument(t, 1);
                                                                  a_11 = ATgetArgument(t, 2);
                                                                  t = a_11;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm w_20 = t;
                                                                      int x_20 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_12, i_12);
                                                                          t = r_0(t);
                                                                          LocalPopChoice(x_20);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = w_20;
                                                                          t = k_12;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = k_12;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      j_12 = ATgetArgument(t, 0);
                                                                      i_12 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm z_20 = t;
                                                                        int a_21 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, j_12, i_12);
                                                                            t = r_0(t);
                                                                            LocalPopChoice(a_21);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = z_20;
                                                                            t = k_12;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          j_12 = ATgetArgument(t, 0);
                                                                          t = j_12;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              g_12 = ATgetFirst((ATermList) t);
                                                                              h_12 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm b_21 = t;
                                                                                int c_21 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm o_46 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, h_12);
                                                                                    t = r_0(t);
                                                                                    o_46 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, g_12, o_46);
                                                                                    t = r_0(t);
                                                                                    LocalPopChoice(c_21);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_21;
                                                                                    t = k_12;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm d_21 = t;
                                                                                  int e_21 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_z_5;
                                                                                      t = r_0(t);
                                                                                      LocalPopChoice(e_21);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = d_21;
                                                                                      t = k_12;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = k_12;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              j_12 = ATgetArgument(t, 0);
                                                                              t = j_12;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  g_12 = ATgetFirst((ATermList) t);
                                                                                  h_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm f_21 = t;
                                                                                    int g_21 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm u_46 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, h_12);
                                                                                        t = r_0(t);
                                                                                        u_46 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, g_12, u_46);
                                                                                        t = r_0(t);
                                                                                        LocalPopChoice(g_21);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = f_21;
                                                                                        t = k_12;
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
                                                                                          t = term_z_5;
                                                                                          t = r_0(t);
                                                                                          LocalPopChoice(i_21);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = h_21;
                                                                                          t = k_12;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = k_12;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  j_12 = ATgetArgument(t, 0);
                                                                                  t = j_12;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      g_12 = ATgetFirst((ATermList) t);
                                                                                      h_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm j_21 = t;
                                                                                        int k_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm a_47 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, h_12);
                                                                                            t = r_0(t);
                                                                                            a_47 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, a_47);
                                                                                            t = r_0(t);
                                                                                            LocalPopChoice(k_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = j_21;
                                                                                            t = k_12;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm l_21 = t;
                                                                                          int m_21 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_t_5;
                                                                                              t = r_0(t);
                                                                                              LocalPopChoice(m_21);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = l_21;
                                                                                              t = k_12;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = k_12;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      j_12 = ATgetArgument(t, 0);
                                                                                      i_12 = ATgetArgument(t, 1);
                                                                                      a_11 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm n_21 = t;
                                                                                        int o_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL;
                                                                                            t = term_q_21;
                                                                                            t = bottomup_1_0(r_0, t);
                                                                                            j_47 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = r_0(t);
                                                                                            m_47 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(m_47), a_11);
                                                                                            t = r_0(t);
                                                                                            l_47 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(l_47), j_12);
                                                                                            t = r_0(t);
                                                                                            k_47 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, j_47, k_47);
                                                                                            t = r_0(t);
                                                                                            i_47 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, i_12, i_47);
                                                                                            t = r_0(t);
                                                                                            LocalPopChoice(o_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = n_21;
                                                                                            t = k_12;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          j_12 = ATgetArgument(t, 0);
                                                                                          i_12 = ATgetArgument(t, 1);
                                                                                          a_11 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm r_21 = t;
                                                                                            int s_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, i_12);
                                                                                                t = r_0(t);
                                                                                                s_47 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, a_11);
                                                                                                t = r_0(t);
                                                                                                v_47 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = r_0(t);
                                                                                                w_47 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(w_47), v_47);
                                                                                                t = r_0(t);
                                                                                                u_47 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(u_47), j_12);
                                                                                                t = r_0(t);
                                                                                                t_47 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(t_47), s_47);
                                                                                                t = r_0(t);
                                                                                                r_47 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, r_47);
                                                                                                t = r_0(t);
                                                                                                LocalPopChoice(s_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = r_21;
                                                                                                t = k_12;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              j_12 = ATgetArgument(t, 0);
                                                                                              i_12 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm t_21 = t;
                                                                                                int u_21 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm a_48 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, i_12);
                                                                                                    t = r_0(t);
                                                                                                    a_48 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, j_12, a_48);
                                                                                                    t = r_0(t);
                                                                                                    LocalPopChoice(u_21);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = t_21;
                                                                                                    t = k_12;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  j_12 = ATgetArgument(t, 0);
                                                                                                  i_12 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm w_21 = t;
                                                                                                    int x_21 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm e_48 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, j_12);
                                                                                                        t = r_0(t);
                                                                                                        e_48 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, e_48, i_12);
                                                                                                        t = r_0(t);
                                                                                                        LocalPopChoice(x_21);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = w_21;
                                                                                                        t = k_12;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      j_12 = ATgetArgument(t, 0);
                                                                                                      i_12 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm y_21 = t;
                                                                                                        int z_21 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm i_48 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, i_12);
                                                                                                            t = r_0(t);
                                                                                                            i_48 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, i_48, j_12);
                                                                                                            t = r_0(t);
                                                                                                            LocalPopChoice(z_21);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = y_21;
                                                                                                            t = k_12;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          j_12 = ATgetArgument(t, 0);
                                                                                                          i_12 = ATgetArgument(t, 1);
                                                                                                          t = i_12;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              e_12 = ATgetArgument(t, 0);
                                                                                                              f_12 = ATgetArgument(t, 1);
                                                                                                              t = j_12;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = i_12;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm a_22 = t;
                                                                                                                  int b_22 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm w_48 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, j_12, e_12);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      w_48 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, w_48, f_12);
                                                                                                                      t = bottomup_1_0(r_0, t);
                                                                                                                      LocalPopChoice(b_22);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = a_22;
                                                                                                                      t = k_12;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  e_12 = ATgetArgument(t, 0);
                                                                                                                  f_12 = ATgetArgument(t, 1);
                                                                                                                  a_12 = ATgetArgument(t, 2);
                                                                                                                  t = a_12;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = f_12;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = e_12;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              d_12 = ATgetArgument(t, 0);
                                                                                                                              t = j_12;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = i_12;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      g_12 = ATgetFirst((ATermList) t);
                                                                                                                                      h_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = h_12;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = g_12;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              c_12 = ATgetArgument(t, 0);
                                                                                                                                              x_11 = ATgetArgument(t, 1);
                                                                                                                                              p_11 = ATgetArgument(t, 2);
                                                                                                                                              s_11 = ATgetArgument(t, 3);
                                                                                                                                              t = p_11;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = x_11;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm c_22 = t;
                                                                                                                                                      int d_22 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = d_12;
                                                                                                                                                          if((c_12 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = s_11;
                                                                                                                                                          {
                                                                                                                                                            ATerm e_22 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm l_1 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm h_22 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(h_22, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((c_12 != ATgetArgument(h_22, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(h_22, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm i_22 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(i_22) != AT_LIST) || !(ATisEmpty(i_22))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm j_22 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(j_22) != AT_LIST) || !(ATisEmpty(j_22))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  return(t);
                                                                                                                                                                }
                                                                                                                                                                t = oncetd_1_0(l_1, t);
                                                                                                                                                                PopChoice();
                                                                                                                                                                _fail(t);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                t = e_22;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = s_11;
                                                                                                                                                          t = bottomup_1_0(r_0, t);
                                                                                                                                                          LocalPopChoice(d_22);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = c_22;
                                                                                                                                                          t = k_12;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = k_12;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = k_12;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = k_12;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = k_12;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = k_12;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = j_12;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = i_12;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = k_12;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = j_12;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = i_12;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = k_12;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = j_12;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = i_12;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = k_12;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = j_12;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = i_12;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = k_12;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              j_12 = ATgetArgument(t, 0);
                                                                                                              i_12 = ATgetArgument(t, 1);
                                                                                                              t = j_12;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = i_12;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = k_12;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = k_12;
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
ATerm map_1_0 (ATerm h_127 (ATerm), ATerm t)
{
  static ATerm w_50 (ATerm t)
  {
    ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL;
    t_50 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_50;
      }
    else
      {
        ATerm f_3 = NULL,i_3 = NULL,j_3 = NULL,x_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_50 = ATgetFirst((ATermList) t);
            v_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_50);
        f_3 = t;
        t = u_50;
        t = h_127(t);
        i_3 = t;
        t = v_50;
        t = w_50(t);
        j_3 = t;
        t = (ATerm) ATinsert(CheckATermList(j_3), i_3);
        x_0 = t;
        t = SSLsetAnnotations(x_0, f_3);
      }
    return(t);
  }
  t = w_50(t);
  return(t);
}
static ATerm d_11 (ATerm w_44, ATerm x_44, ATerm t)
{
  ATerm y_50 = NULL;
  t = SSL_fputc(w_44, x_44);
  y_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_50);
  return(t);
}
static ATerm e_11 (ATerm x_49, ATerm y_49, ATerm t)
{
  ATerm z_50 = NULL;
  t = SSL_write_term_to_stream_text(x_49, y_49);
  z_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_50);
  return(t);
}
static ATerm g_11 (ATerm a_121 (ATerm), ATerm s_434, ATerm d_50, ATerm t)
{
  ATerm a_51 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_434, term_k_22);
  t = k_11(t);
  a_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_51, d_50);
  t = a_121(t);
  t = fclose_0_0(t);
  t = d_50;
  return(t);
}
static ATerm f_11 (ATerm t_49, ATerm u_49, ATerm t)
{
  ATerm b_51 = NULL;
  t = SSL_write_term_to_stream_baf(t_49, u_49);
  b_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_51);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_22 = ATgetArgument(t, 0);
      if(match_cons(l_22, sym_Stream_1))
        {
          k_51 = ATgetArgument(l_22, 0);
        }
      else
        _fail(t);
      l_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11(k_51, l_51, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL,q_51 = NULL,r_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_22 = ATgetArgument(t, 0);
      if(match_cons(n_22, sym_Stream_1))
        {
          q_51 = ATgetArgument(n_22, 0);
        }
      else
        _fail(t);
      r_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(q_51, r_51, t);
  m_51 = t;
  t = term_o_22;
  n_51 = t;
  t = m_51;
  if(match_cons(t, sym_Stream_1))
    {
      o_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_22, m_51);
  t = d_11(n_51, o_51, t);
  return(t);
}
ATerm output_1_0 (ATerm g_134 (ATerm), ATerm t)
{
  ATerm c_51 = NULL,f_51 = NULL;
  t = g_134(t);
  f_51 = t;
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_51 = NULL,h_51 = NULL;
        t = term_r_22;
        g_51 = t;
        t = term_s_22;
        h_51 = t;
        t = term_t_22;
        t = q_11(g_51, h_51, t);
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = term_u_22;
      }
  }
  c_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_51, f_51);
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_51 = NULL,j_51 = NULL;
        t = term_r_22;
        i_51 = t;
        t = term_y_22;
        j_51 = t;
        t = term_z_22;
        t = q_11(i_51, j_51, t);
        t = (ATerm) ATmakeAppl(sym__2, c_51, f_51);
        LocalPopChoice(x_22);
        if(match_cons(t, sym__2))
          {
            ATerm a_23 = ATgetArgument(t, 0);
            ATerm c_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_11(n_1, c_51, f_51, t);
      }
    else
      {
        t = w_22;
        if(match_cons(t, sym__2))
          {
            ATerm d_23 = ATgetArgument(t, 0);
            ATerm e_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_11(o_1, c_51, f_51, t);
      }
  }
  return(t);
}
static ATerm f_52 (ATerm z_51, ATerm t)
{
  t = SSL_fclose(z_51);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL;
  d_52 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_52 = ATgetArgument(t, 0);
      {
        ATerm f_23 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_52);
            LocalPopChoice(h_23);
          }
        else
          {
            t = f_23;
            t = f_52(d_52, t);
          }
      }
    }
  else
    {
      t = f_52(d_52, t);
    }
  return(t);
}
static ATerm h_11 (ATerm z_49, ATerm t)
{
  t = SSL_read_term_from_stream(z_49);
  return(t);
}
static ATerm i_11 (ATerm p_43, ATerm q_43, ATerm t)
{
  t = SSL_strcat(p_43, q_43);
  return(t);
}
static ATerm j_11 (ATerm y_44, ATerm z_44, ATerm t)
{
  ATerm g_52 = NULL;
  t = SSL_fopen(y_44, z_44);
  g_52 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_52);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_52 = NULL;
  t = SSL_stdin_stream();
  h_52 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_52);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_52 = NULL;
  t = SSL_stdout_stream();
  i_52 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_52);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_52 = NULL;
  t = SSL_stderr_stream();
  k_52 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_52);
  return(t);
}
static ATerm x_53 (ATerm q_52, ATerm t)
{
  ATerm r_52 = NULL;
  t = SSL_explode_term(q_52);
  if(match_cons(t, sym__2))
    {
      ATerm i_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_23 = ATgetArgument(t, 1);
        if(((ATgetType(j_23) == AT_LIST) && !(ATisEmpty(j_23))))
          {
            r_52 = ATgetFirst((ATermList) j_23);
            {
              ATerm k_23 = (ATerm) ATgetNext((ATermList) j_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_52;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_52;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_52;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_52;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm y_53 (ATerm u_52, ATerm v_52, ATerm w_52, ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL,a_53 = NULL,e_53 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(w_52);
  a_53 = t;
  t = u_52;
  if(match_cons(t, sym_Path_1))
    {
      e_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_53, v_52);
  b_1 = t;
  t = SSLsetAnnotations(b_1, a_53);
  if(match_cons(t, sym__2))
    {
      x_52 = ATgetArgument(t, 0);
      y_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(x_52, y_52, t);
  return(t);
}
static ATerm z_53 (ATerm h_53, ATerm i_53, ATerm j_53, ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL,p_53 = NULL,d_1 = NULL;
  t = SSLgetAnnotations(j_53);
  m_53 = t;
  t = SSL_is_string(h_53);
  p_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_53, i_53);
  d_1 = t;
  t = SSLsetAnnotations(d_1, m_53);
  if(match_cons(t, sym__2))
    {
      k_53 = ATgetArgument(t, 0);
      l_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(k_53, l_53, t);
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL;
  r_53 = t;
  if(match_cons(t, sym__2))
    {
      s_53 = ATgetArgument(t, 0);
      t_53 = ATgetArgument(t, 1);
      {
        ATerm l_23 = t;
        int m_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_53(r_53, t);
            LocalPopChoice(m_23);
          }
        else
          {
            t = l_23;
            {
              ATerm n_23 = t;
              int o_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_53(s_53, t_53, r_53, t);
                  LocalPopChoice(o_23);
                }
              else
                {
                  t = n_23;
                  t = z_53(s_53, t_53, r_53, t);
                }
            }
          }
      }
    }
  else
    {
      t = x_53(r_53, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL,i_54 = NULL;
  i_54 = t;
  {
    ATerm q_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, i_54, term_s_23);
        t = k_11(t);
        LocalPopChoice(r_23);
      }
    else
      {
        t = q_23;
        {
          ATerm w_3 = NULL,x_3 = NULL;
          t = term_t_23;
          x_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_23, i_54);
          t = i_11(x_3, i_54, t);
          w_3 = t;
          t = SSL_perror(w_3);
          _fail(t);
        }
      }
  }
  c_54 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_11(d_54, t);
  b_54 = t;
  t = c_54;
  t = fclose_0_0(t);
  t = b_54;
  return(t);
}
ATerm input_1_0 (ATerm h_134 (ATerm), ATerm t)
{
  ATerm u_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_54 = NULL,m_54 = NULL;
      t = term_r_22;
      l_54 = t;
      t = term_x_23;
      m_54 = t;
      t = term_y_23;
      t = q_11(l_54, m_54, t);
      LocalPopChoice(w_23);
    }
  else
    {
      t = u_23;
      t = term_z_23;
    }
  t = ReadFromFile_0_0(t);
  t = h_134(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL;
  n_54 = t;
  t = term_b_24;
  t = whoami_0_0(t);
  o_54 = t;
  t = term_c_24;
  q_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_24), o_54), term_d_24);
  r_54 = t;
  t = SSL_printnl(q_54, r_54);
  t = term_f_24;
  p_54 = t;
  t = SSL_exit(p_54);
  t = n_54;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm t_54 = NULL;
  t_54 = t;
  if(match_string(t, "-k"))
    {
      t = t_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_54;
    }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL;
  u_54 = t;
  t = SSL_string_to_int(u_54);
  v_54 = t;
  t = term_g_24;
  w_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_24, v_54);
  t = t_11(w_54, v_54, t);
  t = u_54;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_h_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_1, s_1, t_1, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm y_54 = NULL;
  y_54 = t;
  if(match_string(t, "-S"))
    {
      t = y_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_54;
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm z_54 = NULL,a_55 = NULL;
  t = term_i_24;
  z_54 = t;
  t = term_k_24;
  a_55 = t;
  t = term_l_24;
  t = t_11(z_54, a_55, t);
  t = term_m_24;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_n_24;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL;
  b_55 = t;
  t = SSL_string_to_int(b_55);
  c_55 = t;
  t = term_i_24;
  d_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_24, c_55);
  t = t_11(d_55, c_55, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_55);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_p_24;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL;
  t = term_q_24;
  e_55 = t;
  t = term_b_24;
  f_55 = t;
  t = term_r_24;
  t = t_11(e_55, f_55, t);
  t = term_s_24;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_t_24;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_1, v_1, y_1, t);
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
            t = ArgOption_3_0(z_1, d_2, e_2, t);
            LocalPopChoice(x_24);
          }
        else
          {
            t = w_24;
            t = Option_3_0(f_2, q_2, r_2, t);
          }
      }
    }
  return(t);
}
static ATerm t_11 (ATerm r_48, ATerm s_48, ATerm t)
{
  ATerm g_55 = NULL,l_55 = NULL;
  t = term_r_22;
  g_55 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_22, r_48, s_48);
  t = lookup_table_0_1(g_55, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(r_48, s_48, l_55, t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_22, r_48, s_48);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL;
      t = term_b_24;
      t = e_0(t);
      t_55 = t;
      t = term_y_24;
      u_55 = t;
      t = term_z_24;
      v_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_24, term_z_24, t_55);
      t = r_11(u_55, v_55, t_55, t);
      _fail(t);
    }
  else
    {
      ATerm y_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_55 = ATgetFirst((ATermList) t);
          s_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_55;
      t = c_0(t);
      t = term_b_24;
      t = d_0(t);
      y_55 = t;
      t = (ATerm) ATinsert(CheckATermList(s_55), y_55);
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm a_56 = NULL;
  a_56 = t;
  if(match_string(t, "-o"))
    {
      t = a_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_56;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm b_56 = NULL,c_56 = NULL;
  b_56 = t;
  t = term_s_22;
  c_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_22, b_56);
  t = t_11(c_56, b_56, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_56);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_2, t_2, u_2, t);
  return(t);
}
static ATerm r_11 (ATerm v_53, ATerm w_53, ATerm u_53, ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL;
  e_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_53, w_53);
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_25 = ATgetArgument(t, 0);
            ATerm f_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_53, w_53);
        t = q_11(v_53, w_53, t);
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        t = (ATerm) ATempty;
      }
  }
  f_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_53, w_53, (ATerm) ATinsert(CheckATermList(f_56), u_53));
  t = lookup_table_0_1(v_53, t);
  i_56 = t;
  t = (ATerm) ATinsert(CheckATermList(f_56), u_53);
  g_56 = t;
  t = i_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(w_53, g_56, h_56, t);
  t = e_56;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL;
      t = term_b_24;
      t = n_0(t);
      t_56 = t;
      t = term_y_24;
      u_56 = t;
      t = term_z_24;
      v_56 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_24, term_z_24, t_56);
      t = r_11(u_56, v_56, t_56, t);
      _fail(t);
    }
  else
    {
      ATerm z_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_56 = ATgetFirst((ATermList) t);
          q_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_56;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_56 = ATgetFirst((ATermList) t);
          s_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_56;
      t = k_0(t);
      t = r_56;
      t = l_0(t);
      z_56 = t;
      t = (ATerm) ATinsert(CheckATermList(s_56), z_56);
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm b_57 = NULL;
  b_57 = t;
  if(match_string(t, "-i"))
    {
      t = b_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_57;
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL;
  c_57 = t;
  t = term_x_23;
  d_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_23, c_57);
  t = t_11(d_57, c_57, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_57);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_g_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_2, w_2, x_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_24;
  t = whoami_0_0(t);
  e_57 = t;
  t = term_c_24;
  g_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_25), e_57);
  h_57 = t;
  t = SSL_printnl(g_57, h_57);
  t = term_f_24;
  f_57 = t;
  t = SSL_exit(f_57);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL;
  t = term_r_22;
  i_57 = t;
  t = term_j_25;
  j_57 = t;
  t = term_k_25;
  t = q_11(i_57, j_57, t);
  return(t);
}
static ATerm l_11 (ATerm d_51, ATerm e_51, ATerm t)
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_51, e_51);
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      t = SSL_addr(d_51, e_51);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_125 (ATerm), ATerm y_125 (ATerm), ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL,u_57 = NULL;
  l_57 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_57;
      t = x_125(t);
    }
  else
    {
      ATerm a_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_57 = ATgetFirst((ATermList) t);
          u_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_57;
      t = foldr_2_0(x_125, y_125, t);
      a_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_57, a_58);
      t = y_125(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_k_24;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL;
  if(match_cons(t, sym__2))
    {
      d_4 = ATgetArgument(t, 0);
      e_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_11(d_4, e_4, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_58 = NULL,z_3 = NULL,a_4 = NULL;
  t = times_0_0(t);
  a_4 = t;
  t = SSL_explode_term(a_4);
  if(match_cons(t, sym__2))
    {
      ATerm n_25 = ATgetArgument(t, 0);
      z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3;
  t = foldr_2_0(y_2, z_2, t);
  d_58 = t;
  t = SSL_TicksToSeconds(d_58);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL;
  o_58 = t;
  if(match_cons(t, sym__2))
    {
      p_58 = ATgetArgument(t, 0);
      q_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_58;
        if((p_58 != t))
          {
            _fail(t);
          }
        t = o_58;
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        t = (ATerm) ATmakeAppl(sym__2, p_58, q_58);
        {
          ATerm x_25 = t;
          int y_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_58, q_58);
              LocalPopChoice(y_25);
            }
          else
            {
              t = x_25;
              t = SSL_gtr(p_58, q_58);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_58, q_58);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_118 (ATerm), ATerm t)
{
  ATerm u_58 = NULL;
  u_58 = t;
  {
    ATerm z_25 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_58 = NULL,y_58 = NULL,z_58 = NULL;
        t = term_r_22;
        y_58 = t;
        t = term_i_24;
        z_58 = t;
        t = term_c_26;
        t = q_11(y_58, z_58, t);
        w_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_58, term_f_24);
        t = geq_0_0(t);
        t = u_58;
        t = x_118(t);
        LocalPopChoice(b_26);
      }
    else
      {
        t = z_25;
        t = u_58;
      }
  }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL,e_59 = NULL,h_59 = NULL;
  t = run_time_0_0(t);
  b_59 = t;
  t = term_b_24;
  t = whoami_0_0(t);
  c_59 = t;
  t = term_c_24;
  e_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_26), b_59), term_d_26), c_59);
  h_59 = t;
  t = SSL_printnl(e_59, h_59);
  t = (ATerm) ATmakeAppl(sym__2, term_c_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_26), b_59), term_d_26), c_59));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_59 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_24;
  i_59 = t;
  t = SSL_exit(i_59);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm s_59 = NULL,t_59 = NULL;
  t_59 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_59;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_59 = ATgetArgument(t, 0);
          {
            ATerm q_4 = NULL,c_4 = NULL;
            t = SSLgetAnnotations(t_59);
            q_4 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_59);
            c_4 = t;
            t = SSLsetAnnotations(c_4, q_4);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_59;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_133 (ATerm), ATerm t)
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_59 = NULL,m_59 = NULL;
      t = term_r_22;
      l_59 = t;
      t = term_h_26;
      m_59 = t;
      t = term_i_26;
      t = q_11(l_59, m_59, t);
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
      t = fetch_1_0(b_3, t);
    }
  t = x_133(t);
  return(t);
}
static ATerm u_11 (ATerm n_57, ATerm o_57, ATerm p_57, ATerm t)
{
  ATerm v_59 = NULL;
  t = SSL_hashtable_put(p_57, n_57, o_57);
  v_59 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_59);
  return(t);
}
ATerm lookup_table_0_1 (ATerm h_55, ATerm t)
{
  ATerm e_60 = NULL;
  t = table_hashtable_0_0(t);
  e_60 = t;
  {
    ATerm j_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_4 = NULL;
        t = e_60;
        if(match_cons(t, sym_Hashtable_1))
          {
            w_4 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_11(h_55, w_4, t);
        LocalPopChoice(k_26);
      }
    else
      {
        t = j_26;
        {
          ATerm b_5 = NULL;
          t = h_55;
          t = table_create_0_0(t);
          t = e_60;
          if(match_cons(t, sym_Hashtable_1))
            {
              b_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_11(h_55, b_5, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm v_57, ATerm w_57, ATerm t)
{
  ATerm h_60 = NULL;
  t = SSL_hashtable_create(v_57, w_57);
  h_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_60);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm i_60 = NULL,j_60 = NULL,k_60 = NULL,m_60 = NULL,n_60 = NULL;
  i_60 = t;
  t = term_l_26;
  m_60 = t;
  t = term_m_26;
  n_60 = t;
  t = i_60;
  t = new_hashtable_0_2(m_60, n_60, t);
  j_60 = t;
  t = i_60;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(i_60, j_60, k_60, t);
  t = i_60;
  return(t);
}
static ATerm n_11 (ATerm s_57, ATerm t_57, ATerm t)
{
  ATerm o_60 = NULL;
  t = SSL_hashtable_remove(t_57, s_57);
  o_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_60);
  return(t);
}
static ATerm o_11 (ATerm x_57, ATerm t)
{
  ATerm p_60 = NULL;
  t = SSL_hashtable_destroy(x_57);
  p_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_60);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm q_60 = NULL;
  t = SSL_table_hashtable();
  q_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_60);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL;
  r_60 = t;
  t = table_hashtable_0_0(t);
  s_60 = t;
  t = lookup_table_0_1(r_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_11(u_60, t);
  t = s_60;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_11(r_60, t_60, t);
  t = r_60;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm b_61 = NULL,c_61 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_61 = ATgetFirst((ATermList) t);
      c_61 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_61 = NULL,h_61 = NULL;
        static ATerm c_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_61)), not_null(h_61));
          return(t);
        }
        t = c_61;
        t = i_0(t);
        if(((g_61 != NULL) && (g_61 != t)))
          _fail(t);
        else
          g_61 = t;
        t = b_61;
        t = g_0(t);
        if(((h_61 != NULL) && (h_61 != t)))
          _fail(t);
        else
          h_61 = t;
        t = c_61;
        t = reverse_acc_2_0(g_0, c_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_24;
      t = i_0(t);
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm n_61 = NULL,o_61 = NULL,p_61 = NULL,f_7 = NULL;
  p_61 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_61);
  n_61 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_61);
  f_7 = t;
  t = SSLsetAnnotations(f_7, n_61);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm t_61 = NULL;
  t_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_61), term_n_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_61 = NULL,k_61 = NULL;
  ATerm o_26 = t;
  int p_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_61 = NULL,m_61 = NULL;
      t = term_r_22;
      l_61 = t;
      t = term_j_25;
      m_61 = t;
      t = term_k_25;
      t = q_11(l_61, m_61, t);
      LocalPopChoice(p_26);
    }
  else
    {
      t = o_26;
      t = fetch_1_0(d_3, t);
    }
  t = term_q_26;
  t = echo_0_0(t);
  t = term_y_24;
  j_61 = t;
  t = term_z_24;
  k_61 = t;
  t = term_r_26;
  t = q_11(j_61, k_61, t);
  t = reverse_acc_2_0(_id, e_3, t);
  t = map_1_0(g_3, t);
  return(t);
}
ATerm fetch_1_0 (ATerm r_127 (ATerm), ATerm t)
{
  static ATerm q_62 (ATerm t)
  {
    ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL;
    n_62 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_62 = ATgetFirst((ATermList) t);
        p_62 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_26 = t;
      int t_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_5 = NULL,j_5 = NULL,h_7 = NULL;
          t = SSLgetAnnotations(n_62);
          g_5 = t;
          t = o_62;
          t = r_127(t);
          j_5 = t;
          t = (ATerm) ATinsert(CheckATermList(p_62), j_5);
          h_7 = t;
          t = SSLsetAnnotations(h_7, g_5);
          LocalPopChoice(t_26);
        }
      else
        {
          t = s_26;
          {
            ATerm r_5 = NULL,u_5 = NULL,i_7 = NULL;
            t = SSLgetAnnotations(n_62);
            r_5 = t;
            t = p_62;
            t = q_62(t);
            u_5 = t;
            t = (ATerm) ATinsert(CheckATermList(u_5), o_62);
            i_7 = t;
            t = SSLsetAnnotations(i_7, r_5);
          }
        }
    }
    return(t);
  }
  t = q_62(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL;
  u_62 = t;
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_62;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_26 = ATgetFirst((ATermList) t);
                ATerm x_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_62;
          }
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        t = (ATerm) ATinsert(ATempty, u_62);
      }
  }
  v_62 = t;
  t = term_u_22;
  w_62 = t;
  t = SSL_printnl(w_62, v_62);
  t = u_62;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL;
  t = term_r_22;
  a_63 = t;
  t = term_j_25;
  b_63 = t;
  t = term_k_25;
  t = q_11(a_63, b_63, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm v_11 (ATerm q_57, ATerm r_57, ATerm t)
{
  t = SSL_hashtable_get(r_57, q_57);
  return(t);
}
static ATerm q_11 (ATerm o_55, ATerm p_55, ATerm t)
{
  ATerm c_63 = NULL;
  t = lookup_table_0_1(o_55, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_11(p_55, c_63, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm e_63 = NULL,f_63 = NULL;
  t = term_z_26;
  e_63 = t;
  t = term_b_24;
  f_63 = t;
  t = term_a_27;
  t = t_11(e_63, f_63, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_b_27;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL;
  t = term_z_26;
  i_63 = t;
  t = term_b_24;
  j_63 = t;
  t = term_a_27;
  t = t_11(i_63, j_63, t);
  t = term_c_27;
  g_63 = t;
  t = term_b_24;
  h_63 = t;
  t = term_d_27;
  t = t_11(g_63, h_63, t);
  t = term_e_27;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_f_27;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_3, k_3, l_3, t);
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
      t = Option_3_0(m_3, n_3, o_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,l_7 = NULL;
  p_63 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_63 = ATgetFirst((ATermList) t);
      m_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_63);
  k_63 = t;
  t = l_63;
  t = z_91(t);
  n_63 = t;
  t = m_63;
  t = a_92(t);
  o_63 = t;
  t = (ATerm) ATinsert(CheckATermList(o_63), n_63);
  l_7 = t;
  t = SSLsetAnnotations(l_7, k_63);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_136 (ATerm), ATerm t)
{
  ATerm u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,z_63 = NULL,a_64 = NULL,n_7 = NULL;
  u_63 = t;
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_27;
        t = a_136(t);
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
      }
  }
  t = u_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_63 = ATgetFirst((ATermList) t);
      x_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_63);
  v_63 = t;
  t = term_j_25;
  a_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_25, w_63);
  t = t_11(a_64, w_63, t);
  t = x_63;
  {
    static ATerm k_64 (ATerm t)
    {
      ATerm m_27 = t;
      int n_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_27 = t;
          int p_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_64 = NULL;
              d_64 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_64;
              LocalPopChoice(p_27);
            }
          else
            {
              t = o_27;
              t = a_136(t);
              t = Cons_2_0(_id, k_64, t);
            }
          LocalPopChoice(n_27);
        }
      else
        {
          t = m_27;
          {
            ATerm g_64 = NULL,h_64 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_64 = ATgetFirst((ATermList) t);
                h_64 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_64), (ATerm) ATmakeAppl(sym_Undefined_1, g_64));
          }
        }
      return(t);
    }
    t = k_64(t);
  }
  z_63 = t;
  t = (ATerm) ATinsert(CheckATermList(z_63), (ATerm) ATmakeAppl(sym_Program_1, w_63));
  n_7 = t;
  t = SSLsetAnnotations(n_7, v_63);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm x_64 = NULL;
  x_64 = t;
  if(match_string(t, "--help"))
    {
      t = x_64;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_64;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_64;
        }
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm y_64 = NULL,z_64 = NULL;
  t = term_h_26;
  y_64 = t;
  t = term_b_24;
  z_64 = t;
  t = term_q_27;
  t = t_11(y_64, z_64, t);
  t = term_r_27;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_s_27;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm z_135 (ATerm), ATerm t)
{
  ATerm p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL;
  r_64 = t;
  t = term_y_24;
  s_64 = t;
  t = term_t_27;
  t = lookup_table_0_1(s_64, t);
  w_64 = t;
  t = term_z_24;
  t_64 = t;
  t = (ATerm) ATempty;
  u_64 = t;
  t = w_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(t_64, u_64, v_64, t);
  t = r_64;
  {
    static ATerm p_3 (ATerm t)
    {
      ATerm u_27 = t;
      int v_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_135(t);
          LocalPopChoice(v_27);
        }
      else
        {
          t = u_27;
          {
            ATerm w_27 = t;
            int x_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_3, r_3, s_3, t);
                LocalPopChoice(x_27);
              }
            else
              {
                t = w_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_3, t);
  }
  {
    ATerm y_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_65 = NULL;
        k_65 = t;
        {
          ATerm b_28 = t;
          int c_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_6 = NULL;
              t = k_65;
              {
                ATerm d_28 = t;
                int e_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_6 = NULL,d_6 = NULL;
                    t = term_r_22;
                    c_6 = t;
                    t = term_h_26;
                    d_6 = t;
                    t = term_i_26;
                    t = q_11(c_6, d_6, t);
                    LocalPopChoice(e_28);
                  }
                else
                  {
                    t = d_28;
                    t = fetch_1_0(t_3, t);
                  }
              }
              t = k_65;
              t = default_system_usage_0_0(t);
              t = term_k_24;
              b_6 = t;
              t = SSL_exit(b_6);
              LocalPopChoice(c_28);
            }
          else
            {
              t = b_28;
              {
                ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL;
                t = term_r_22;
                i_6 = t;
                t = term_z_26;
                j_6 = t;
                t = term_f_28;
                t = q_11(i_6, j_6, t);
                t = k_65;
                t = default_system_about_0_0(t);
                t = term_k_24;
                h_6 = t;
                t = SSL_exit(h_6);
              }
            }
        }
        LocalPopChoice(a_28);
      }
    else
      {
        t = y_27;
        {
          ATerm g_28 = t;
          int h_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL;
              static ATerm u_3 (ATerm t)
              {
                ATerm o_65 = NULL,p_65 = NULL,q_65 = NULL,p_7 = NULL;
                q_65 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_65 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_65);
                o_65 = t;
                t = p_65;
                if(((p_64 != NULL) && (p_64 != t)))
                  _fail(t);
                else
                  p_64 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_65);
                p_7 = t;
                t = SSLsetAnnotations(p_7, o_65);
                return(t);
              }
              t = fetch_1_0(u_3, t);
              t = term_c_24;
              m_65 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_64)), term_i_28);
              n_65 = t;
              t = SSL_printnl(m_65, n_65);
              t = (ATerm) ATmakeAppl(sym__2, term_c_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_64)), term_i_28));
              t = default_system_usage_0_0(t);
              t = term_f_24;
              l_65 = t;
              t = SSL_exit(l_65);
              LocalPopChoice(h_28);
            }
          else
            {
              t = g_28;
            }
        }
      }
  }
  q_64 = t;
  t = term_y_24;
  t = table_destroy_0_0(t);
  t = q_64;
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_133 (ATerm), ATerm a_134 (ATerm), ATerm b_134 (ATerm), ATerm c_134 (ATerm), ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL;
  t = parse_options_1_0(z_133, t);
  v_65 = t;
  t = term_j_28;
  t = table_create_0_0(t);
  t = term_j_28;
  w_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_28, term_k_28, v_65);
  t = lookup_table_0_1(w_65, t);
  z_65 = t;
  t = term_k_28;
  x_65 = t;
  t = z_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(x_65, v_65, y_65, t);
  t = v_65;
  t = b_134(t);
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_134, t);
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        {
          ATerm n_28 = t;
          int p_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_134(t);
              t = report_success_0_0(t);
              LocalPopChoice(p_28);
            }
          else
            {
              t = n_28;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
            LocalPopChoice(t_28);
          }
        else
          {
            t = s_28;
            {
              ATerm u_28 = t;
              int w_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(b_4, f_4, g_4, t);
                  LocalPopChoice(w_28);
                }
              else
                {
                  t = u_28;
                  {
                    ATerm x_28 = t;
                    int y_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(y_28);
                      }
                    else
                      {
                        t = x_28;
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
static ATerm y_3 (ATerm t)
{
  t = input_1_0(h_4, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm e_66 = NULL,f_66 = NULL;
  t = term_y_22;
  e_66 = t;
  t = term_b_24;
  f_66 = t;
  t = term_z_28;
  t = t_11(e_66, f_66, t);
  t = term_a_29;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_c_29;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = output_1_0(i_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,v_7 = NULL,u_7 = NULL,t_7 = NULL,s_7 = NULL;
  v_66 = t;
  if(match_cons(t, sym_Specification_1))
    {
      i_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_66);
  h_66 = t;
  t = i_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_66 = ATgetFirst((ATermList) t);
      l_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_66);
  j_66 = t;
  t = l_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_66 = ATgetFirst((ATermList) t);
      p_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_66);
  n_66 = t;
  t = o_66;
  if(match_cons(t, sym_Strategies_1))
    {
      s_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_66);
  r_66 = t;
  t = s_66;
  t = map_1_0(j_4, t);
  t_66 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, t_66);
  s_7 = t;
  t = SSLsetAnnotations(s_7, r_66);
  u_66 = t;
  t = p_66;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_66), u_66);
  t_7 = t;
  t = SSLsetAnnotations(t_7, n_66);
  q_66 = t;
  t = (ATerm) ATinsert(CheckATermList(q_66), k_66);
  u_7 = t;
  t = SSLsetAnnotations(u_7, j_66);
  m_66 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, m_66);
  v_7 = t;
  t = SSLsetAnnotations(v_7, h_66);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm k_67 = NULL,l_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL;
  t_67 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      k_67 = ATgetArgument(t, 0);
      l_67 = ATgetArgument(t, 1);
      r_67 = ATgetArgument(t, 2);
      s_67 = ATgetArgument(t, 3);
      {
        ATerm d_29 = t;
        int e_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_6 = NULL,v_6 = NULL,r_7 = NULL;
            t = SSLgetAnnotations(t_67);
            q_6 = t;
            t = s_67;
            t = simplify_0_0(t);
            t = alltd_1_0(k_4, t);
            v_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, k_67, l_67, r_67, v_6);
            r_7 = t;
            t = SSLsetAnnotations(r_7, q_6);
            LocalPopChoice(e_29);
          }
        else
          {
            t = d_29;
            t = t_67;
          }
      }
    }
  else
    {
      t = t_67;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL;
  y_6 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_6);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_29 = ATgetFirst((ATermList) t);
      ATerm g_29 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(g_29) != AT_LIST) || !(ATisEmpty(g_29))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, x_6);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(v_3, default_usage_0_0, _id, y_3, t);
  return(t);
}
