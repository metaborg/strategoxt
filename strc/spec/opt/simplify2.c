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
Symbol sym_Prim_2;
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
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_a_32;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_c_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_f_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_i_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_n_26;
ATerm term_k_26;
ATerm term_d_25;
ATerm term_j_24;
ATerm term_w_7;
ATerm term_q_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym__2, term_q_26, term_r_26);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym__2, term_q_26, term_x_26);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym__2, term_q_26, term_v_27);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym__2, term_g_28, term_h_28);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_28);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym__2, term_o_28, term_y_27);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym__2, term_q_26, term_g_29);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym__2, term_q_26, term_g_28);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym__2, term_q_26, term_y_29);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym__2, term_x_28, term_y_28);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym__2, term_r_30, term_y_27);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym__2, term_u_30, term_y_27);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym__2, term_y_29, term_y_27);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym__3, term_x_28, term_y_28, (ATerm) ATempty);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym__2, term_q_26, term_r_30);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym__2, term_x_26, term_y_27);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm bottomup_1_0 (ATerm s_104 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm v_105 (ATerm), ATerm t);
static ATerm t_0 (ATerm f_0, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm simplify_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm g_11 (ATerm q_27, ATerm r_27, ATerm s_27, ATerm t);
ATerm genzip_4_0 (ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm s_125 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm s_55 (ATerm j_55, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm r_104 (ATerm), ATerm t);
ATerm map_1_0 (ATerm b_125 (ATerm), ATerm t);
static ATerm k_11 (ATerm v_43, ATerm w_43, ATerm t);
static ATerm l_11 (ATerm w_48, ATerm x_48, ATerm t);
static ATerm n_11 (ATerm v_118 (ATerm), ATerm x_429, ATerm c_49, ATerm t);
static ATerm m_11 (ATerm s_48, ATerm t_48, ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm output_1_0 (ATerm s_131 (ATerm), ATerm t);
static ATerm c_61 (ATerm w_60, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_11 (ATerm y_48, ATerm t);
static ATerm p_11 (ATerm o_42, ATerm p_42, ATerm t);
static ATerm q_11 (ATerm x_43, ATerm y_43, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_62 (ATerm m_61, ATerm t);
static ATerm o_62 (ATerm q_61, ATerm r_61, ATerm s_61, ATerm t);
static ATerm p_62 (ATerm a_62, ATerm b_62, ATerm c_62, ATerm t);
static ATerm r_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm t_131 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm a_12 (ATerm q_47, ATerm r_47, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm y_11 (ATerm u_52, ATerm v_52, ATerm t_52, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm s_11 (ATerm c_50, ATerm d_50, ATerm t);
ATerm foldr_2_0 (ATerm r_123 (ATerm), ATerm s_123 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm s_116 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm need_help_1_0 (ATerm j_131 (ATerm), ATerm t);
static ATerm b_12 (ATerm b_56, ATerm c_56, ATerm d_56, ATerm t);
ATerm lookup_table_0_1 (ATerm g_54, ATerm t);
ATerm new_hashtable_0_2 (ATerm j_56, ATerm k_56, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm u_11 (ATerm g_56, ATerm h_56, ATerm t);
static ATerm v_11 (ATerm l_56, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm l_125 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_12 (ATerm e_56, ATerm f_56, ATerm t);
static ATerm x_11 (ATerm n_54, ATerm o_54, ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm m_133 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm parse_options_1_0 (ATerm l_133 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm n_131 (ATerm), ATerm o_131 (ATerm), ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
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
  static ATerm u_0 (ATerm t)
  {
    ATerm j_6 = t;
    int k_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_105(t);
        LocalPopChoice(k_6);
      }
    else
      {
        t = j_6;
        t = SRTS_one(u_0, t);
      }
    return(t);
  }
  t = u_0(t);
  return(t);
}
static ATerm t_0 (ATerm f_0, ATerm t)
{
  ATerm j_0 = NULL;
  t = SSL_explode_term(f_0);
  if(match_cons(t, sym__2))
    {
      ATerm l_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      j_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_0;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL,q_0 = NULL;
  q_0 = t;
  if(match_cons(t, sym__2))
    {
      o_0 = ATgetArgument(t, 0);
      p_0 = ATgetArgument(t, 1);
      {
        ATerm n_6 = t;
        int o_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_0 (ATerm t)
            {
              t = p_0;
              return(t);
            }
            t = o_0;
            t = at_end_1_0(b_0, t);
            LocalPopChoice(o_6);
          }
        else
          {
            t = n_6;
            t = t_0(q_0, t);
          }
      }
    }
  else
    {
      t = t_0(q_0, t);
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_6 = ATgetArgument(t, 0);
      if(((ATgetType(p_6) != AT_LIST) || !(ATisEmpty(p_6))))
        _fail(t);
      {
        ATerm q_6 = ATgetArgument(t, 1);
        if(((ATgetType(q_6) != AT_LIST) || !(ATisEmpty(q_6))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_6 = ATgetArgument(t, 0);
      if(((ATgetType(s_6) == AT_LIST) && !(ATisEmpty(s_6))))
        {
          z_15 = ATgetFirst((ATermList) s_6);
          a_16 = (ATerm) ATgetNext((ATermList) s_6);
        }
      else
        _fail(t);
      {
        ATerm t_6 = ATgetArgument(t, 1);
        if(((ATgetType(t_6) == AT_LIST) && !(ATisEmpty(t_6))))
          {
            b_16 = ATgetFirst((ATermList) t_6);
            c_16 = (ATerm) ATgetNext((ATermList) t_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_15, b_16), (ATerm) ATmakeAppl(sym__2, a_16, c_16));
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm f_16 = NULL,h_16 = NULL;
  if(match_cons(t, sym__2))
    {
      f_16 = ATgetArgument(t, 0);
      h_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_16), f_16);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL;
  if(match_cons(t, sym__2))
    {
      o_16 = ATgetArgument(t, 0);
      p_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_16), (ATerm) ATmakeAppl(sym_Match_1, p_16));
  return(t);
}
static ATerm x_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_6 = ATgetArgument(t, 0);
      if(((ATgetType(u_6) != AT_LIST) || !(ATisEmpty(u_6))))
        _fail(t);
      {
        ATerm v_6 = ATgetArgument(t, 1);
        if(((ATgetType(v_6) != AT_LIST) || !(ATisEmpty(v_6))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,s_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_6 = ATgetArgument(t, 0);
      if(((ATgetType(x_6) == AT_LIST) && !(ATisEmpty(x_6))))
        {
          m_25 = ATgetFirst((ATermList) x_6);
          n_25 = (ATerm) ATgetNext((ATermList) x_6);
        }
      else
        _fail(t);
      {
        ATerm y_6 = ATgetArgument(t, 1);
        if(((ATgetType(y_6) == AT_LIST) && !(ATisEmpty(y_6))))
          {
            o_25 = ATgetFirst((ATermList) y_6);
            s_25 = (ATerm) ATgetNext((ATermList) y_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_25, o_25), (ATerm) ATmakeAppl(sym__2, n_25, s_25));
  return(t);
}
static ATerm z_0 (ATerm t)
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
static ATerm a_1 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL;
  if(match_cons(t, sym__2))
    {
      w_25 = ATgetArgument(t, 0);
      x_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_25), (ATerm) ATmakeAppl(sym_Match_1, x_25));
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm a_7 = t;
  int b_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm c_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(b_7);
      {
        ATerm h_37 = NULL,i_37 = NULL;
        h_37 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm d_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        i_37 = t;
        t = SSLgetAnnotations(h_37);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_7 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) e_7) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm f_7 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(f_7) != AT_LIST) || !(ATisEmpty(f_7))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_37;
      }
    }
  else
    {
      t = a_7;
      {
        ATerm g_7 = t;
        int h_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm i_7 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) i_7) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm k_7 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(h_7);
            _fail(t);
          }
        else
          {
            t = g_7;
          }
      }
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  static ATerm h_0 (ATerm t)
  {
    ATerm c_9 = NULL,n_9 = NULL,w_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL;
    q_10 = t;
    if(match_cons(t, sym_Test_1))
      {
        p_10 = ATgetArgument(t, 0);
        t = p_10;
        if(match_cons(t, sym_Id_0))
          {
            ATerm m_7 = t;
            int o_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_q_7;
                t = h_0(t);
                LocalPopChoice(o_7);
              }
            else
              {
                t = m_7;
                {
                  ATerm r_7 = t;
                  int s_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL;
                      t = q_10;
                      t = new_0_0(t);
                      s_10 = t;
                      t = bottomup_1_0(h_0, t);
                      d_11 = t;
                      t = (ATerm) ATempty;
                      t = h_0(t);
                      e_11 = t;
                      t = (ATerm) ATinsert(CheckATermList(e_11), d_11);
                      t = h_0(t);
                      t_10 = t;
                      t = s_10;
                      t = bottomup_1_0(h_0, t);
                      c_11 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, c_11);
                      t = h_0(t);
                      b_11 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, b_11);
                      t = h_0(t);
                      v_10 = t;
                      t = p_10;
                      t = bottomup_1_0(h_0, t);
                      x_10 = t;
                      t = s_10;
                      t = bottomup_1_0(h_0, t);
                      a_11 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, a_11);
                      t = h_0(t);
                      z_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, z_10);
                      t = h_0(t);
                      y_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_10, y_10);
                      t = h_0(t);
                      w_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_10, w_10);
                      t = h_0(t);
                      u_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, t_10, u_10);
                      t = h_0(t);
                      LocalPopChoice(s_7);
                    }
                  else
                    {
                      t = r_7;
                      t = q_10;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm t_7 = t;
                int v_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_w_7;
                    t = h_0(t);
                    LocalPopChoice(v_7);
                  }
                else
                  {
                    t = t_7;
                    {
                      ATerm x_7 = t;
                      int y_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_11 = NULL,j_11 = NULL,t_11 = NULL,w_11 = NULL,z_11 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
                          t = q_10;
                          t = new_0_0(t);
                          i_11 = t;
                          t = bottomup_1_0(h_0, t);
                          j_12 = t;
                          t = (ATerm) ATempty;
                          t = h_0(t);
                          k_12 = t;
                          t = (ATerm) ATinsert(CheckATermList(k_12), j_12);
                          t = h_0(t);
                          j_11 = t;
                          t = i_11;
                          t = bottomup_1_0(h_0, t);
                          i_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, i_12);
                          t = h_0(t);
                          h_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, h_12);
                          t = h_0(t);
                          w_11 = t;
                          t = p_10;
                          t = bottomup_1_0(h_0, t);
                          d_12 = t;
                          t = i_11;
                          t = bottomup_1_0(h_0, t);
                          g_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, g_12);
                          t = h_0(t);
                          f_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, f_12);
                          t = h_0(t);
                          e_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                          t = h_0(t);
                          z_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, z_11);
                          t = h_0(t);
                          t_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, j_11, t_11);
                          t = h_0(t);
                          LocalPopChoice(y_7);
                        }
                      else
                        {
                          t = x_7;
                          t = q_10;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    m_10 = ATgetArgument(t, 0);
                    {
                      ATerm g_8 = t;
                      int h_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, m_10);
                          t = h_0(t);
                          LocalPopChoice(h_8);
                        }
                      else
                        {
                          t = g_8;
                          {
                            ATerm i_8 = t;
                            int j_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
                                t = q_10;
                                t = new_0_0(t);
                                o_12 = t;
                                t = bottomup_1_0(h_0, t);
                                z_12 = t;
                                t = (ATerm) ATempty;
                                t = h_0(t);
                                a_13 = t;
                                t = (ATerm) ATinsert(CheckATermList(a_13), z_12);
                                t = h_0(t);
                                p_12 = t;
                                t = o_12;
                                t = bottomup_1_0(h_0, t);
                                y_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, y_12);
                                t = h_0(t);
                                x_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, x_12);
                                t = h_0(t);
                                r_12 = t;
                                t = p_10;
                                t = bottomup_1_0(h_0, t);
                                t_12 = t;
                                t = o_12;
                                t = bottomup_1_0(h_0, t);
                                w_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, w_12);
                                t = h_0(t);
                                v_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, v_12);
                                t = h_0(t);
                                u_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, t_12, u_12);
                                t = h_0(t);
                                s_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, r_12, s_12);
                                t = h_0(t);
                                q_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, p_12, q_12);
                                t = h_0(t);
                                LocalPopChoice(j_8);
                              }
                            else
                              {
                                t = i_8;
                                t = q_10;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm k_8 = t;
                    int n_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL;
                        t = q_10;
                        t = new_0_0(t);
                        d_13 = t;
                        t = bottomup_1_0(h_0, t);
                        o_13 = t;
                        t = (ATerm) ATempty;
                        t = h_0(t);
                        p_13 = t;
                        t = (ATerm) ATinsert(CheckATermList(p_13), o_13);
                        t = h_0(t);
                        e_13 = t;
                        t = d_13;
                        t = bottomup_1_0(h_0, t);
                        n_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, n_13);
                        t = h_0(t);
                        m_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, m_13);
                        t = h_0(t);
                        g_13 = t;
                        t = p_10;
                        t = bottomup_1_0(h_0, t);
                        i_13 = t;
                        t = d_13;
                        t = bottomup_1_0(h_0, t);
                        l_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, l_13);
                        t = h_0(t);
                        k_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, k_13);
                        t = h_0(t);
                        j_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, i_13, j_13);
                        t = h_0(t);
                        h_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_13, h_13);
                        t = h_0(t);
                        f_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, e_13, f_13);
                        t = h_0(t);
                        LocalPopChoice(n_8);
                      }
                    else
                      {
                        t = k_8;
                        t = q_10;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            p_10 = ATgetArgument(t, 0);
            t = p_10;
            if(match_cons(t, sym_Id_0))
              {
                ATerm p_8 = t;
                int q_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_w_7;
                    t = h_0(t);
                    LocalPopChoice(q_8);
                  }
                else
                  {
                    t = p_8;
                    t = q_10;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm r_8 = t;
                    int s_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_q_7;
                        t = h_0(t);
                        LocalPopChoice(s_8);
                      }
                    else
                      {
                        t = r_8;
                        t = q_10;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        m_10 = ATgetArgument(t, 0);
                        {
                          ATerm t_8 = t;
                          int u_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, m_10);
                              t = h_0(t);
                              LocalPopChoice(u_8);
                            }
                          else
                            {
                              t = t_8;
                              t = q_10;
                            }
                        }
                      }
                    else
                      {
                        t = q_10;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                p_10 = ATgetArgument(t, 0);
                o_10 = ATgetArgument(t, 1);
                t = o_10;
                if(match_cons(t, sym_Id_0))
                  {
                    t = p_10;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = o_10;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = p_10;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                m_10 = ATgetArgument(t, 0);
                                n_10 = ATgetArgument(t, 1);
                                t = p_10;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    m_10 = ATgetArgument(t, 0);
                                    n_10 = ATgetArgument(t, 1);
                                    t = p_10;
                                  }
                                else
                                  {
                                    t = p_10;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        k_10 = ATgetArgument(t, 0);
                        l_10 = ATgetArgument(t, 1);
                        t = k_10;
                        if(match_cons(t, sym_Match_1))
                          {
                            j_10 = ATgetArgument(t, 0);
                            t = j_10;
                            if(match_cons(t, sym_Op_2))
                              {
                                h_10 = ATgetArgument(t, 0);
                                c_10 = ATgetArgument(t, 1);
                                t = p_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm w_8 = t;
                                        int x_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_w_7;
                                            t = h_0(t);
                                            LocalPopChoice(x_8);
                                          }
                                        else
                                          {
                                            t = w_8;
                                            t = q_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            m_10 = ATgetArgument(t, 0);
                                            n_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm y_8 = t;
                                              int z_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm p_15 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                  t = h_0(t);
                                                  p_15 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, p_15);
                                                  t = h_0(t);
                                                  LocalPopChoice(z_8);
                                                }
                                              else
                                                {
                                                  t = y_8;
                                                  t = q_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                t = m_10;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    i_10 = ATgetArgument(t, 0);
                                                    d_10 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm a_9 = t;
                                                      int d_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, i_10, h_10);
                                                          {
                                                            ATerm i_9 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm w_0 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    w_0 = ATgetArgument(t, 0);
                                                                    if((w_0 != ATgetArgument(t, 1)))
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
                                                                t = i_9;
                                                              }
                                                          }
                                                          t = term_w_7;
                                                          t = bottomup_1_0(h_0, t);
                                                          LocalPopChoice(d_9);
                                                        }
                                                      else
                                                        {
                                                          t = a_9;
                                                          {
                                                            ATerm j_9 = t;
                                                            int k_9 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm y_15 = NULL;
                                                                t = h_10;
                                                                if((i_10 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, d_10, c_10);
                                                                t = genzip_4_0(m_0, r_0, s_0, v_0, t);
                                                                y_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_15), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, i_10, d_10)), l_10));
                                                                t = bottomup_1_0(h_0, t);
                                                                LocalPopChoice(k_9);
                                                              }
                                                            else
                                                              {
                                                                t = j_9;
                                                                {
                                                                  ATerm l_9 = t;
                                                                  int m_9 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm s_16 = NULL;
                                                                      t = j_10;
                                                                      if((m_10 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, m_10);
                                                                      t = h_0(t);
                                                                      s_16 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_16, l_10);
                                                                      t = h_0(t);
                                                                      LocalPopChoice(m_9);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = l_9;
                                                                      t = q_10;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm o_9 = t;
                                                    int p_9 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm f_17 = NULL;
                                                        t = j_10;
                                                        if((m_10 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, m_10);
                                                        t = h_0(t);
                                                        f_17 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, f_17, l_10);
                                                        t = h_0(t);
                                                        LocalPopChoice(p_9);
                                                      }
                                                    else
                                                      {
                                                        t = o_9;
                                                        t = q_10;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    m_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm q_9 = t;
                                                      int r_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_17 = NULL;
                                                          t = j_10;
                                                          if((m_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, m_10);
                                                          t = h_0(t);
                                                          j_17 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_17, l_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(r_9);
                                                        }
                                                      else
                                                        {
                                                          t = q_9;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        n_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_9 = t;
                                                          int u_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_17 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                              t = h_0(t);
                                                              u_17 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, u_17);
                                                              t = h_0(t);
                                                              LocalPopChoice(u_9);
                                                            }
                                                          else
                                                            {
                                                              t = s_9;
                                                              t = q_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_10;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = p_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm y_9 = t;
                                        int r_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_w_7;
                                            t = h_0(t);
                                            LocalPopChoice(r_10);
                                          }
                                        else
                                          {
                                            t = y_9;
                                            t = q_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            m_10 = ATgetArgument(t, 0);
                                            n_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm f_11 = t;
                                              int h_11 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm m_18 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                  t = h_0(t);
                                                  m_18 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, m_18);
                                                  t = h_0(t);
                                                  LocalPopChoice(h_11);
                                                }
                                              else
                                                {
                                                  t = f_11;
                                                  t = q_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                {
                                                  ATerm l_12 = t;
                                                  int m_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm q_18 = NULL;
                                                      t = j_10;
                                                      if((m_10 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, m_10);
                                                      t = h_0(t);
                                                      q_18 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_18, l_10);
                                                      t = h_0(t);
                                                      LocalPopChoice(m_12);
                                                    }
                                                  else
                                                    {
                                                      t = l_12;
                                                      t = q_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    m_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm n_12 = t;
                                                      int b_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_18 = NULL;
                                                          t = j_10;
                                                          if((m_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_10);
                                                          t = h_0(t);
                                                          x_18 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_18, l_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(b_13);
                                                        }
                                                      else
                                                        {
                                                          t = n_12;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        n_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm c_13 = t;
                                                          int q_13 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm c_19 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                              t = h_0(t);
                                                              c_19 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, c_19);
                                                              t = h_0(t);
                                                              LocalPopChoice(q_13);
                                                            }
                                                          else
                                                            {
                                                              t = c_13;
                                                              t = q_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_10;
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
                                j_10 = ATgetArgument(t, 0);
                                t = j_10;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    h_10 = ATgetArgument(t, 0);
                                    t = p_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm r_13 = t;
                                            int s_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_7;
                                                t = h_0(t);
                                                LocalPopChoice(s_13);
                                              }
                                            else
                                              {
                                                t = r_13;
                                                t = q_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                n_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm t_13 = t;
                                                  int u_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm w_19 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                      t = h_0(t);
                                                      w_19 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, w_19);
                                                      t = h_0(t);
                                                      LocalPopChoice(u_13);
                                                    }
                                                  else
                                                    {
                                                      t = t_13;
                                                      t = q_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm v_13 = t;
                                                int w_13 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm x_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(w_13);
                                                    {
                                                      ATerm y_13 = t;
                                                      int z_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm c_20 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, j_10);
                                                          t = h_0(t);
                                                          c_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_20, l_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(z_13);
                                                        }
                                                      else
                                                        {
                                                          t = y_13;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = v_13;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        t = m_10;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            i_10 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm a_14 = t;
                                                              int b_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm m_20 = NULL,r_20 = NULL;
                                                                  t = h_10;
                                                                  if((i_10 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, i_10);
                                                                  t = h_0(t);
                                                                  r_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, r_20);
                                                                  t = h_0(t);
                                                                  m_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_20, l_10);
                                                                  t = h_0(t);
                                                                  LocalPopChoice(b_14);
                                                                }
                                                              else
                                                                {
                                                                  t = a_14;
                                                                  t = q_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = q_10;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            m_10 = ATgetArgument(t, 0);
                                                            n_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm c_14 = t;
                                                              int d_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_20 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                                  t = h_0(t);
                                                                  y_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, y_20);
                                                                  t = h_0(t);
                                                                  LocalPopChoice(d_14);
                                                                }
                                                              else
                                                                {
                                                                  t = c_14;
                                                                  t = q_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = q_10;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = p_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm e_14 = t;
                                            int f_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_7;
                                                t = h_0(t);
                                                LocalPopChoice(f_14);
                                              }
                                            else
                                              {
                                                t = e_14;
                                                t = q_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                n_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm g_14 = t;
                                                  int i_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm r_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                      t = h_0(t);
                                                      r_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, r_21);
                                                      t = h_0(t);
                                                      LocalPopChoice(i_14);
                                                    }
                                                  else
                                                    {
                                                      t = g_14;
                                                      t = q_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm j_14 = t;
                                                int k_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm m_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(k_14);
                                                    {
                                                      ATerm p_14 = t;
                                                      int q_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm a_22 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, j_10);
                                                          t = h_0(t);
                                                          a_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_22, l_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(q_14);
                                                        }
                                                      else
                                                        {
                                                          t = p_14;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = j_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        n_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm r_14 = t;
                                                          int s_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_22 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                              t = h_0(t);
                                                              i_22 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, i_22);
                                                              t = h_0(t);
                                                              LocalPopChoice(s_14);
                                                            }
                                                          else
                                                            {
                                                              t = r_14;
                                                              t = q_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_10;
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
                                    j_10 = ATgetArgument(t, 0);
                                    e_10 = ATgetArgument(t, 1);
                                    f_10 = ATgetArgument(t, 2);
                                    t = p_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm t_14 = t;
                                            int u_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_7;
                                                t = h_0(t);
                                                LocalPopChoice(u_14);
                                              }
                                            else
                                              {
                                                t = t_14;
                                                t = q_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                n_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm v_14 = t;
                                                  int x_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm b_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                      t = h_0(t);
                                                      b_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, b_23);
                                                      t = h_0(t);
                                                      LocalPopChoice(x_14);
                                                    }
                                                  else
                                                    {
                                                      t = v_14;
                                                      t = q_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm z_14 = t;
                                                int a_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm c_15 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(a_15);
                                                    {
                                                      ATerm d_15 = t;
                                                      int e_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, j_10, e_10, f_10);
                                                          t = h_0(t);
                                                          j_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_23, l_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(e_15);
                                                        }
                                                      else
                                                        {
                                                          t = d_15;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = z_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        n_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm f_15 = t;
                                                          int j_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                              t = h_0(t);
                                                              r_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, r_23);
                                                              t = h_0(t);
                                                              LocalPopChoice(j_15);
                                                            }
                                                          else
                                                            {
                                                              t = f_15;
                                                              t = q_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_10;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = p_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm m_15 = t;
                                            int n_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_7;
                                                t = h_0(t);
                                                LocalPopChoice(n_15);
                                              }
                                            else
                                              {
                                                t = m_15;
                                                t = q_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                n_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm o_15 = t;
                                                  int q_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_24 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                      t = h_0(t);
                                                      e_24 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, e_24);
                                                      t = h_0(t);
                                                      LocalPopChoice(q_15);
                                                    }
                                                  else
                                                    {
                                                      t = o_15;
                                                      t = q_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    m_10 = ATgetArgument(t, 0);
                                                    n_10 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm r_15 = t;
                                                      int s_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm o_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                          t = h_0(t);
                                                          o_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, o_24);
                                                          t = h_0(t);
                                                          LocalPopChoice(s_15);
                                                        }
                                                      else
                                                        {
                                                          t = r_15;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = q_10;
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
                            k_10 = ATgetArgument(t, 0);
                            t = k_10;
                            if(match_cons(t, sym_Op_2))
                              {
                                j_10 = ATgetArgument(t, 0);
                                e_10 = ATgetArgument(t, 1);
                                t = p_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm t_15 = t;
                                        int u_15 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_w_7;
                                            t = h_0(t);
                                            LocalPopChoice(u_15);
                                          }
                                        else
                                          {
                                            t = t_15;
                                            t = q_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            m_10 = ATgetArgument(t, 0);
                                            n_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm v_15 = t;
                                              int w_15 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm b_25 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                  t = h_0(t);
                                                  b_25 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, b_25);
                                                  t = h_0(t);
                                                  LocalPopChoice(w_15);
                                                }
                                              else
                                                {
                                                  t = v_15;
                                                  t = q_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                t = m_10;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    i_10 = ATgetArgument(t, 0);
                                                    d_10 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm x_15 = t;
                                                      int d_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, i_10, j_10);
                                                          {
                                                            ATerm e_16 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm d_1 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    d_1 = ATgetArgument(t, 0);
                                                                    if((d_1 != ATgetArgument(t, 1)))
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
                                                                t = e_16;
                                                              }
                                                          }
                                                          t = term_w_7;
                                                          t = bottomup_1_0(h_0, t);
                                                          LocalPopChoice(d_16);
                                                        }
                                                      else
                                                        {
                                                          t = x_15;
                                                          {
                                                            ATerm g_16 = t;
                                                            int i_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm h_25 = NULL;
                                                                t = j_10;
                                                                if((i_10 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, d_10, e_10);
                                                                t = genzip_4_0(x_0, y_0, z_0, a_1, t);
                                                                h_25 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, h_25), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, i_10, d_10)));
                                                                t = bottomup_1_0(h_0, t);
                                                                LocalPopChoice(i_16);
                                                              }
                                                            else
                                                              {
                                                                t = g_16;
                                                                {
                                                                  ATerm j_16 = t;
                                                                  int k_16 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = k_10;
                                                                      if((m_10 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, m_10);
                                                                      t = h_0(t);
                                                                      LocalPopChoice(k_16);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = j_16;
                                                                      t = q_10;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm l_16 = t;
                                                    int m_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = k_10;
                                                        if((m_10 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, m_10);
                                                        t = h_0(t);
                                                        LocalPopChoice(m_16);
                                                      }
                                                    else
                                                      {
                                                        t = l_16;
                                                        t = q_10;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    m_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm n_16 = t;
                                                      int q_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = k_10;
                                                          if((m_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, m_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(q_16);
                                                        }
                                                      else
                                                        {
                                                          t = n_16;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        n_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm r_16 = t;
                                                          int t_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                              t = h_0(t);
                                                              h_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, h_26);
                                                              t = h_0(t);
                                                              LocalPopChoice(t_16);
                                                            }
                                                          else
                                                            {
                                                              t = r_16;
                                                              t = q_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_10;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = p_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm u_16 = t;
                                        int v_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_w_7;
                                            t = h_0(t);
                                            LocalPopChoice(v_16);
                                          }
                                        else
                                          {
                                            t = u_16;
                                            t = q_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            m_10 = ATgetArgument(t, 0);
                                            n_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm w_16 = t;
                                              int x_16 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm s_26 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                  t = h_0(t);
                                                  s_26 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, s_26);
                                                  t = h_0(t);
                                                  LocalPopChoice(x_16);
                                                }
                                              else
                                                {
                                                  t = w_16;
                                                  t = q_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                {
                                                  ATerm y_16 = t;
                                                  int z_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = k_10;
                                                      if((m_10 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, m_10);
                                                      t = h_0(t);
                                                      LocalPopChoice(z_16);
                                                    }
                                                  else
                                                    {
                                                      t = y_16;
                                                      t = q_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    m_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm a_17 = t;
                                                      int b_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = k_10;
                                                          if((m_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(b_17);
                                                        }
                                                      else
                                                        {
                                                          t = a_17;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        n_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm c_17 = t;
                                                          int d_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                              t = h_0(t);
                                                              z_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, z_27);
                                                              t = h_0(t);
                                                              LocalPopChoice(d_17);
                                                            }
                                                          else
                                                            {
                                                              t = c_17;
                                                              t = q_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_10;
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
                                k_10 = ATgetArgument(t, 0);
                                t = k_10;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    j_10 = ATgetArgument(t, 0);
                                    t = p_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm e_17 = t;
                                            int g_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_7;
                                                t = h_0(t);
                                                LocalPopChoice(g_17);
                                              }
                                            else
                                              {
                                                t = e_17;
                                                t = q_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                n_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm h_17 = t;
                                                  int i_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm i_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                      t = h_0(t);
                                                      i_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, i_28);
                                                      t = h_0(t);
                                                      LocalPopChoice(i_17);
                                                    }
                                                  else
                                                    {
                                                      t = h_17;
                                                      t = q_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm k_17 = t;
                                                int l_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm m_17 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(l_17);
                                                    {
                                                      ATerm n_17 = t;
                                                      int o_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, k_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(o_17);
                                                        }
                                                      else
                                                        {
                                                          t = n_17;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = k_17;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        t = m_10;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            i_10 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm p_17 = t;
                                                              int q_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm n_28 = NULL;
                                                                  t = j_10;
                                                                  if((i_10 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, i_10);
                                                                  t = h_0(t);
                                                                  n_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, n_28);
                                                                  t = h_0(t);
                                                                  LocalPopChoice(q_17);
                                                                }
                                                              else
                                                                {
                                                                  t = p_17;
                                                                  t = q_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = q_10;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            m_10 = ATgetArgument(t, 0);
                                                            n_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm r_17 = t;
                                                              int s_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm v_28 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                                  t = h_0(t);
                                                                  v_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, v_28);
                                                                  t = h_0(t);
                                                                  LocalPopChoice(s_17);
                                                                }
                                                              else
                                                                {
                                                                  t = r_17;
                                                                  t = q_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = q_10;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = p_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm t_17 = t;
                                            int v_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_7;
                                                t = h_0(t);
                                                LocalPopChoice(v_17);
                                              }
                                            else
                                              {
                                                t = t_17;
                                                t = q_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                n_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm w_17 = t;
                                                  int x_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm h_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                      t = h_0(t);
                                                      h_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, h_29);
                                                      t = h_0(t);
                                                      LocalPopChoice(x_17);
                                                    }
                                                  else
                                                    {
                                                      t = w_17;
                                                      t = q_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm y_17 = t;
                                                int z_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm a_18 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(z_17);
                                                    {
                                                      ATerm b_18 = t;
                                                      int c_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, k_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(c_18);
                                                        }
                                                      else
                                                        {
                                                          t = b_18;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = y_17;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        n_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm d_18 = t;
                                                          int e_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                              t = h_0(t);
                                                              p_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, p_29);
                                                              t = h_0(t);
                                                              LocalPopChoice(e_18);
                                                            }
                                                          else
                                                            {
                                                              t = d_18;
                                                              t = q_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_10;
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
                                    k_10 = ATgetArgument(t, 0);
                                    l_10 = ATgetArgument(t, 1);
                                    g_10 = ATgetArgument(t, 2);
                                    t = p_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm f_18 = t;
                                            int g_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_7;
                                                t = h_0(t);
                                                LocalPopChoice(g_18);
                                              }
                                            else
                                              {
                                                t = f_18;
                                                t = q_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                n_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm h_18 = t;
                                                  int i_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_30 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                      t = h_0(t);
                                                      e_30 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, e_30);
                                                      t = h_0(t);
                                                      LocalPopChoice(i_18);
                                                    }
                                                  else
                                                    {
                                                      t = h_18;
                                                      t = q_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm j_18 = t;
                                                int k_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm l_18 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(k_18);
                                                    {
                                                      ATerm n_18 = t;
                                                      int o_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, k_10, l_10, g_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(o_18);
                                                        }
                                                      else
                                                        {
                                                          t = n_18;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = j_18;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        n_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm p_18 = t;
                                                          int r_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                              t = h_0(t);
                                                              n_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, n_30);
                                                              t = h_0(t);
                                                              LocalPopChoice(r_18);
                                                            }
                                                          else
                                                            {
                                                              t = p_18;
                                                              t = q_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_10;
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
                                        k_10 = ATgetArgument(t, 0);
                                        l_10 = ATgetArgument(t, 1);
                                        t = p_10;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = o_10;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm s_18 = t;
                                                int t_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_w_7;
                                                    t = h_0(t);
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
                                                          ATerm f_31 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_10, l_10);
                                                          t = h_0(t);
                                                          f_31 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, k_10, f_31);
                                                          t = h_0(t);
                                                          LocalPopChoice(v_18);
                                                        }
                                                      else
                                                        {
                                                          t = u_18;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    m_10 = ATgetArgument(t, 0);
                                                    n_10 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm w_18 = t;
                                                      int y_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm k_31 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                          t = h_0(t);
                                                          k_31 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, k_31);
                                                          t = h_0(t);
                                                          LocalPopChoice(y_18);
                                                        }
                                                      else
                                                        {
                                                          t = w_18;
                                                          {
                                                            ATerm z_18 = t;
                                                            int a_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm o_31 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_10, l_10);
                                                                t = h_0(t);
                                                                o_31 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, k_10, o_31);
                                                                t = h_0(t);
                                                                LocalPopChoice(a_19);
                                                              }
                                                            else
                                                              {
                                                                t = z_18;
                                                                t = q_10;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        n_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_19 = t;
                                                          int d_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm t_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_10, l_10);
                                                              t = h_0(t);
                                                              t_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, k_10, t_31);
                                                              t = h_0(t);
                                                              LocalPopChoice(d_19);
                                                            }
                                                          else
                                                            {
                                                              t = b_19;
                                                              {
                                                                ATerm e_19 = t;
                                                                int f_19 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm y_31 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                                    t = h_0(t);
                                                                    y_31 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, y_31);
                                                                    t = h_0(t);
                                                                    LocalPopChoice(f_19);
                                                                  }
                                                                else
                                                                  {
                                                                    t = e_19;
                                                                    t = q_10;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm g_19 = t;
                                                        int h_19 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm d_32 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, p_10, l_10);
                                                            t = h_0(t);
                                                            d_32 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, k_10, d_32);
                                                            t = h_0(t);
                                                            LocalPopChoice(h_19);
                                                          }
                                                        else
                                                          {
                                                            t = g_19;
                                                            t = q_10;
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
                                            k_10 = ATgetArgument(t, 0);
                                            l_10 = ATgetArgument(t, 1);
                                            t = p_10;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = o_10;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm i_19 = t;
                                                    int j_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_w_7;
                                                        t = h_0(t);
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
                                                              ATerm o_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_10, l_10);
                                                              t = h_0(t);
                                                              o_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, k_10, o_32);
                                                              t = h_0(t);
                                                              LocalPopChoice(l_19);
                                                            }
                                                          else
                                                            {
                                                              t = k_19;
                                                              t = q_10;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        n_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm m_19 = t;
                                                          int n_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm t_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                              t = h_0(t);
                                                              t_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, t_32);
                                                              t = h_0(t);
                                                              LocalPopChoice(n_19);
                                                            }
                                                          else
                                                            {
                                                              t = m_19;
                                                              {
                                                                ATerm o_19 = t;
                                                                int p_19 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm z_32 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, p_10, l_10);
                                                                    t = h_0(t);
                                                                    z_32 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, k_10, z_32);
                                                                    t = h_0(t);
                                                                    LocalPopChoice(p_19);
                                                                  }
                                                                else
                                                                  {
                                                                    t = o_19;
                                                                    t = q_10;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            m_10 = ATgetArgument(t, 0);
                                                            n_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm q_19 = t;
                                                              int r_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm i_33 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_10, l_10);
                                                                  t = h_0(t);
                                                                  i_33 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, k_10, i_33);
                                                                  t = h_0(t);
                                                                  LocalPopChoice(r_19);
                                                                }
                                                              else
                                                                {
                                                                  t = q_19;
                                                                  {
                                                                    ATerm s_19 = t;
                                                                    int t_19 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm m_33 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                                        t = h_0(t);
                                                                        m_33 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, m_33);
                                                                        t = h_0(t);
                                                                        LocalPopChoice(t_19);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = s_19;
                                                                        t = q_10;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm u_19 = t;
                                                            int v_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm y_33 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_10, l_10);
                                                                t = h_0(t);
                                                                y_33 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, k_10, y_33);
                                                                t = h_0(t);
                                                                LocalPopChoice(v_19);
                                                              }
                                                            else
                                                              {
                                                                t = u_19;
                                                                t = q_10;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = p_10;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = o_10;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm x_19 = t;
                                                    int y_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_w_7;
                                                        t = h_0(t);
                                                        LocalPopChoice(y_19);
                                                      }
                                                    else
                                                      {
                                                        t = x_19;
                                                        t = q_10;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        n_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm z_19 = t;
                                                          int a_20 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                              t = h_0(t);
                                                              p_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, p_34);
                                                              t = h_0(t);
                                                              LocalPopChoice(a_20);
                                                            }
                                                          else
                                                            {
                                                              t = z_19;
                                                              t = q_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            m_10 = ATgetArgument(t, 0);
                                                            n_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm b_20 = t;
                                                              int d_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm x_34 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                                  t = h_0(t);
                                                                  x_34 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, x_34);
                                                                  t = h_0(t);
                                                                  LocalPopChoice(d_20);
                                                                }
                                                              else
                                                                {
                                                                  t = b_20;
                                                                  t = q_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = q_10;
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
                    p_10 = ATgetArgument(t, 0);
                    o_10 = ATgetArgument(t, 1);
                    t = o_10;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = p_10;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm e_20 = t;
                            int f_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_q_7;
                                t = h_0(t);
                                LocalPopChoice(f_20);
                              }
                            else
                              {
                                t = e_20;
                                t = p_10;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = o_10;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    m_10 = ATgetArgument(t, 0);
                                    n_10 = ATgetArgument(t, 1);
                                    t = p_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        m_10 = ATgetArgument(t, 0);
                                        t = p_10;
                                      }
                                    else
                                      {
                                        t = p_10;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = p_10;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm g_20 = t;
                            int h_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_q_7;
                                t = h_0(t);
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
                                      t = o_10;
                                      if((p_10 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(j_20);
                                    }
                                  else
                                    {
                                      t = i_20;
                                      t = q_10;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = o_10;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    m_10 = ATgetArgument(t, 0);
                                    n_10 = ATgetArgument(t, 1);
                                    {
                                      ATerm k_20 = t;
                                      int l_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm x_36 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, n_10, o_10);
                                          t = h_0(t);
                                          x_36 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, m_10, x_36);
                                          t = h_0(t);
                                          LocalPopChoice(l_20);
                                        }
                                      else
                                        {
                                          t = k_20;
                                          {
                                            ATerm n_20 = t;
                                            int o_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = o_10;
                                                if((p_10 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(o_20);
                                              }
                                            else
                                              {
                                                t = n_20;
                                                t = q_10;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        m_10 = ATgetArgument(t, 0);
                                        {
                                          ATerm p_20 = t;
                                          int q_20 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = o_10;
                                              if((p_10 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(q_20);
                                            }
                                          else
                                            {
                                              t = p_20;
                                              {
                                                ATerm s_20 = t;
                                                int t_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = m_10;
                                                    t = topdown_1_0(b_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, m_10);
                                                    t = bottomup_1_0(h_0, t);
                                                    LocalPopChoice(t_20);
                                                  }
                                                else
                                                  {
                                                    t = s_20;
                                                    t = q_10;
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
                                            t = o_10;
                                            if((p_10 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(v_20);
                                          }
                                        else
                                          {
                                            t = u_20;
                                            t = q_10;
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
                        p_10 = ATgetArgument(t, 0);
                        o_10 = ATgetArgument(t, 1);
                        t = o_10;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = p_10;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm w_20 = t;
                                int x_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_q_7;
                                    t = h_0(t);
                                    LocalPopChoice(x_20);
                                  }
                                else
                                  {
                                    t = w_20;
                                    t = o_10;
                                  }
                              }
                            else
                              {
                                ATerm z_20 = t;
                                int a_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_q_7;
                                    t = h_0(t);
                                    LocalPopChoice(a_21);
                                  }
                                else
                                  {
                                    t = z_20;
                                    t = q_10;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = p_10;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm b_21 = t;
                                    int c_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_w_7;
                                        t = h_0(t);
                                        LocalPopChoice(c_21);
                                      }
                                    else
                                      {
                                        t = b_21;
                                        t = o_10;
                                      }
                                  }
                                else
                                  {
                                    ATerm d_21 = t;
                                    int e_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_w_7;
                                        t = h_0(t);
                                        LocalPopChoice(e_21);
                                      }
                                    else
                                      {
                                        t = d_21;
                                        t = q_10;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    k_10 = ATgetArgument(t, 0);
                                    l_10 = ATgetArgument(t, 1);
                                    t = p_10;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = o_10;
                                      }
                                    else
                                      {
                                        ATerm f_21 = t;
                                        int g_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm n_38 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, p_10, k_10);
                                            t = conc_0_0(t);
                                            n_38 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, n_38, l_10);
                                            t = bottomup_1_0(h_0, t);
                                            LocalPopChoice(g_21);
                                          }
                                        else
                                          {
                                            t = f_21;
                                            t = q_10;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = p_10;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = o_10;
                                      }
                                    else
                                      {
                                        t = q_10;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm h_21 = t;
                        int i_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm j_21 = ATgetArgument(t, 0);
                                o_10 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(i_21);
                            t = o_10;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm k_21 = t;
                                int l_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_q_7;
                                    t = h_0(t);
                                    LocalPopChoice(l_21);
                                  }
                                else
                                  {
                                    t = k_21;
                                    t = q_10;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm m_21 = t;
                                    int n_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_w_7;
                                        t = h_0(t);
                                        LocalPopChoice(n_21);
                                      }
                                    else
                                      {
                                        t = m_21;
                                        t = q_10;
                                      }
                                  }
                                else
                                  {
                                    t = q_10;
                                  }
                              }
                          }
                        else
                          {
                            t = h_21;
                            if(match_cons(t, sym_All_1))
                              {
                                p_10 = ATgetArgument(t, 0);
                                t = p_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm o_21 = t;
                                    int p_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_q_7;
                                        t = h_0(t);
                                        LocalPopChoice(p_21);
                                      }
                                    else
                                      {
                                        t = o_21;
                                        t = q_10;
                                      }
                                  }
                                else
                                  {
                                    t = q_10;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    p_10 = ATgetArgument(t, 0);
                                    t = p_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm q_21 = t;
                                        int s_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_q_7;
                                            t = h_0(t);
                                            LocalPopChoice(s_21);
                                          }
                                        else
                                          {
                                            t = q_21;
                                            {
                                              ATerm t_21 = t;
                                              int u_21 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL,g_39 = NULL,h_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL;
                                                  t = q_10;
                                                  t = new_0_0(t);
                                                  c_39 = t;
                                                  t = bottomup_1_0(h_0, t);
                                                  u_39 = t;
                                                  t = (ATerm) ATempty;
                                                  t = h_0(t);
                                                  v_39 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(v_39), u_39);
                                                  t = h_0(t);
                                                  d_39 = t;
                                                  t = c_39;
                                                  t = bottomup_1_0(h_0, t);
                                                  t_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, t_39);
                                                  t = h_0(t);
                                                  s_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, s_39);
                                                  t = h_0(t);
                                                  g_39 = t;
                                                  t = p_10;
                                                  t = bottomup_1_0(h_0, t);
                                                  m_39 = t;
                                                  t = c_39;
                                                  t = bottomup_1_0(h_0, t);
                                                  p_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, p_39);
                                                  t = h_0(t);
                                                  o_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, o_39);
                                                  t = h_0(t);
                                                  n_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_39, n_39);
                                                  t = h_0(t);
                                                  h_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_39, h_39);
                                                  t = h_0(t);
                                                  e_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, d_39, e_39);
                                                  t = h_0(t);
                                                  LocalPopChoice(u_21);
                                                }
                                              else
                                                {
                                                  t = t_21;
                                                  t = q_10;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm v_21 = t;
                                            int w_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_7;
                                                t = h_0(t);
                                                LocalPopChoice(w_21);
                                              }
                                            else
                                              {
                                                t = v_21;
                                                {
                                                  ATerm x_21 = t;
                                                  int y_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
                                                      t = q_10;
                                                      t = new_0_0(t);
                                                      y_39 = t;
                                                      t = bottomup_1_0(h_0, t);
                                                      k_40 = t;
                                                      t = (ATerm) ATempty;
                                                      t = h_0(t);
                                                      l_40 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(l_40), k_40);
                                                      t = h_0(t);
                                                      z_39 = t;
                                                      t = y_39;
                                                      t = bottomup_1_0(h_0, t);
                                                      j_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, j_40);
                                                      t = h_0(t);
                                                      i_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, i_40);
                                                      t = h_0(t);
                                                      b_40 = t;
                                                      t = p_10;
                                                      t = bottomup_1_0(h_0, t);
                                                      d_40 = t;
                                                      t = y_39;
                                                      t = bottomup_1_0(h_0, t);
                                                      g_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, g_40);
                                                      t = h_0(t);
                                                      f_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, f_40);
                                                      t = h_0(t);
                                                      e_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_40, e_40);
                                                      t = h_0(t);
                                                      c_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_40, c_40);
                                                      t = h_0(t);
                                                      a_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, z_39, a_40);
                                                      t = h_0(t);
                                                      LocalPopChoice(y_21);
                                                    }
                                                  else
                                                    {
                                                      t = x_21;
                                                      t = q_10;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                n_10 = ATgetArgument(t, 1);
                                                t = n_10;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    n_9 = ATgetArgument(t, 0);
                                                    z_9 = ATgetArgument(t, 1);
                                                    t = n_9;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        w_9 = ATgetArgument(t, 0);
                                                        t = m_10;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            i_10 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm z_21 = t;
                                                              int b_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_40 = NULL,b_41 = NULL,c_41 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, w_9);
                                                                  t = h_0(t);
                                                                  c_41 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, c_41, z_9);
                                                                  t = h_0(t);
                                                                  b_41 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_10, b_41);
                                                                  t = h_0(t);
                                                                  y_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, y_40);
                                                                  t = h_0(t);
                                                                  LocalPopChoice(b_22);
                                                                }
                                                              else
                                                                {
                                                                  t = z_21;
                                                                  {
                                                                    ATerm c_22 = t;
                                                                    int d_22 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,x_41 = NULL,y_41 = NULL;
                                                                        t = q_10;
                                                                        t = new_0_0(t);
                                                                        e_41 = t;
                                                                        t = bottomup_1_0(h_0, t);
                                                                        x_41 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = h_0(t);
                                                                        y_41 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(y_41), x_41);
                                                                        t = h_0(t);
                                                                        f_41 = t;
                                                                        t = e_41;
                                                                        t = bottomup_1_0(h_0, t);
                                                                        s_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, s_41);
                                                                        t = h_0(t);
                                                                        r_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, r_41);
                                                                        t = h_0(t);
                                                                        h_41 = t;
                                                                        t = p_10;
                                                                        t = bottomup_1_0(h_0, t);
                                                                        m_41 = t;
                                                                        t = e_41;
                                                                        t = bottomup_1_0(h_0, t);
                                                                        q_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, q_41);
                                                                        t = h_0(t);
                                                                        o_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, o_41);
                                                                        t = h_0(t);
                                                                        n_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, m_41, n_41);
                                                                        t = h_0(t);
                                                                        l_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, h_41, l_41);
                                                                        t = h_0(t);
                                                                        g_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, f_41, g_41);
                                                                        t = h_0(t);
                                                                        LocalPopChoice(d_22);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = c_22;
                                                                        t = q_10;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm e_22 = t;
                                                            int f_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,j_42 = NULL,k_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL;
                                                                t = q_10;
                                                                t = new_0_0(t);
                                                                b_42 = t;
                                                                t = bottomup_1_0(h_0, t);
                                                                u_42 = t;
                                                                t = (ATerm) ATempty;
                                                                t = h_0(t);
                                                                v_42 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(v_42), u_42);
                                                                t = h_0(t);
                                                                c_42 = t;
                                                                t = b_42;
                                                                t = bottomup_1_0(h_0, t);
                                                                t_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, t_42);
                                                                t = h_0(t);
                                                                s_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, s_42);
                                                                t = h_0(t);
                                                                f_42 = t;
                                                                t = p_10;
                                                                t = bottomup_1_0(h_0, t);
                                                                h_42 = t;
                                                                t = b_42;
                                                                t = bottomup_1_0(h_0, t);
                                                                r_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, r_42);
                                                                t = h_0(t);
                                                                k_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, k_42);
                                                                t = h_0(t);
                                                                j_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, h_42, j_42);
                                                                t = h_0(t);
                                                                g_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, f_42, g_42);
                                                                t = h_0(t);
                                                                d_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, c_42, d_42);
                                                                t = h_0(t);
                                                                LocalPopChoice(f_22);
                                                              }
                                                            else
                                                              {
                                                                t = e_22;
                                                                t = q_10;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = m_10;
                                                        {
                                                          ATerm g_22 = t;
                                                          int h_22 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,e_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,t_43 = NULL;
                                                              t = q_10;
                                                              t = new_0_0(t);
                                                              y_42 = t;
                                                              t = bottomup_1_0(h_0, t);
                                                              q_43 = t;
                                                              t = (ATerm) ATempty;
                                                              t = h_0(t);
                                                              t_43 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(t_43), q_43);
                                                              t = h_0(t);
                                                              z_42 = t;
                                                              t = y_42;
                                                              t = bottomup_1_0(h_0, t);
                                                              p_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, p_43);
                                                              t = h_0(t);
                                                              o_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, o_43);
                                                              t = h_0(t);
                                                              e_43 = t;
                                                              t = p_10;
                                                              t = bottomup_1_0(h_0, t);
                                                              i_43 = t;
                                                              t = y_42;
                                                              t = bottomup_1_0(h_0, t);
                                                              n_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, n_43);
                                                              t = h_0(t);
                                                              k_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, k_43);
                                                              t = h_0(t);
                                                              j_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_43, j_43);
                                                              t = h_0(t);
                                                              h_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, e_43, h_43);
                                                              t = h_0(t);
                                                              a_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, z_42, a_43);
                                                              t = h_0(t);
                                                              LocalPopChoice(h_22);
                                                            }
                                                          else
                                                            {
                                                              t = g_22;
                                                              t = q_10;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = m_10;
                                                    {
                                                      ATerm j_22 = t;
                                                      int k_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL,t_44 = NULL,u_44 = NULL,x_44 = NULL,a_45 = NULL;
                                                          t = q_10;
                                                          t = new_0_0(t);
                                                          f_44 = t;
                                                          t = bottomup_1_0(h_0, t);
                                                          x_44 = t;
                                                          t = (ATerm) ATempty;
                                                          t = h_0(t);
                                                          a_45 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(a_45), x_44);
                                                          t = h_0(t);
                                                          g_44 = t;
                                                          t = f_44;
                                                          t = bottomup_1_0(h_0, t);
                                                          u_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, u_44);
                                                          t = h_0(t);
                                                          t_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, t_44);
                                                          t = h_0(t);
                                                          i_44 = t;
                                                          t = p_10;
                                                          t = bottomup_1_0(h_0, t);
                                                          k_44 = t;
                                                          t = f_44;
                                                          t = bottomup_1_0(h_0, t);
                                                          o_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, o_44);
                                                          t = h_0(t);
                                                          n_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, n_44);
                                                          t = h_0(t);
                                                          m_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, k_44, m_44);
                                                          t = h_0(t);
                                                          j_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_44, j_44);
                                                          t = h_0(t);
                                                          h_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, g_44, h_44);
                                                          t = h_0(t);
                                                          LocalPopChoice(k_22);
                                                        }
                                                      else
                                                        {
                                                          t = j_22;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    m_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm l_22 = t;
                                                      int m_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, m_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(m_22);
                                                        }
                                                      else
                                                        {
                                                          t = l_22;
                                                          {
                                                            ATerm n_22 = t;
                                                            int o_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm h_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,y_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL;
                                                                t = q_10;
                                                                t = new_0_0(t);
                                                                h_45 = t;
                                                                t = bottomup_1_0(h_0, t);
                                                                b_46 = t;
                                                                t = (ATerm) ATempty;
                                                                t = h_0(t);
                                                                c_46 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(c_46), b_46);
                                                                t = h_0(t);
                                                                l_45 = t;
                                                                t = h_45;
                                                                t = bottomup_1_0(h_0, t);
                                                                a_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, a_46);
                                                                t = h_0(t);
                                                                y_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, y_45);
                                                                t = h_0(t);
                                                                n_45 = t;
                                                                t = p_10;
                                                                t = bottomup_1_0(h_0, t);
                                                                p_45 = t;
                                                                t = h_45;
                                                                t = bottomup_1_0(h_0, t);
                                                                v_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, v_45);
                                                                t = h_0(t);
                                                                u_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, u_45);
                                                                t = h_0(t);
                                                                t_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_45, t_45);
                                                                t = h_0(t);
                                                                o_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, n_45, o_45);
                                                                t = h_0(t);
                                                                m_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, l_45, m_45);
                                                                t = h_0(t);
                                                                LocalPopChoice(o_22);
                                                              }
                                                            else
                                                              {
                                                                t = n_22;
                                                                t = q_10;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm p_22 = t;
                                                    int q_22 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL;
                                                        t = q_10;
                                                        t = new_0_0(t);
                                                        i_46 = t;
                                                        t = bottomup_1_0(h_0, t);
                                                        t_46 = t;
                                                        t = (ATerm) ATempty;
                                                        t = h_0(t);
                                                        u_46 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(u_46), t_46);
                                                        t = h_0(t);
                                                        j_46 = t;
                                                        t = i_46;
                                                        t = bottomup_1_0(h_0, t);
                                                        s_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, s_46);
                                                        t = h_0(t);
                                                        r_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, r_46);
                                                        t = h_0(t);
                                                        l_46 = t;
                                                        t = p_10;
                                                        t = bottomup_1_0(h_0, t);
                                                        n_46 = t;
                                                        t = i_46;
                                                        t = bottomup_1_0(h_0, t);
                                                        q_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, q_46);
                                                        t = h_0(t);
                                                        p_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, p_46);
                                                        t = h_0(t);
                                                        o_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, n_46, o_46);
                                                        t = h_0(t);
                                                        m_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, l_46, m_46);
                                                        t = h_0(t);
                                                        k_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, j_46, k_46);
                                                        t = h_0(t);
                                                        LocalPopChoice(q_22);
                                                      }
                                                    else
                                                      {
                                                        t = p_22;
                                                        t = q_10;
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
                                        p_10 = ATgetArgument(t, 0);
                                        t = p_10;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm r_22 = t;
                                            int s_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_7;
                                                t = h_0(t);
                                                LocalPopChoice(s_22);
                                              }
                                            else
                                              {
                                                t = r_22;
                                                t = q_10;
                                              }
                                          }
                                        else
                                          {
                                            t = q_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            p_10 = ATgetArgument(t, 0);
                                            t = p_10;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm t_22 = t;
                                                int u_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_w_7;
                                                    t = h_0(t);
                                                    LocalPopChoice(u_22);
                                                  }
                                                else
                                                  {
                                                    t = t_22;
                                                    t = q_10;
                                                  }
                                              }
                                            else
                                              {
                                                t = q_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                p_10 = ATgetArgument(t, 0);
                                                t = p_10;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm v_22 = t;
                                                    int w_22 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_w_7;
                                                        t = h_0(t);
                                                        LocalPopChoice(w_22);
                                                      }
                                                    else
                                                      {
                                                        t = v_22;
                                                        t = q_10;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = q_10;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm x_22 = t;
                                                int y_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm z_22 = ATgetArgument(t, 0);
                                                        o_10 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(y_22);
                                                    t = o_10;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm a_23 = t;
                                                        int c_23 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_w_7;
                                                            t = h_0(t);
                                                            LocalPopChoice(c_23);
                                                          }
                                                        else
                                                          {
                                                            t = a_23;
                                                            t = q_10;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = q_10;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = x_22;
                                                    {
                                                      ATerm d_23 = t;
                                                      int e_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm f_23 = ATgetArgument(t, 0);
                                                              o_10 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(e_23);
                                                          {
                                                            ATerm g_23 = t;
                                                            int h_23 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = o_10;
                                                                t = fetch_1_0(c_1, t);
                                                                t = term_w_7;
                                                                t = bottomup_1_0(h_0, t);
                                                                LocalPopChoice(h_23);
                                                              }
                                                            else
                                                              {
                                                                t = g_23;
                                                                t = q_10;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = d_23;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              p_10 = ATgetArgument(t, 0);
                                                              o_10 = ATgetArgument(t, 1);
                                                              t = o_10;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = p_10;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = o_10;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          m_10 = ATgetArgument(t, 0);
                                                                          n_10 = ATgetArgument(t, 1);
                                                                          t = p_10;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = p_10;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = p_10;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = o_10;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          m_10 = ATgetArgument(t, 0);
                                                                          n_10 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm i_23 = t;
                                                                            int k_23 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm i_48 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, n_10, o_10);
                                                                                t = h_0(t);
                                                                                i_48 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, m_10, i_48);
                                                                                t = h_0(t);
                                                                                LocalPopChoice(k_23);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = i_23;
                                                                                {
                                                                                  ATerm l_23 = t;
                                                                                  int m_23 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = o_10;
                                                                                      if((p_10 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(m_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = l_23;
                                                                                      t = q_10;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm n_23 = t;
                                                                          int o_23 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = o_10;
                                                                              if((p_10 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(o_23);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = n_23;
                                                                              t = q_10;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  p_10 = ATgetArgument(t, 0);
                                                                  o_10 = ATgetArgument(t, 1);
                                                                  c_9 = ATgetArgument(t, 2);
                                                                  t = c_9;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm p_23 = t;
                                                                      int q_23 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_10, o_10);
                                                                          t = h_0(t);
                                                                          LocalPopChoice(q_23);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = p_23;
                                                                          t = q_10;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = q_10;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      p_10 = ATgetArgument(t, 0);
                                                                      o_10 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm s_23 = t;
                                                                        int t_23 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, p_10, o_10);
                                                                            t = h_0(t);
                                                                            LocalPopChoice(t_23);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = s_23;
                                                                            t = q_10;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          p_10 = ATgetArgument(t, 0);
                                                                          t = p_10;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              m_10 = ATgetFirst((ATermList) t);
                                                                              n_10 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm u_23 = t;
                                                                                int v_23 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm e_49 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, n_10);
                                                                                    t = h_0(t);
                                                                                    e_49 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, m_10, e_49);
                                                                                    t = h_0(t);
                                                                                    LocalPopChoice(v_23);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = u_23;
                                                                                    t = q_10;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm w_23 = t;
                                                                                  int x_23 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_w_7;
                                                                                      t = h_0(t);
                                                                                      LocalPopChoice(x_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = w_23;
                                                                                      t = q_10;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = q_10;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              p_10 = ATgetArgument(t, 0);
                                                                              t = p_10;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  m_10 = ATgetFirst((ATermList) t);
                                                                                  n_10 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm y_23 = t;
                                                                                    int z_23 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm k_49 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, n_10);
                                                                                        t = h_0(t);
                                                                                        k_49 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, m_10, k_49);
                                                                                        t = h_0(t);
                                                                                        LocalPopChoice(z_23);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = y_23;
                                                                                        t = q_10;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm a_24 = t;
                                                                                      int b_24 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_w_7;
                                                                                          t = h_0(t);
                                                                                          LocalPopChoice(b_24);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = a_24;
                                                                                          t = q_10;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = q_10;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  p_10 = ATgetArgument(t, 0);
                                                                                  t = p_10;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      m_10 = ATgetFirst((ATermList) t);
                                                                                      n_10 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm c_24 = t;
                                                                                        int d_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm q_49 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, n_10);
                                                                                            t = h_0(t);
                                                                                            q_49 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, q_49);
                                                                                            t = h_0(t);
                                                                                            LocalPopChoice(d_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = c_24;
                                                                                            t = q_10;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm f_24 = t;
                                                                                          int g_24 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_q_7;
                                                                                              t = h_0(t);
                                                                                              LocalPopChoice(g_24);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = f_24;
                                                                                              t = q_10;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = q_10;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      p_10 = ATgetArgument(t, 0);
                                                                                      o_10 = ATgetArgument(t, 1);
                                                                                      c_9 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm h_24 = t;
                                                                                        int i_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL,b_50 = NULL,e_50 = NULL;
                                                                                            t = term_j_24;
                                                                                            t = bottomup_1_0(h_0, t);
                                                                                            y_49 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = h_0(t);
                                                                                            e_50 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(e_50), c_9);
                                                                                            t = h_0(t);
                                                                                            b_50 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(b_50), p_10);
                                                                                            t = h_0(t);
                                                                                            z_49 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, y_49, z_49);
                                                                                            t = h_0(t);
                                                                                            x_49 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, o_10, x_49);
                                                                                            t = h_0(t);
                                                                                            LocalPopChoice(i_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = h_24;
                                                                                            t = q_10;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          p_10 = ATgetArgument(t, 0);
                                                                                          o_10 = ATgetArgument(t, 1);
                                                                                          c_9 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm k_24 = t;
                                                                                            int l_24 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, o_10);
                                                                                                t = h_0(t);
                                                                                                k_50 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, c_9);
                                                                                                t = h_0(t);
                                                                                                n_50 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = h_0(t);
                                                                                                o_50 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(o_50), n_50);
                                                                                                t = h_0(t);
                                                                                                m_50 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(m_50), p_10);
                                                                                                t = h_0(t);
                                                                                                l_50 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(l_50), k_50);
                                                                                                t = h_0(t);
                                                                                                j_50 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, j_50);
                                                                                                t = h_0(t);
                                                                                                LocalPopChoice(l_24);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = k_24;
                                                                                                t = q_10;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              p_10 = ATgetArgument(t, 0);
                                                                                              o_10 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm m_24 = t;
                                                                                                int n_24 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm s_50 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, o_10);
                                                                                                    t = h_0(t);
                                                                                                    s_50 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, p_10, s_50);
                                                                                                    t = h_0(t);
                                                                                                    LocalPopChoice(n_24);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = m_24;
                                                                                                    t = q_10;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  p_10 = ATgetArgument(t, 0);
                                                                                                  o_10 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm p_24 = t;
                                                                                                    int q_24 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm w_50 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, p_10);
                                                                                                        t = h_0(t);
                                                                                                        w_50 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, w_50, o_10);
                                                                                                        t = h_0(t);
                                                                                                        LocalPopChoice(q_24);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = p_24;
                                                                                                        t = q_10;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      p_10 = ATgetArgument(t, 0);
                                                                                                      o_10 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm r_24 = t;
                                                                                                        int s_24 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm a_51 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, o_10);
                                                                                                            t = h_0(t);
                                                                                                            a_51 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, a_51, p_10);
                                                                                                            t = h_0(t);
                                                                                                            LocalPopChoice(s_24);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = r_24;
                                                                                                            t = q_10;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          p_10 = ATgetArgument(t, 0);
                                                                                                          o_10 = ATgetArgument(t, 1);
                                                                                                          t = o_10;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              k_10 = ATgetArgument(t, 0);
                                                                                                              l_10 = ATgetArgument(t, 1);
                                                                                                              t = p_10;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = o_10;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm t_24 = t;
                                                                                                                  int u_24 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm n_51 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, p_10, k_10);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      n_51 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, n_51, l_10);
                                                                                                                      t = bottomup_1_0(h_0, t);
                                                                                                                      LocalPopChoice(u_24);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = t_24;
                                                                                                                      t = q_10;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  k_10 = ATgetArgument(t, 0);
                                                                                                                  l_10 = ATgetArgument(t, 1);
                                                                                                                  g_10 = ATgetArgument(t, 2);
                                                                                                                  t = g_10;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = l_10;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = k_10;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              j_10 = ATgetArgument(t, 0);
                                                                                                                              t = p_10;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = o_10;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      m_10 = ATgetFirst((ATermList) t);
                                                                                                                                      n_10 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = n_10;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = m_10;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              i_10 = ATgetArgument(t, 0);
                                                                                                                                              d_10 = ATgetArgument(t, 1);
                                                                                                                                              a_10 = ATgetArgument(t, 2);
                                                                                                                                              b_10 = ATgetArgument(t, 3);
                                                                                                                                              t = a_10;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = d_10;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm v_24 = t;
                                                                                                                                                      int w_24 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = j_10;
                                                                                                                                                          if((i_10 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = b_10;
                                                                                                                                                          {
                                                                                                                                                            ATerm x_24 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm e_1 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm y_24 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(y_24, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((i_10 != ATgetArgument(y_24, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(y_24, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm z_24 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(z_24) != AT_LIST) || !(ATisEmpty(z_24))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm a_25 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(a_25) != AT_LIST) || !(ATisEmpty(a_25))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  return(t);
                                                                                                                                                                }
                                                                                                                                                                t = oncetd_1_0(e_1, t);
                                                                                                                                                                PopChoice();
                                                                                                                                                                _fail(t);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                t = x_24;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = b_10;
                                                                                                                                                          t = bottomup_1_0(h_0, t);
                                                                                                                                                          LocalPopChoice(w_24);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = v_24;
                                                                                                                                                          t = q_10;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = q_10;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = q_10;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = q_10;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = q_10;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = q_10;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = p_10;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = o_10;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = q_10;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = p_10;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = o_10;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = q_10;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = p_10;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = o_10;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = q_10;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = p_10;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = o_10;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = q_10;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              p_10 = ATgetArgument(t, 0);
                                                                                                              o_10 = ATgetArgument(t, 1);
                                                                                                              t = p_10;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = o_10;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = q_10;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = q_10;
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
  t = bottomup_1_0(h_0, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm c_25 = t;
  if((PushChoice() == 0))
    {
      ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL,r_5 = NULL;
      h_53 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_53);
      f_53 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, g_53);
      r_5 = t;
      t = SSLsetAnnotations(r_5, f_53);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_25;
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_25;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_53 = ATgetFirst((ATermList) t);
      j_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_53, j_53);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_25 = ATgetArgument(t, 0);
      if(match_cons(e_25, sym__2))
        {
          k_53 = ATgetArgument(e_25, 0);
          l_53 = ATgetArgument(e_25, 1);
        }
      else
        _fail(t);
      {
        ATerm f_25 = ATgetArgument(t, 1);
        if(match_cons(f_25, sym__2))
          {
            m_53 = ATgetArgument(f_25, 0);
            n_53 = ATgetArgument(f_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_53), k_53), (ATerm) ATinsert(CheckATermList(n_53), l_53));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_25;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm o_53 = NULL,p_53 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_53 = ATgetFirst((ATermList) t);
      p_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_53, p_53);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_25 = ATgetArgument(t, 0);
      if(match_cons(g_25, sym__2))
        {
          q_53 = ATgetArgument(g_25, 0);
          r_53 = ATgetArgument(g_25, 1);
        }
      else
        _fail(t);
      {
        ATerm i_25 = ATgetArgument(t, 1);
        if(match_cons(i_25, sym__2))
          {
            s_53 = ATgetArgument(i_25, 0);
            t_53 = ATgetArgument(i_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_53), q_53), (ATerm) ATinsert(CheckATermList(t_53), r_53));
  return(t);
}
static ATerm g_11 (ATerm q_27, ATerm r_27, ATerm s_27, ATerm t)
{
  ATerm s_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL,s_5 = NULL;
  t = s_27;
  t = fetch_1_0(f_1, t);
  t = s_27;
  t = genzip_4_0(g_1, h_1, i_1, LiftPrimArg_0_0, t);
  e_53 = t;
  if(match_cons(t, sym__2))
    {
      a_53 = ATgetArgument(t, 0);
      b_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_53);
  z_52 = t;
  t = a_53;
  t = concat_0_0(t);
  c_53 = t;
  t = b_53;
  t = genzip_4_0(j_1, k_1, l_1, _id, t);
  d_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_53, d_53);
  s_5 = t;
  t = SSLsetAnnotations(s_5, z_52);
  if(match_cons(t, sym__2))
    {
      s_52 = ATgetArgument(t, 0);
      {
        ATerm j_25 = ATgetArgument(t, 1);
        if(match_cons(j_25, sym__2))
          {
            x_52 = ATgetArgument(j_25, 0);
            y_52 = ATgetArgument(j_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, s_52, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_52), (ATerm) ATmakeAppl(sym_CallT_3, q_27, r_27, y_52)));
  return(t);
}
ATerm genzip_4_0 (ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm t)
{
  static ATerm b_54 (ATerm t)
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_109(t);
        LocalPopChoice(l_25);
      }
    else
      {
        t = k_25;
        {
          ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,j_7 = NULL;
          t = e_109(t);
          a_54 = t;
          if(match_cons(t, sym__2))
            {
              w_53 = ATgetArgument(t, 0);
              x_53 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_54);
          v_53 = t;
          t = w_53;
          t = g_109(t);
          y_53 = t;
          t = x_53;
          t = b_54(t);
          z_53 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_53, z_53);
          j_7 = t;
          t = SSLsetAnnotations(j_7, v_53);
          t = f_109(t);
        }
      }
    return(t);
  }
  t = b_54(t);
  return(t);
}
ATerm at_end_1_0 (ATerm s_125 (ATerm), ATerm t)
{
  static ATerm y_54 (ATerm t)
  {
    ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL;
    x_54 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_54 = ATgetFirst((ATermList) t);
        w_54 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_1 = NULL,w_1 = NULL,n_7 = NULL;
          t = SSLgetAnnotations(x_54);
          t_1 = t;
          t = w_54;
          t = y_54(t);
          w_1 = t;
          t = (ATerm) ATinsert(CheckATermList(w_1), v_54);
          n_7 = t;
          t = SSLsetAnnotations(n_7, t_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_54;
        t = s_125(t);
      }
    return(t);
  }
  t = y_54(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL;
  b_55 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_55;
    }
  else
    {
      static ATerm m_1 (ATerm t)
      {
        t = not_null(d_55);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_55 = ATgetFirst((ATermList) t);
          if(((d_55 != NULL) && (d_55 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_55;
      t = at_end_1_0(m_1, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm s_55 (ATerm j_55, ATerm t)
{
  ATerm l_55 = NULL;
  t = j_55;
  {
    ATerm p_25 = t;
    if((PushChoice() == 0))
      {
        ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL,u_7 = NULL;
        o_55 = t;
        if(match_cons(t, sym_Var_1))
          {
            n_55 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_55);
        m_55 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, n_55);
        u_7 = t;
        t = SSLsetAnnotations(u_7, m_55);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_25;
      }
  }
  t = new_0_0(t);
  l_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, l_55), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_55), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_55)))), (ATerm) ATmakeAppl(sym_Var_1, l_55)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL;
  p_55 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_55 = ATgetArgument(t, 0);
      {
        ATerm q_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_55(p_55, t);
            LocalPopChoice(r_25);
          }
        else
          {
            t = q_25;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATmakeAppl(sym_Var_1, q_55)));
          }
      }
    }
  else
    {
      t = s_55(p_55, t);
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm t_25 = t;
  if((PushChoice() == 0))
    {
      ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,a_8 = NULL;
      t_2 = t;
      if(match_cons(t, sym_Var_1))
        {
          s_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_2);
      r_2 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, s_2);
      a_8 = t;
      t = SSLsetAnnotations(a_8, r_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_25;
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_25;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_2 = ATgetFirst((ATermList) t);
      v_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_2, v_2);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_25 = ATgetArgument(t, 0);
      if(match_cons(y_25, sym__2))
        {
          w_2 = ATgetArgument(y_25, 0);
          x_2 = ATgetArgument(y_25, 1);
        }
      else
        _fail(t);
      {
        ATerm z_25 = ATgetArgument(t, 1);
        if(match_cons(z_25, sym__2))
          {
            y_2 = ATgetArgument(z_25, 0);
            z_2 = ATgetArgument(z_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_2), w_2), (ATerm) ATinsert(CheckATermList(z_2), x_2));
  return(t);
}
static ATerm r_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_25;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_3 = ATgetFirst((ATermList) t);
      b_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_3, b_3);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_26 = ATgetArgument(t, 0);
      if(match_cons(a_26, sym__2))
        {
          c_3 = ATgetArgument(a_26, 0);
          d_3 = ATgetArgument(a_26, 1);
        }
      else
        _fail(t);
      {
        ATerm b_26 = ATgetArgument(t, 1);
        if(match_cons(b_26, sym__2))
          {
            e_3 = ATgetArgument(b_26, 0);
            f_3 = ATgetArgument(b_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_3), c_3), (ATerm) ATinsert(CheckATermList(f_3), d_3));
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm c_26 = t;
  if((PushChoice() == 0))
    {
      ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,c_8 = NULL;
      b_4 = t;
      if(match_cons(t, sym_Var_1))
        {
          a_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_4);
      z_3 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, a_4);
      c_8 = t;
      t = SSLsetAnnotations(c_8, z_3);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_26;
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_25;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_4 = ATgetFirst((ATermList) t);
      d_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_4, d_4);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      if(match_cons(d_26, sym__2))
        {
          e_4 = ATgetArgument(d_26, 0);
          f_4 = ATgetArgument(d_26, 1);
        }
      else
        _fail(t);
      {
        ATerm e_26 = ATgetArgument(t, 1);
        if(match_cons(e_26, sym__2))
          {
            g_4 = ATgetArgument(e_26, 0);
            h_4 = ATgetArgument(e_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_4), e_4), (ATerm) ATinsert(CheckATermList(h_4), f_4));
  return(t);
}
static ATerm a_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_25;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_4 = ATgetFirst((ATermList) t);
      j_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_4, j_4);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_26 = ATgetArgument(t, 0);
      if(match_cons(f_26, sym__2))
        {
          k_4 = ATgetArgument(f_26, 0);
          l_4 = ATgetArgument(f_26, 1);
        }
      else
        _fail(t);
      {
        ATerm g_26 = ATgetArgument(t, 1);
        if(match_cons(g_26, sym__2))
          {
            m_4 = ATgetArgument(g_26, 0);
            n_4 = ATgetArgument(g_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_4), k_4), (ATerm) ATinsert(CheckATermList(n_4), l_4));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL;
  w_58 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      x_58 = ATgetArgument(t, 0);
      y_58 = ATgetArgument(t, 1);
      v_58 = ATgetArgument(t, 2);
      {
        ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,b_8 = NULL;
        t = v_58;
        t = fetch_1_0(n_1, t);
        t = v_58;
        t = genzip_4_0(o_1, p_1, q_1, LiftPrimArg_0_0, t);
        q_2 = t;
        if(match_cons(t, sym__2))
          {
            m_2 = ATgetArgument(t, 0);
            n_2 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_2);
        l_2 = t;
        t = m_2;
        t = concat_0_0(t);
        o_2 = t;
        t = n_2;
        t = genzip_4_0(r_1, s_1, u_1, _id, t);
        p_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_2, p_2);
        b_8 = t;
        t = SSLsetAnnotations(b_8, l_2);
        if(match_cons(t, sym__2))
          {
            i_2 = ATgetArgument(t, 0);
            {
              ATerm i_26 = ATgetArgument(t, 1);
              if(match_cons(i_26, sym__2))
                {
                  j_2 = ATgetArgument(i_26, 0);
                  k_2 = ATgetArgument(i_26, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, i_2, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_2), (ATerm) ATmakeAppl(sym_PrimT_3, x_58, y_58, k_2)));
      }
    }
  else
    {
      ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,d_8 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          x_58 = ATgetArgument(t, 0);
          y_58 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_58;
      t = fetch_1_0(v_1, t);
      t = y_58;
      t = genzip_4_0(x_1, y_1, z_1, LiftPrimArg_0_0, t);
      y_3 = t;
      if(match_cons(t, sym__2))
        {
          u_3 = ATgetArgument(t, 0);
          v_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_3);
      t_3 = t;
      t = u_3;
      t = concat_0_0(t);
      w_3 = t;
      t = v_3;
      t = genzip_4_0(a_2, b_2, c_2, _id, t);
      x_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_3, x_3);
      d_8 = t;
      t = SSLsetAnnotations(d_8, t_3);
      if(match_cons(t, sym__2))
        {
          q_3 = ATgetArgument(t, 0);
          {
            ATerm j_26 = ATgetArgument(t, 1);
            if(match_cons(j_26, sym__2))
              {
                r_3 = ATgetArgument(j_26, 0);
                s_3 = ATgetArgument(j_26, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, q_3, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_3), (ATerm) ATmakeAppl(sym_PrimT_3, x_58, (ATerm)ATempty, s_3)));
    }
  return(t);
}
ATerm topdown_1_0 (ATerm r_104 (ATerm), ATerm t)
{
  static ATerm d_2 (ATerm t)
  {
    t = topdown_1_0(r_104, t);
    return(t);
  }
  t = r_104(t);
  t = SRTS_all(d_2, t);
  return(t);
}
ATerm map_1_0 (ATerm b_125 (ATerm), ATerm t)
{
  static ATerm u_59 (ATerm t)
  {
    ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL;
    r_59 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_59;
      }
    else
      {
        ATerm v_4 = NULL,y_4 = NULL,z_4 = NULL,t_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_59 = ATgetFirst((ATermList) t);
            t_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_59);
        v_4 = t;
        t = s_59;
        t = b_125(t);
        y_4 = t;
        t = t_59;
        t = u_59(t);
        z_4 = t;
        t = (ATerm) ATinsert(CheckATermList(z_4), y_4);
        t_9 = t;
        t = SSLsetAnnotations(t_9, v_4);
      }
    return(t);
  }
  t = u_59(t);
  return(t);
}
static ATerm k_11 (ATerm v_43, ATerm w_43, ATerm t)
{
  ATerm w_59 = NULL;
  t = SSL_fputc(v_43, w_43);
  w_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_59);
  return(t);
}
static ATerm l_11 (ATerm w_48, ATerm x_48, ATerm t)
{
  ATerm x_59 = NULL;
  t = SSL_write_term_to_stream_text(w_48, x_48);
  x_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_59);
  return(t);
}
static ATerm n_11 (ATerm v_118 (ATerm), ATerm x_429, ATerm c_49, ATerm t)
{
  ATerm y_59 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_429, term_k_26);
  t = r_11(t);
  y_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_59, c_49);
  t = v_118(t);
  t = fclose_0_0(t);
  t = c_49;
  return(t);
}
static ATerm m_11 (ATerm s_48, ATerm t_48, ATerm t)
{
  ATerm z_59 = NULL;
  t = SSL_write_term_to_stream_baf(s_48, t_48);
  z_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_59);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm i_60 = NULL,j_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_26 = ATgetArgument(t, 0);
      if(match_cons(l_26, sym_Stream_1))
        {
          i_60 = ATgetArgument(l_26, 0);
        }
      else
        _fail(t);
      j_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_11(i_60, j_60, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_26 = ATgetArgument(t, 0);
      if(match_cons(m_26, sym_Stream_1))
        {
          n_60 = ATgetArgument(m_26, 0);
        }
      else
        _fail(t);
      o_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_11(n_60, o_60, t);
  k_60 = t;
  t = term_n_26;
  l_60 = t;
  t = k_60;
  if(match_cons(t, sym_Stream_1))
    {
      m_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_26, k_60);
  t = k_11(l_60, m_60, t);
  return(t);
}
ATerm output_1_0 (ATerm s_131 (ATerm), ATerm t)
{
  ATerm a_60 = NULL,b_60 = NULL;
  t = s_131(t);
  b_60 = t;
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_60 = NULL,d_60 = NULL;
        t = term_q_26;
        c_60 = t;
        t = term_r_26;
        d_60 = t;
        t = term_t_26;
        t = x_11(c_60, d_60, t);
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        t = term_u_26;
      }
  }
  a_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_60, b_60);
  {
    ATerm v_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_60 = NULL,h_60 = NULL;
        t = term_q_26;
        g_60 = t;
        t = term_x_26;
        h_60 = t;
        t = term_y_26;
        t = x_11(g_60, h_60, t);
        t = (ATerm) ATmakeAppl(sym__2, a_60, b_60);
        LocalPopChoice(w_26);
        if(match_cons(t, sym__2))
          {
            ATerm z_26 = ATgetArgument(t, 0);
            ATerm a_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_11(e_2, a_60, b_60, t);
      }
    else
      {
        t = v_26;
        if(match_cons(t, sym__2))
          {
            ATerm b_27 = ATgetArgument(t, 0);
            ATerm c_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_11(f_2, a_60, b_60, t);
      }
  }
  return(t);
}
static ATerm c_61 (ATerm w_60, ATerm t)
{
  t = SSL_fclose(w_60);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL;
  a_61 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_60 = ATgetArgument(t, 0);
      {
        ATerm d_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_60);
            LocalPopChoice(e_27);
          }
        else
          {
            t = d_27;
            t = c_61(a_61, t);
          }
      }
    }
  else
    {
      t = c_61(a_61, t);
    }
  return(t);
}
static ATerm o_11 (ATerm y_48, ATerm t)
{
  t = SSL_read_term_from_stream(y_48);
  return(t);
}
static ATerm p_11 (ATerm o_42, ATerm p_42, ATerm t)
{
  t = SSL_strcat(o_42, p_42);
  return(t);
}
static ATerm q_11 (ATerm x_43, ATerm y_43, ATerm t)
{
  ATerm d_61 = NULL;
  t = SSL_fopen(x_43, y_43);
  d_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_61);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_61 = NULL;
  t = SSL_stdin_stream();
  e_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_61);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_61 = NULL;
  t = SSL_stdout_stream();
  f_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_61);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_61 = NULL;
  t = SSL_stderr_stream();
  g_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_61);
  return(t);
}
static ATerm n_62 (ATerm m_61, ATerm t)
{
  ATerm n_61 = NULL;
  t = SSL_explode_term(m_61);
  if(match_cons(t, sym__2))
    {
      ATerm f_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_27 = ATgetArgument(t, 1);
        if(((ATgetType(g_27) == AT_LIST) && !(ATisEmpty(g_27))))
          {
            n_61 = ATgetFirst((ATermList) g_27);
            {
              ATerm h_27 = (ATerm) ATgetNext((ATermList) g_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_61;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_61;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_61;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_61;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm o_62 (ATerm q_61, ATerm r_61, ATerm s_61, ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL,y_61 = NULL,v_9 = NULL;
  t = SSLgetAnnotations(s_61);
  v_61 = t;
  t = q_61;
  if(match_cons(t, sym_Path_1))
    {
      y_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_61, r_61);
  v_9 = t;
  t = SSLsetAnnotations(v_9, v_61);
  if(match_cons(t, sym__2))
    {
      t_61 = ATgetArgument(t, 0);
      u_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(t_61, u_61, t);
  return(t);
}
static ATerm p_62 (ATerm a_62, ATerm b_62, ATerm c_62, ATerm t)
{
  ATerm d_62 = NULL,e_62 = NULL,f_62 = NULL,i_62 = NULL,x_9 = NULL;
  t = SSLgetAnnotations(c_62);
  f_62 = t;
  t = SSL_is_string(a_62);
  i_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_62, b_62);
  x_9 = t;
  t = SSLsetAnnotations(x_9, f_62);
  if(match_cons(t, sym__2))
    {
      d_62 = ATgetArgument(t, 0);
      e_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(d_62, e_62, t);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm k_62 = NULL,l_62 = NULL,m_62 = NULL;
  k_62 = t;
  if(match_cons(t, sym__2))
    {
      l_62 = ATgetArgument(t, 0);
      m_62 = ATgetArgument(t, 1);
      {
        ATerm i_27 = t;
        int j_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_62(k_62, t);
            LocalPopChoice(j_27);
          }
        else
          {
            t = i_27;
            {
              ATerm k_27 = t;
              int l_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_62(l_62, m_62, k_62, t);
                  LocalPopChoice(l_27);
                }
              else
                {
                  t = k_27;
                  t = p_62(l_62, m_62, k_62, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_62(k_62, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL,y_62 = NULL;
  y_62 = t;
  {
    ATerm m_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_62, term_o_27);
        t = r_11(t);
        LocalPopChoice(n_27);
      }
    else
      {
        t = m_27;
        {
          ATerm m_5 = NULL,n_5 = NULL;
          t = term_p_27;
          n_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_p_27, y_62);
          t = p_11(n_5, y_62, t);
          m_5 = t;
          t = SSL_perror(m_5);
          _fail(t);
        }
      }
  }
  s_62 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_11(t_62, t);
  r_62 = t;
  t = s_62;
  t = fclose_0_0(t);
  t = r_62;
  return(t);
}
ATerm input_1_0 (ATerm t_131 (ATerm), ATerm t)
{
  ATerm t_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_63 = NULL,c_63 = NULL;
      t = term_q_26;
      b_63 = t;
      t = term_v_27;
      c_63 = t;
      t = term_w_27;
      t = x_11(b_63, c_63, t);
      LocalPopChoice(u_27);
    }
  else
    {
      t = t_27;
      t = term_x_27;
    }
  t = ReadFromFile_0_0(t);
  t = t_131(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL,h_63 = NULL;
  d_63 = t;
  t = term_y_27;
  t = whoami_0_0(t);
  e_63 = t;
  t = term_a_28;
  g_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_28), e_63), term_b_28);
  h_63 = t;
  t = SSL_printnl(g_63, h_63);
  t = term_d_28;
  f_63 = t;
  t = SSL_exit(f_63);
  t = d_63;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm j_63 = NULL;
  j_63 = t;
  if(match_string(t, "-k"))
    {
      t = j_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_63;
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL;
  k_63 = t;
  t = SSL_string_to_int(k_63);
  l_63 = t;
  t = term_e_28;
  m_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_28, l_63);
  t = a_12(m_63, l_63, t);
  t = k_63;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_f_28;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_2, h_2, g_3, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm o_63 = NULL;
  o_63 = t;
  if(match_string(t, "-S"))
    {
      t = o_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_63;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm p_63 = NULL,q_63 = NULL;
  t = term_g_28;
  p_63 = t;
  t = term_h_28;
  q_63 = t;
  t = term_j_28;
  t = a_12(p_63, q_63, t);
  t = term_k_28;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_l_28;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm r_63 = NULL,s_63 = NULL,t_63 = NULL;
  r_63 = t;
  t = SSL_string_to_int(r_63);
  s_63 = t;
  t = term_g_28;
  t_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_28, s_63);
  t = a_12(t_63, s_63, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_63);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_m_28;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm u_63 = NULL,v_63 = NULL;
  t = term_o_28;
  u_63 = t;
  t = term_y_27;
  v_63 = t;
  t = term_p_28;
  t = a_12(u_63, v_63, t);
  t = term_q_28;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_r_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_3, i_3, j_3, t);
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
            t = ArgOption_3_0(k_3, l_3, m_3, t);
            LocalPopChoice(w_28);
          }
        else
          {
            t = u_28;
            t = Option_3_0(n_3, o_3, p_3, t);
          }
      }
    }
  return(t);
}
static ATerm a_12 (ATerm q_47, ATerm r_47, ATerm t)
{
  ATerm w_63 = NULL,x_63 = NULL;
  t = term_q_26;
  w_63 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_26, q_47, r_47);
  t = lookup_table_0_1(w_63, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_12(q_47, r_47, x_63, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_26, q_47, r_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm b_64 = NULL,c_64 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_64 = NULL,e_64 = NULL,f_64 = NULL;
      t = term_y_27;
      t = e_0(t);
      d_64 = t;
      t = term_x_28;
      e_64 = t;
      t = term_y_28;
      f_64 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_28, term_y_28, d_64);
      t = y_11(e_64, f_64, d_64, t);
      _fail(t);
    }
  else
    {
      ATerm i_64 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_64 = ATgetFirst((ATermList) t);
          c_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_64;
      t = c_0(t);
      t = term_y_27;
      t = d_0(t);
      i_64 = t;
      t = (ATerm) ATinsert(CheckATermList(c_64), i_64);
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm k_64 = NULL;
  k_64 = t;
  if(match_string(t, "-o"))
    {
      t = k_64;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_64;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL;
  l_64 = t;
  t = term_r_26;
  m_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_26, l_64);
  t = a_12(m_64, l_64, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_64);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_z_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, p_4, q_4, t);
  return(t);
}
static ATerm y_11 (ATerm u_52, ATerm v_52, ATerm t_52, ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL;
  o_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_52, v_52);
  {
    ATerm a_29 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_29 = ATgetArgument(t, 0);
            ATerm d_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_52, v_52);
        t = x_11(u_52, v_52, t);
        LocalPopChoice(b_29);
      }
    else
      {
        t = a_29;
        t = (ATerm) ATempty;
      }
  }
  p_64 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_52, v_52, (ATerm) ATinsert(CheckATermList(p_64), t_52));
  t = lookup_table_0_1(u_52, t);
  s_64 = t;
  t = (ATerm) ATinsert(CheckATermList(p_64), t_52);
  q_64 = t;
  t = s_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_12(v_52, q_64, r_64, t);
  t = o_64;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL;
      t = term_y_27;
      t = n_0(t);
      d_65 = t;
      t = term_x_28;
      e_65 = t;
      t = term_y_28;
      f_65 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_28, term_y_28, d_65);
      t = y_11(e_65, f_65, d_65, t);
      _fail(t);
    }
  else
    {
      ATerm j_65 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_64 = ATgetFirst((ATermList) t);
          a_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_65;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_65 = ATgetFirst((ATermList) t);
          c_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_64;
      t = k_0(t);
      t = b_65;
      t = l_0(t);
      j_65 = t;
      t = (ATerm) ATinsert(CheckATermList(c_65), j_65);
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm l_65 = NULL;
  l_65 = t;
  if(match_string(t, "-i"))
    {
      t = l_65;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_65;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm m_65 = NULL,n_65 = NULL;
  m_65 = t;
  t = term_v_27;
  n_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_27, m_65);
  t = a_12(n_65, m_65, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_65);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_e_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_27;
  t = whoami_0_0(t);
  o_65 = t;
  t = term_a_28;
  q_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_29), o_65);
  r_65 = t;
  t = SSL_printnl(q_65, r_65);
  t = term_d_28;
  p_65 = t;
  t = SSL_exit(p_65);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL;
  t = term_q_26;
  s_65 = t;
  t = term_g_29;
  t_65 = t;
  t = term_i_29;
  t = x_11(s_65, t_65, t);
  return(t);
}
static ATerm s_11 (ATerm c_50, ATerm d_50, ATerm t)
{
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_50, d_50);
      LocalPopChoice(k_29);
    }
  else
    {
      t = j_29;
      t = SSL_addr(c_50, d_50);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm r_123 (ATerm), ATerm s_123 (ATerm), ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL;
  v_65 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_65;
      t = r_123(t);
    }
  else
    {
      ATerm f_66 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_65 = ATgetFirst((ATermList) t);
          x_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_65;
      t = foldr_2_0(r_123, s_123, t);
      f_66 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_65, f_66);
      t = s_123(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_h_28;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm t_5 = NULL,u_5 = NULL;
  if(match_cons(t, sym__2))
    {
      t_5 = ATgetArgument(t, 0);
      u_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11(t_5, u_5, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_66 = NULL,p_5 = NULL,q_5 = NULL;
  t = times_0_0(t);
  q_5 = t;
  t = SSL_explode_term(q_5);
  if(match_cons(t, sym__2))
    {
      ATerm l_29 = ATgetArgument(t, 0);
      p_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5;
  t = foldr_2_0(u_4, w_4, t);
  i_66 = t;
  t = SSL_TicksToSeconds(i_66);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_66 = NULL,v_66 = NULL,w_66 = NULL;
  u_66 = t;
  if(match_cons(t, sym__2))
    {
      v_66 = ATgetArgument(t, 0);
      w_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_66;
        if((v_66 != t))
          {
            _fail(t);
          }
        t = u_66;
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
        t = (ATerm) ATmakeAppl(sym__2, v_66, w_66);
        {
          ATerm o_29 = t;
          int q_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_66, w_66);
              LocalPopChoice(q_29);
            }
          else
            {
              t = o_29;
              t = SSL_gtr(v_66, w_66);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_66, w_66);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_116 (ATerm), ATerm t)
{
  ATerm a_67 = NULL;
  a_67 = t;
  {
    ATerm r_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL;
        t = term_q_26;
        d_67 = t;
        t = term_g_28;
        e_67 = t;
        t = term_t_29;
        t = x_11(d_67, e_67, t);
        c_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_67, term_d_28);
        t = geq_0_0(t);
        t = a_67;
        t = s_116(t);
        LocalPopChoice(s_29);
      }
    else
      {
        t = r_29;
        t = a_67;
      }
  }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm g_67 = NULL,h_67 = NULL,j_67 = NULL,k_67 = NULL;
  t = run_time_0_0(t);
  g_67 = t;
  t = term_y_27;
  t = whoami_0_0(t);
  h_67 = t;
  t = term_a_28;
  j_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_29), g_67), term_u_29), h_67);
  k_67 = t;
  t = SSL_printnl(j_67, k_67);
  t = (ATerm) ATmakeAppl(sym__2, term_a_28, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_29), g_67), term_u_29), h_67));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_67 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_28;
  l_67 = t;
  t = SSL_exit(l_67);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm v_67 = NULL,w_67 = NULL;
  w_67 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_67;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_67 = ATgetArgument(t, 0);
          {
            ATerm g_6 = NULL,h_14 = NULL;
            t = SSLgetAnnotations(w_67);
            g_6 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_67);
            h_14 = t;
            t = SSLsetAnnotations(h_14, g_6);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_67;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_131 (ATerm), ATerm t)
{
  ATerm w_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_67 = NULL,p_67 = NULL;
      t = term_q_26;
      o_67 = t;
      t = term_y_29;
      p_67 = t;
      t = term_z_29;
      t = x_11(o_67, p_67, t);
      LocalPopChoice(x_29);
    }
  else
    {
      t = w_29;
      t = fetch_1_0(a_5, t);
    }
  t = j_131(t);
  return(t);
}
static ATerm b_12 (ATerm b_56, ATerm c_56, ATerm d_56, ATerm t)
{
  ATerm y_67 = NULL;
  t = SSL_hashtable_put(d_56, b_56, c_56);
  y_67 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_67);
  return(t);
}
ATerm lookup_table_0_1 (ATerm g_54, ATerm t)
{
  ATerm h_68 = NULL;
  t = table_hashtable_0_0(t);
  h_68 = t;
  {
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_6 = NULL;
        t = h_68;
        if(match_cons(t, sym_Hashtable_1))
          {
            m_6 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_12(g_54, m_6, t);
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
        {
          ATerm r_6 = NULL;
          t = g_54;
          t = table_create_0_0(t);
          t = h_68;
          if(match_cons(t, sym_Hashtable_1))
            {
              r_6 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_12(g_54, r_6, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm j_56, ATerm k_56, ATerm t)
{
  ATerm k_68 = NULL;
  t = SSL_hashtable_create(j_56, k_56);
  k_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_68);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm l_68 = NULL,m_68 = NULL,n_68 = NULL,p_68 = NULL,q_68 = NULL;
  l_68 = t;
  t = term_c_30;
  p_68 = t;
  t = term_d_30;
  q_68 = t;
  t = l_68;
  t = new_hashtable_0_2(p_68, q_68, t);
  m_68 = t;
  t = l_68;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_12(l_68, m_68, n_68, t);
  t = l_68;
  return(t);
}
static ATerm u_11 (ATerm g_56, ATerm h_56, ATerm t)
{
  ATerm r_68 = NULL;
  t = SSL_hashtable_remove(h_56, g_56);
  r_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_68);
  return(t);
}
static ATerm v_11 (ATerm l_56, ATerm t)
{
  ATerm s_68 = NULL;
  t = SSL_hashtable_destroy(l_56);
  s_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_68);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm t_68 = NULL;
  t = SSL_table_hashtable();
  t_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_68);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL;
  u_68 = t;
  t = table_hashtable_0_0(t);
  v_68 = t;
  t = lookup_table_0_1(u_68, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_11(x_68, t);
  t = v_68;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(u_68, w_68, t);
  t = u_68;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm z_68 = NULL,a_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_68 = ATgetFirst((ATermList) t);
      a_69 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_69 = NULL,f_69 = NULL;
        static ATerm b_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_69)), not_null(f_69));
          return(t);
        }
        t = a_69;
        t = i_0(t);
        if(((e_69 != NULL) && (e_69 != t)))
          _fail(t);
        else
          e_69 = t;
        t = z_68;
        t = g_0(t);
        if(((f_69 != NULL) && (f_69 != t)))
          _fail(t);
        else
          f_69 = t;
        t = a_69;
        t = reverse_acc_2_0(g_0, b_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_27;
      t = i_0(t);
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm l_69 = NULL,m_69 = NULL,n_69 = NULL,l_14 = NULL;
  n_69 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_69);
  l_69 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_69);
  l_14 = t;
  t = SSLsetAnnotations(l_14, l_69);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm p_69 = NULL;
  p_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_69), term_f_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_69 = NULL,i_69 = NULL;
  ATerm g_30 = t;
  int h_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_69 = NULL,k_69 = NULL;
      t = term_q_26;
      j_69 = t;
      t = term_g_29;
      k_69 = t;
      t = term_i_29;
      t = x_11(j_69, k_69, t);
      LocalPopChoice(h_30);
    }
  else
    {
      t = g_30;
      t = fetch_1_0(c_5, t);
    }
  t = term_i_30;
  t = echo_0_0(t);
  t = term_x_28;
  h_69 = t;
  t = term_y_28;
  i_69 = t;
  t = term_j_30;
  t = x_11(h_69, i_69, t);
  t = reverse_acc_2_0(_id, d_5, t);
  t = map_1_0(e_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm l_125 (ATerm), ATerm t)
{
  static ATerm m_70 (ATerm t)
  {
    ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL;
    j_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_70 = ATgetFirst((ATermList) t);
        l_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm k_30 = t;
      int l_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_6 = NULL,z_6 = NULL,n_14 = NULL;
          t = SSLgetAnnotations(j_70);
          w_6 = t;
          t = k_70;
          t = l_125(t);
          z_6 = t;
          t = (ATerm) ATinsert(CheckATermList(l_70), z_6);
          n_14 = t;
          t = SSLsetAnnotations(n_14, w_6);
          LocalPopChoice(l_30);
        }
      else
        {
          t = k_30;
          {
            ATerm l_7 = NULL,p_7 = NULL,o_14 = NULL;
            t = SSLgetAnnotations(j_70);
            l_7 = t;
            t = l_70;
            t = m_70(t);
            p_7 = t;
            t = (ATerm) ATinsert(CheckATermList(p_7), k_70);
            o_14 = t;
            t = SSLsetAnnotations(o_14, l_7);
          }
        }
    }
    return(t);
  }
  t = m_70(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_70 = NULL,r_70 = NULL,s_70 = NULL;
  q_70 = t;
  {
    ATerm m_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_70;
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
            t = q_70;
          }
        LocalPopChoice(o_30);
      }
    else
      {
        t = m_30;
        t = (ATerm) ATinsert(ATempty, q_70);
      }
  }
  r_70 = t;
  t = term_u_26;
  s_70 = t;
  t = SSL_printnl(s_70, r_70);
  t = q_70;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm w_70 = NULL,x_70 = NULL;
  t = term_q_26;
  w_70 = t;
  t = term_g_29;
  x_70 = t;
  t = term_i_29;
  t = x_11(w_70, x_70, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_12 (ATerm e_56, ATerm f_56, ATerm t)
{
  t = SSL_hashtable_get(f_56, e_56);
  return(t);
}
static ATerm x_11 (ATerm n_54, ATerm o_54, ATerm t)
{
  ATerm y_70 = NULL;
  t = lookup_table_0_1(n_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_12(o_54, y_70, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL;
  t = term_r_30;
  a_71 = t;
  t = term_y_27;
  b_71 = t;
  t = term_s_30;
  t = a_12(a_71, b_71, t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_t_30;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL;
  t = term_r_30;
  e_71 = t;
  t = term_y_27;
  f_71 = t;
  t = term_s_30;
  t = a_12(e_71, f_71, t);
  t = term_u_30;
  c_71 = t;
  t = term_y_27;
  d_71 = t;
  t = term_v_30;
  t = a_12(c_71, d_71, t);
  t = term_w_30;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_x_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_5, g_5, h_5, t);
      LocalPopChoice(z_30);
    }
  else
    {
      t = y_30;
      t = Option_3_0(i_5, j_5, k_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm t)
{
  ATerm g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,w_14 = NULL;
  l_71 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_71 = ATgetFirst((ATermList) t);
      i_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_71);
  g_71 = t;
  t = h_71;
  t = u_89(t);
  j_71 = t;
  t = i_71;
  t = v_89(t);
  k_71 = t;
  t = (ATerm) ATinsert(CheckATermList(k_71), j_71);
  w_14 = t;
  t = SSLsetAnnotations(w_14, g_71);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_133 (ATerm), ATerm t)
{
  ATerm q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,v_71 = NULL,w_71 = NULL,y_14 = NULL;
  q_71 = t;
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_31;
        t = m_133(t);
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
      }
  }
  t = q_71;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_71 = ATgetFirst((ATermList) t);
      t_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_71);
  r_71 = t;
  t = term_g_29;
  w_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_29, s_71);
  t = a_12(w_71, s_71, t);
  t = t_71;
  {
    static ATerm g_72 (ATerm t)
    {
      ATerm d_31 = t;
      int e_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_31 = t;
          int h_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_71 = NULL;
              z_71 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_71;
              LocalPopChoice(h_31);
            }
          else
            {
              t = g_31;
              t = m_133(t);
              t = Cons_2_0(_id, g_72, t);
            }
          LocalPopChoice(e_31);
        }
      else
        {
          t = d_31;
          {
            ATerm c_72 = NULL,d_72 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_72 = ATgetFirst((ATermList) t);
                d_72 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_72), (ATerm) ATmakeAppl(sym_Undefined_1, c_72));
          }
        }
      return(t);
    }
    t = g_72(t);
  }
  v_71 = t;
  t = (ATerm) ATinsert(CheckATermList(v_71), (ATerm) ATmakeAppl(sym_Program_1, s_71));
  y_14 = t;
  t = SSLsetAnnotations(y_14, r_71);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm t_72 = NULL;
  t_72 = t;
  if(match_string(t, "--help"))
    {
      t = t_72;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_72;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_72;
        }
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm u_72 = NULL,v_72 = NULL;
  t = term_y_29;
  u_72 = t;
  t = term_y_27;
  v_72 = t;
  t = term_i_31;
  t = a_12(u_72, v_72, t);
  t = term_j_31;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_l_31;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_133 (ATerm), ATerm t)
{
  ATerm l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL;
  n_72 = t;
  t = term_x_28;
  o_72 = t;
  t = term_m_31;
  t = lookup_table_0_1(o_72, t);
  s_72 = t;
  t = term_y_28;
  p_72 = t;
  t = (ATerm) ATempty;
  q_72 = t;
  t = s_72;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_12(p_72, q_72, r_72, t);
  t = n_72;
  {
    static ATerm l_5 (ATerm t)
    {
      ATerm n_31 = t;
      int p_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_133(t);
          LocalPopChoice(p_31);
        }
      else
        {
          t = n_31;
          {
            ATerm q_31 = t;
            int r_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_5, v_5, w_5, t);
                LocalPopChoice(r_31);
              }
            else
              {
                t = q_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_5, t);
  }
  {
    ATerm s_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_73 = NULL;
        h_73 = t;
        {
          ATerm v_31 = t;
          int w_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_7 = NULL;
              t = h_73;
              {
                ATerm x_31 = t;
                int z_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_8 = NULL,f_8 = NULL;
                    t = term_q_26;
                    e_8 = t;
                    t = term_y_29;
                    f_8 = t;
                    t = term_z_29;
                    t = x_11(e_8, f_8, t);
                    LocalPopChoice(z_31);
                  }
                else
                  {
                    t = x_31;
                    t = fetch_1_0(x_5, t);
                  }
              }
              t = h_73;
              t = default_system_usage_0_0(t);
              t = term_h_28;
              z_7 = t;
              t = SSL_exit(z_7);
              LocalPopChoice(w_31);
            }
          else
            {
              t = v_31;
              {
                ATerm l_8 = NULL,m_8 = NULL,o_8 = NULL;
                t = term_q_26;
                m_8 = t;
                t = term_r_30;
                o_8 = t;
                t = term_a_32;
                t = x_11(m_8, o_8, t);
                t = h_73;
                t = default_system_about_0_0(t);
                t = term_h_28;
                l_8 = t;
                t = SSL_exit(l_8);
              }
            }
        }
        LocalPopChoice(u_31);
      }
    else
      {
        t = s_31;
        {
          ATerm b_32 = t;
          int c_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL;
              static ATerm y_5 (ATerm t)
              {
                ATerm l_73 = NULL,m_73 = NULL,n_73 = NULL,b_15 = NULL;
                n_73 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    m_73 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_73);
                l_73 = t;
                t = m_73;
                if(((l_72 != NULL) && (l_72 != t)))
                  _fail(t);
                else
                  l_72 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, m_73);
                b_15 = t;
                t = SSLsetAnnotations(b_15, l_73);
                return(t);
              }
              t = fetch_1_0(y_5, t);
              t = term_a_28;
              j_73 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_72)), term_e_32);
              k_73 = t;
              t = SSL_printnl(j_73, k_73);
              t = (ATerm) ATmakeAppl(sym__2, term_a_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_72)), term_e_32));
              t = default_system_usage_0_0(t);
              t = term_d_28;
              i_73 = t;
              t = SSL_exit(i_73);
              LocalPopChoice(c_32);
            }
          else
            {
              t = b_32;
            }
        }
      }
  }
  m_72 = t;
  t = term_x_28;
  t = table_destroy_0_0(t);
  t = m_72;
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm n_131 (ATerm), ATerm o_131 (ATerm), ATerm t)
{
  ATerm s_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL;
  t = parse_options_1_0(l_131, t);
  s_73 = t;
  t = term_f_32;
  t = table_create_0_0(t);
  t = term_f_32;
  t_73 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_32, term_g_32, s_73);
  t = lookup_table_0_1(t_73, t);
  w_73 = t;
  t = term_g_32;
  u_73 = t;
  t = w_73;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_12(u_73, s_73, v_73, t);
  t = s_73;
  t = n_131(t);
  {
    ATerm h_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_131, t);
        LocalPopChoice(i_32);
      }
    else
      {
        t = h_32;
        {
          ATerm j_32 = t;
          int k_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_131(t);
              t = report_success_0_0(t);
              LocalPopChoice(k_32);
            }
          else
            {
              t = j_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      {
        ATerm n_32 = t;
        int p_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(p_32);
          }
        else
          {
            t = n_32;
            {
              ATerm q_32 = t;
              int r_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(b_6, c_6, d_6, t);
                  LocalPopChoice(r_32);
                }
              else
                {
                  t = q_32;
                  {
                    ATerm s_32 = t;
                    int u_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(u_32);
                      }
                    else
                      {
                        t = s_32;
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
static ATerm a_6 (ATerm t)
{
  t = input_1_0(e_6, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm d_74 = NULL,e_74 = NULL;
  t = term_x_26;
  d_74 = t;
  t = term_y_27;
  e_74 = t;
  t = term_v_32;
  t = a_12(d_74, e_74, t);
  t = term_w_32;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_x_32;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = output_1_0(f_6, t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL,l_15 = NULL,k_15 = NULL,i_15 = NULL,h_15 = NULL;
  u_74 = t;
  if(match_cons(t, sym_Specification_1))
    {
      h_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_74);
  g_74 = t;
  t = h_74;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_74 = ATgetFirst((ATermList) t);
      k_74 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_74);
  i_74 = t;
  t = k_74;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_74 = ATgetFirst((ATermList) t);
      o_74 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_74);
  m_74 = t;
  t = n_74;
  if(match_cons(t, sym_Strategies_1))
    {
      r_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_74);
  q_74 = t;
  t = r_74;
  t = map_1_0(h_6, t);
  s_74 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, s_74);
  h_15 = t;
  t = SSLsetAnnotations(h_15, q_74);
  t_74 = t;
  t = o_74;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_74), t_74);
  i_15 = t;
  t = SSLsetAnnotations(i_15, m_74);
  p_74 = t;
  t = (ATerm) ATinsert(CheckATermList(p_74), j_74);
  k_15 = t;
  t = SSLsetAnnotations(k_15, i_74);
  l_74 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, l_74);
  l_15 = t;
  t = SSLsetAnnotations(l_15, g_74);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL;
  v_75 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      r_75 = ATgetArgument(t, 0);
      s_75 = ATgetArgument(t, 1);
      t_75 = ATgetArgument(t, 2);
      u_75 = ATgetArgument(t, 3);
      {
        ATerm y_32 = t;
        int a_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_8 = NULL,b_9 = NULL,g_15 = NULL;
            t = SSLgetAnnotations(v_75);
            v_8 = t;
            t = u_75;
            t = topdown_1_0(i_6, t);
            t = simplify_0_0(t);
            b_9 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, r_75, s_75, t_75, b_9);
            g_15 = t;
            t = SSLsetAnnotations(g_15, v_8);
            LocalPopChoice(a_33);
          }
        else
          {
            t = y_32;
            t = v_75;
          }
      }
    }
  else
    {
      t = v_75;
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_33 = t;
      int e_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = LiftPrimArgs_0_0(t);
          LocalPopChoice(e_33);
        }
      else
        {
          t = d_33;
          {
            ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL;
            e_9 = t;
            if(match_cons(t, sym_CallT_3))
              {
                f_9 = ATgetArgument(t, 0);
                g_9 = ATgetArgument(t, 1);
                h_9 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = e_9;
            t = g_11(f_9, g_9, h_9, t);
          }
        }
      LocalPopChoice(c_33);
    }
  else
    {
      t = b_33;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(z_5, default_usage_0_0, _id, a_6, t);
  return(t);
}
