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
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_y_27;
ATerm term_n_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_e_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_n_25;
ATerm term_d_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_i_22;
ATerm term_e_22;
ATerm term_j_21;
ATerm term_v_5;
ATerm term_o_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_m_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_r_22);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_q_23);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym__2, term_c_24, term_d_24);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_24);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym__2, term_j_24, term_t_23);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_b_25);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_c_24);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_y_25);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym__2, term_s_24, term_t_24);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym__2, term_s_26, term_t_23);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym__2, term_v_26, term_t_23);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym__2, term_y_25, term_t_23);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym__3, term_s_24, term_t_24, (ATerm) ATempty);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_s_26);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_t_23);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm bottomup_1_0 (ATerm s_104 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm v_105 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm s_125 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm f_2 (ATerm v_1, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm r_104 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm t);
static ATerm t_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm simplify_0_0 (ATerm t);
ATerm map_1_0 (ATerm b_125 (ATerm), ATerm t);
static ATerm c_11 (ATerm v_43, ATerm w_43, ATerm t);
static ATerm d_11 (ATerm w_48, ATerm x_48, ATerm t);
static ATerm f_11 (ATerm v_118 (ATerm), ATerm x_429, ATerm c_49, ATerm t);
static ATerm e_11 (ATerm s_48, ATerm t_48, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm output_1_0 (ATerm s_131 (ATerm), ATerm t);
static ATerm d_52 (ATerm x_51, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_11 (ATerm y_48, ATerm t);
static ATerm h_11 (ATerm o_42, ATerm p_42, ATerm t);
static ATerm i_11 (ATerm x_43, ATerm y_43, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_53 (ATerm n_52, ATerm t);
static ATerm v_53 (ATerm r_52, ATerm s_52, ATerm w_52, ATerm t);
static ATerm w_53 (ATerm h_53, ATerm i_53, ATerm j_53, ATerm t);
static ATerm j_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm t_131 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm s_11 (ATerm q_47, ATerm r_47, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_11 (ATerm u_52, ATerm v_52, ATerm t_52, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_11 (ATerm c_50, ATerm d_50, ATerm t);
ATerm foldr_2_0 (ATerm r_123 (ATerm), ATerm s_123 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm s_116 (ATerm), ATerm t);
static ATerm z_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm need_help_1_0 (ATerm j_131 (ATerm), ATerm t);
static ATerm t_11 (ATerm b_56, ATerm c_56, ATerm d_56, ATerm t);
ATerm lookup_table_0_1 (ATerm g_54, ATerm t);
ATerm new_hashtable_0_2 (ATerm j_56, ATerm k_56, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm m_11 (ATerm g_56, ATerm h_56, ATerm t);
static ATerm n_11 (ATerm l_56, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm l_125 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_11 (ATerm e_56, ATerm f_56, ATerm t);
static ATerm p_11 (ATerm n_54, ATerm o_54, ATerm t);
static ATerm g_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm m_133 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm parse_options_1_0 (ATerm l_133 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm n_131 (ATerm), ATerm o_131 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm s_104 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = bottomup_1_0(s_104, t);
    return(t);
  }
  t = SRTS_all(a_0, t);
  t = s_104(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm v_105 (ATerm), ATerm t)
{
  static ATerm o_2 (ATerm t)
  {
    ATerm p_0 = t;
    int j_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_105(t);
        LocalPopChoice(j_4);
      }
    else
      {
        t = p_0;
        t = SRTS_one(o_2, t);
      }
    return(t);
  }
  t = o_2(t);
  return(t);
}
ATerm at_end_1_0 (ATerm s_125 (ATerm), ATerm t)
{
  static ATerm p_1 (ATerm t)
  {
    ATerm f_1 = NULL,g_1 = NULL,l_1 = NULL;
    l_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_1 = ATgetFirst((ATermList) t);
        g_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_0 = NULL,b_1 = NULL,s_0 = NULL;
          t = SSLgetAnnotations(l_1);
          r_0 = t;
          t = g_1;
          t = p_1(t);
          b_1 = t;
          t = (ATerm) ATinsert(CheckATermList(b_1), f_1);
          s_0 = t;
          t = SSLsetAnnotations(s_0, r_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_1;
        t = s_125(t);
      }
    return(t);
  }
  t = p_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,j_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
    }
  else
    {
      static ATerm h_0 (ATerm t)
      {
        t = not_null(j_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_0 = ATgetFirst((ATermList) t);
          if(((j_0 != NULL) && (j_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_0;
      t = at_end_1_0(h_0, t);
    }
  return(t);
}
static ATerm f_2 (ATerm v_1, ATerm t)
{
  ATerm w_1 = NULL;
  t = SSL_explode_term(v_1);
  if(match_cons(t, sym__2))
    {
      ATerm k_4 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_4) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL;
  b_2 = t;
  if(match_cons(t, sym__2))
    {
      z_1 = ATgetArgument(t, 0);
      a_2 = ATgetArgument(t, 1);
      {
        ATerm l_4 = t;
        int m_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm m_0 (ATerm t)
            {
              t = a_2;
              return(t);
            }
            t = z_1;
            t = at_end_1_0(m_0, t);
            LocalPopChoice(m_4);
          }
        else
          {
            t = l_4;
            t = f_2(b_2, t);
          }
      }
    }
  else
    {
      t = f_2(b_2, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm topdown_1_0 (ATerm r_104 (ATerm), ATerm t)
{
  static ATerm o_0 (ATerm t)
  {
    t = topdown_1_0(r_104, t);
    return(t);
  }
  t = r_104(t);
  t = SRTS_all(o_0, t);
  return(t);
}
ATerm genzip_4_0 (ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm t)
{
  static ATerm n_2 (ATerm t)
  {
    ATerm n_4 = t;
    int o_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_109(t);
        LocalPopChoice(o_4);
      }
    else
      {
        t = n_4;
        {
          ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,u_0 = NULL;
          t = e_109(t);
          m_2 = t;
          if(match_cons(t, sym__2))
            {
              i_2 = ATgetArgument(t, 0);
              j_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_2);
          h_2 = t;
          t = i_2;
          t = g_109(t);
          k_2 = t;
          t = j_2;
          t = n_2(t);
          l_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_2, l_2);
          u_0 = t;
          t = SSLsetAnnotations(u_0, h_2);
          t = f_109(t);
        }
      }
    return(t);
  }
  t = n_2(t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_4 = ATgetArgument(t, 0);
      if(((ATgetType(q_4) != AT_LIST) || !(ATisEmpty(q_4))))
        _fail(t);
      {
        ATerm r_4 = ATgetArgument(t, 1);
        if(((ATgetType(r_4) != AT_LIST) || !(ATisEmpty(r_4))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,p_18 = NULL,q_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_4 = ATgetArgument(t, 0);
      if(((ATgetType(s_4) == AT_LIST) && !(ATisEmpty(s_4))))
        {
          i_18 = ATgetFirst((ATermList) s_4);
          j_18 = (ATerm) ATgetNext((ATermList) s_4);
        }
      else
        _fail(t);
      {
        ATerm t_4 = ATgetArgument(t, 1);
        if(((ATgetType(t_4) == AT_LIST) && !(ATisEmpty(t_4))))
          {
            p_18 = ATgetFirst((ATermList) t_4);
            q_18 = (ATerm) ATgetNext((ATermList) t_4);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_18, p_18), (ATerm) ATmakeAppl(sym__2, j_18, q_18));
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm r_18 = NULL,u_18 = NULL;
  if(match_cons(t, sym__2))
    {
      r_18 = ATgetArgument(t, 0);
      u_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_18), r_18);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm x_18 = NULL,z_18 = NULL;
  if(match_cons(t, sym__2))
    {
      x_18 = ATgetArgument(t, 0);
      z_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_18), (ATerm) ATmakeAppl(sym_Match_1, z_18));
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_4 = ATgetArgument(t, 0);
      if(((ATgetType(u_4) != AT_LIST) || !(ATisEmpty(u_4))))
        _fail(t);
      {
        ATerm w_4 = ATgetArgument(t, 1);
        if(((ATgetType(w_4) != AT_LIST) || !(ATisEmpty(w_4))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,u_25 = NULL,v_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_4 = ATgetArgument(t, 0);
      if(((ATgetType(x_4) == AT_LIST) && !(ATisEmpty(x_4))))
        {
          p_25 = ATgetFirst((ATermList) x_4);
          q_25 = (ATerm) ATgetNext((ATermList) x_4);
        }
      else
        _fail(t);
      {
        ATerm y_4 = ATgetArgument(t, 1);
        if(((ATgetType(y_4) == AT_LIST) && !(ATisEmpty(y_4))))
          {
            u_25 = ATgetFirst((ATermList) y_4);
            v_25 = (ATerm) ATgetNext((ATermList) y_4);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_25, u_25), (ATerm) ATmakeAppl(sym__2, q_25, v_25));
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm w_25 = NULL,a_26 = NULL;
  if(match_cons(t, sym__2))
    {
      w_25 = ATgetArgument(t, 0);
      a_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_26), w_25);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL;
  if(match_cons(t, sym__2))
    {
      d_26 = ATgetArgument(t, 0);
      e_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_26), (ATerm) ATmakeAppl(sym_Match_1, e_26));
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm z_4 = t;
  int b_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm c_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(b_5);
      {
        ATerm t_37 = NULL,v_37 = NULL;
        t_37 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm d_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        v_37 = t;
        t = SSLgetAnnotations(t_37);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_5 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) e_5) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_5 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(g_5) != AT_LIST) || !(ATisEmpty(g_5))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = v_37;
      }
    }
  else
    {
      t = z_4;
      {
        ATerm h_5 = t;
        int j_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm k_5 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) k_5) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm l_5 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(j_5);
            _fail(t);
          }
        else
          {
            t = h_5;
          }
      }
    }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  static ATerm q_0 (ATerm t)
  {
    ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,l_11 = NULL,o_11 = NULL,r_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL;
    j_12 = t;
    if(match_cons(t, sym_Test_1))
      {
        i_12 = ATgetArgument(t, 0);
        t = i_12;
        if(match_cons(t, sym_Id_0))
          {
            ATerm m_5 = t;
            int n_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_o_5;
                t = q_0(t);
                LocalPopChoice(n_5);
              }
            else
              {
                t = m_5;
                {
                  ATerm p_5 = t;
                  int r_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
                      t = j_12;
                      t = new_0_0(t);
                      l_12 = t;
                      t = bottomup_1_0(q_0, t);
                      w_12 = t;
                      t = (ATerm) ATempty;
                      t = q_0(t);
                      x_12 = t;
                      t = (ATerm) ATinsert(CheckATermList(x_12), w_12);
                      t = q_0(t);
                      m_12 = t;
                      t = l_12;
                      t = bottomup_1_0(q_0, t);
                      v_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, v_12);
                      t = q_0(t);
                      u_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, u_12);
                      t = q_0(t);
                      o_12 = t;
                      t = i_12;
                      t = bottomup_1_0(q_0, t);
                      q_12 = t;
                      t = l_12;
                      t = bottomup_1_0(q_0, t);
                      t_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, t_12);
                      t = q_0(t);
                      s_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, s_12);
                      t = q_0(t);
                      r_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_12, r_12);
                      t = q_0(t);
                      p_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_12, p_12);
                      t = q_0(t);
                      n_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, m_12, n_12);
                      t = q_0(t);
                      LocalPopChoice(r_5);
                    }
                  else
                    {
                      t = p_5;
                      t = j_12;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm s_5 = t;
                int u_5 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_v_5;
                    t = q_0(t);
                    LocalPopChoice(u_5);
                  }
                else
                  {
                    t = s_5;
                    {
                      ATerm w_5 = t;
                      int x_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
                          t = j_12;
                          t = new_0_0(t);
                          a_13 = t;
                          t = bottomup_1_0(q_0, t);
                          l_13 = t;
                          t = (ATerm) ATempty;
                          t = q_0(t);
                          m_13 = t;
                          t = (ATerm) ATinsert(CheckATermList(m_13), l_13);
                          t = q_0(t);
                          b_13 = t;
                          t = a_13;
                          t = bottomup_1_0(q_0, t);
                          k_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, k_13);
                          t = q_0(t);
                          j_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, j_13);
                          t = q_0(t);
                          d_13 = t;
                          t = i_12;
                          t = bottomup_1_0(q_0, t);
                          f_13 = t;
                          t = a_13;
                          t = bottomup_1_0(q_0, t);
                          i_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, i_13);
                          t = q_0(t);
                          h_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, h_13);
                          t = q_0(t);
                          g_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_13, g_13);
                          t = q_0(t);
                          e_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_13, e_13);
                          t = q_0(t);
                          c_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, b_13, c_13);
                          t = q_0(t);
                          LocalPopChoice(x_5);
                        }
                      else
                        {
                          t = w_5;
                          t = j_12;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    f_12 = ATgetArgument(t, 0);
                    {
                      ATerm y_5 = t;
                      int z_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, f_12);
                          t = q_0(t);
                          LocalPopChoice(z_5);
                        }
                      else
                        {
                          t = y_5;
                          {
                            ATerm d_6 = t;
                            int e_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,a_14 = NULL,b_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,n_14 = NULL;
                                t = j_12;
                                t = new_0_0(t);
                                q_13 = t;
                                t = bottomup_1_0(q_0, t);
                                g_14 = t;
                                t = (ATerm) ATempty;
                                t = q_0(t);
                                n_14 = t;
                                t = (ATerm) ATinsert(CheckATermList(n_14), g_14);
                                t = q_0(t);
                                r_13 = t;
                                t = q_13;
                                t = bottomup_1_0(q_0, t);
                                f_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, f_14);
                                t = q_0(t);
                                e_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, e_14);
                                t = q_0(t);
                                t_13 = t;
                                t = i_12;
                                t = bottomup_1_0(q_0, t);
                                v_13 = t;
                                t = q_13;
                                t = bottomup_1_0(q_0, t);
                                b_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, b_14);
                                t = q_0(t);
                                a_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, a_14);
                                t = q_0(t);
                                w_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, v_13, w_13);
                                t = q_0(t);
                                u_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, t_13, u_13);
                                t = q_0(t);
                                s_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, r_13, s_13);
                                t = q_0(t);
                                LocalPopChoice(e_6);
                              }
                            else
                              {
                                t = d_6;
                                t = j_12;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm f_6 = t;
                    int j_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,d_15 = NULL,e_15 = NULL,g_15 = NULL,l_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
                        t = j_12;
                        t = new_0_0(t);
                        w_14 = t;
                        t = bottomup_1_0(q_0, t);
                        q_15 = t;
                        t = (ATerm) ATempty;
                        t = q_0(t);
                        r_15 = t;
                        t = (ATerm) ATinsert(CheckATermList(r_15), q_15);
                        t = q_0(t);
                        x_14 = t;
                        t = w_14;
                        t = bottomup_1_0(q_0, t);
                        p_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, p_15);
                        t = q_0(t);
                        o_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, o_15);
                        t = q_0(t);
                        z_14 = t;
                        t = i_12;
                        t = bottomup_1_0(q_0, t);
                        e_15 = t;
                        t = w_14;
                        t = bottomup_1_0(q_0, t);
                        n_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, n_15);
                        t = q_0(t);
                        l_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, l_15);
                        t = q_0(t);
                        g_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, e_15, g_15);
                        t = q_0(t);
                        d_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, z_14, d_15);
                        t = q_0(t);
                        y_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, x_14, y_14);
                        t = q_0(t);
                        LocalPopChoice(j_6);
                      }
                    else
                      {
                        t = f_6;
                        t = j_12;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            i_12 = ATgetArgument(t, 0);
            t = i_12;
            if(match_cons(t, sym_Id_0))
              {
                ATerm k_6 = t;
                int l_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_v_5;
                    t = q_0(t);
                    LocalPopChoice(l_6);
                  }
                else
                  {
                    t = k_6;
                    t = j_12;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm m_6 = t;
                    int n_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_o_5;
                        t = q_0(t);
                        LocalPopChoice(n_6);
                      }
                    else
                      {
                        t = m_6;
                        t = j_12;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        f_12 = ATgetArgument(t, 0);
                        {
                          ATerm o_6 = t;
                          int q_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, f_12);
                              t = q_0(t);
                              LocalPopChoice(q_6);
                            }
                          else
                            {
                              t = o_6;
                              t = j_12;
                            }
                        }
                      }
                    else
                      {
                        t = j_12;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                i_12 = ATgetArgument(t, 0);
                h_12 = ATgetArgument(t, 1);
                t = h_12;
                if(match_cons(t, sym_Id_0))
                  {
                    t = i_12;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = h_12;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = i_12;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                f_12 = ATgetArgument(t, 0);
                                g_12 = ATgetArgument(t, 1);
                                t = i_12;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    f_12 = ATgetArgument(t, 0);
                                    g_12 = ATgetArgument(t, 1);
                                    t = i_12;
                                  }
                                else
                                  {
                                    t = i_12;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        d_12 = ATgetArgument(t, 0);
                        e_12 = ATgetArgument(t, 1);
                        t = d_12;
                        if(match_cons(t, sym_Match_1))
                          {
                            c_12 = ATgetArgument(t, 0);
                            t = c_12;
                            if(match_cons(t, sym_Op_2))
                              {
                                a_12 = ATgetArgument(t, 0);
                                v_11 = ATgetArgument(t, 1);
                                t = i_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = h_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm r_6 = t;
                                        int s_6 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_v_5;
                                            t = q_0(t);
                                            LocalPopChoice(s_6);
                                          }
                                        else
                                          {
                                            t = r_6;
                                            t = j_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_12 = ATgetArgument(t, 0);
                                            g_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm t_6 = t;
                                              int v_6 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm y_17 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                  t = q_0(t);
                                                  y_17 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, y_17);
                                                  t = q_0(t);
                                                  LocalPopChoice(v_6);
                                                }
                                              else
                                                {
                                                  t = t_6;
                                                  t = j_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                t = f_12;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    b_12 = ATgetArgument(t, 0);
                                                    w_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm w_6 = t;
                                                      int x_6 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, b_12, a_12);
                                                          {
                                                            ATerm y_6 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm o_1 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    o_1 = ATgetArgument(t, 0);
                                                                    if((o_1 != ATgetArgument(t, 1)))
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
                                                                t = y_6;
                                                              }
                                                          }
                                                          t = term_v_5;
                                                          t = bottomup_1_0(q_0, t);
                                                          LocalPopChoice(x_6);
                                                        }
                                                      else
                                                        {
                                                          t = w_6;
                                                          {
                                                            ATerm z_6 = t;
                                                            int a_7 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm h_18 = NULL;
                                                                t = a_12;
                                                                if((b_12 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, w_11, v_11);
                                                                t = genzip_4_0(t_0, v_0, x_0, y_0, t);
                                                                h_18 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, h_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, b_12, w_11)), e_12));
                                                                t = bottomup_1_0(q_0, t);
                                                                LocalPopChoice(a_7);
                                                              }
                                                            else
                                                              {
                                                                t = z_6;
                                                                {
                                                                  ATerm b_7 = t;
                                                                  int d_7 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm g_19 = NULL;
                                                                      t = c_12;
                                                                      if((f_12 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, f_12);
                                                                      t = q_0(t);
                                                                      g_19 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_19, e_12);
                                                                      t = q_0(t);
                                                                      LocalPopChoice(d_7);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = b_7;
                                                                      t = j_12;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm g_7 = t;
                                                    int h_7 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm r_19 = NULL;
                                                        t = c_12;
                                                        if((f_12 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, f_12);
                                                        t = q_0(t);
                                                        r_19 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, r_19, e_12);
                                                        t = q_0(t);
                                                        LocalPopChoice(h_7);
                                                      }
                                                    else
                                                      {
                                                        t = g_7;
                                                        t = j_12;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    f_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm j_7 = t;
                                                      int l_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm w_19 = NULL;
                                                          t = c_12;
                                                          if((f_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, f_12);
                                                          t = q_0(t);
                                                          w_19 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_19, e_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(l_7);
                                                        }
                                                      else
                                                        {
                                                          t = j_7;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm n_7 = t;
                                                          int t_7 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = q_0(t);
                                                              b_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, b_20);
                                                              t = q_0(t);
                                                              LocalPopChoice(t_7);
                                                            }
                                                          else
                                                            {
                                                              t = n_7;
                                                              t = j_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = i_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = h_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm u_7 = t;
                                        int v_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_v_5;
                                            t = q_0(t);
                                            LocalPopChoice(v_7);
                                          }
                                        else
                                          {
                                            t = u_7;
                                            t = j_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_12 = ATgetArgument(t, 0);
                                            g_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm w_7 = t;
                                              int x_7 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm k_20 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                  t = q_0(t);
                                                  k_20 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, k_20);
                                                  t = q_0(t);
                                                  LocalPopChoice(x_7);
                                                }
                                              else
                                                {
                                                  t = w_7;
                                                  t = j_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                {
                                                  ATerm y_7 = t;
                                                  int z_7 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_20 = NULL;
                                                      t = c_12;
                                                      if((f_12 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, f_12);
                                                      t = q_0(t);
                                                      o_20 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_20, e_12);
                                                      t = q_0(t);
                                                      LocalPopChoice(z_7);
                                                    }
                                                  else
                                                    {
                                                      t = y_7;
                                                      t = j_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    f_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm a_8 = t;
                                                      int b_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm s_20 = NULL;
                                                          t = c_12;
                                                          if((f_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, f_12);
                                                          t = q_0(t);
                                                          s_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, s_20, e_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(b_8);
                                                        }
                                                      else
                                                        {
                                                          t = a_8;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm c_8 = t;
                                                          int d_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = q_0(t);
                                                              z_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, z_20);
                                                              t = q_0(t);
                                                              LocalPopChoice(d_8);
                                                            }
                                                          else
                                                            {
                                                              t = c_8;
                                                              t = j_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_12;
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
                                c_12 = ATgetArgument(t, 0);
                                t = c_12;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    a_12 = ATgetArgument(t, 0);
                                    t = i_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm e_8 = t;
                                            int f_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_v_5;
                                                t = q_0(t);
                                                LocalPopChoice(f_8);
                                              }
                                            else
                                              {
                                                t = e_8;
                                                t = j_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                g_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm g_8 = t;
                                                  int h_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                      t = q_0(t);
                                                      o_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, o_21);
                                                      t = q_0(t);
                                                      LocalPopChoice(h_8);
                                                    }
                                                  else
                                                    {
                                                      t = g_8;
                                                      t = j_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm i_8 = t;
                                                int j_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm k_8 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(j_8);
                                                    {
                                                      ATerm l_8 = t;
                                                      int m_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm u_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_12);
                                                          t = q_0(t);
                                                          u_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_21, e_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(m_8);
                                                        }
                                                      else
                                                        {
                                                          t = l_8;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = i_8;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        t = f_12;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            b_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm n_8 = t;
                                                              int o_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_21 = NULL,z_21 = NULL;
                                                                  t = a_12;
                                                                  if((b_12 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, b_12);
                                                                  t = q_0(t);
                                                                  z_21 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, z_21);
                                                                  t = q_0(t);
                                                                  y_21 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_21, e_12);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(o_8);
                                                                }
                                                              else
                                                                {
                                                                  t = n_8;
                                                                  t = j_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_12;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_12 = ATgetArgument(t, 0);
                                                            g_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm p_8 = t;
                                                              int q_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm h_22 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                                  t = q_0(t);
                                                                  h_22 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, h_22);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(q_8);
                                                                }
                                                              else
                                                                {
                                                                  t = p_8;
                                                                  t = j_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_12;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = i_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm r_8 = t;
                                            int s_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_v_5;
                                                t = q_0(t);
                                                LocalPopChoice(s_8);
                                              }
                                            else
                                              {
                                                t = r_8;
                                                t = j_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                g_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm t_8 = t;
                                                  int u_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm u_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                      t = q_0(t);
                                                      u_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, u_22);
                                                      t = q_0(t);
                                                      LocalPopChoice(u_8);
                                                    }
                                                  else
                                                    {
                                                      t = t_8;
                                                      t = j_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm v_8 = t;
                                                int w_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm x_8 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(w_8);
                                                    {
                                                      ATerm y_8 = t;
                                                      int z_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm y_22 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_12);
                                                          t = q_0(t);
                                                          y_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, e_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(z_8);
                                                        }
                                                      else
                                                        {
                                                          t = y_8;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = v_8;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_9 = t;
                                                          int b_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = q_0(t);
                                                              f_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, f_23);
                                                              t = q_0(t);
                                                              LocalPopChoice(b_9);
                                                            }
                                                          else
                                                            {
                                                              t = a_9;
                                                              t = j_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_12;
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
                                    c_12 = ATgetArgument(t, 0);
                                    x_11 = ATgetArgument(t, 1);
                                    y_11 = ATgetArgument(t, 2);
                                    t = i_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm c_9 = t;
                                            int d_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_v_5;
                                                t = q_0(t);
                                                LocalPopChoice(d_9);
                                              }
                                            else
                                              {
                                                t = c_9;
                                                t = j_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                g_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm e_9 = t;
                                                  int f_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                      t = q_0(t);
                                                      o_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, o_23);
                                                      t = q_0(t);
                                                      LocalPopChoice(f_9);
                                                    }
                                                  else
                                                    {
                                                      t = e_9;
                                                      t = j_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm g_9 = t;
                                                int h_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm i_9 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(h_9);
                                                    {
                                                      ATerm j_9 = t;
                                                      int k_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm u_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, c_12, x_11, y_11);
                                                          t = q_0(t);
                                                          u_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_23, e_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(k_9);
                                                        }
                                                      else
                                                        {
                                                          t = j_9;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = g_9;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm l_9 = t;
                                                          int m_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = q_0(t);
                                                              z_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, z_23);
                                                              t = q_0(t);
                                                              LocalPopChoice(m_9);
                                                            }
                                                          else
                                                            {
                                                              t = l_9;
                                                              t = j_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = i_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm n_9 = t;
                                            int o_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_v_5;
                                                t = q_0(t);
                                                LocalPopChoice(o_9);
                                              }
                                            else
                                              {
                                                t = n_9;
                                                t = j_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                g_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm p_9 = t;
                                                  int q_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm i_24 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                      t = q_0(t);
                                                      i_24 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, i_24);
                                                      t = q_0(t);
                                                      LocalPopChoice(q_9);
                                                    }
                                                  else
                                                    {
                                                      t = p_9;
                                                      t = j_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    f_12 = ATgetArgument(t, 0);
                                                    g_12 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm r_9 = t;
                                                      int s_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm p_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                          t = q_0(t);
                                                          p_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, p_24);
                                                          t = q_0(t);
                                                          LocalPopChoice(s_9);
                                                        }
                                                      else
                                                        {
                                                          t = r_9;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = j_12;
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
                            d_12 = ATgetArgument(t, 0);
                            t = d_12;
                            if(match_cons(t, sym_Op_2))
                              {
                                c_12 = ATgetArgument(t, 0);
                                x_11 = ATgetArgument(t, 1);
                                t = i_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = h_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm t_9 = t;
                                        int u_9 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_v_5;
                                            t = q_0(t);
                                            LocalPopChoice(u_9);
                                          }
                                        else
                                          {
                                            t = t_9;
                                            t = j_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_12 = ATgetArgument(t, 0);
                                            g_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm v_9 = t;
                                              int w_9 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm c_25 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                  t = q_0(t);
                                                  c_25 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, c_25);
                                                  t = q_0(t);
                                                  LocalPopChoice(w_9);
                                                }
                                              else
                                                {
                                                  t = v_9;
                                                  t = j_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                t = f_12;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    b_12 = ATgetArgument(t, 0);
                                                    w_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm x_9 = t;
                                                      int y_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, b_12, c_12);
                                                          {
                                                            ATerm z_9 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm g_2 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    g_2 = ATgetArgument(t, 0);
                                                                    if((g_2 != ATgetArgument(t, 1)))
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
                                                                t = z_9;
                                                              }
                                                          }
                                                          t = term_v_5;
                                                          t = bottomup_1_0(q_0, t);
                                                          LocalPopChoice(y_9);
                                                        }
                                                      else
                                                        {
                                                          t = x_9;
                                                          {
                                                            ATerm a_10 = t;
                                                            int b_10 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm o_25 = NULL;
                                                                t = c_12;
                                                                if((b_12 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, w_11, x_11);
                                                                t = genzip_4_0(z_0, d_1, e_1, h_1, t);
                                                                o_25 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_25), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, b_12, w_11)));
                                                                t = bottomup_1_0(q_0, t);
                                                                LocalPopChoice(b_10);
                                                              }
                                                            else
                                                              {
                                                                t = a_10;
                                                                {
                                                                  ATerm c_10 = t;
                                                                  int d_10 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = d_12;
                                                                      if((f_12 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, f_12);
                                                                      t = q_0(t);
                                                                      LocalPopChoice(d_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = c_10;
                                                                      t = j_12;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm e_10 = t;
                                                    int f_10 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = d_12;
                                                        if((f_12 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, f_12);
                                                        t = q_0(t);
                                                        LocalPopChoice(f_10);
                                                      }
                                                    else
                                                      {
                                                        t = e_10;
                                                        t = j_12;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    f_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm g_10 = t;
                                                      int h_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = d_12;
                                                          if((f_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, f_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(h_10);
                                                        }
                                                      else
                                                        {
                                                          t = g_10;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm i_10 = t;
                                                          int j_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = q_0(t);
                                                              a_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, a_27);
                                                              t = q_0(t);
                                                              LocalPopChoice(j_10);
                                                            }
                                                          else
                                                            {
                                                              t = i_10;
                                                              t = j_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = i_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = h_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm k_10 = t;
                                        int l_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_v_5;
                                            t = q_0(t);
                                            LocalPopChoice(l_10);
                                          }
                                        else
                                          {
                                            t = k_10;
                                            t = j_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_12 = ATgetArgument(t, 0);
                                            g_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm m_10 = t;
                                              int n_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm m_27 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                  t = q_0(t);
                                                  m_27 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, m_27);
                                                  t = q_0(t);
                                                  LocalPopChoice(n_10);
                                                }
                                              else
                                                {
                                                  t = m_10;
                                                  t = j_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                {
                                                  ATerm o_10 = t;
                                                  int p_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = d_12;
                                                      if((f_12 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, f_12);
                                                      t = q_0(t);
                                                      LocalPopChoice(p_10);
                                                    }
                                                  else
                                                    {
                                                      t = o_10;
                                                      t = j_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    f_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm q_10 = t;
                                                      int r_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = d_12;
                                                          if((f_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, f_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(r_10);
                                                        }
                                                      else
                                                        {
                                                          t = q_10;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_10 = t;
                                                          int t_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = q_0(t);
                                                              z_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, z_27);
                                                              t = q_0(t);
                                                              LocalPopChoice(t_10);
                                                            }
                                                          else
                                                            {
                                                              t = s_10;
                                                              t = j_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_12;
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
                                    c_12 = ATgetArgument(t, 0);
                                    t = i_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm u_10 = t;
                                            int v_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_v_5;
                                                t = q_0(t);
                                                LocalPopChoice(v_10);
                                              }
                                            else
                                              {
                                                t = u_10;
                                                t = j_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                g_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm w_10 = t;
                                                  int x_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm i_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                      t = q_0(t);
                                                      i_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, i_28);
                                                      t = q_0(t);
                                                      LocalPopChoice(x_10);
                                                    }
                                                  else
                                                    {
                                                      t = w_10;
                                                      t = j_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm y_10 = t;
                                                int k_12 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm y_12 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(k_12);
                                                    {
                                                      ATerm z_12 = t;
                                                      int n_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, d_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(n_13);
                                                        }
                                                      else
                                                        {
                                                          t = z_12;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = y_10;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        t = f_12;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            b_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm o_13 = t;
                                                              int p_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm s_28 = NULL;
                                                                  t = c_12;
                                                                  if((b_12 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, b_12);
                                                                  t = q_0(t);
                                                                  s_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, s_28);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(p_13);
                                                                }
                                                              else
                                                                {
                                                                  t = o_13;
                                                                  t = j_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_12;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_12 = ATgetArgument(t, 0);
                                                            g_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm x_13 = t;
                                                              int y_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm a_29 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                                  t = q_0(t);
                                                                  a_29 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, a_29);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(y_13);
                                                                }
                                                              else
                                                                {
                                                                  t = x_13;
                                                                  t = j_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_12;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = i_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm z_13 = t;
                                            int c_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_v_5;
                                                t = q_0(t);
                                                LocalPopChoice(c_14);
                                              }
                                            else
                                              {
                                                t = z_13;
                                                t = j_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                g_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm d_14 = t;
                                                  int h_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm j_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                      t = q_0(t);
                                                      j_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, j_29);
                                                      t = q_0(t);
                                                      LocalPopChoice(h_14);
                                                    }
                                                  else
                                                    {
                                                      t = d_14;
                                                      t = j_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm i_14 = t;
                                                int j_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm k_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(j_14);
                                                    {
                                                      ATerm l_14 = t;
                                                      int m_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, d_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(m_14);
                                                        }
                                                      else
                                                        {
                                                          t = l_14;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = i_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm o_14 = t;
                                                          int p_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = q_0(t);
                                                              u_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, u_29);
                                                              t = q_0(t);
                                                              LocalPopChoice(p_14);
                                                            }
                                                          else
                                                            {
                                                              t = o_14;
                                                              t = j_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_12;
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
                                    e_12 = ATgetArgument(t, 1);
                                    z_11 = ATgetArgument(t, 2);
                                    t = i_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm q_14 = t;
                                            int r_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_v_5;
                                                t = q_0(t);
                                                LocalPopChoice(r_14);
                                              }
                                            else
                                              {
                                                t = q_14;
                                                t = j_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                g_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm s_14 = t;
                                                  int t_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm i_30 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                      t = q_0(t);
                                                      i_30 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, i_30);
                                                      t = q_0(t);
                                                      LocalPopChoice(t_14);
                                                    }
                                                  else
                                                    {
                                                      t = s_14;
                                                      t = j_12;
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
                                                        ATerm a_15 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(v_14);
                                                    {
                                                      ATerm b_15 = t;
                                                      int c_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, d_12, e_12, z_11);
                                                          t = q_0(t);
                                                          LocalPopChoice(c_15);
                                                        }
                                                      else
                                                        {
                                                          t = b_15;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = u_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm f_15 = t;
                                                          int h_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm s_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = q_0(t);
                                                              s_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, s_30);
                                                              t = q_0(t);
                                                              LocalPopChoice(h_15);
                                                            }
                                                          else
                                                            {
                                                              t = f_15;
                                                              t = j_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_12;
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
                                        d_12 = ATgetArgument(t, 0);
                                        e_12 = ATgetArgument(t, 1);
                                        t = i_12;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = h_12;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm i_15 = t;
                                                int j_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_v_5;
                                                    t = q_0(t);
                                                    LocalPopChoice(j_15);
                                                  }
                                                else
                                                  {
                                                    t = i_15;
                                                    {
                                                      ATerm k_15 = t;
                                                      int m_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm k_31 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                          t = q_0(t);
                                                          k_31 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, d_12, k_31);
                                                          t = q_0(t);
                                                          LocalPopChoice(m_15);
                                                        }
                                                      else
                                                        {
                                                          t = k_15;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    f_12 = ATgetArgument(t, 0);
                                                    g_12 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm s_15 = t;
                                                      int t_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm p_31 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                          t = q_0(t);
                                                          p_31 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, p_31);
                                                          t = q_0(t);
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
                                                                ATerm t_31 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                                t = q_0(t);
                                                                t_31 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, d_12, t_31);
                                                                t = q_0(t);
                                                                LocalPopChoice(v_15);
                                                              }
                                                            else
                                                              {
                                                                t = u_15;
                                                                t = j_12;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm w_15 = t;
                                                          int x_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                              t = q_0(t);
                                                              z_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, d_12, z_31);
                                                              t = q_0(t);
                                                              LocalPopChoice(x_15);
                                                            }
                                                          else
                                                            {
                                                              t = w_15;
                                                              {
                                                                ATerm y_15 = t;
                                                                int z_15 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm d_32 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                                    t = q_0(t);
                                                                    d_32 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, d_32);
                                                                    t = q_0(t);
                                                                    LocalPopChoice(z_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = y_15;
                                                                    t = j_12;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm a_16 = t;
                                                        int b_16 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm k_32 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                            t = q_0(t);
                                                            k_32 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, d_12, k_32);
                                                            t = q_0(t);
                                                            LocalPopChoice(b_16);
                                                          }
                                                        else
                                                          {
                                                            t = a_16;
                                                            t = j_12;
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
                                            d_12 = ATgetArgument(t, 0);
                                            e_12 = ATgetArgument(t, 1);
                                            t = i_12;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = h_12;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm c_16 = t;
                                                    int d_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_v_5;
                                                        t = q_0(t);
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
                                                              ATerm e_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                              t = q_0(t);
                                                              e_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, d_12, e_33);
                                                              t = q_0(t);
                                                              LocalPopChoice(f_16);
                                                            }
                                                          else
                                                            {
                                                              t = e_16;
                                                              t = j_12;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm g_16 = t;
                                                          int h_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = q_0(t);
                                                              n_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, n_33);
                                                              t = q_0(t);
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
                                                                    ATerm t_33 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                                    t = q_0(t);
                                                                    t_33 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, d_12, t_33);
                                                                    t = q_0(t);
                                                                    LocalPopChoice(j_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = i_16;
                                                                    t = j_12;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_12 = ATgetArgument(t, 0);
                                                            g_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm k_16 = t;
                                                              int l_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm z_33 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                                  t = q_0(t);
                                                                  z_33 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, d_12, z_33);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(l_16);
                                                                }
                                                              else
                                                                {
                                                                  t = k_16;
                                                                  {
                                                                    ATerm m_16 = t;
                                                                    int n_16 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm d_34 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                                        t = q_0(t);
                                                                        d_34 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, d_34);
                                                                        t = q_0(t);
                                                                        LocalPopChoice(n_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = m_16;
                                                                        t = j_12;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm o_16 = t;
                                                            int p_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm k_34 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                                t = q_0(t);
                                                                k_34 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, d_12, k_34);
                                                                t = q_0(t);
                                                                LocalPopChoice(p_16);
                                                              }
                                                            else
                                                              {
                                                                t = o_16;
                                                                t = j_12;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = i_12;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = h_12;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm q_16 = t;
                                                    int r_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_v_5;
                                                        t = q_0(t);
                                                        LocalPopChoice(r_16);
                                                      }
                                                    else
                                                      {
                                                        t = q_16;
                                                        t = j_12;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_16 = t;
                                                          int t_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm w_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = q_0(t);
                                                              w_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, w_34);
                                                              t = q_0(t);
                                                              LocalPopChoice(t_16);
                                                            }
                                                          else
                                                            {
                                                              t = s_16;
                                                              t = j_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_12 = ATgetArgument(t, 0);
                                                            g_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm u_16 = t;
                                                              int v_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm b_35 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                                  t = q_0(t);
                                                                  b_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, b_35);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(v_16);
                                                                }
                                                              else
                                                                {
                                                                  t = u_16;
                                                                  t = j_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_12;
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
                    i_12 = ATgetArgument(t, 0);
                    h_12 = ATgetArgument(t, 1);
                    t = h_12;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = i_12;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm w_16 = t;
                            int x_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_o_5;
                                t = q_0(t);
                                LocalPopChoice(x_16);
                              }
                            else
                              {
                                t = w_16;
                                t = i_12;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = h_12;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    f_12 = ATgetArgument(t, 0);
                                    g_12 = ATgetArgument(t, 1);
                                    t = i_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        f_12 = ATgetArgument(t, 0);
                                        t = i_12;
                                      }
                                    else
                                      {
                                        t = i_12;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = i_12;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm y_16 = t;
                            int z_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_o_5;
                                t = q_0(t);
                                LocalPopChoice(z_16);
                              }
                            else
                              {
                                t = y_16;
                                {
                                  ATerm a_17 = t;
                                  int b_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = h_12;
                                      if((i_12 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(b_17);
                                    }
                                  else
                                    {
                                      t = a_17;
                                      t = j_12;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = h_12;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    f_12 = ATgetArgument(t, 0);
                                    g_12 = ATgetArgument(t, 1);
                                    {
                                      ATerm c_17 = t;
                                      int d_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm j_37 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, g_12, h_12);
                                          t = q_0(t);
                                          j_37 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, f_12, j_37);
                                          t = q_0(t);
                                          LocalPopChoice(d_17);
                                        }
                                      else
                                        {
                                          t = c_17;
                                          {
                                            ATerm e_17 = t;
                                            int f_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = h_12;
                                                if((i_12 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(f_17);
                                              }
                                            else
                                              {
                                                t = e_17;
                                                t = j_12;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        f_12 = ATgetArgument(t, 0);
                                        {
                                          ATerm g_17 = t;
                                          int h_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = h_12;
                                              if((i_12 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(h_17);
                                            }
                                          else
                                            {
                                              t = g_17;
                                              {
                                                ATerm i_17 = t;
                                                int j_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = f_12;
                                                    t = topdown_1_0(i_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, f_12);
                                                    t = bottomup_1_0(q_0, t);
                                                    LocalPopChoice(j_17);
                                                  }
                                                else
                                                  {
                                                    t = i_17;
                                                    t = j_12;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm k_17 = t;
                                        int l_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = h_12;
                                            if((i_12 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(l_17);
                                          }
                                        else
                                          {
                                            t = k_17;
                                            t = j_12;
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
                        i_12 = ATgetArgument(t, 0);
                        h_12 = ATgetArgument(t, 1);
                        t = h_12;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = i_12;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm m_17 = t;
                                int n_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_o_5;
                                    t = q_0(t);
                                    LocalPopChoice(n_17);
                                  }
                                else
                                  {
                                    t = m_17;
                                    t = h_12;
                                  }
                              }
                            else
                              {
                                ATerm o_17 = t;
                                int p_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_o_5;
                                    t = q_0(t);
                                    LocalPopChoice(p_17);
                                  }
                                else
                                  {
                                    t = o_17;
                                    t = j_12;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = i_12;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm q_17 = t;
                                    int r_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_v_5;
                                        t = q_0(t);
                                        LocalPopChoice(r_17);
                                      }
                                    else
                                      {
                                        t = q_17;
                                        t = h_12;
                                      }
                                  }
                                else
                                  {
                                    ATerm s_17 = t;
                                    int t_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_v_5;
                                        t = q_0(t);
                                        LocalPopChoice(t_17);
                                      }
                                    else
                                      {
                                        t = s_17;
                                        t = j_12;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    d_12 = ATgetArgument(t, 0);
                                    e_12 = ATgetArgument(t, 1);
                                    t = i_12;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = h_12;
                                      }
                                    else
                                      {
                                        ATerm u_17 = t;
                                        int v_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm u_38 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, i_12, d_12);
                                            t = conc_0_0(t);
                                            u_38 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, u_38, e_12);
                                            t = bottomup_1_0(q_0, t);
                                            LocalPopChoice(v_17);
                                          }
                                        else
                                          {
                                            t = u_17;
                                            t = j_12;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = i_12;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = h_12;
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
                        ATerm w_17 = t;
                        int x_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm z_17 = ATgetArgument(t, 0);
                                h_12 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(x_17);
                            t = h_12;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm a_18 = t;
                                int b_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_o_5;
                                    t = q_0(t);
                                    LocalPopChoice(b_18);
                                  }
                                else
                                  {
                                    t = a_18;
                                    t = j_12;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm c_18 = t;
                                    int d_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_v_5;
                                        t = q_0(t);
                                        LocalPopChoice(d_18);
                                      }
                                    else
                                      {
                                        t = c_18;
                                        t = j_12;
                                      }
                                  }
                                else
                                  {
                                    t = j_12;
                                  }
                              }
                          }
                        else
                          {
                            t = w_17;
                            if(match_cons(t, sym_All_1))
                              {
                                i_12 = ATgetArgument(t, 0);
                                t = i_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm e_18 = t;
                                    int f_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_o_5;
                                        t = q_0(t);
                                        LocalPopChoice(f_18);
                                      }
                                    else
                                      {
                                        t = e_18;
                                        t = j_12;
                                      }
                                  }
                                else
                                  {
                                    t = j_12;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    i_12 = ATgetArgument(t, 0);
                                    t = i_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm g_18 = t;
                                        int k_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_o_5;
                                            t = q_0(t);
                                            LocalPopChoice(k_18);
                                          }
                                        else
                                          {
                                            t = g_18;
                                            {
                                              ATerm l_18 = t;
                                              int m_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL;
                                                  t = j_12;
                                                  t = new_0_0(t);
                                                  h_39 = t;
                                                  t = bottomup_1_0(q_0, t);
                                                  s_39 = t;
                                                  t = (ATerm) ATempty;
                                                  t = q_0(t);
                                                  t_39 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(t_39), s_39);
                                                  t = q_0(t);
                                                  i_39 = t;
                                                  t = h_39;
                                                  t = bottomup_1_0(q_0, t);
                                                  r_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, r_39);
                                                  t = q_0(t);
                                                  q_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, q_39);
                                                  t = q_0(t);
                                                  k_39 = t;
                                                  t = i_12;
                                                  t = bottomup_1_0(q_0, t);
                                                  m_39 = t;
                                                  t = h_39;
                                                  t = bottomup_1_0(q_0, t);
                                                  p_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, p_39);
                                                  t = q_0(t);
                                                  o_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, o_39);
                                                  t = q_0(t);
                                                  n_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_39, n_39);
                                                  t = q_0(t);
                                                  l_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, k_39, l_39);
                                                  t = q_0(t);
                                                  j_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, i_39, j_39);
                                                  t = q_0(t);
                                                  LocalPopChoice(m_18);
                                                }
                                              else
                                                {
                                                  t = l_18;
                                                  t = j_12;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm n_18 = t;
                                            int o_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_v_5;
                                                t = q_0(t);
                                                LocalPopChoice(o_18);
                                              }
                                            else
                                              {
                                                t = n_18;
                                                {
                                                  ATerm s_18 = t;
                                                  int t_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL;
                                                      t = j_12;
                                                      t = new_0_0(t);
                                                      w_39 = t;
                                                      t = bottomup_1_0(q_0, t);
                                                      h_40 = t;
                                                      t = (ATerm) ATempty;
                                                      t = q_0(t);
                                                      i_40 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(i_40), h_40);
                                                      t = q_0(t);
                                                      x_39 = t;
                                                      t = w_39;
                                                      t = bottomup_1_0(q_0, t);
                                                      g_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, g_40);
                                                      t = q_0(t);
                                                      f_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, f_40);
                                                      t = q_0(t);
                                                      z_39 = t;
                                                      t = i_12;
                                                      t = bottomup_1_0(q_0, t);
                                                      b_40 = t;
                                                      t = w_39;
                                                      t = bottomup_1_0(q_0, t);
                                                      e_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, e_40);
                                                      t = q_0(t);
                                                      d_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, d_40);
                                                      t = q_0(t);
                                                      c_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_40, c_40);
                                                      t = q_0(t);
                                                      a_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_39, a_40);
                                                      t = q_0(t);
                                                      y_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, x_39, y_39);
                                                      t = q_0(t);
                                                      LocalPopChoice(t_18);
                                                    }
                                                  else
                                                    {
                                                      t = s_18;
                                                      t = j_12;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                g_12 = ATgetArgument(t, 1);
                                                t = g_12;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    a_11 = ATgetArgument(t, 0);
                                                    l_11 = ATgetArgument(t, 1);
                                                    t = a_11;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        b_11 = ATgetArgument(t, 0);
                                                        t = f_12;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            b_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm v_18 = t;
                                                              int w_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm n_40 = NULL,o_40 = NULL,q_40 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, b_11);
                                                                  t = q_0(t);
                                                                  q_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_40, l_11);
                                                                  t = q_0(t);
                                                                  o_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_12, o_40);
                                                                  t = q_0(t);
                                                                  n_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, n_40);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(w_18);
                                                                }
                                                              else
                                                                {
                                                                  t = v_18;
                                                                  {
                                                                    ATerm y_18 = t;
                                                                    int a_19 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,f_41 = NULL,g_41 = NULL;
                                                                        t = j_12;
                                                                        t = new_0_0(t);
                                                                        t_40 = t;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        f_41 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = q_0(t);
                                                                        g_41 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(g_41), f_41);
                                                                        t = q_0(t);
                                                                        u_40 = t;
                                                                        t = t_40;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        d_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, d_41);
                                                                        t = q_0(t);
                                                                        c_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, c_41);
                                                                        t = q_0(t);
                                                                        w_40 = t;
                                                                        t = i_12;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        y_40 = t;
                                                                        t = t_40;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        b_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, b_41);
                                                                        t = q_0(t);
                                                                        a_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, a_41);
                                                                        t = q_0(t);
                                                                        z_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, y_40, z_40);
                                                                        t = q_0(t);
                                                                        x_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, w_40, x_40);
                                                                        t = q_0(t);
                                                                        v_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, u_40, v_40);
                                                                        t = q_0(t);
                                                                        LocalPopChoice(a_19);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = y_18;
                                                                        t = j_12;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm b_19 = t;
                                                            int c_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,x_41 = NULL,y_41 = NULL;
                                                                t = j_12;
                                                                t = new_0_0(t);
                                                                l_41 = t;
                                                                t = bottomup_1_0(q_0, t);
                                                                x_41 = t;
                                                                t = (ATerm) ATempty;
                                                                t = q_0(t);
                                                                y_41 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(y_41), x_41);
                                                                t = q_0(t);
                                                                m_41 = t;
                                                                t = l_41;
                                                                t = bottomup_1_0(q_0, t);
                                                                v_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, v_41);
                                                                t = q_0(t);
                                                                u_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, u_41);
                                                                t = q_0(t);
                                                                o_41 = t;
                                                                t = i_12;
                                                                t = bottomup_1_0(q_0, t);
                                                                q_41 = t;
                                                                t = l_41;
                                                                t = bottomup_1_0(q_0, t);
                                                                t_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, t_41);
                                                                t = q_0(t);
                                                                s_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, s_41);
                                                                t = q_0(t);
                                                                r_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, q_41, r_41);
                                                                t = q_0(t);
                                                                p_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, o_41, p_41);
                                                                t = q_0(t);
                                                                n_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, m_41, n_41);
                                                                t = q_0(t);
                                                                LocalPopChoice(c_19);
                                                              }
                                                            else
                                                              {
                                                                t = b_19;
                                                                t = j_12;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = f_12;
                                                        {
                                                          ATerm d_19 = t;
                                                          int e_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL;
                                                              t = j_12;
                                                              t = new_0_0(t);
                                                              b_42 = t;
                                                              t = bottomup_1_0(q_0, t);
                                                              m_42 = t;
                                                              t = (ATerm) ATempty;
                                                              t = q_0(t);
                                                              n_42 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(n_42), m_42);
                                                              t = q_0(t);
                                                              c_42 = t;
                                                              t = b_42;
                                                              t = bottomup_1_0(q_0, t);
                                                              l_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, l_42);
                                                              t = q_0(t);
                                                              k_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, k_42);
                                                              t = q_0(t);
                                                              e_42 = t;
                                                              t = i_12;
                                                              t = bottomup_1_0(q_0, t);
                                                              g_42 = t;
                                                              t = b_42;
                                                              t = bottomup_1_0(q_0, t);
                                                              j_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, j_42);
                                                              t = q_0(t);
                                                              i_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, i_42);
                                                              t = q_0(t);
                                                              h_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_42, h_42);
                                                              t = q_0(t);
                                                              f_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, e_42, f_42);
                                                              t = q_0(t);
                                                              d_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, c_42, d_42);
                                                              t = q_0(t);
                                                              LocalPopChoice(e_19);
                                                            }
                                                          else
                                                            {
                                                              t = d_19;
                                                              t = j_12;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = f_12;
                                                    {
                                                      ATerm f_19 = t;
                                                      int h_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL;
                                                          t = j_12;
                                                          t = new_0_0(t);
                                                          s_42 = t;
                                                          t = bottomup_1_0(q_0, t);
                                                          d_43 = t;
                                                          t = (ATerm) ATempty;
                                                          t = q_0(t);
                                                          e_43 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(e_43), d_43);
                                                          t = q_0(t);
                                                          t_42 = t;
                                                          t = s_42;
                                                          t = bottomup_1_0(q_0, t);
                                                          c_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, c_43);
                                                          t = q_0(t);
                                                          b_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, b_43);
                                                          t = q_0(t);
                                                          v_42 = t;
                                                          t = i_12;
                                                          t = bottomup_1_0(q_0, t);
                                                          x_42 = t;
                                                          t = s_42;
                                                          t = bottomup_1_0(q_0, t);
                                                          a_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, a_43);
                                                          t = q_0(t);
                                                          z_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, z_42);
                                                          t = q_0(t);
                                                          y_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_42, y_42);
                                                          t = q_0(t);
                                                          w_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_42, w_42);
                                                          t = q_0(t);
                                                          u_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, t_42, u_42);
                                                          t = q_0(t);
                                                          LocalPopChoice(h_19);
                                                        }
                                                      else
                                                        {
                                                          t = f_19;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    f_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm i_19 = t;
                                                      int j_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, f_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(j_19);
                                                        }
                                                      else
                                                        {
                                                          t = i_19;
                                                          {
                                                            ATerm k_19 = t;
                                                            int l_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL;
                                                                t = j_12;
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
                                                                t = i_12;
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
                                                                LocalPopChoice(l_19);
                                                              }
                                                            else
                                                              {
                                                                t = k_19;
                                                                t = j_12;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm m_19 = t;
                                                    int n_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL;
                                                        t = j_12;
                                                        t = new_0_0(t);
                                                        d_44 = t;
                                                        t = bottomup_1_0(q_0, t);
                                                        p_44 = t;
                                                        t = (ATerm) ATempty;
                                                        t = q_0(t);
                                                        q_44 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(q_44), p_44);
                                                        t = q_0(t);
                                                        e_44 = t;
                                                        t = d_44;
                                                        t = bottomup_1_0(q_0, t);
                                                        o_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, o_44);
                                                        t = q_0(t);
                                                        m_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, m_44);
                                                        t = q_0(t);
                                                        g_44 = t;
                                                        t = i_12;
                                                        t = bottomup_1_0(q_0, t);
                                                        i_44 = t;
                                                        t = d_44;
                                                        t = bottomup_1_0(q_0, t);
                                                        l_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, l_44);
                                                        t = q_0(t);
                                                        k_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, k_44);
                                                        t = q_0(t);
                                                        j_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, i_44, j_44);
                                                        t = q_0(t);
                                                        h_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_44, h_44);
                                                        t = q_0(t);
                                                        f_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, e_44, f_44);
                                                        t = q_0(t);
                                                        LocalPopChoice(n_19);
                                                      }
                                                    else
                                                      {
                                                        t = m_19;
                                                        t = j_12;
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
                                        i_12 = ATgetArgument(t, 0);
                                        t = i_12;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm o_19 = t;
                                            int p_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_5;
                                                t = q_0(t);
                                                LocalPopChoice(p_19);
                                              }
                                            else
                                              {
                                                t = o_19;
                                                t = j_12;
                                              }
                                          }
                                        else
                                          {
                                            t = j_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            i_12 = ATgetArgument(t, 0);
                                            t = i_12;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm q_19 = t;
                                                int s_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_v_5;
                                                    t = q_0(t);
                                                    LocalPopChoice(s_19);
                                                  }
                                                else
                                                  {
                                                    t = q_19;
                                                    t = j_12;
                                                  }
                                              }
                                            else
                                              {
                                                t = j_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                i_12 = ATgetArgument(t, 0);
                                                t = i_12;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm t_19 = t;
                                                    int u_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_v_5;
                                                        t = q_0(t);
                                                        LocalPopChoice(u_19);
                                                      }
                                                    else
                                                      {
                                                        t = t_19;
                                                        t = j_12;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = j_12;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm v_19 = t;
                                                int x_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm y_19 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(x_19);
                                                    t = h_12;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm z_19 = t;
                                                        int a_20 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_v_5;
                                                            t = q_0(t);
                                                            LocalPopChoice(a_20);
                                                          }
                                                        else
                                                          {
                                                            t = z_19;
                                                            t = j_12;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = j_12;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = v_19;
                                                    {
                                                      ATerm c_20 = t;
                                                      int d_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm e_20 = ATgetArgument(t, 0);
                                                              h_12 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(d_20);
                                                          {
                                                            ATerm f_20 = t;
                                                            int g_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = h_12;
                                                                t = fetch_1_0(j_1, t);
                                                                t = term_v_5;
                                                                t = bottomup_1_0(q_0, t);
                                                                LocalPopChoice(g_20);
                                                              }
                                                            else
                                                              {
                                                                t = f_20;
                                                                t = j_12;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = c_20;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              i_12 = ATgetArgument(t, 0);
                                                              h_12 = ATgetArgument(t, 1);
                                                              t = h_12;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = i_12;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = h_12;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          f_12 = ATgetArgument(t, 0);
                                                                          g_12 = ATgetArgument(t, 1);
                                                                          t = i_12;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = i_12;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = i_12;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = h_12;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          f_12 = ATgetArgument(t, 0);
                                                                          g_12 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm h_20 = t;
                                                                            int i_20 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm x_45 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, g_12, h_12);
                                                                                t = q_0(t);
                                                                                x_45 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, f_12, x_45);
                                                                                t = q_0(t);
                                                                                LocalPopChoice(i_20);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = h_20;
                                                                                {
                                                                                  ATerm j_20 = t;
                                                                                  int l_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = h_12;
                                                                                      if((i_12 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(l_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = j_20;
                                                                                      t = j_12;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm m_20 = t;
                                                                          int n_20 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = h_12;
                                                                              if((i_12 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(n_20);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = m_20;
                                                                              t = j_12;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  i_12 = ATgetArgument(t, 0);
                                                                  h_12 = ATgetArgument(t, 1);
                                                                  z_10 = ATgetArgument(t, 2);
                                                                  t = z_10;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm p_20 = t;
                                                                      int q_20 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, h_12);
                                                                          t = q_0(t);
                                                                          LocalPopChoice(q_20);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = p_20;
                                                                          t = j_12;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = j_12;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      i_12 = ATgetArgument(t, 0);
                                                                      h_12 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm r_20 = t;
                                                                        int t_20 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, i_12, h_12);
                                                                            t = q_0(t);
                                                                            LocalPopChoice(t_20);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = r_20;
                                                                            t = j_12;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          i_12 = ATgetArgument(t, 0);
                                                                          t = i_12;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              f_12 = ATgetFirst((ATermList) t);
                                                                              g_12 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm u_20 = t;
                                                                                int v_20 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm l_46 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, g_12);
                                                                                    t = q_0(t);
                                                                                    l_46 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, f_12, l_46);
                                                                                    t = q_0(t);
                                                                                    LocalPopChoice(v_20);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = u_20;
                                                                                    t = j_12;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm w_20 = t;
                                                                                  int x_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_v_5;
                                                                                      t = q_0(t);
                                                                                      LocalPopChoice(x_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = w_20;
                                                                                      t = j_12;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = j_12;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              i_12 = ATgetArgument(t, 0);
                                                                              t = i_12;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  f_12 = ATgetFirst((ATermList) t);
                                                                                  g_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm y_20 = t;
                                                                                    int a_21 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm r_46 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, g_12);
                                                                                        t = q_0(t);
                                                                                        r_46 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, f_12, r_46);
                                                                                        t = q_0(t);
                                                                                        LocalPopChoice(a_21);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = y_20;
                                                                                        t = j_12;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm b_21 = t;
                                                                                      int c_21 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_v_5;
                                                                                          t = q_0(t);
                                                                                          LocalPopChoice(c_21);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = b_21;
                                                                                          t = j_12;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = j_12;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  i_12 = ATgetArgument(t, 0);
                                                                                  t = i_12;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      f_12 = ATgetFirst((ATermList) t);
                                                                                      g_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm d_21 = t;
                                                                                        int e_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm x_46 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, g_12);
                                                                                            t = q_0(t);
                                                                                            x_46 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, x_46);
                                                                                            t = q_0(t);
                                                                                            LocalPopChoice(e_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = d_21;
                                                                                            t = j_12;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm f_21 = t;
                                                                                          int g_21 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_o_5;
                                                                                              t = q_0(t);
                                                                                              LocalPopChoice(g_21);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = f_21;
                                                                                              t = j_12;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = j_12;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      i_12 = ATgetArgument(t, 0);
                                                                                      h_12 = ATgetArgument(t, 1);
                                                                                      z_10 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm h_21 = t;
                                                                                        int i_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL;
                                                                                            t = term_j_21;
                                                                                            t = bottomup_1_0(q_0, t);
                                                                                            g_47 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = q_0(t);
                                                                                            j_47 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(j_47), z_10);
                                                                                            t = q_0(t);
                                                                                            i_47 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(i_47), i_12);
                                                                                            t = q_0(t);
                                                                                            h_47 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, g_47, h_47);
                                                                                            t = q_0(t);
                                                                                            f_47 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, h_12, f_47);
                                                                                            t = q_0(t);
                                                                                            LocalPopChoice(i_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = h_21;
                                                                                            t = j_12;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          i_12 = ATgetArgument(t, 0);
                                                                                          h_12 = ATgetArgument(t, 1);
                                                                                          z_10 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm k_21 = t;
                                                                                            int l_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm o_47 = NULL,p_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, h_12);
                                                                                                t = q_0(t);
                                                                                                p_47 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, z_10);
                                                                                                t = q_0(t);
                                                                                                u_47 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = q_0(t);
                                                                                                v_47 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(v_47), u_47);
                                                                                                t = q_0(t);
                                                                                                t_47 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(t_47), i_12);
                                                                                                t = q_0(t);
                                                                                                s_47 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(s_47), p_47);
                                                                                                t = q_0(t);
                                                                                                o_47 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, o_47);
                                                                                                t = q_0(t);
                                                                                                LocalPopChoice(l_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = k_21;
                                                                                                t = j_12;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              i_12 = ATgetArgument(t, 0);
                                                                                              h_12 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm m_21 = t;
                                                                                                int n_21 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm z_47 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, h_12);
                                                                                                    t = q_0(t);
                                                                                                    z_47 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, z_47);
                                                                                                    t = q_0(t);
                                                                                                    LocalPopChoice(n_21);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = m_21;
                                                                                                    t = j_12;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  i_12 = ATgetArgument(t, 0);
                                                                                                  h_12 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm p_21 = t;
                                                                                                    int q_21 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm d_48 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, i_12);
                                                                                                        t = q_0(t);
                                                                                                        d_48 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, d_48, h_12);
                                                                                                        t = q_0(t);
                                                                                                        LocalPopChoice(q_21);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = p_21;
                                                                                                        t = j_12;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      i_12 = ATgetArgument(t, 0);
                                                                                                      h_12 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm r_21 = t;
                                                                                                        int s_21 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm h_48 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, h_12);
                                                                                                            t = q_0(t);
                                                                                                            h_48 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, h_48, i_12);
                                                                                                            t = q_0(t);
                                                                                                            LocalPopChoice(s_21);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = r_21;
                                                                                                            t = j_12;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          i_12 = ATgetArgument(t, 0);
                                                                                                          h_12 = ATgetArgument(t, 1);
                                                                                                          t = h_12;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              d_12 = ATgetArgument(t, 0);
                                                                                                              e_12 = ATgetArgument(t, 1);
                                                                                                              t = i_12;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = h_12;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm t_21 = t;
                                                                                                                  int v_21 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm v_48 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, i_12, d_12);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      v_48 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, v_48, e_12);
                                                                                                                      t = bottomup_1_0(q_0, t);
                                                                                                                      LocalPopChoice(v_21);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = t_21;
                                                                                                                      t = j_12;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  d_12 = ATgetArgument(t, 0);
                                                                                                                  e_12 = ATgetArgument(t, 1);
                                                                                                                  z_11 = ATgetArgument(t, 2);
                                                                                                                  t = z_11;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = e_12;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = d_12;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              c_12 = ATgetArgument(t, 0);
                                                                                                                              t = i_12;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = h_12;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      f_12 = ATgetFirst((ATermList) t);
                                                                                                                                      g_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = g_12;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = f_12;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              b_12 = ATgetArgument(t, 0);
                                                                                                                                              w_11 = ATgetArgument(t, 1);
                                                                                                                                              o_11 = ATgetArgument(t, 2);
                                                                                                                                              r_11 = ATgetArgument(t, 3);
                                                                                                                                              t = o_11;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = w_11;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm w_21 = t;
                                                                                                                                                      int x_21 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = c_12;
                                                                                                                                                          if((b_12 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = r_11;
                                                                                                                                                          {
                                                                                                                                                            ATerm a_22 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm k_1 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm b_22 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(b_22, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((b_12 != ATgetArgument(b_22, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(b_22, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm c_22 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(c_22) != AT_LIST) || !(ATisEmpty(c_22))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm d_22 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(d_22) != AT_LIST) || !(ATisEmpty(d_22))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  return(t);
                                                                                                                                                                }
                                                                                                                                                                t = oncetd_1_0(k_1, t);
                                                                                                                                                                PopChoice();
                                                                                                                                                                _fail(t);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                t = a_22;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = r_11;
                                                                                                                                                          t = bottomup_1_0(q_0, t);
                                                                                                                                                          LocalPopChoice(x_21);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = w_21;
                                                                                                                                                          t = j_12;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = j_12;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = j_12;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = j_12;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = j_12;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = j_12;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = i_12;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = h_12;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = j_12;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = i_12;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = h_12;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = j_12;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = i_12;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = h_12;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = j_12;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = i_12;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = h_12;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = j_12;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              i_12 = ATgetArgument(t, 0);
                                                                                                              h_12 = ATgetArgument(t, 1);
                                                                                                              t = i_12;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = h_12;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = j_12;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = j_12;
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
ATerm map_1_0 (ATerm b_125 (ATerm), ATerm t)
{
  static ATerm v_50 (ATerm t)
  {
    ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL;
    s_50 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_50;
      }
    else
      {
        ATerm e_3 = NULL,h_3 = NULL,i_3 = NULL,w_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_50 = ATgetFirst((ATermList) t);
            u_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_50);
        e_3 = t;
        t = t_50;
        t = b_125(t);
        h_3 = t;
        t = u_50;
        t = v_50(t);
        i_3 = t;
        t = (ATerm) ATinsert(CheckATermList(i_3), h_3);
        w_0 = t;
        t = SSLsetAnnotations(w_0, e_3);
      }
    return(t);
  }
  t = v_50(t);
  return(t);
}
static ATerm c_11 (ATerm v_43, ATerm w_43, ATerm t)
{
  ATerm x_50 = NULL;
  t = SSL_fputc(v_43, w_43);
  x_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_50);
  return(t);
}
static ATerm d_11 (ATerm w_48, ATerm x_48, ATerm t)
{
  ATerm y_50 = NULL;
  t = SSL_write_term_to_stream_text(w_48, x_48);
  y_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_50);
  return(t);
}
static ATerm f_11 (ATerm v_118 (ATerm), ATerm x_429, ATerm c_49, ATerm t)
{
  ATerm z_50 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_429, term_e_22);
  t = j_11(t);
  z_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_50, c_49);
  t = v_118(t);
  t = fclose_0_0(t);
  t = c_49;
  return(t);
}
static ATerm e_11 (ATerm s_48, ATerm t_48, ATerm t)
{
  ATerm a_51 = NULL;
  t = SSL_write_term_to_stream_baf(s_48, t_48);
  a_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_51);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm h_51 = NULL,j_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_22 = ATgetArgument(t, 0);
      if(match_cons(f_22, sym_Stream_1))
        {
          h_51 = ATgetArgument(f_22, 0);
        }
      else
        _fail(t);
      j_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(h_51, j_51, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_22 = ATgetArgument(t, 0);
      if(match_cons(g_22, sym_Stream_1))
        {
          n_51 = ATgetArgument(g_22, 0);
        }
      else
        _fail(t);
      o_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11(n_51, o_51, t);
  k_51 = t;
  t = term_i_22;
  l_51 = t;
  t = k_51;
  if(match_cons(t, sym_Stream_1))
    {
      m_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_i_22, k_51);
  t = c_11(l_51, m_51, t);
  return(t);
}
ATerm output_1_0 (ATerm s_131 (ATerm), ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL;
  t = s_131(t);
  c_51 = t;
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_51 = NULL,e_51 = NULL;
        t = term_l_22;
        d_51 = t;
        t = term_m_22;
        e_51 = t;
        t = term_n_22;
        t = p_11(d_51, e_51, t);
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        t = term_o_22;
      }
  }
  b_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_51, c_51);
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_51 = NULL,g_51 = NULL;
        t = term_l_22;
        f_51 = t;
        t = term_r_22;
        g_51 = t;
        t = term_s_22;
        t = p_11(f_51, g_51, t);
        t = (ATerm) ATmakeAppl(sym__2, b_51, c_51);
        LocalPopChoice(q_22);
        if(match_cons(t, sym__2))
          {
            ATerm t_22 = ATgetArgument(t, 0);
            ATerm v_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_11(m_1, b_51, c_51, t);
      }
    else
      {
        t = p_22;
        if(match_cons(t, sym__2))
          {
            ATerm w_22 = ATgetArgument(t, 0);
            ATerm x_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_11(n_1, b_51, c_51, t);
      }
  }
  return(t);
}
static ATerm d_52 (ATerm x_51, ATerm t)
{
  t = SSL_fclose(x_51);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL;
  b_52 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_52 = ATgetArgument(t, 0);
      {
        ATerm z_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_52);
            LocalPopChoice(a_23);
          }
        else
          {
            t = z_22;
            t = d_52(b_52, t);
          }
      }
    }
  else
    {
      t = d_52(b_52, t);
    }
  return(t);
}
static ATerm g_11 (ATerm y_48, ATerm t)
{
  t = SSL_read_term_from_stream(y_48);
  return(t);
}
static ATerm h_11 (ATerm o_42, ATerm p_42, ATerm t)
{
  t = SSL_strcat(o_42, p_42);
  return(t);
}
static ATerm i_11 (ATerm x_43, ATerm y_43, ATerm t)
{
  ATerm e_52 = NULL;
  t = SSL_fopen(x_43, y_43);
  e_52 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_52);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_52 = NULL;
  t = SSL_stdin_stream();
  f_52 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_52);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_52 = NULL;
  t = SSL_stdout_stream();
  g_52 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_52);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_52 = NULL;
  t = SSL_stderr_stream();
  h_52 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_52);
  return(t);
}
static ATerm u_53 (ATerm n_52, ATerm t)
{
  ATerm o_52 = NULL;
  t = SSL_explode_term(n_52);
  if(match_cons(t, sym__2))
    {
      ATerm b_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_23 = ATgetArgument(t, 1);
        if(((ATgetType(c_23) == AT_LIST) && !(ATisEmpty(c_23))))
          {
            o_52 = ATgetFirst((ATermList) c_23);
            {
              ATerm d_23 = (ATerm) ATgetNext((ATermList) c_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_52;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_52;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_52;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_52;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm v_53 (ATerm r_52, ATerm s_52, ATerm w_52, ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL,a_53 = NULL,e_53 = NULL,a_1 = NULL;
  t = SSLgetAnnotations(w_52);
  a_53 = t;
  t = r_52;
  if(match_cons(t, sym_Path_1))
    {
      e_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_53, s_52);
  a_1 = t;
  t = SSLsetAnnotations(a_1, a_53);
  if(match_cons(t, sym__2))
    {
      x_52 = ATgetArgument(t, 0);
      y_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(x_52, y_52, t);
  return(t);
}
static ATerm w_53 (ATerm h_53, ATerm i_53, ATerm j_53, ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL,p_53 = NULL,c_1 = NULL;
  t = SSLgetAnnotations(j_53);
  m_53 = t;
  t = SSL_is_string(h_53);
  p_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_53, i_53);
  c_1 = t;
  t = SSLsetAnnotations(c_1, m_53);
  if(match_cons(t, sym__2))
    {
      k_53 = ATgetArgument(t, 0);
      l_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(k_53, l_53, t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL;
  r_53 = t;
  if(match_cons(t, sym__2))
    {
      s_53 = ATgetArgument(t, 0);
      t_53 = ATgetArgument(t, 1);
      {
        ATerm e_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_53(r_53, t);
            LocalPopChoice(g_23);
          }
        else
          {
            t = e_23;
            {
              ATerm h_23 = t;
              int i_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_53(s_53, t_53, r_53, t);
                  LocalPopChoice(i_23);
                }
              else
                {
                  t = h_23;
                  t = w_53(s_53, t_53, r_53, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_53(r_53, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,f_54 = NULL;
  f_54 = t;
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, f_54, term_l_23);
        t = j_11(t);
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        {
          ATerm v_3 = NULL,w_3 = NULL;
          t = term_m_23;
          w_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_23, f_54);
          t = h_11(w_3, f_54, t);
          v_3 = t;
          t = SSL_perror(v_3);
          _fail(t);
        }
      }
  }
  z_53 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_11(a_54, t);
  y_53 = t;
  t = z_53;
  t = fclose_0_0(t);
  t = y_53;
  return(t);
}
ATerm input_1_0 (ATerm t_131 (ATerm), ATerm t)
{
  ATerm n_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_54 = NULL,p_54 = NULL;
      t = term_l_22;
      m_54 = t;
      t = term_q_23;
      p_54 = t;
      t = term_r_23;
      t = p_11(m_54, p_54, t);
      LocalPopChoice(p_23);
    }
  else
    {
      t = n_23;
      t = term_s_23;
    }
  t = ReadFromFile_0_0(t);
  t = t_131(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL;
  q_54 = t;
  t = term_t_23;
  t = whoami_0_0(t);
  r_54 = t;
  t = term_v_23;
  t_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_23), r_54), term_w_23);
  u_54 = t;
  t = SSL_printnl(t_54, u_54);
  t = term_y_23;
  s_54 = t;
  t = SSL_exit(s_54);
  t = q_54;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm w_54 = NULL;
  w_54 = t;
  if(match_string(t, "-k"))
    {
      t = w_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_54;
    }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL;
  x_54 = t;
  t = SSL_string_to_int(x_54);
  y_54 = t;
  t = term_a_24;
  z_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_24, y_54);
  t = s_11(z_54, y_54, t);
  t = x_54;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_b_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_1, r_1, s_1, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm b_55 = NULL;
  b_55 = t;
  if(match_string(t, "-S"))
    {
      t = b_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_55;
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL;
  t = term_c_24;
  c_55 = t;
  t = term_d_24;
  d_55 = t;
  t = term_e_24;
  t = s_11(c_55, d_55, t);
  t = term_f_24;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_g_24;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL;
  e_55 = t;
  t = SSL_string_to_int(e_55);
  f_55 = t;
  t = term_c_24;
  g_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_24, f_55);
  t = s_11(g_55, f_55, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_55);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_h_24;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm h_55 = NULL,i_55 = NULL;
  t = term_j_24;
  h_55 = t;
  t = term_t_23;
  i_55 = t;
  t = term_k_24;
  t = s_11(h_55, i_55, t);
  t = term_l_24;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_m_24;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_1, u_1, x_1, t);
      LocalPopChoice(o_24);
    }
  else
    {
      t = n_24;
      {
        ATerm q_24 = t;
        int r_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_1, c_2, d_2, t);
            LocalPopChoice(r_24);
          }
        else
          {
            t = q_24;
            t = Option_3_0(e_2, p_2, q_2, t);
          }
      }
    }
  return(t);
}
static ATerm s_11 (ATerm q_47, ATerm r_47, ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL;
  t = term_l_22;
  j_55 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_22, q_47, r_47);
  t = lookup_table_0_1(j_55, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(q_47, r_47, k_55, t);
  t = (ATerm) ATmakeAppl(sym__3, term_l_22, q_47, r_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm o_55 = NULL,p_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
      t = term_t_23;
      t = e_0(t);
      q_55 = t;
      t = term_s_24;
      r_55 = t;
      t = term_t_24;
      s_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_24, term_t_24, q_55);
      t = q_11(r_55, s_55, q_55, t);
      _fail(t);
    }
  else
    {
      ATerm v_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_55 = ATgetFirst((ATermList) t);
          p_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_55;
      t = c_0(t);
      t = term_t_23;
      t = d_0(t);
      v_55 = t;
      t = (ATerm) ATinsert(CheckATermList(p_55), v_55);
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm x_55 = NULL;
  x_55 = t;
  if(match_string(t, "-o"))
    {
      t = x_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_55;
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm y_55 = NULL,z_55 = NULL;
  y_55 = t;
  t = term_m_22;
  z_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_22, y_55);
  t = s_11(z_55, y_55, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_55);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_2, s_2, t_2, t);
  return(t);
}
static ATerm q_11 (ATerm u_52, ATerm v_52, ATerm t_52, ATerm t)
{
  ATerm i_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL;
  i_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_52, v_52);
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_24 = ATgetArgument(t, 0);
            ATerm y_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_52, v_52);
        t = p_11(u_52, v_52, t);
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        t = (ATerm) ATempty;
      }
  }
  m_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_52, v_52, (ATerm) ATinsert(CheckATermList(m_56), t_52));
  t = lookup_table_0_1(u_52, t);
  p_56 = t;
  t = (ATerm) ATinsert(CheckATermList(m_56), t_52);
  n_56 = t;
  t = p_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(v_52, n_56, o_56, t);
  t = i_56;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL;
      t = term_t_23;
      t = n_0(t);
      a_57 = t;
      t = term_s_24;
      b_57 = t;
      t = term_t_24;
      c_57 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_24, term_t_24, a_57);
      t = q_11(b_57, c_57, a_57, t);
      _fail(t);
    }
  else
    {
      ATerm g_57 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_56 = ATgetFirst((ATermList) t);
          x_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_56;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_56 = ATgetFirst((ATermList) t);
          z_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_56;
      t = k_0(t);
      t = y_56;
      t = l_0(t);
      g_57 = t;
      t = (ATerm) ATinsert(CheckATermList(z_56), g_57);
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm i_57 = NULL;
  i_57 = t;
  if(match_string(t, "-i"))
    {
      t = i_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_57;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL;
  j_57 = t;
  t = term_q_23;
  k_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_23, j_57);
  t = s_11(k_57, j_57, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_57);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_2, v_2, w_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_23;
  t = whoami_0_0(t);
  m_57 = t;
  t = term_v_23;
  o_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_25), m_57);
  p_57 = t;
  t = SSL_printnl(o_57, p_57);
  t = term_y_23;
  n_57 = t;
  t = SSL_exit(n_57);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm q_57 = NULL,r_57 = NULL;
  t = term_l_22;
  q_57 = t;
  t = term_b_25;
  r_57 = t;
  t = term_d_25;
  t = p_11(q_57, r_57, t);
  return(t);
}
static ATerm k_11 (ATerm c_50, ATerm d_50, ATerm t)
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_50, d_50);
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      t = SSL_addr(c_50, d_50);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm r_123 (ATerm), ATerm s_123 (ATerm), ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL;
  v_57 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_57;
      t = r_123(t);
    }
  else
    {
      ATerm a_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_57 = ATgetFirst((ATermList) t);
          x_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_57;
      t = foldr_2_0(r_123, s_123, t);
      a_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_57, a_58);
      t = s_123(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_d_24;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL;
  if(match_cons(t, sym__2))
    {
      c_4 = ATgetArgument(t, 0);
      d_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(c_4, d_4, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_58 = NULL,y_3 = NULL,z_3 = NULL;
  t = times_0_0(t);
  z_3 = t;
  t = SSL_explode_term(z_3);
  if(match_cons(t, sym__2))
    {
      ATerm g_25 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3;
  t = foldr_2_0(x_2, y_2, t);
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
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_58;
        if((p_58 != t))
          {
            _fail(t);
          }
        t = o_58;
        LocalPopChoice(i_25);
      }
    else
      {
        t = h_25;
        t = (ATerm) ATmakeAppl(sym__2, p_58, q_58);
        {
          ATerm j_25 = t;
          int k_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_58, q_58);
              LocalPopChoice(k_25);
            }
          else
            {
              t = j_25;
              t = SSL_gtr(p_58, q_58);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_58, q_58);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_116 (ATerm), ATerm t)
{
  ATerm u_58 = NULL;
  u_58 = t;
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL;
        t = term_l_22;
        x_58 = t;
        t = term_c_24;
        y_58 = t;
        t = term_n_25;
        t = p_11(x_58, y_58, t);
        w_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_58, term_y_23);
        t = geq_0_0(t);
        t = u_58;
        t = s_116(t);
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        t = u_58;
      }
  }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm a_59 = NULL,b_59 = NULL,d_59 = NULL,e_59 = NULL;
  t = run_time_0_0(t);
  a_59 = t;
  t = term_t_23;
  t = whoami_0_0(t);
  b_59 = t;
  t = term_v_23;
  d_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_25), a_59), term_r_25), b_59);
  e_59 = t;
  t = SSL_printnl(d_59, e_59);
  t = (ATerm) ATmakeAppl(sym__2, term_v_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_25), a_59), term_r_25), b_59));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_59 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_24;
  f_59 = t;
  t = SSL_exit(f_59);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm u_59 = NULL,v_59 = NULL;
  v_59 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = v_59;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          u_59 = ATgetArgument(t, 0);
          {
            ATerm p_4 = NULL,b_4 = NULL;
            t = SSLgetAnnotations(v_59);
            p_4 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, u_59);
            b_4 = t;
            t = SSLsetAnnotations(b_4, p_4);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = v_59;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_131 (ATerm), ATerm t)
{
  ATerm t_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_59 = NULL,o_59 = NULL;
      t = term_l_22;
      i_59 = t;
      t = term_y_25;
      o_59 = t;
      t = term_z_25;
      t = p_11(i_59, o_59, t);
      LocalPopChoice(x_25);
    }
  else
    {
      t = t_25;
      t = fetch_1_0(a_3, t);
    }
  t = j_131(t);
  return(t);
}
static ATerm t_11 (ATerm b_56, ATerm c_56, ATerm d_56, ATerm t)
{
  ATerm x_59 = NULL;
  t = SSL_hashtable_put(d_56, b_56, c_56);
  x_59 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_59);
  return(t);
}
ATerm lookup_table_0_1 (ATerm g_54, ATerm t)
{
  ATerm i_60 = NULL;
  t = table_hashtable_0_0(t);
  i_60 = t;
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_4 = NULL;
        t = i_60;
        if(match_cons(t, sym_Hashtable_1))
          {
            v_4 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_11(g_54, v_4, t);
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        {
          ATerm a_5 = NULL;
          t = g_54;
          t = table_create_0_0(t);
          t = i_60;
          if(match_cons(t, sym_Hashtable_1))
            {
              a_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_11(g_54, a_5, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm j_56, ATerm k_56, ATerm t)
{
  ATerm l_60 = NULL;
  t = SSL_hashtable_create(j_56, k_56);
  l_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_60);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm m_60 = NULL,n_60 = NULL,o_60 = NULL,q_60 = NULL,r_60 = NULL;
  m_60 = t;
  t = term_f_26;
  q_60 = t;
  t = term_g_26;
  r_60 = t;
  t = m_60;
  t = new_hashtable_0_2(q_60, r_60, t);
  n_60 = t;
  t = m_60;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(m_60, n_60, o_60, t);
  t = m_60;
  return(t);
}
static ATerm m_11 (ATerm g_56, ATerm h_56, ATerm t)
{
  ATerm s_60 = NULL;
  t = SSL_hashtable_remove(h_56, g_56);
  s_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_60);
  return(t);
}
static ATerm n_11 (ATerm l_56, ATerm t)
{
  ATerm t_60 = NULL;
  t = SSL_hashtable_destroy(l_56);
  t_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_60);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm u_60 = NULL;
  t = SSL_table_hashtable();
  u_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_60);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL;
  v_60 = t;
  t = table_hashtable_0_0(t);
  w_60 = t;
  t = lookup_table_0_1(v_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_11(y_60, t);
  t = w_60;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_11(v_60, x_60, t);
  t = v_60;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm a_61 = NULL,b_61 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_61 = ATgetFirst((ATermList) t);
      b_61 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_61 = NULL,g_61 = NULL;
        static ATerm b_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_61)), not_null(g_61));
          return(t);
        }
        t = b_61;
        t = i_0(t);
        if(((f_61 != NULL) && (f_61 != t)))
          _fail(t);
        else
          f_61 = t;
        t = a_61;
        t = g_0(t);
        if(((g_61 != NULL) && (g_61 != t)))
          _fail(t);
        else
          g_61 = t;
        t = b_61;
        t = reverse_acc_2_0(g_0, b_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_23;
      t = i_0(t);
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL,c_7 = NULL;
  o_61 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_61);
  m_61 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_61);
  c_7 = t;
  t = SSLsetAnnotations(c_7, m_61);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm q_61 = NULL;
  q_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_61), term_h_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_61 = NULL,j_61 = NULL;
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_61 = NULL,l_61 = NULL;
      t = term_l_22;
      k_61 = t;
      t = term_b_25;
      l_61 = t;
      t = term_d_25;
      t = p_11(k_61, l_61, t);
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      t = fetch_1_0(c_3, t);
    }
  t = term_k_26;
  t = echo_0_0(t);
  t = term_s_24;
  i_61 = t;
  t = term_t_24;
  j_61 = t;
  t = term_l_26;
  t = p_11(i_61, j_61, t);
  t = reverse_acc_2_0(_id, d_3, t);
  t = map_1_0(f_3, t);
  return(t);
}
ATerm fetch_1_0 (ATerm l_125 (ATerm), ATerm t)
{
  static ATerm n_62 (ATerm t)
  {
    ATerm k_62 = NULL,l_62 = NULL,m_62 = NULL;
    k_62 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_62 = ATgetFirst((ATermList) t);
        m_62 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_26 = t;
      int n_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_5 = NULL,i_5 = NULL,e_7 = NULL;
          t = SSLgetAnnotations(k_62);
          f_5 = t;
          t = l_62;
          t = l_125(t);
          i_5 = t;
          t = (ATerm) ATinsert(CheckATermList(m_62), i_5);
          e_7 = t;
          t = SSLsetAnnotations(e_7, f_5);
          LocalPopChoice(n_26);
        }
      else
        {
          t = m_26;
          {
            ATerm q_5 = NULL,t_5 = NULL,f_7 = NULL;
            t = SSLgetAnnotations(k_62);
            q_5 = t;
            t = m_62;
            t = n_62(t);
            t_5 = t;
            t = (ATerm) ATinsert(CheckATermList(t_5), l_62);
            f_7 = t;
            t = SSLsetAnnotations(f_7, q_5);
          }
        }
    }
    return(t);
  }
  t = n_62(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL;
  r_62 = t;
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_62;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_26 = ATgetFirst((ATermList) t);
                ATerm r_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_62;
          }
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        t = (ATerm) ATinsert(ATempty, r_62);
      }
  }
  s_62 = t;
  t = term_o_22;
  t_62 = t;
  t = SSL_printnl(t_62, s_62);
  t = r_62;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm x_62 = NULL,y_62 = NULL;
  t = term_l_22;
  x_62 = t;
  t = term_b_25;
  y_62 = t;
  t = term_d_25;
  t = p_11(x_62, y_62, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm u_11 (ATerm e_56, ATerm f_56, ATerm t)
{
  t = SSL_hashtable_get(f_56, e_56);
  return(t);
}
static ATerm p_11 (ATerm n_54, ATerm o_54, ATerm t)
{
  ATerm z_62 = NULL;
  t = lookup_table_0_1(n_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(o_54, z_62, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm b_63 = NULL,c_63 = NULL;
  t = term_s_26;
  b_63 = t;
  t = term_t_23;
  c_63 = t;
  t = term_t_26;
  t = s_11(b_63, c_63, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_u_26;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL;
  t = term_s_26;
  f_63 = t;
  t = term_t_23;
  g_63 = t;
  t = term_t_26;
  t = s_11(f_63, g_63, t);
  t = term_v_26;
  d_63 = t;
  t = term_t_23;
  e_63 = t;
  t = term_w_26;
  t = s_11(d_63, e_63, t);
  t = term_x_26;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_y_26;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_26 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_3, j_3, k_3, t);
      LocalPopChoice(b_27);
    }
  else
    {
      t = z_26;
      t = Option_3_0(l_3, m_3, n_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm t)
{
  ATerm h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,i_7 = NULL;
  m_63 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_63 = ATgetFirst((ATermList) t);
      j_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_63);
  h_63 = t;
  t = i_63;
  t = u_89(t);
  k_63 = t;
  t = j_63;
  t = v_89(t);
  l_63 = t;
  t = (ATerm) ATinsert(CheckATermList(l_63), k_63);
  i_7 = t;
  t = SSLsetAnnotations(i_7, h_63);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_133 (ATerm), ATerm t)
{
  ATerm r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,w_63 = NULL,x_63 = NULL,k_7 = NULL;
  r_63 = t;
  {
    ATerm c_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_27;
        t = m_133(t);
        LocalPopChoice(d_27);
      }
    else
      {
        t = c_27;
      }
  }
  t = r_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_63 = ATgetFirst((ATermList) t);
      u_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_63);
  s_63 = t;
  t = term_b_25;
  x_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_25, t_63);
  t = s_11(x_63, t_63, t);
  t = u_63;
  {
    static ATerm h_64 (ATerm t)
    {
      ATerm f_27 = t;
      int g_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_27 = t;
          int i_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_64 = NULL;
              a_64 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_64;
              LocalPopChoice(i_27);
            }
          else
            {
              t = h_27;
              t = m_133(t);
              t = Cons_2_0(_id, h_64, t);
            }
          LocalPopChoice(g_27);
        }
      else
        {
          t = f_27;
          {
            ATerm d_64 = NULL,e_64 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_64 = ATgetFirst((ATermList) t);
                e_64 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(e_64), (ATerm) ATmakeAppl(sym_Undefined_1, d_64));
          }
        }
      return(t);
    }
    t = h_64(t);
  }
  w_63 = t;
  t = (ATerm) ATinsert(CheckATermList(w_63), (ATerm) ATmakeAppl(sym_Program_1, t_63));
  k_7 = t;
  t = SSLsetAnnotations(k_7, s_63);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm u_64 = NULL;
  u_64 = t;
  if(match_string(t, "--help"))
    {
      t = u_64;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_64;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_64;
        }
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm v_64 = NULL,w_64 = NULL;
  t = term_y_25;
  v_64 = t;
  t = term_t_23;
  w_64 = t;
  t = term_j_27;
  t = s_11(v_64, w_64, t);
  t = term_k_27;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_l_27;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_133 (ATerm), ATerm t)
{
  ATerm m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL;
  o_64 = t;
  t = term_s_24;
  p_64 = t;
  t = term_n_27;
  t = lookup_table_0_1(p_64, t);
  t_64 = t;
  t = term_t_24;
  q_64 = t;
  t = (ATerm) ATempty;
  r_64 = t;
  t = t_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(q_64, r_64, s_64, t);
  t = o_64;
  {
    static ATerm o_3 (ATerm t)
    {
      ATerm o_27 = t;
      int p_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_133(t);
          LocalPopChoice(p_27);
        }
      else
        {
          t = o_27;
          {
            ATerm q_27 = t;
            int r_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_3, q_3, r_3, t);
                LocalPopChoice(r_27);
              }
            else
              {
                t = q_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_3, t);
  }
  {
    ATerm s_27 = t;
    int t_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_65 = NULL;
        h_65 = t;
        {
          ATerm u_27 = t;
          int v_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_6 = NULL;
              t = h_65;
              {
                ATerm w_27 = t;
                int x_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_6 = NULL,c_6 = NULL;
                    t = term_l_22;
                    b_6 = t;
                    t = term_y_25;
                    c_6 = t;
                    t = term_z_25;
                    t = p_11(b_6, c_6, t);
                    LocalPopChoice(x_27);
                  }
                else
                  {
                    t = w_27;
                    t = fetch_1_0(s_3, t);
                  }
              }
              t = h_65;
              t = default_system_usage_0_0(t);
              t = term_d_24;
              a_6 = t;
              t = SSL_exit(a_6);
              LocalPopChoice(v_27);
            }
          else
            {
              t = u_27;
              {
                ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
                t = term_l_22;
                h_6 = t;
                t = term_s_26;
                i_6 = t;
                t = term_y_27;
                t = p_11(h_6, i_6, t);
                t = h_65;
                t = default_system_about_0_0(t);
                t = term_d_24;
                g_6 = t;
                t = SSL_exit(g_6);
              }
            }
        }
        LocalPopChoice(t_27);
      }
    else
      {
        t = s_27;
        {
          ATerm a_28 = t;
          int b_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL;
              static ATerm t_3 (ATerm t)
              {
                ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL,m_7 = NULL;
                n_65 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    m_65 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_65);
                l_65 = t;
                t = m_65;
                if(((m_64 != NULL) && (m_64 != t)))
                  _fail(t);
                else
                  m_64 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, m_65);
                m_7 = t;
                t = SSLsetAnnotations(m_7, l_65);
                return(t);
              }
              t = fetch_1_0(t_3, t);
              t = term_v_23;
              j_65 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_64)), term_c_28);
              k_65 = t;
              t = SSL_printnl(j_65, k_65);
              t = (ATerm) ATmakeAppl(sym__2, term_v_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_64)), term_c_28));
              t = default_system_usage_0_0(t);
              t = term_y_23;
              i_65 = t;
              t = SSL_exit(i_65);
              LocalPopChoice(b_28);
            }
          else
            {
              t = a_28;
            }
        }
      }
  }
  n_64 = t;
  t = term_s_24;
  t = table_destroy_0_0(t);
  t = n_64;
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm n_131 (ATerm), ATerm o_131 (ATerm), ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL;
  t = parse_options_1_0(l_131, t);
  s_65 = t;
  t = term_d_28;
  t = table_create_0_0(t);
  t = term_d_28;
  t_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_28, term_e_28, s_65);
  t = lookup_table_0_1(t_65, t);
  w_65 = t;
  t = term_e_28;
  u_65 = t;
  t = w_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(u_65, s_65, v_65, t);
  t = s_65;
  t = n_131(t);
  {
    ATerm f_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_131, t);
        LocalPopChoice(g_28);
      }
    else
      {
        t = f_28;
        {
          ATerm h_28 = t;
          int j_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_131(t);
              t = report_success_0_0(t);
              LocalPopChoice(j_28);
            }
          else
            {
              t = h_28;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      {
        ATerm m_28 = t;
        int n_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(n_28);
          }
        else
          {
            t = m_28;
            {
              ATerm o_28 = t;
              int p_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(a_4, e_4, f_4, t);
                  LocalPopChoice(p_28);
                }
              else
                {
                  t = o_28;
                  {
                    ATerm q_28 = t;
                    int r_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(r_28);
                      }
                    else
                      {
                        t = q_28;
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
static ATerm x_3 (ATerm t)
{
  t = input_1_0(g_4, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm g_66 = NULL,h_66 = NULL;
  t = term_r_22;
  g_66 = t;
  t = term_t_23;
  h_66 = t;
  t = term_t_28;
  t = s_11(g_66, h_66, t);
  t = term_u_28;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_v_28;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = output_1_0(h_4, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,s_7 = NULL,r_7 = NULL,q_7 = NULL,p_7 = NULL;
  y_66 = t;
  if(match_cons(t, sym_Specification_1))
    {
      k_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_66);
  j_66 = t;
  t = k_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_66 = ATgetFirst((ATermList) t);
      n_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_66);
  l_66 = t;
  t = n_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_66 = ATgetFirst((ATermList) t);
      s_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_66);
  q_66 = t;
  t = r_66;
  if(match_cons(t, sym_Strategies_1))
    {
      v_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_66);
  u_66 = t;
  t = v_66;
  t = map_1_0(i_4, t);
  w_66 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, w_66);
  p_7 = t;
  t = SSLsetAnnotations(p_7, u_66);
  x_66 = t;
  t = s_66;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_66), x_66);
  q_7 = t;
  t = SSLsetAnnotations(q_7, q_66);
  t_66 = t;
  t = (ATerm) ATinsert(CheckATermList(t_66), m_66);
  r_7 = t;
  t = SSLsetAnnotations(r_7, l_66);
  o_66 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, o_66);
  s_7 = t;
  t = SSLsetAnnotations(s_7, j_66);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL;
  p_67 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      l_67 = ATgetArgument(t, 0);
      m_67 = ATgetArgument(t, 1);
      n_67 = ATgetArgument(t, 2);
      o_67 = ATgetArgument(t, 3);
      {
        ATerm w_28 = t;
        int x_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_6 = NULL,u_6 = NULL,o_7 = NULL;
            t = SSLgetAnnotations(p_67);
            p_6 = t;
            t = o_67;
            t = simplify_0_0(t);
            u_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, l_67, m_67, n_67, u_6);
            o_7 = t;
            t = SSLsetAnnotations(o_7, p_6);
            LocalPopChoice(x_28);
          }
        else
          {
            t = w_28;
            t = p_67;
          }
      }
    }
  else
    {
      t = p_67;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(u_3, default_usage_0_0, _id, x_3, t);
  return(t);
}
