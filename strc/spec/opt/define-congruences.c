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
Symbol sym_Explode_2;
Symbol sym_Anno_2;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_As_2;
Symbol sym_Choice_2;
Symbol sym_AM_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_Call_2;
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
Symbol sym_Anno_2;
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
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
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
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_n_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_h_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_p_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_s_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_j_28;
ATerm term_g_28;
ATerm term_z_27;
ATerm term_v_27;
ATerm term_x_26;
ATerm term_a_23;
ATerm term_m_6;
ATerm term_e_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym__2, term_m_28, term_n_28);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym__2, term_m_28, term_t_28);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym__2, term_m_28, term_p_29);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym__2, term_a_30, term_b_30);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_30);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym__2, term_g_30, term_s_29);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym__2, term_m_28, term_z_30);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym__2, term_m_28, term_a_30);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_m_28, term_p_31);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__2, term_p_30, term_q_30);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__2, term_d_32, term_s_29);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym__2, term_g_32, term_s_29);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_p_31, term_s_29);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym__2, term_m_28, term_d_32);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_s_29);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm b_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm simplify_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm i_103 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
static ATerm u_4 (ATerm e_78, ATerm d_78, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm m_104 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm j_11 (ATerm f_77, ATerm l_77, ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm j_124 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm d_72 (ATerm v_71, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm n_11 (ATerm q_77, ATerm y_77, ATerm x_77, ATerm t);
ATerm pat_td_1_0 (ATerm o_101 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm MatchingCongruence_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm y_112 (ATerm), ATerm z_112 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm j_103 (ATerm), ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm define_congruences_0_0 (ATerm t);
ATerm map_1_0 (ATerm s_123 (ATerm), ATerm t);
static ATerm o_11 (ATerm v_43, ATerm w_43, ATerm t);
static ATerm p_11 (ATerm w_48, ATerm x_48, ATerm t);
static ATerm r_11 (ATerm m_117 (ATerm), ATerm o_428, ATerm c_49, ATerm t);
static ATerm q_11 (ATerm s_48, ATerm t_48, ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm output_1_0 (ATerm j_130 (ATerm), ATerm t);
static ATerm w_82 (ATerm q_82, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_11 (ATerm y_48, ATerm t);
static ATerm t_11 (ATerm o_42, ATerm p_42, ATerm t);
static ATerm u_11 (ATerm x_43, ATerm y_43, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_84 (ATerm g_83, ATerm t);
static ATerm j_84 (ATerm k_83, ATerm l_83, ATerm m_83, ATerm t);
static ATerm k_84 (ATerm v_83, ATerm w_83, ATerm x_83, ATerm t);
static ATerm v_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm k_130 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm c_12 (ATerm q_47, ATerm r_47, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm a_12 (ATerm u_52, ATerm v_52, ATerm t_52, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_11 (ATerm c_50, ATerm d_50, ATerm t);
ATerm foldr_2_0 (ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm j_115 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm need_help_1_0 (ATerm a_130 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_124 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm z_11 (ATerm l_54, ATerm m_54, ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm d_132 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm parse_options_1_0 (ATerm c_132 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_5 = ATgetArgument(t, 0);
      if(((ATgetType(g_5) != AT_LIST) || !(ATisEmpty(g_5))))
        _fail(t);
      {
        ATerm i_5 = ATgetArgument(t, 1);
        if(((ATgetType(i_5) != AT_LIST) || !(ATisEmpty(i_5))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm d_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_5 = ATgetArgument(t, 0);
      if(((ATgetType(j_5) == AT_LIST) && !(ATisEmpty(j_5))))
        {
          d_15 = ATgetFirst((ATermList) j_5);
          g_15 = (ATerm) ATgetNext((ATermList) j_5);
        }
      else
        _fail(t);
      {
        ATerm k_5 = ATgetArgument(t, 1);
        if(((ATgetType(k_5) == AT_LIST) && !(ATisEmpty(k_5))))
          {
            h_15 = ATgetFirst((ATermList) k_5);
            i_15 = (ATerm) ATgetNext((ATermList) k_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_15, h_15), (ATerm) ATmakeAppl(sym__2, g_15, i_15));
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL;
  if(match_cons(t, sym__2))
    {
      j_15 = ATgetArgument(t, 0);
      k_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_15), j_15);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL;
  if(match_cons(t, sym__2))
    {
      l_15 = ATgetArgument(t, 0);
      m_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_15), (ATerm) ATmakeAppl(sym_Match_1, m_15));
  return(t);
}
static ATerm o_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_5 = ATgetArgument(t, 0);
      if(((ATgetType(l_5) != AT_LIST) || !(ATisEmpty(l_5))))
        _fail(t);
      {
        ATerm n_5 = ATgetArgument(t, 1);
        if(((ATgetType(n_5) != AT_LIST) || !(ATisEmpty(n_5))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,c_24 = NULL,h_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_5 = ATgetArgument(t, 0);
      if(((ATgetType(o_5) == AT_LIST) && !(ATisEmpty(o_5))))
        {
          y_23 = ATgetFirst((ATermList) o_5);
          z_23 = (ATerm) ATgetNext((ATermList) o_5);
        }
      else
        _fail(t);
      {
        ATerm p_5 = ATgetArgument(t, 1);
        if(((ATgetType(p_5) == AT_LIST) && !(ATisEmpty(p_5))))
          {
            c_24 = ATgetFirst((ATermList) p_5);
            h_24 = (ATerm) ATgetNext((ATermList) p_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_23, c_24), (ATerm) ATmakeAppl(sym__2, z_23, h_24));
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm j_24 = NULL,o_24 = NULL;
  if(match_cons(t, sym__2))
    {
      j_24 = ATgetArgument(t, 0);
      o_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_24), j_24);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm p_24 = NULL,s_24 = NULL;
  if(match_cons(t, sym__2))
    {
      p_24 = ATgetArgument(t, 0);
      s_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_24), (ATerm) ATmakeAppl(sym_Match_1, s_24));
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm q_5 = t;
  int r_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm s_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(r_5);
      {
        ATerm z_41 = NULL,a_42 = NULL;
        z_41 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm t_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        a_42 = t;
        t = SSLgetAnnotations(z_41);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_5 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) u_5) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_5 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(w_5) != AT_LIST) || !(ATisEmpty(w_5))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = a_42;
      }
    }
  else
    {
      t = q_5;
      {
        ATerm x_5 = t;
        int z_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm a_6 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) a_6) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm b_6 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(z_5);
            _fail(t);
          }
        else
          {
            t = x_5;
          }
      }
    }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,t_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,m_8 = NULL,o_8 = NULL,t_8 = NULL,g_9 = NULL,i_9 = NULL,t_9 = NULL,c_10 = NULL;
    c_10 = t;
    if(match_cons(t, sym_Test_1))
      {
        t_9 = ATgetArgument(t, 0);
        t = t_9;
        if(match_cons(t, sym_Id_0))
          {
            ATerm c_6 = t;
            int d_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_e_6;
                t = a_0(t);
                LocalPopChoice(d_6);
              }
            else
              {
                t = c_6;
                {
                  ATerm f_6 = t;
                  int h_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL;
                      t = c_10;
                      t = new_0_0(t);
                      g_10 = t;
                      t = bottomup_1_0(a_0, t);
                      r_10 = t;
                      t = (ATerm) ATempty;
                      t = a_0(t);
                      s_10 = t;
                      t = (ATerm) ATinsert(CheckATermList(s_10), r_10);
                      t = a_0(t);
                      h_10 = t;
                      t = g_10;
                      t = bottomup_1_0(a_0, t);
                      q_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, q_10);
                      t = a_0(t);
                      p_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, p_10);
                      t = a_0(t);
                      j_10 = t;
                      t = t_9;
                      t = bottomup_1_0(a_0, t);
                      l_10 = t;
                      t = g_10;
                      t = bottomup_1_0(a_0, t);
                      o_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, o_10);
                      t = a_0(t);
                      n_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, n_10);
                      t = a_0(t);
                      m_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_10, m_10);
                      t = a_0(t);
                      k_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_10, k_10);
                      t = a_0(t);
                      i_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, h_10, i_10);
                      t = a_0(t);
                      LocalPopChoice(h_6);
                    }
                  else
                    {
                      t = f_6;
                      t = c_10;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm i_6 = t;
                int l_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_m_6;
                    t = a_0(t);
                    LocalPopChoice(l_6);
                  }
                else
                  {
                    t = i_6;
                    {
                      ATerm n_6 = t;
                      int o_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL;
                          t = c_10;
                          t = new_0_0(t);
                          v_10 = t;
                          t = bottomup_1_0(a_0, t);
                          g_11 = t;
                          t = (ATerm) ATempty;
                          t = a_0(t);
                          h_11 = t;
                          t = (ATerm) ATinsert(CheckATermList(h_11), g_11);
                          t = a_0(t);
                          w_10 = t;
                          t = v_10;
                          t = bottomup_1_0(a_0, t);
                          f_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, f_11);
                          t = a_0(t);
                          e_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, e_11);
                          t = a_0(t);
                          y_10 = t;
                          t = t_9;
                          t = bottomup_1_0(a_0, t);
                          a_11 = t;
                          t = v_10;
                          t = bottomup_1_0(a_0, t);
                          d_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, d_11);
                          t = a_0(t);
                          c_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, c_11);
                          t = a_0(t);
                          b_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_11, b_11);
                          t = a_0(t);
                          z_10 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_10, z_10);
                          t = a_0(t);
                          x_10 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, w_10, x_10);
                          t = a_0(t);
                          LocalPopChoice(o_6);
                        }
                      else
                        {
                          t = n_6;
                          t = c_10;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    t_8 = ATgetArgument(t, 0);
                    {
                      ATerm p_6 = t;
                      int q_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, t_8);
                          t = a_0(t);
                          LocalPopChoice(q_6);
                        }
                      else
                        {
                          t = p_6;
                          {
                            ATerm r_6 = t;
                            int s_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm m_11 = NULL,x_11 = NULL,y_11 = NULL,b_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL;
                                t = c_10;
                                t = new_0_0(t);
                                m_11 = t;
                                t = bottomup_1_0(a_0, t);
                                k_12 = t;
                                t = (ATerm) ATempty;
                                t = a_0(t);
                                l_12 = t;
                                t = (ATerm) ATinsert(CheckATermList(l_12), k_12);
                                t = a_0(t);
                                x_11 = t;
                                t = m_11;
                                t = bottomup_1_0(a_0, t);
                                j_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, j_12);
                                t = a_0(t);
                                i_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, i_12);
                                t = a_0(t);
                                b_12 = t;
                                t = t_9;
                                t = bottomup_1_0(a_0, t);
                                e_12 = t;
                                t = m_11;
                                t = bottomup_1_0(a_0, t);
                                h_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, h_12);
                                t = a_0(t);
                                g_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, g_12);
                                t = a_0(t);
                                f_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, f_12);
                                t = a_0(t);
                                d_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, b_12, d_12);
                                t = a_0(t);
                                y_11 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, x_11, y_11);
                                t = a_0(t);
                                LocalPopChoice(s_6);
                              }
                            else
                              {
                                t = r_6;
                                t = c_10;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm t_6 = t;
                    int u_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
                        t = c_10;
                        t = new_0_0(t);
                        o_12 = t;
                        t = bottomup_1_0(a_0, t);
                        z_12 = t;
                        t = (ATerm) ATempty;
                        t = a_0(t);
                        a_13 = t;
                        t = (ATerm) ATinsert(CheckATermList(a_13), z_12);
                        t = a_0(t);
                        p_12 = t;
                        t = o_12;
                        t = bottomup_1_0(a_0, t);
                        y_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, y_12);
                        t = a_0(t);
                        x_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, x_12);
                        t = a_0(t);
                        r_12 = t;
                        t = t_9;
                        t = bottomup_1_0(a_0, t);
                        t_12 = t;
                        t = o_12;
                        t = bottomup_1_0(a_0, t);
                        w_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, w_12);
                        t = a_0(t);
                        v_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, v_12);
                        t = a_0(t);
                        u_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, t_12, u_12);
                        t = a_0(t);
                        s_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, r_12, s_12);
                        t = a_0(t);
                        q_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, p_12, q_12);
                        t = a_0(t);
                        LocalPopChoice(u_6);
                      }
                    else
                      {
                        t = t_6;
                        t = c_10;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            t_9 = ATgetArgument(t, 0);
            t = t_9;
            if(match_cons(t, sym_Id_0))
              {
                ATerm v_6 = t;
                int w_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_m_6;
                    t = a_0(t);
                    LocalPopChoice(w_6);
                  }
                else
                  {
                    t = v_6;
                    t = c_10;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm z_6 = t;
                    int c_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_e_6;
                        t = a_0(t);
                        LocalPopChoice(c_7);
                      }
                    else
                      {
                        t = z_6;
                        t = c_10;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        t_8 = ATgetArgument(t, 0);
                        {
                          ATerm g_7 = t;
                          int h_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, t_8);
                              t = a_0(t);
                              LocalPopChoice(h_7);
                            }
                          else
                            {
                              t = g_7;
                              t = c_10;
                            }
                        }
                      }
                    else
                      {
                        t = c_10;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                t_9 = ATgetArgument(t, 0);
                i_9 = ATgetArgument(t, 1);
                t = i_9;
                if(match_cons(t, sym_Id_0))
                  {
                    t = t_9;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = i_9;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = t_9;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                t_8 = ATgetArgument(t, 0);
                                g_9 = ATgetArgument(t, 1);
                                t = t_9;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    t_8 = ATgetArgument(t, 0);
                                    g_9 = ATgetArgument(t, 1);
                                    t = t_9;
                                  }
                                else
                                  {
                                    t = t_9;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        m_8 = ATgetArgument(t, 0);
                        o_8 = ATgetArgument(t, 1);
                        t = m_8;
                        if(match_cons(t, sym_Match_1))
                          {
                            j_8 = ATgetArgument(t, 0);
                            t = j_8;
                            if(match_cons(t, sym_Op_2))
                              {
                                h_8 = ATgetArgument(t, 0);
                                t_7 = ATgetArgument(t, 1);
                                t = t_9;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = i_9;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm i_7 = t;
                                        int m_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_m_6;
                                            t = a_0(t);
                                            LocalPopChoice(m_7);
                                          }
                                        else
                                          {
                                            t = i_7;
                                            t = c_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            t_8 = ATgetArgument(t, 0);
                                            g_9 = ATgetArgument(t, 1);
                                            {
                                              ATerm n_7 = t;
                                              int r_7 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm w_14 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                  t = a_0(t);
                                                  w_14 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, w_14);
                                                  t = a_0(t);
                                                  LocalPopChoice(r_7);
                                                }
                                              else
                                                {
                                                  t = n_7;
                                                  t = c_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                t = t_8;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    i_8 = ATgetArgument(t, 0);
                                                    z_7 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm s_7 = t;
                                                      int u_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, i_8, h_8);
                                                          {
                                                            ATerm v_7 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm j_0 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    j_0 = ATgetArgument(t, 0);
                                                                    if((j_0 != ATgetArgument(t, 1)))
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
                                                                t = v_7;
                                                              }
                                                          }
                                                          t = term_m_6;
                                                          t = bottomup_1_0(a_0, t);
                                                          LocalPopChoice(u_7);
                                                        }
                                                      else
                                                        {
                                                          t = s_7;
                                                          {
                                                            ATerm w_7 = t;
                                                            int x_7 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm c_15 = NULL;
                                                                t = h_8;
                                                                if((i_8 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, z_7, t_7);
                                                                t = genzip_4_0(b_0, f_0, h_0, m_0, t);
                                                                c_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_15), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, i_8, z_7)), o_8));
                                                                t = bottomup_1_0(a_0, t);
                                                                LocalPopChoice(x_7);
                                                              }
                                                            else
                                                              {
                                                                t = w_7;
                                                                {
                                                                  ATerm y_7 = t;
                                                                  int d_8 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm p_15 = NULL;
                                                                      t = j_8;
                                                                      if((t_8 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, t_8);
                                                                      t = a_0(t);
                                                                      p_15 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_15, o_8);
                                                                      t = a_0(t);
                                                                      LocalPopChoice(d_8);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = y_7;
                                                                      t = c_10;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm e_8 = t;
                                                    int f_8 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm z_15 = NULL;
                                                        t = j_8;
                                                        if((t_8 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, t_8);
                                                        t = a_0(t);
                                                        z_15 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, z_15, o_8);
                                                        t = a_0(t);
                                                        LocalPopChoice(f_8);
                                                      }
                                                    else
                                                      {
                                                        t = e_8;
                                                        t = c_10;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    t_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm k_8 = t;
                                                      int l_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm d_16 = NULL;
                                                          t = j_8;
                                                          if((t_8 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, t_8);
                                                          t = a_0(t);
                                                          d_16 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_16, o_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(l_8);
                                                        }
                                                      else
                                                        {
                                                          t = k_8;
                                                          t = c_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        g_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm n_8 = t;
                                                          int p_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm k_16 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                              t = a_0(t);
                                                              k_16 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, k_16);
                                                              t = a_0(t);
                                                              LocalPopChoice(p_8);
                                                            }
                                                          else
                                                            {
                                                              t = n_8;
                                                              t = c_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = c_10;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = t_9;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = i_9;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm r_8 = t;
                                        int s_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_m_6;
                                            t = a_0(t);
                                            LocalPopChoice(s_8);
                                          }
                                        else
                                          {
                                            t = r_8;
                                            t = c_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            t_8 = ATgetArgument(t, 0);
                                            g_9 = ATgetArgument(t, 1);
                                            {
                                              ATerm v_8 = t;
                                              int w_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm z_16 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                  t = a_0(t);
                                                  z_16 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, z_16);
                                                  t = a_0(t);
                                                  LocalPopChoice(w_8);
                                                }
                                              else
                                                {
                                                  t = v_8;
                                                  t = c_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                {
                                                  ATerm x_8 = t;
                                                  int y_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm f_17 = NULL;
                                                      t = j_8;
                                                      if((t_8 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, t_8);
                                                      t = a_0(t);
                                                      f_17 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_17, o_8);
                                                      t = a_0(t);
                                                      LocalPopChoice(y_8);
                                                    }
                                                  else
                                                    {
                                                      t = x_8;
                                                      t = c_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    t_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm z_8 = t;
                                                      int a_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm l_17 = NULL;
                                                          t = j_8;
                                                          if((t_8 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, t_8);
                                                          t = a_0(t);
                                                          l_17 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, l_17, o_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(a_9);
                                                        }
                                                      else
                                                        {
                                                          t = z_8;
                                                          t = c_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        g_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_9 = t;
                                                          int d_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_17 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                              t = a_0(t);
                                                              q_17 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, q_17);
                                                              t = a_0(t);
                                                              LocalPopChoice(d_9);
                                                            }
                                                          else
                                                            {
                                                              t = b_9;
                                                              t = c_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = c_10;
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
                                j_8 = ATgetArgument(t, 0);
                                t = j_8;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    h_8 = ATgetArgument(t, 0);
                                    t = t_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_9;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm e_9 = t;
                                            int h_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_6;
                                                t = a_0(t);
                                                LocalPopChoice(h_9);
                                              }
                                            else
                                              {
                                                t = e_9;
                                                t = c_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                g_9 = ATgetArgument(t, 1);
                                                {
                                                  ATerm j_9 = t;
                                                  int k_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm z_17 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                      t = a_0(t);
                                                      z_17 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, z_17);
                                                      t = a_0(t);
                                                      LocalPopChoice(k_9);
                                                    }
                                                  else
                                                    {
                                                      t = j_9;
                                                      t = c_10;
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
                                                      ATerm r_9 = t;
                                                      int s_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm i_18 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, j_8);
                                                          t = a_0(t);
                                                          i_18 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_18, o_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(s_9);
                                                        }
                                                      else
                                                        {
                                                          t = r_9;
                                                          t = c_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = l_9;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        t = t_8;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            i_8 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm u_9 = t;
                                                              int y_9 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm t_18 = NULL,v_18 = NULL;
                                                                  t = h_8;
                                                                  if((i_8 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, i_8);
                                                                  t = a_0(t);
                                                                  v_18 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, v_18);
                                                                  t = a_0(t);
                                                                  t_18 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_18, o_8);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(y_9);
                                                                }
                                                              else
                                                                {
                                                                  t = u_9;
                                                                  t = c_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = c_10;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            t_8 = ATgetArgument(t, 0);
                                                            g_9 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm z_9 = t;
                                                              int a_10 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm f_19 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                                  t = a_0(t);
                                                                  f_19 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, f_19);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(a_10);
                                                                }
                                                              else
                                                                {
                                                                  t = z_9;
                                                                  t = c_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = c_10;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = t_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_9;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm b_10 = t;
                                            int d_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_6;
                                                t = a_0(t);
                                                LocalPopChoice(d_10);
                                              }
                                            else
                                              {
                                                t = b_10;
                                                t = c_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                g_9 = ATgetArgument(t, 1);
                                                {
                                                  ATerm e_10 = t;
                                                  int f_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm q_19 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                      t = a_0(t);
                                                      q_19 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, q_19);
                                                      t = a_0(t);
                                                      LocalPopChoice(f_10);
                                                    }
                                                  else
                                                    {
                                                      t = e_10;
                                                      t = c_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm t_10 = t;
                                                int u_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm i_11 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(u_10);
                                                    {
                                                      ATerm k_11 = t;
                                                      int l_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm w_19 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, j_8);
                                                          t = a_0(t);
                                                          w_19 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_19, o_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(l_11);
                                                        }
                                                      else
                                                        {
                                                          t = k_11;
                                                          t = c_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = t_10;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        g_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm m_12 = t;
                                                          int n_12 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm d_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                              t = a_0(t);
                                                              d_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, d_20);
                                                              t = a_0(t);
                                                              LocalPopChoice(n_12);
                                                            }
                                                          else
                                                            {
                                                              t = m_12;
                                                              t = c_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = c_10;
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
                                    j_8 = ATgetArgument(t, 0);
                                    a_8 = ATgetArgument(t, 1);
                                    b_8 = ATgetArgument(t, 2);
                                    t = t_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_9;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm b_13 = t;
                                            int c_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_6;
                                                t = a_0(t);
                                                LocalPopChoice(c_13);
                                              }
                                            else
                                              {
                                                t = b_13;
                                                t = c_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                g_9 = ATgetArgument(t, 1);
                                                {
                                                  ATerm d_13 = t;
                                                  int e_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_20 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                      t = a_0(t);
                                                      t_20 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, t_20);
                                                      t = a_0(t);
                                                      LocalPopChoice(e_13);
                                                    }
                                                  else
                                                    {
                                                      t = d_13;
                                                      t = c_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm f_13 = t;
                                                int g_13 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm h_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(g_13);
                                                    {
                                                      ATerm i_13 = t;
                                                      int j_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm c_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, j_8, a_8, b_8);
                                                          t = a_0(t);
                                                          c_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_21, o_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(j_13);
                                                        }
                                                      else
                                                        {
                                                          t = i_13;
                                                          t = c_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = f_13;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        g_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm k_13 = t;
                                                          int l_13 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm j_21 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                              t = a_0(t);
                                                              j_21 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, j_21);
                                                              t = a_0(t);
                                                              LocalPopChoice(l_13);
                                                            }
                                                          else
                                                            {
                                                              t = k_13;
                                                              t = c_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = c_10;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = t_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_9;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm m_13 = t;
                                            int n_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_6;
                                                t = a_0(t);
                                                LocalPopChoice(n_13);
                                              }
                                            else
                                              {
                                                t = m_13;
                                                t = c_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                g_9 = ATgetArgument(t, 1);
                                                {
                                                  ATerm o_13 = t;
                                                  int p_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm r_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                      t = a_0(t);
                                                      r_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, r_22);
                                                      t = a_0(t);
                                                      LocalPopChoice(p_13);
                                                    }
                                                  else
                                                    {
                                                      t = o_13;
                                                      t = c_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    t_8 = ATgetArgument(t, 0);
                                                    g_9 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm q_13 = t;
                                                      int s_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm y_22 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                          t = a_0(t);
                                                          y_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, y_22);
                                                          t = a_0(t);
                                                          LocalPopChoice(s_13);
                                                        }
                                                      else
                                                        {
                                                          t = q_13;
                                                          t = c_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = c_10;
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
                            m_8 = ATgetArgument(t, 0);
                            t = m_8;
                            if(match_cons(t, sym_Op_2))
                              {
                                j_8 = ATgetArgument(t, 0);
                                a_8 = ATgetArgument(t, 1);
                                t = t_9;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = i_9;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm t_13 = t;
                                        int u_13 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_m_6;
                                            t = a_0(t);
                                            LocalPopChoice(u_13);
                                          }
                                        else
                                          {
                                            t = t_13;
                                            t = c_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            t_8 = ATgetArgument(t, 0);
                                            g_9 = ATgetArgument(t, 1);
                                            {
                                              ATerm v_13 = t;
                                              int w_13 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm p_23 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                  t = a_0(t);
                                                  p_23 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, p_23);
                                                  t = a_0(t);
                                                  LocalPopChoice(w_13);
                                                }
                                              else
                                                {
                                                  t = v_13;
                                                  t = c_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                t = t_8;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    i_8 = ATgetArgument(t, 0);
                                                    z_7 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm y_13 = t;
                                                      int z_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, i_8, j_8);
                                                          {
                                                            ATerm a_14 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm t_0 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    t_0 = ATgetArgument(t, 0);
                                                                    if((t_0 != ATgetArgument(t, 1)))
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
                                                                t = a_14;
                                                              }
                                                          }
                                                          t = term_m_6;
                                                          t = bottomup_1_0(a_0, t);
                                                          LocalPopChoice(z_13);
                                                        }
                                                      else
                                                        {
                                                          t = y_13;
                                                          {
                                                            ATerm b_14 = t;
                                                            int c_14 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm w_23 = NULL;
                                                                t = j_8;
                                                                if((i_8 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, z_7, a_8);
                                                                t = genzip_4_0(o_0, p_0, q_0, r_0, t);
                                                                w_23 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_23), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, i_8, z_7)));
                                                                t = bottomup_1_0(a_0, t);
                                                                LocalPopChoice(c_14);
                                                              }
                                                            else
                                                              {
                                                                t = b_14;
                                                                {
                                                                  ATerm d_14 = t;
                                                                  int e_14 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = m_8;
                                                                      if((t_8 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, t_8);
                                                                      t = a_0(t);
                                                                      LocalPopChoice(e_14);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = d_14;
                                                                      t = c_10;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm f_14 = t;
                                                    int g_14 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = m_8;
                                                        if((t_8 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, t_8);
                                                        t = a_0(t);
                                                        LocalPopChoice(g_14);
                                                      }
                                                    else
                                                      {
                                                        t = f_14;
                                                        t = c_10;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    t_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm h_14 = t;
                                                      int i_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = m_8;
                                                          if((t_8 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, t_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(i_14);
                                                        }
                                                      else
                                                        {
                                                          t = h_14;
                                                          t = c_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        g_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_14 = t;
                                                          int k_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_25 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                              t = a_0(t);
                                                              q_25 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, q_25);
                                                              t = a_0(t);
                                                              LocalPopChoice(k_14);
                                                            }
                                                          else
                                                            {
                                                              t = j_14;
                                                              t = c_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = c_10;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = t_9;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = i_9;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm l_14 = t;
                                        int m_14 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_m_6;
                                            t = a_0(t);
                                            LocalPopChoice(m_14);
                                          }
                                        else
                                          {
                                            t = l_14;
                                            t = c_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            t_8 = ATgetArgument(t, 0);
                                            g_9 = ATgetArgument(t, 1);
                                            {
                                              ATerm n_14 = t;
                                              int o_14 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm l_27 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                  t = a_0(t);
                                                  l_27 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, l_27);
                                                  t = a_0(t);
                                                  LocalPopChoice(o_14);
                                                }
                                              else
                                                {
                                                  t = n_14;
                                                  t = c_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                {
                                                  ATerm p_14 = t;
                                                  int q_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = m_8;
                                                      if((t_8 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, t_8);
                                                      t = a_0(t);
                                                      LocalPopChoice(q_14);
                                                    }
                                                  else
                                                    {
                                                      t = p_14;
                                                      t = c_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    t_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm r_14 = t;
                                                      int u_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = m_8;
                                                          if((t_8 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, t_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(u_14);
                                                        }
                                                      else
                                                        {
                                                          t = r_14;
                                                          t = c_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        g_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm v_14 = t;
                                                          int x_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm w_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                              t = a_0(t);
                                                              w_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, w_27);
                                                              t = a_0(t);
                                                              LocalPopChoice(x_14);
                                                            }
                                                          else
                                                            {
                                                              t = v_14;
                                                              t = c_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = c_10;
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
                                m_8 = ATgetArgument(t, 0);
                                t = m_8;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    j_8 = ATgetArgument(t, 0);
                                    t = t_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_9;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm y_14 = t;
                                            int z_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_6;
                                                t = a_0(t);
                                                LocalPopChoice(z_14);
                                              }
                                            else
                                              {
                                                t = y_14;
                                                t = c_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                g_9 = ATgetArgument(t, 1);
                                                {
                                                  ATerm a_15 = t;
                                                  int b_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm r_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                      t = a_0(t);
                                                      r_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, r_28);
                                                      t = a_0(t);
                                                      LocalPopChoice(b_15);
                                                    }
                                                  else
                                                    {
                                                      t = a_15;
                                                      t = c_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm f_15 = t;
                                                int n_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm o_15 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(n_15);
                                                    {
                                                      ATerm q_15 = t;
                                                      int s_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(s_15);
                                                        }
                                                      else
                                                        {
                                                          t = q_15;
                                                          t = c_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = f_15;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        t = t_8;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            i_8 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm v_15 = t;
                                                              int w_15 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm w_28 = NULL;
                                                                  t = j_8;
                                                                  if((i_8 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, i_8);
                                                                  t = a_0(t);
                                                                  w_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, w_28);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(w_15);
                                                                }
                                                              else
                                                                {
                                                                  t = v_15;
                                                                  t = c_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = c_10;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            t_8 = ATgetArgument(t, 0);
                                                            g_9 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm x_15 = t;
                                                              int y_15 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_29 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                                  t = a_0(t);
                                                                  y_29 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, y_29);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(y_15);
                                                                }
                                                              else
                                                                {
                                                                  t = x_15;
                                                                  t = c_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = c_10;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = t_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_9;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm a_16 = t;
                                            int b_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_6;
                                                t = a_0(t);
                                                LocalPopChoice(b_16);
                                              }
                                            else
                                              {
                                                t = a_16;
                                                t = c_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                g_9 = ATgetArgument(t, 1);
                                                {
                                                  ATerm c_16 = t;
                                                  int e_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm n_30 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                      t = a_0(t);
                                                      n_30 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, n_30);
                                                      t = a_0(t);
                                                      LocalPopChoice(e_16);
                                                    }
                                                  else
                                                    {
                                                      t = c_16;
                                                      t = c_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm f_16 = t;
                                                int h_16 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm i_16 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(h_16);
                                                    {
                                                      ATerm j_16 = t;
                                                      int l_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(l_16);
                                                        }
                                                      else
                                                        {
                                                          t = j_16;
                                                          t = c_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = f_16;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        g_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm m_16 = t;
                                                          int o_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm w_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                              t = a_0(t);
                                                              w_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, w_30);
                                                              t = a_0(t);
                                                              LocalPopChoice(o_16);
                                                            }
                                                          else
                                                            {
                                                              t = m_16;
                                                              t = c_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = c_10;
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
                                    m_8 = ATgetArgument(t, 0);
                                    o_8 = ATgetArgument(t, 1);
                                    g_8 = ATgetArgument(t, 2);
                                    t = t_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_9;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm q_16 = t;
                                            int t_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_6;
                                                t = a_0(t);
                                                LocalPopChoice(t_16);
                                              }
                                            else
                                              {
                                                t = q_16;
                                                t = c_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                g_9 = ATgetArgument(t, 1);
                                                {
                                                  ATerm u_16 = t;
                                                  int v_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm r_31 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                      t = a_0(t);
                                                      r_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, r_31);
                                                      t = a_0(t);
                                                      LocalPopChoice(v_16);
                                                    }
                                                  else
                                                    {
                                                      t = u_16;
                                                      t = c_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm w_16 = t;
                                                int x_16 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm y_16 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(x_16);
                                                    {
                                                      ATerm a_17 = t;
                                                      int b_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, m_8, o_8, g_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(b_17);
                                                        }
                                                      else
                                                        {
                                                          t = a_17;
                                                          t = c_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = w_16;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        g_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm e_17 = t;
                                                          int g_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                              t = a_0(t);
                                                              h_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, h_32);
                                                              t = a_0(t);
                                                              LocalPopChoice(g_17);
                                                            }
                                                          else
                                                            {
                                                              t = e_17;
                                                              t = c_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = c_10;
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
                                        m_8 = ATgetArgument(t, 0);
                                        o_8 = ATgetArgument(t, 1);
                                        t = t_9;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = i_9;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm h_17 = t;
                                                int j_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_m_6;
                                                    t = a_0(t);
                                                    LocalPopChoice(j_17);
                                                  }
                                                else
                                                  {
                                                    t = h_17;
                                                    {
                                                      ATerm k_17 = t;
                                                      int m_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm m_33 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_9, o_8);
                                                          t = a_0(t);
                                                          m_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, m_8, m_33);
                                                          t = a_0(t);
                                                          LocalPopChoice(m_17);
                                                        }
                                                      else
                                                        {
                                                          t = k_17;
                                                          t = c_10;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    t_8 = ATgetArgument(t, 0);
                                                    g_9 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm n_17 = t;
                                                      int o_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm t_33 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                          t = a_0(t);
                                                          t_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, t_33);
                                                          t = a_0(t);
                                                          LocalPopChoice(o_17);
                                                        }
                                                      else
                                                        {
                                                          t = n_17;
                                                          {
                                                            ATerm p_17 = t;
                                                            int r_17 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm z_33 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, t_9, o_8);
                                                                t = a_0(t);
                                                                z_33 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, m_8, z_33);
                                                                t = a_0(t);
                                                                LocalPopChoice(r_17);
                                                              }
                                                            else
                                                              {
                                                                t = p_17;
                                                                t = c_10;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        g_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_17 = t;
                                                          int t_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_9, o_8);
                                                              t = a_0(t);
                                                              h_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, m_8, h_34);
                                                              t = a_0(t);
                                                              LocalPopChoice(t_17);
                                                            }
                                                          else
                                                            {
                                                              t = s_17;
                                                              {
                                                                ATerm u_17 = t;
                                                                int v_17 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm v_34 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                                    t = a_0(t);
                                                                    v_34 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, v_34);
                                                                    t = a_0(t);
                                                                    LocalPopChoice(v_17);
                                                                  }
                                                                else
                                                                  {
                                                                    t = u_17;
                                                                    t = c_10;
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
                                                            ATerm h_35 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, t_9, o_8);
                                                            t = a_0(t);
                                                            h_35 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, m_8, h_35);
                                                            t = a_0(t);
                                                            LocalPopChoice(x_17);
                                                          }
                                                        else
                                                          {
                                                            t = w_17;
                                                            t = c_10;
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
                                            m_8 = ATgetArgument(t, 0);
                                            o_8 = ATgetArgument(t, 1);
                                            t = t_9;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = i_9;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm y_17 = t;
                                                    int a_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_m_6;
                                                        t = a_0(t);
                                                        LocalPopChoice(a_18);
                                                      }
                                                    else
                                                      {
                                                        t = y_17;
                                                        {
                                                          ATerm b_18 = t;
                                                          int c_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_35 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_9, o_8);
                                                              t = a_0(t);
                                                              z_35 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_8, z_35);
                                                              t = a_0(t);
                                                              LocalPopChoice(c_18);
                                                            }
                                                          else
                                                            {
                                                              t = b_18;
                                                              t = c_10;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        g_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm d_18 = t;
                                                          int e_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_36 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                              t = a_0(t);
                                                              h_36 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, h_36);
                                                              t = a_0(t);
                                                              LocalPopChoice(e_18);
                                                            }
                                                          else
                                                            {
                                                              t = d_18;
                                                              {
                                                                ATerm f_18 = t;
                                                                int g_18 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm p_36 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, t_9, o_8);
                                                                    t = a_0(t);
                                                                    p_36 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, m_8, p_36);
                                                                    t = a_0(t);
                                                                    LocalPopChoice(g_18);
                                                                  }
                                                                else
                                                                  {
                                                                    t = f_18;
                                                                    t = c_10;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            t_8 = ATgetArgument(t, 0);
                                                            g_9 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm h_18 = t;
                                                              int j_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm b_37 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_9, o_8);
                                                                  t = a_0(t);
                                                                  b_37 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, m_8, b_37);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(j_18);
                                                                }
                                                              else
                                                                {
                                                                  t = h_18;
                                                                  {
                                                                    ATerm k_18 = t;
                                                                    int l_18 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm k_37 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                                        t = a_0(t);
                                                                        k_37 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, k_37);
                                                                        t = a_0(t);
                                                                        LocalPopChoice(l_18);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = k_18;
                                                                        t = c_10;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm m_18 = t;
                                                            int n_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm q_37 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, t_9, o_8);
                                                                t = a_0(t);
                                                                q_37 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, m_8, q_37);
                                                                t = a_0(t);
                                                                LocalPopChoice(n_18);
                                                              }
                                                            else
                                                              {
                                                                t = m_18;
                                                                t = c_10;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = t_9;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = i_9;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm o_18 = t;
                                                    int p_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_m_6;
                                                        t = a_0(t);
                                                        LocalPopChoice(p_18);
                                                      }
                                                    else
                                                      {
                                                        t = o_18;
                                                        t = c_10;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        g_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm q_18 = t;
                                                          int r_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_38 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                              t = a_0(t);
                                                              a_38 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, a_38);
                                                              t = a_0(t);
                                                              LocalPopChoice(r_18);
                                                            }
                                                          else
                                                            {
                                                              t = q_18;
                                                              t = c_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            t_8 = ATgetArgument(t, 0);
                                                            g_9 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm s_18 = t;
                                                              int u_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm m_38 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9);
                                                                  t = a_0(t);
                                                                  m_38 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, m_38);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(u_18);
                                                                }
                                                              else
                                                                {
                                                                  t = s_18;
                                                                  t = c_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = c_10;
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
                    t_9 = ATgetArgument(t, 0);
                    i_9 = ATgetArgument(t, 1);
                    t = i_9;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = t_9;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm w_18 = t;
                            int x_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_e_6;
                                t = a_0(t);
                                LocalPopChoice(x_18);
                              }
                            else
                              {
                                t = w_18;
                                t = t_9;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = i_9;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    t_8 = ATgetArgument(t, 0);
                                    g_9 = ATgetArgument(t, 1);
                                    t = t_9;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        t_8 = ATgetArgument(t, 0);
                                        t = t_9;
                                      }
                                    else
                                      {
                                        t = t_9;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = t_9;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm y_18 = t;
                            int z_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_e_6;
                                t = a_0(t);
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
                                      t = i_9;
                                      if((t_9 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(b_19);
                                    }
                                  else
                                    {
                                      t = a_19;
                                      t = c_10;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = i_9;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    t_8 = ATgetArgument(t, 0);
                                    g_9 = ATgetArgument(t, 1);
                                    {
                                      ATerm c_19 = t;
                                      int d_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm n_41 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, g_9, i_9);
                                          t = a_0(t);
                                          n_41 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, t_8, n_41);
                                          t = a_0(t);
                                          LocalPopChoice(d_19);
                                        }
                                      else
                                        {
                                          t = c_19;
                                          {
                                            ATerm e_19 = t;
                                            int g_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = i_9;
                                                if((t_9 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(g_19);
                                              }
                                            else
                                              {
                                                t = e_19;
                                                t = c_10;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        t_8 = ATgetArgument(t, 0);
                                        {
                                          ATerm h_19 = t;
                                          int i_19 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = i_9;
                                              if((t_9 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(i_19);
                                            }
                                          else
                                            {
                                              t = h_19;
                                              {
                                                ATerm j_19 = t;
                                                int k_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = t_8;
                                                    t = topdown_1_0(s_0, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, t_8);
                                                    t = bottomup_1_0(a_0, t);
                                                    LocalPopChoice(k_19);
                                                  }
                                                else
                                                  {
                                                    t = j_19;
                                                    t = c_10;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm l_19 = t;
                                        int m_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = i_9;
                                            if((t_9 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(m_19);
                                          }
                                        else
                                          {
                                            t = l_19;
                                            t = c_10;
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
                        t_9 = ATgetArgument(t, 0);
                        i_9 = ATgetArgument(t, 1);
                        t = i_9;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = t_9;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm n_19 = t;
                                int o_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_e_6;
                                    t = a_0(t);
                                    LocalPopChoice(o_19);
                                  }
                                else
                                  {
                                    t = n_19;
                                    t = i_9;
                                  }
                              }
                            else
                              {
                                ATerm p_19 = t;
                                int r_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_e_6;
                                    t = a_0(t);
                                    LocalPopChoice(r_19);
                                  }
                                else
                                  {
                                    t = p_19;
                                    t = c_10;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = t_9;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm s_19 = t;
                                    int t_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_m_6;
                                        t = a_0(t);
                                        LocalPopChoice(t_19);
                                      }
                                    else
                                      {
                                        t = s_19;
                                        t = i_9;
                                      }
                                  }
                                else
                                  {
                                    ATerm u_19 = t;
                                    int v_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_m_6;
                                        t = a_0(t);
                                        LocalPopChoice(v_19);
                                      }
                                    else
                                      {
                                        t = u_19;
                                        t = c_10;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    m_8 = ATgetArgument(t, 0);
                                    o_8 = ATgetArgument(t, 1);
                                    t = t_9;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = i_9;
                                      }
                                    else
                                      {
                                        ATerm x_19 = t;
                                        int y_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm m_43 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, t_9, m_8);
                                            t = conc_0_0(t);
                                            m_43 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, m_43, o_8);
                                            t = bottomup_1_0(a_0, t);
                                            LocalPopChoice(y_19);
                                          }
                                        else
                                          {
                                            t = x_19;
                                            t = c_10;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = t_9;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = i_9;
                                      }
                                    else
                                      {
                                        t = c_10;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm z_19 = t;
                        int a_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm b_20 = ATgetArgument(t, 0);
                                i_9 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(a_20);
                            t = i_9;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm c_20 = t;
                                int e_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_e_6;
                                    t = a_0(t);
                                    LocalPopChoice(e_20);
                                  }
                                else
                                  {
                                    t = c_20;
                                    t = c_10;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm f_20 = t;
                                    int g_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_m_6;
                                        t = a_0(t);
                                        LocalPopChoice(g_20);
                                      }
                                    else
                                      {
                                        t = f_20;
                                        t = c_10;
                                      }
                                  }
                                else
                                  {
                                    t = c_10;
                                  }
                              }
                          }
                        else
                          {
                            t = z_19;
                            if(match_cons(t, sym_All_1))
                              {
                                t_9 = ATgetArgument(t, 0);
                                t = t_9;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm h_20 = t;
                                    int i_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_e_6;
                                        t = a_0(t);
                                        LocalPopChoice(i_20);
                                      }
                                    else
                                      {
                                        t = h_20;
                                        t = c_10;
                                      }
                                  }
                                else
                                  {
                                    t = c_10;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    t_9 = ATgetArgument(t, 0);
                                    t = t_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm j_20 = t;
                                        int k_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_e_6;
                                            t = a_0(t);
                                            LocalPopChoice(k_20);
                                          }
                                        else
                                          {
                                            t = j_20;
                                            {
                                              ATerm l_20 = t;
                                              int m_20 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL;
                                                  t = c_10;
                                                  t = new_0_0(t);
                                                  d_44 = t;
                                                  t = bottomup_1_0(a_0, t);
                                                  o_44 = t;
                                                  t = (ATerm) ATempty;
                                                  t = a_0(t);
                                                  p_44 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(p_44), o_44);
                                                  t = a_0(t);
                                                  e_44 = t;
                                                  t = d_44;
                                                  t = bottomup_1_0(a_0, t);
                                                  n_44 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, n_44);
                                                  t = a_0(t);
                                                  m_44 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, m_44);
                                                  t = a_0(t);
                                                  g_44 = t;
                                                  t = t_9;
                                                  t = bottomup_1_0(a_0, t);
                                                  i_44 = t;
                                                  t = d_44;
                                                  t = bottomup_1_0(a_0, t);
                                                  l_44 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, l_44);
                                                  t = a_0(t);
                                                  k_44 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, k_44);
                                                  t = a_0(t);
                                                  j_44 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_44, j_44);
                                                  t = a_0(t);
                                                  h_44 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_44, h_44);
                                                  t = a_0(t);
                                                  f_44 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, e_44, f_44);
                                                  t = a_0(t);
                                                  LocalPopChoice(m_20);
                                                }
                                              else
                                                {
                                                  t = l_20;
                                                  t = c_10;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm n_20 = t;
                                            int o_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_6;
                                                t = a_0(t);
                                                LocalPopChoice(o_20);
                                              }
                                            else
                                              {
                                                t = n_20;
                                                {
                                                  ATerm p_20 = t;
                                                  int q_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL;
                                                      t = c_10;
                                                      t = new_0_0(t);
                                                      s_44 = t;
                                                      t = bottomup_1_0(a_0, t);
                                                      d_45 = t;
                                                      t = (ATerm) ATempty;
                                                      t = a_0(t);
                                                      e_45 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(e_45), d_45);
                                                      t = a_0(t);
                                                      t_44 = t;
                                                      t = s_44;
                                                      t = bottomup_1_0(a_0, t);
                                                      c_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, c_45);
                                                      t = a_0(t);
                                                      b_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, b_45);
                                                      t = a_0(t);
                                                      v_44 = t;
                                                      t = t_9;
                                                      t = bottomup_1_0(a_0, t);
                                                      x_44 = t;
                                                      t = s_44;
                                                      t = bottomup_1_0(a_0, t);
                                                      a_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, a_45);
                                                      t = a_0(t);
                                                      z_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, z_44);
                                                      t = a_0(t);
                                                      y_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_44, y_44);
                                                      t = a_0(t);
                                                      w_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_44, w_44);
                                                      t = a_0(t);
                                                      u_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, t_44, u_44);
                                                      t = a_0(t);
                                                      LocalPopChoice(q_20);
                                                    }
                                                  else
                                                    {
                                                      t = p_20;
                                                      t = c_10;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                g_9 = ATgetArgument(t, 1);
                                                t = g_9;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    k_7 = ATgetArgument(t, 0);
                                                    o_7 = ATgetArgument(t, 1);
                                                    t = k_7;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        l_7 = ATgetArgument(t, 0);
                                                        t = t_8;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            i_8 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm r_20 = t;
                                                              int s_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, l_7);
                                                                  t = a_0(t);
                                                                  l_45 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, l_45, o_7);
                                                                  t = a_0(t);
                                                                  k_45 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, k_45);
                                                                  t = a_0(t);
                                                                  j_45 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, j_45);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(s_20);
                                                                }
                                                              else
                                                                {
                                                                  t = r_20;
                                                                  {
                                                                    ATerm u_20 = t;
                                                                    int v_20 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL;
                                                                        t = c_10;
                                                                        t = new_0_0(t);
                                                                        n_45 = t;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        y_45 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = a_0(t);
                                                                        z_45 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(z_45), y_45);
                                                                        t = a_0(t);
                                                                        o_45 = t;
                                                                        t = n_45;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        x_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, x_45);
                                                                        t = a_0(t);
                                                                        w_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, w_45);
                                                                        t = a_0(t);
                                                                        q_45 = t;
                                                                        t = t_9;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        s_45 = t;
                                                                        t = n_45;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        v_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, v_45);
                                                                        t = a_0(t);
                                                                        u_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, u_45);
                                                                        t = a_0(t);
                                                                        t_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, s_45, t_45);
                                                                        t = a_0(t);
                                                                        r_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, q_45, r_45);
                                                                        t = a_0(t);
                                                                        p_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, o_45, p_45);
                                                                        t = a_0(t);
                                                                        LocalPopChoice(v_20);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = u_20;
                                                                        t = c_10;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm w_20 = t;
                                                            int x_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL;
                                                                t = c_10;
                                                                t = new_0_0(t);
                                                                d_46 = t;
                                                                t = bottomup_1_0(a_0, t);
                                                                o_46 = t;
                                                                t = (ATerm) ATempty;
                                                                t = a_0(t);
                                                                p_46 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(p_46), o_46);
                                                                t = a_0(t);
                                                                e_46 = t;
                                                                t = d_46;
                                                                t = bottomup_1_0(a_0, t);
                                                                n_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, n_46);
                                                                t = a_0(t);
                                                                m_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, m_46);
                                                                t = a_0(t);
                                                                g_46 = t;
                                                                t = t_9;
                                                                t = bottomup_1_0(a_0, t);
                                                                i_46 = t;
                                                                t = d_46;
                                                                t = bottomup_1_0(a_0, t);
                                                                l_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, l_46);
                                                                t = a_0(t);
                                                                k_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, k_46);
                                                                t = a_0(t);
                                                                j_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_46, j_46);
                                                                t = a_0(t);
                                                                h_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, g_46, h_46);
                                                                t = a_0(t);
                                                                f_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, e_46, f_46);
                                                                t = a_0(t);
                                                                LocalPopChoice(x_20);
                                                              }
                                                            else
                                                              {
                                                                t = w_20;
                                                                t = c_10;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = t_8;
                                                        {
                                                          ATerm y_20 = t;
                                                          int z_20 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL;
                                                              t = c_10;
                                                              t = new_0_0(t);
                                                              s_46 = t;
                                                              t = bottomup_1_0(a_0, t);
                                                              d_47 = t;
                                                              t = (ATerm) ATempty;
                                                              t = a_0(t);
                                                              e_47 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(e_47), d_47);
                                                              t = a_0(t);
                                                              t_46 = t;
                                                              t = s_46;
                                                              t = bottomup_1_0(a_0, t);
                                                              c_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, c_47);
                                                              t = a_0(t);
                                                              b_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, b_47);
                                                              t = a_0(t);
                                                              v_46 = t;
                                                              t = t_9;
                                                              t = bottomup_1_0(a_0, t);
                                                              x_46 = t;
                                                              t = s_46;
                                                              t = bottomup_1_0(a_0, t);
                                                              a_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, a_47);
                                                              t = a_0(t);
                                                              z_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, z_46);
                                                              t = a_0(t);
                                                              y_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_46, y_46);
                                                              t = a_0(t);
                                                              w_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_46, w_46);
                                                              t = a_0(t);
                                                              u_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_46, u_46);
                                                              t = a_0(t);
                                                              LocalPopChoice(z_20);
                                                            }
                                                          else
                                                            {
                                                              t = y_20;
                                                              t = c_10;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = t_8;
                                                    {
                                                      ATerm a_21 = t;
                                                      int b_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL;
                                                          t = c_10;
                                                          t = new_0_0(t);
                                                          i_47 = t;
                                                          t = bottomup_1_0(a_0, t);
                                                          v_47 = t;
                                                          t = (ATerm) ATempty;
                                                          t = a_0(t);
                                                          w_47 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(w_47), v_47);
                                                          t = a_0(t);
                                                          j_47 = t;
                                                          t = i_47;
                                                          t = bottomup_1_0(a_0, t);
                                                          u_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, u_47);
                                                          t = a_0(t);
                                                          t_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, t_47);
                                                          t = a_0(t);
                                                          l_47 = t;
                                                          t = t_9;
                                                          t = bottomup_1_0(a_0, t);
                                                          n_47 = t;
                                                          t = i_47;
                                                          t = bottomup_1_0(a_0, t);
                                                          s_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, s_47);
                                                          t = a_0(t);
                                                          p_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, p_47);
                                                          t = a_0(t);
                                                          o_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_47, o_47);
                                                          t = a_0(t);
                                                          m_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, l_47, m_47);
                                                          t = a_0(t);
                                                          k_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, j_47, k_47);
                                                          t = a_0(t);
                                                          LocalPopChoice(b_21);
                                                        }
                                                      else
                                                        {
                                                          t = a_21;
                                                          t = c_10;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    t_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm d_21 = t;
                                                      int e_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, t_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(e_21);
                                                        }
                                                      else
                                                        {
                                                          t = d_21;
                                                          {
                                                            ATerm f_21 = t;
                                                            int g_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL;
                                                                t = c_10;
                                                                t = new_0_0(t);
                                                                a_48 = t;
                                                                t = bottomup_1_0(a_0, t);
                                                                l_48 = t;
                                                                t = (ATerm) ATempty;
                                                                t = a_0(t);
                                                                m_48 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(m_48), l_48);
                                                                t = a_0(t);
                                                                b_48 = t;
                                                                t = a_48;
                                                                t = bottomup_1_0(a_0, t);
                                                                k_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, k_48);
                                                                t = a_0(t);
                                                                j_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, j_48);
                                                                t = a_0(t);
                                                                d_48 = t;
                                                                t = t_9;
                                                                t = bottomup_1_0(a_0, t);
                                                                f_48 = t;
                                                                t = a_48;
                                                                t = bottomup_1_0(a_0, t);
                                                                i_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, i_48);
                                                                t = a_0(t);
                                                                h_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, h_48);
                                                                t = a_0(t);
                                                                g_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, f_48, g_48);
                                                                t = a_0(t);
                                                                e_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, d_48, e_48);
                                                                t = a_0(t);
                                                                c_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, b_48, c_48);
                                                                t = a_0(t);
                                                                LocalPopChoice(g_21);
                                                              }
                                                            else
                                                              {
                                                                t = f_21;
                                                                t = c_10;
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
                                                        ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL,u_48 = NULL,z_48 = NULL,a_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL;
                                                        t = c_10;
                                                        t = new_0_0(t);
                                                        p_48 = t;
                                                        t = bottomup_1_0(a_0, t);
                                                        i_49 = t;
                                                        t = (ATerm) ATempty;
                                                        t = a_0(t);
                                                        j_49 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(j_49), i_49);
                                                        t = a_0(t);
                                                        q_48 = t;
                                                        t = p_48;
                                                        t = bottomup_1_0(a_0, t);
                                                        h_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, h_49);
                                                        t = a_0(t);
                                                        g_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, g_49);
                                                        t = a_0(t);
                                                        u_48 = t;
                                                        t = t_9;
                                                        t = bottomup_1_0(a_0, t);
                                                        a_49 = t;
                                                        t = p_48;
                                                        t = bottomup_1_0(a_0, t);
                                                        f_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, f_49);
                                                        t = a_0(t);
                                                        e_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, e_49);
                                                        t = a_0(t);
                                                        d_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, a_49, d_49);
                                                        t = a_0(t);
                                                        z_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, u_48, z_48);
                                                        t = a_0(t);
                                                        r_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, q_48, r_48);
                                                        t = a_0(t);
                                                        LocalPopChoice(i_21);
                                                      }
                                                    else
                                                      {
                                                        t = h_21;
                                                        t = c_10;
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
                                        t_9 = ATgetArgument(t, 0);
                                        t = t_9;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm k_21 = t;
                                            int l_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_6;
                                                t = a_0(t);
                                                LocalPopChoice(l_21);
                                              }
                                            else
                                              {
                                                t = k_21;
                                                t = c_10;
                                              }
                                          }
                                        else
                                          {
                                            t = c_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            t_9 = ATgetArgument(t, 0);
                                            t = t_9;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm m_21 = t;
                                                int n_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_m_6;
                                                    t = a_0(t);
                                                    LocalPopChoice(n_21);
                                                  }
                                                else
                                                  {
                                                    t = m_21;
                                                    t = c_10;
                                                  }
                                              }
                                            else
                                              {
                                                t = c_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                t_9 = ATgetArgument(t, 0);
                                                t = t_9;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm o_21 = t;
                                                    int p_21 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_m_6;
                                                        t = a_0(t);
                                                        LocalPopChoice(p_21);
                                                      }
                                                    else
                                                      {
                                                        t = o_21;
                                                        t = c_10;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = c_10;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm q_21 = t;
                                                int r_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm s_21 = ATgetArgument(t, 0);
                                                        i_9 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(r_21);
                                                    t = i_9;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm t_21 = t;
                                                        int u_21 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_m_6;
                                                            t = a_0(t);
                                                            LocalPopChoice(u_21);
                                                          }
                                                        else
                                                          {
                                                            t = t_21;
                                                            t = c_10;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = c_10;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = q_21;
                                                    {
                                                      ATerm v_21 = t;
                                                      int w_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm x_21 = ATgetArgument(t, 0);
                                                              i_9 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(w_21);
                                                          {
                                                            ATerm y_21 = t;
                                                            int z_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = i_9;
                                                                t = fetch_1_0(u_0, t);
                                                                t = term_m_6;
                                                                t = bottomup_1_0(a_0, t);
                                                                LocalPopChoice(z_21);
                                                              }
                                                            else
                                                              {
                                                                t = y_21;
                                                                t = c_10;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = v_21;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              t_9 = ATgetArgument(t, 0);
                                                              i_9 = ATgetArgument(t, 1);
                                                              t = i_9;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = t_9;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = i_9;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          t_8 = ATgetArgument(t, 0);
                                                                          g_9 = ATgetArgument(t, 1);
                                                                          t = t_9;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = t_9;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = t_9;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = i_9;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          t_8 = ATgetArgument(t, 0);
                                                                          g_9 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm a_22 = t;
                                                                            int b_22 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm s_50 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, g_9, i_9);
                                                                                t = a_0(t);
                                                                                s_50 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, t_8, s_50);
                                                                                t = a_0(t);
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
                                                                                      t = i_9;
                                                                                      if((t_9 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(d_22);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = c_22;
                                                                                      t = c_10;
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
                                                                              t = i_9;
                                                                              if((t_9 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(f_22);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = e_22;
                                                                              t = c_10;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  t_9 = ATgetArgument(t, 0);
                                                                  i_9 = ATgetArgument(t, 1);
                                                                  j_7 = ATgetArgument(t, 2);
                                                                  t = j_7;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm g_22 = t;
                                                                      int h_22 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_9, i_9);
                                                                          t = a_0(t);
                                                                          LocalPopChoice(h_22);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = g_22;
                                                                          t = c_10;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = c_10;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      t_9 = ATgetArgument(t, 0);
                                                                      i_9 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm i_22 = t;
                                                                        int j_22 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, t_9, i_9);
                                                                            t = a_0(t);
                                                                            LocalPopChoice(j_22);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = i_22;
                                                                            t = c_10;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          t_9 = ATgetArgument(t, 0);
                                                                          t = t_9;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              t_8 = ATgetFirst((ATermList) t);
                                                                              g_9 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm k_22 = t;
                                                                                int l_22 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm g_51 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, g_9);
                                                                                    t = a_0(t);
                                                                                    g_51 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, t_8, g_51);
                                                                                    t = a_0(t);
                                                                                    LocalPopChoice(l_22);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = k_22;
                                                                                    t = c_10;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm m_22 = t;
                                                                                  int n_22 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_m_6;
                                                                                      t = a_0(t);
                                                                                      LocalPopChoice(n_22);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = m_22;
                                                                                      t = c_10;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = c_10;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              t_9 = ATgetArgument(t, 0);
                                                                              t = t_9;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  t_8 = ATgetFirst((ATermList) t);
                                                                                  g_9 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm o_22 = t;
                                                                                    int p_22 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm n_51 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, g_9);
                                                                                        t = a_0(t);
                                                                                        n_51 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, t_8, n_51);
                                                                                        t = a_0(t);
                                                                                        LocalPopChoice(p_22);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = o_22;
                                                                                        t = c_10;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm q_22 = t;
                                                                                      int s_22 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_m_6;
                                                                                          t = a_0(t);
                                                                                          LocalPopChoice(s_22);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = q_22;
                                                                                          t = c_10;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = c_10;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  t_9 = ATgetArgument(t, 0);
                                                                                  t = t_9;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      t_8 = ATgetFirst((ATermList) t);
                                                                                      g_9 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm t_22 = t;
                                                                                        int u_22 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm t_51 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, g_9);
                                                                                            t = a_0(t);
                                                                                            t_51 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, t_51);
                                                                                            t = a_0(t);
                                                                                            LocalPopChoice(u_22);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = t_22;
                                                                                            t = c_10;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm v_22 = t;
                                                                                          int w_22 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_e_6;
                                                                                              t = a_0(t);
                                                                                              LocalPopChoice(w_22);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = v_22;
                                                                                              t = c_10;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = c_10;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      t_9 = ATgetArgument(t, 0);
                                                                                      i_9 = ATgetArgument(t, 1);
                                                                                      j_7 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm x_22 = t;
                                                                                        int z_22 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL;
                                                                                            t = term_a_23;
                                                                                            t = bottomup_1_0(a_0, t);
                                                                                            c_52 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = a_0(t);
                                                                                            f_52 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(f_52), j_7);
                                                                                            t = a_0(t);
                                                                                            e_52 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(e_52), t_9);
                                                                                            t = a_0(t);
                                                                                            d_52 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, c_52, d_52);
                                                                                            t = a_0(t);
                                                                                            b_52 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, i_9, b_52);
                                                                                            t = a_0(t);
                                                                                            LocalPopChoice(z_22);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = x_22;
                                                                                            t = c_10;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          t_9 = ATgetArgument(t, 0);
                                                                                          i_9 = ATgetArgument(t, 1);
                                                                                          j_7 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm b_23 = t;
                                                                                            int c_23 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, i_9);
                                                                                                t = a_0(t);
                                                                                                l_52 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, j_7);
                                                                                                t = a_0(t);
                                                                                                o_52 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = a_0(t);
                                                                                                p_52 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(p_52), o_52);
                                                                                                t = a_0(t);
                                                                                                n_52 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(n_52), t_9);
                                                                                                t = a_0(t);
                                                                                                m_52 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(m_52), l_52);
                                                                                                t = a_0(t);
                                                                                                k_52 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, k_52);
                                                                                                t = a_0(t);
                                                                                                LocalPopChoice(c_23);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = b_23;
                                                                                                t = c_10;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              t_9 = ATgetArgument(t, 0);
                                                                                              i_9 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm d_23 = t;
                                                                                                int e_23 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm w_52 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, i_9);
                                                                                                    t = a_0(t);
                                                                                                    w_52 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, t_9, w_52);
                                                                                                    t = a_0(t);
                                                                                                    LocalPopChoice(e_23);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = d_23;
                                                                                                    t = c_10;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  t_9 = ATgetArgument(t, 0);
                                                                                                  i_9 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm f_23 = t;
                                                                                                    int g_23 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm a_53 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, t_9);
                                                                                                        t = a_0(t);
                                                                                                        a_53 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, a_53, i_9);
                                                                                                        t = a_0(t);
                                                                                                        LocalPopChoice(g_23);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = f_23;
                                                                                                        t = c_10;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      t_9 = ATgetArgument(t, 0);
                                                                                                      i_9 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm h_23 = t;
                                                                                                        int i_23 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm f_53 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, i_9);
                                                                                                            t = a_0(t);
                                                                                                            f_53 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, f_53, t_9);
                                                                                                            t = a_0(t);
                                                                                                            LocalPopChoice(i_23);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = h_23;
                                                                                                            t = c_10;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          t_9 = ATgetArgument(t, 0);
                                                                                                          i_9 = ATgetArgument(t, 1);
                                                                                                          t = i_9;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              m_8 = ATgetArgument(t, 0);
                                                                                                              o_8 = ATgetArgument(t, 1);
                                                                                                              t = t_9;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = i_9;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm j_23 = t;
                                                                                                                  int k_23 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm q_53 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, t_9, m_8);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      q_53 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, q_53, o_8);
                                                                                                                      t = bottomup_1_0(a_0, t);
                                                                                                                      LocalPopChoice(k_23);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = j_23;
                                                                                                                      t = c_10;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  m_8 = ATgetArgument(t, 0);
                                                                                                                  o_8 = ATgetArgument(t, 1);
                                                                                                                  g_8 = ATgetArgument(t, 2);
                                                                                                                  t = g_8;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = o_8;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = m_8;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              j_8 = ATgetArgument(t, 0);
                                                                                                                              t = t_9;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = i_9;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      t_8 = ATgetFirst((ATermList) t);
                                                                                                                                      g_9 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = g_9;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = t_8;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              i_8 = ATgetArgument(t, 0);
                                                                                                                                              z_7 = ATgetArgument(t, 1);
                                                                                                                                              p_7 = ATgetArgument(t, 2);
                                                                                                                                              q_7 = ATgetArgument(t, 3);
                                                                                                                                              t = p_7;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = z_7;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm l_23 = t;
                                                                                                                                                      int m_23 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = j_8;
                                                                                                                                                          if((i_8 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = q_7;
                                                                                                                                                          {
                                                                                                                                                            ATerm n_23 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm v_0 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm o_23 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(o_23, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((i_8 != ATgetArgument(o_23, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(o_23, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm q_23 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(q_23) != AT_LIST) || !(ATisEmpty(q_23))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm r_23 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(r_23) != AT_LIST) || !(ATisEmpty(r_23))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  return(t);
                                                                                                                                                                }
                                                                                                                                                                t = oncetd_1_0(v_0, t);
                                                                                                                                                                PopChoice();
                                                                                                                                                                _fail(t);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                t = n_23;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = q_7;
                                                                                                                                                          t = bottomup_1_0(a_0, t);
                                                                                                                                                          LocalPopChoice(m_23);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = l_23;
                                                                                                                                                          t = c_10;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = c_10;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = c_10;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = c_10;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = c_10;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = c_10;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = t_9;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = i_9;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = c_10;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = t_9;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = i_9;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = c_10;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = t_9;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = i_9;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = c_10;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = t_9;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = i_9;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = c_10;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              t_9 = ATgetArgument(t, 0);
                                                                                                              i_9 = ATgetArgument(t, 1);
                                                                                                              t = t_9;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = i_9;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = c_10;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = c_10;
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
  t = bottomup_1_0(a_0, t);
  return(t);
}
ATerm topdown_1_0 (ATerm i_103 (ATerm), ATerm t)
{
  static ATerm w_0 (ATerm t)
  {
    t = topdown_1_0(i_103, t);
    return(t);
  }
  t = i_103(t);
  t = SRTS_all(w_0, t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm u_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(t_23);
      {
        ATerm a_55 = NULL,b_55 = NULL;
        a_55 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm v_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        b_55 = t;
        t = SSLgetAnnotations(a_55);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm x_23 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) x_23) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm a_24 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(a_24) != AT_LIST) || !(ATisEmpty(a_24))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_55;
      }
    }
  else
    {
      t = s_23;
      {
        ATerm b_24 = t;
        int d_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm e_24 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) e_24) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm f_24 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(d_24);
            _fail(t);
          }
        else
          {
            t = b_24;
          }
      }
    }
  return(t);
}
static ATerm u_4 (ATerm e_78, ATerm d_78, ATerm t)
{
  t = e_78;
  t = topdown_1_0(x_0, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, e_78);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm k_55 = NULL,l_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      n_55 = ATgetArgument(t, 0);
      q_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_55;
  if(match_cons(t, sym_Match_1))
    {
      o_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_55;
  if(match_cons(t, sym_Var_1))
    {
      p_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_55;
  if(match_cons(t, sym_Seq_2))
    {
      r_55 = ATgetArgument(t, 0);
      l_55 = ATgetArgument(t, 1);
      t = r_55;
      if(match_cons(t, sym_Build_1))
        {
          s_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_55;
      if(match_cons(t, sym_Var_1))
        {
          k_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_55;
      if((p_55 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_55)), l_55);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          r_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_55;
      if(match_cons(t, sym_Var_1))
        {
          s_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_55;
      if((p_55 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_55));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm a_56 = NULL,b_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      e_56 = ATgetArgument(t, 0);
      g_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_56;
  if(match_cons(t, sym_Build_1))
    {
      f_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_56;
  if(match_cons(t, sym_Seq_2))
    {
      h_56 = ATgetArgument(t, 0);
      b_56 = ATgetArgument(t, 1);
      t = h_56;
      if(match_cons(t, sym_Match_1))
        {
          a_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_56;
      if((f_56 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_56), b_56);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          h_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_56;
      if((f_56 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, f_56);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      u_56 = ATgetArgument(t, 0);
      w_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_56;
  if(match_cons(t, sym_Match_1))
    {
      v_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_56;
  if(match_cons(t, sym_Seq_2))
    {
      x_56 = ATgetArgument(t, 0);
      s_56 = ATgetArgument(t, 1);
      t = x_56;
      if(match_cons(t, sym_Match_1))
        {
          r_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_56;
      if((v_56 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_56), s_56);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          x_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_56;
      if((v_56 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, v_56);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,j_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      j_57 = ATgetArgument(t, 0);
      l_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_57;
  if(match_cons(t, sym_Build_1))
    {
      ATerm g_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_57;
  if(match_cons(t, sym_Seq_2))
    {
      m_57 = ATgetArgument(t, 0);
      n_57 = ATgetArgument(t, 1);
      t = m_57;
      if(match_cons(t, sym_PrimT_3))
        {
          f_57 = ATgetArgument(t, 0);
          g_57 = ATgetArgument(t, 1);
          h_57 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, f_57, g_57, h_57), n_57);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          m_57 = ATgetArgument(t, 0);
          n_57 = ATgetArgument(t, 1);
          o_57 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, m_57, n_57, o_57);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL,i_58 = NULL,k_58 = NULL,l_58 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      i_58 = ATgetArgument(t, 0);
      k_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_58;
  if(match_cons(t, sym_Build_1))
    {
      ATerm i_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_58;
  if(match_cons(t, sym_Seq_2))
    {
      l_58 = ATgetArgument(t, 0);
      g_58 = ATgetArgument(t, 1);
      t = l_58;
      if(match_cons(t, sym_Build_1))
        {
          f_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_58), g_58);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          l_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, l_58);
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_24 = ATgetArgument(t, 0);
      if(((ATgetType(k_24) != AT_LIST) || !(ATisEmpty(k_24))))
        _fail(t);
      {
        ATerm l_24 = ATgetArgument(t, 1);
        if(((ATgetType(l_24) != AT_LIST) || !(ATisEmpty(l_24))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_24 = ATgetArgument(t, 0);
      if(((ATgetType(m_24) == AT_LIST) && !(ATisEmpty(m_24))))
        {
          p_59 = ATgetFirst((ATermList) m_24);
          q_59 = (ATerm) ATgetNext((ATermList) m_24);
        }
      else
        _fail(t);
      {
        ATerm n_24 = ATgetArgument(t, 1);
        if(((ATgetType(n_24) == AT_LIST) && !(ATisEmpty(n_24))))
          {
            r_59 = ATgetFirst((ATermList) n_24);
            s_59 = (ATerm) ATgetNext((ATermList) n_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_59, r_59), (ATerm) ATmakeAppl(sym__2, q_59, s_59));
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL;
  if(match_cons(t, sym__2))
    {
      t_59 = ATgetArgument(t, 0);
      u_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_59), t_59);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm v_59 = NULL,w_59 = NULL;
  if(match_cons(t, sym__2))
    {
      v_59 = ATgetArgument(t, 0);
      w_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, v_59), (ATerm) ATmakeAppl(sym_Match_1, w_59));
  return(t);
}
static ATerm c_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_24 = ATgetArgument(t, 0);
      if(((ATgetType(q_24) != AT_LIST) || !(ATisEmpty(q_24))))
        _fail(t);
      {
        ATerm r_24 = ATgetArgument(t, 1);
        if(((ATgetType(r_24) != AT_LIST) || !(ATisEmpty(r_24))))
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
  ATerm b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_24 = ATgetArgument(t, 0);
      if(((ATgetType(t_24) == AT_LIST) && !(ATisEmpty(t_24))))
        {
          b_60 = ATgetFirst((ATermList) t_24);
          c_60 = (ATerm) ATgetNext((ATermList) t_24);
        }
      else
        _fail(t);
      {
        ATerm u_24 = ATgetArgument(t, 1);
        if(((ATgetType(u_24) == AT_LIST) && !(ATisEmpty(u_24))))
          {
            d_60 = ATgetFirst((ATermList) u_24);
            e_60 = (ATerm) ATgetNext((ATermList) u_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_60, d_60), (ATerm) ATmakeAppl(sym__2, c_60, e_60));
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm f_60 = NULL,g_60 = NULL;
  if(match_cons(t, sym__2))
    {
      f_60 = ATgetArgument(t, 0);
      g_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_60), f_60);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm h_60 = NULL,i_60 = NULL;
  if(match_cons(t, sym__2))
    {
      h_60 = ATgetArgument(t, 0);
      i_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_60), (ATerm) ATmakeAppl(sym_Match_1, i_60));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm y_58 = NULL,z_58 = NULL,a_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      c_59 = ATgetArgument(t, 0);
      g_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_59;
  if(match_cons(t, sym_Build_1))
    {
      d_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_59;
  if(match_cons(t, sym_Op_2))
    {
      e_59 = ATgetArgument(t, 0);
      f_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_59;
  if(match_cons(t, sym_Seq_2))
    {
      h_59 = ATgetArgument(t, 0);
      a_59 = ATgetArgument(t, 1);
      {
        ATerm o_59 = NULL;
        t = h_59;
        if(match_cons(t, sym_Match_1))
          {
            i_59 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_59;
        if(match_cons(t, sym_Op_2))
          {
            y_58 = ATgetArgument(t, 0);
            z_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_58;
        if((e_59 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, f_59, z_58);
        t = genzip_4_0(y_0, z_0, a_1, b_1, t);
        o_59 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_59), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, e_59, f_59)), a_59));
      }
    }
  else
    {
      ATerm a_60 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          h_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_59;
      if(match_cons(t, sym_Op_2))
        {
          i_59 = ATgetArgument(t, 0);
          j_59 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_59;
      if((e_59 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, f_59, j_59);
      t = genzip_4_0(c_1, d_1, e_1, f_1, t);
      a_60 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, a_60), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, e_59, f_59)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm e_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL;
  h_61 = t;
  if(match_cons(t, sym_Seq_2))
    {
      i_61 = ATgetArgument(t, 0);
      m_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_61;
  if(match_cons(t, sym_Build_1))
    {
      j_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_61;
  if(match_cons(t, sym_Op_2))
    {
      k_61 = ATgetArgument(t, 0);
      {
        ATerm v_24 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = m_61;
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            n_61 = ATgetArgument(t, 0);
            {
              ATerm y_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(x_24);
        t = n_61;
        if(match_cons(t, sym_Match_1))
          {
            o_61 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = o_61;
        if(match_cons(t, sym_Op_2))
          {
            e_61 = ATgetArgument(t, 0);
            {
              ATerm z_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_61, e_61);
        {
          ATerm a_25 = t;
          if((PushChoice() == 0))
            {
              ATerm l_1 = NULL;
              if(match_cons(t, sym__2))
                {
                  l_1 = ATgetArgument(t, 0);
                  if((l_1 != ATgetArgument(t, 1)))
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
              t = a_25;
            }
        }
        t = term_m_6;
      }
    else
      {
        t = w_24;
        if(match_cons(t, sym_Match_1))
          {
            n_61 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = n_61;
        if(match_cons(t, sym_Op_2))
          {
            o_61 = ATgetArgument(t, 0);
            {
              ATerm b_25 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_61, o_61);
        {
          ATerm c_25 = t;
          if((PushChoice() == 0))
            {
              ATerm u_1 = NULL;
              if(match_cons(t, sym__2))
                {
                  u_1 = ATgetArgument(t, 0);
                  if((u_1 != ATgetArgument(t, 1)))
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
              t = c_25;
            }
        }
        t = term_m_6;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm m_104 (ATerm), ATerm t)
{
  static ATerm s_61 (ATerm t)
  {
    ATerm d_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_104(t);
        LocalPopChoice(e_25);
      }
    else
      {
        t = d_25;
        t = SRTS_one(s_61, t);
      }
    return(t);
  }
  t = s_61(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL;
  l_62 = t;
  if(match_cons(t, sym_Let_2))
    {
      m_62 = ATgetArgument(t, 0);
      t_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_62;
  if(match_cons(t, sym_Let_2))
    {
      u_62 = ATgetArgument(t, 0);
      w_62 = ATgetArgument(t, 1);
      {
        ATerm b_63 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, m_62, u_62);
        t = conc_0_0(t);
        b_63 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, b_63, w_62);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          u_62 = ATgetArgument(t, 0);
          w_62 = ATgetArgument(t, 1);
          x_62 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_62;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_62 = ATgetFirst((ATermList) t);
          s_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_62;
      if(match_cons(t, sym_SDefT_4))
        {
          o_62 = ATgetArgument(t, 0);
          p_62 = ATgetArgument(t, 1);
          q_62 = ATgetArgument(t, 2);
          r_62 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = p_62;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_62;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_62;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_62;
      if(match_cons(t, sym_SVar_1))
        {
          v_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_62;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_62;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_62;
      if((o_62 != t))
        {
          _fail(t);
        }
      t = r_62;
      {
        ATerm f_25 = t;
        if((PushChoice() == 0))
          {
            static ATerm g_1 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm g_25 = ATgetArgument(t, 0);
                  if(match_cons(g_25, sym_SVar_1))
                    {
                      if((o_62 != ATgetArgument(g_25, 0)))
                        {
                          _fail(ATgetArgument(g_25, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm h_25 = ATgetArgument(t, 1);
                    if(((ATgetType(h_25) != AT_LIST) || !(ATisEmpty(h_25))))
                      _fail(t);
                  }
                  {
                    ATerm i_25 = ATgetArgument(t, 2);
                    if(((ATgetType(i_25) != AT_LIST) || !(ATisEmpty(i_25))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(g_1, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = f_25;
          }
      }
      t = r_62;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,r_63 = NULL,s_63 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      r_63 = ATgetArgument(t, 0);
      t = r_63;
      if(match_cons(t, sym_Seq_2))
        {
          p_63 = ATgetArgument(t, 0);
          l_63 = ATgetArgument(t, 1);
          t = p_63;
          if(match_cons(t, sym_Where_1))
            {
              k_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_63;
          if(match_cons(t, sym_Seq_2))
            {
              m_63 = ATgetArgument(t, 0);
              o_63 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_63;
          if(match_cons(t, sym_Build_1))
            {
              n_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, k_63, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_63), o_63)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              p_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, p_63);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          r_63 = ATgetArgument(t, 0);
          t = r_63;
          if(match_cons(t, sym_Test_1))
            {
              p_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, p_63);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              r_63 = ATgetArgument(t, 0);
              t = r_63;
              if(match_cons(t, sym_Not_1))
                {
                  p_63 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, p_63);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  r_63 = ATgetArgument(t, 0);
                  s_63 = ATgetArgument(t, 1);
                  t = s_63;
                  if((r_63 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      r_63 = ATgetArgument(t, 0);
                      s_63 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = s_63;
                  if((r_63 != t))
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
  ATerm g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      g_64 = ATgetArgument(t, 0);
      j_64 = ATgetArgument(t, 1);
      t = g_64;
      if(match_cons(t, sym_LChoice_2))
        {
          h_64 = ATgetArgument(t, 0);
          i_64 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, h_64, (ATerm) ATmakeAppl(sym_LChoice_2, i_64, j_64));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          g_64 = ATgetArgument(t, 0);
          j_64 = ATgetArgument(t, 1);
          t = g_64;
          if(match_cons(t, sym_Seq_2))
            {
              h_64 = ATgetArgument(t, 0);
              i_64 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, h_64, (ATerm) ATmakeAppl(sym_Seq_2, i_64, j_64));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              g_64 = ATgetArgument(t, 0);
              j_64 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_64;
          if(match_cons(t, sym_Choice_2))
            {
              h_64 = ATgetArgument(t, 0);
              i_64 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, h_64, (ATerm) ATmakeAppl(sym_Choice_2, i_64, j_64));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL,h_65 = NULL,i_65 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      h_65 = ATgetArgument(t, 0);
      i_65 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, h_65, i_65);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          h_65 = ATgetArgument(t, 0);
          t = h_65;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_65 = ATgetFirst((ATermList) t);
              d_65 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, c_65, (ATerm) ATmakeAppl(sym_LChoices_1, d_65));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_m_6;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              h_65 = ATgetArgument(t, 0);
              t = h_65;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_65 = ATgetFirst((ATermList) t);
                  d_65 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, c_65, (ATerm) ATmakeAppl(sym_Choices_1, d_65));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_m_6;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  h_65 = ATgetArgument(t, 0);
                  t = h_65;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      c_65 = ATgetFirst((ATermList) t);
                      d_65 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_65, (ATerm) ATmakeAppl(sym_Seqs_1, d_65));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_e_6;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      h_65 = ATgetArgument(t, 0);
                      i_65 = ATgetArgument(t, 1);
                      e_65 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, i_65, (ATerm) ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, e_65), h_65)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          h_65 = ATgetArgument(t, 0);
                          i_65 = ATgetArgument(t, 1);
                          e_65 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, e_65)), h_65), (ATerm) ATmakeAppl(sym_Build_1, i_65)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              h_65 = ATgetArgument(t, 0);
                              i_65 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_65, (ATerm) ATmakeAppl(sym_Match_1, i_65));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  h_65 = ATgetArgument(t, 0);
                                  i_65 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_65), i_65);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      h_65 = ATgetArgument(t, 0);
                                      i_65 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_65), h_65);
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
static ATerm h_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      v_66 = ATgetArgument(t, 0);
      t = v_66;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_m_6;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          v_66 = ATgetArgument(t, 0);
          t = v_66;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_e_6;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              v_66 = ATgetArgument(t, 0);
              w_66 = ATgetArgument(t, 1);
              t = v_66;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_m_6;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  v_66 = ATgetArgument(t, 0);
                  w_66 = ATgetArgument(t, 1);
                  t = w_66;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_m_6;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      v_66 = ATgetArgument(t, 0);
                      w_66 = ATgetArgument(t, 1);
                      t = w_66;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_m_6;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          v_66 = ATgetArgument(t, 0);
                          t = v_66;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_m_6;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              v_66 = ATgetArgument(t, 0);
                              t = v_66;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_m_6;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  v_66 = ATgetArgument(t, 0);
                                  w_66 = ATgetArgument(t, 1);
                                  t = w_66;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_m_6;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      v_66 = ATgetArgument(t, 0);
                                      w_66 = ATgetArgument(t, 1);
                                      t = w_66;
                                      t = fetch_1_0(h_1, t);
                                      t = term_m_6;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          v_66 = ATgetArgument(t, 0);
                                          w_66 = ATgetArgument(t, 1);
                                          t = w_66;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = v_66;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = w_66;
                                                }
                                              else
                                                {
                                                  t = v_66;
                                                }
                                            }
                                          else
                                            {
                                              t = v_66;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = w_66;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              v_66 = ATgetArgument(t, 0);
                                              w_66 = ATgetArgument(t, 1);
                                              t = w_66;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = v_66;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = w_66;
                                                    }
                                                  else
                                                    {
                                                      t = v_66;
                                                    }
                                                }
                                              else
                                                {
                                                  t = v_66;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = w_66;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  v_66 = ATgetArgument(t, 0);
                                                  t = v_66;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_m_6;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      v_66 = ATgetArgument(t, 0);
                                                      w_66 = ATgetArgument(t, 1);
                                                      x_66 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = x_66;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_66, w_66);
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
  ATerm a_68 = NULL,c_68 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      c_68 = ATgetArgument(t, 0);
      t = c_68;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_e_6;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          c_68 = ATgetArgument(t, 0);
          t = c_68;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_m_6;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              c_68 = ATgetArgument(t, 0);
              a_68 = ATgetArgument(t, 1);
              t = a_68;
              if(match_cons(t, sym_Id_0))
                {
                  t = c_68;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = a_68;
                    }
                  else
                    {
                      t = c_68;
                    }
                }
              else
                {
                  t = c_68;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = a_68;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  c_68 = ATgetArgument(t, 0);
                  a_68 = ATgetArgument(t, 1);
                  t = c_68;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_e_6;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      c_68 = ATgetArgument(t, 0);
                      a_68 = ATgetArgument(t, 1);
                      t = a_68;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_e_6;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          c_68 = ATgetArgument(t, 0);
                          a_68 = ATgetArgument(t, 1);
                          t = a_68;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_e_6;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              c_68 = ATgetArgument(t, 0);
                              t = c_68;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_e_6;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  c_68 = ATgetArgument(t, 0);
                                  t = c_68;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_e_6;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      c_68 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = c_68;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_e_6;
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
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
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
            t = ElimFail_0_0(t);
            LocalPopChoice(m_25);
          }
        else
          {
            t = l_25;
            {
              ATerm n_25 = t;
              int o_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(o_25);
                }
              else
                {
                  t = n_25;
                  {
                    ATerm p_25 = t;
                    int r_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(r_25);
                      }
                    else
                      {
                        t = p_25;
                        {
                          ATerm s_25 = t;
                          int t_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(t_25);
                            }
                          else
                            {
                              t = s_25;
                              {
                                ATerm u_25 = t;
                                int v_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_68 = NULL,s_68 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        r_68 = ATgetArgument(t, 0);
                                        s_68 = ATgetArgument(t, 1);
                                        t = r_68;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = s_68;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            r_68 = ATgetArgument(t, 0);
                                            s_68 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = r_68;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = s_68;
                                      }
                                    LocalPopChoice(v_25);
                                  }
                                else
                                  {
                                    t = u_25;
                                    {
                                      ATerm w_25 = t;
                                      int x_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(x_25);
                                        }
                                      else
                                        {
                                          t = w_25;
                                          {
                                            ATerm y_25 = t;
                                            int z_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(z_25);
                                              }
                                            else
                                              {
                                                t = y_25;
                                                {
                                                  ATerm a_26 = t;
                                                  int b_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(b_26);
                                                    }
                                                  else
                                                    {
                                                      t = a_26;
                                                      {
                                                        ATerm c_26 = t;
                                                        int d_26 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(d_26);
                                                          }
                                                        else
                                                          {
                                                            t = c_26;
                                                            {
                                                              ATerm e_26 = t;
                                                              int f_26 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(f_26);
                                                                }
                                                              else
                                                                {
                                                                  t = e_26;
                                                                  {
                                                                    ATerm g_26 = t;
                                                                    int h_26 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
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
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(j_26);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = i_26;
                                                                              {
                                                                                ATerm k_26 = t;
                                                                                int l_26 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(l_26);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = k_26;
                                                                                    {
                                                                                      ATerm v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL;
                                                                                      w_68 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          x_68 = ATgetArgument(t, 0);
                                                                                          y_68 = ATgetArgument(t, 1);
                                                                                          t = x_68;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              v_68 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = w_68;
                                                                                          t = u_4(v_68, y_68, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              x_68 = ATgetArgument(t, 0);
                                                                                              y_68 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = x_68;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = y_68;
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
static ATerm i_1 (ATerm t)
{
  ATerm o_69 = NULL;
  o_69 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_69);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm p_69 = NULL;
  p_69 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_69);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_26 = ATgetArgument(t, 0);
      if(((ATgetType(m_26) != AT_LIST) || !(ATisEmpty(m_26))))
        _fail(t);
      {
        ATerm n_26 = ATgetArgument(t, 1);
        if(((ATgetType(n_26) != AT_LIST) || !(ATisEmpty(n_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_26 = ATgetArgument(t, 0);
      if(((ATgetType(o_26) == AT_LIST) && !(ATisEmpty(o_26))))
        {
          q_69 = ATgetFirst((ATermList) o_26);
          r_69 = (ATerm) ATgetNext((ATermList) o_26);
        }
      else
        _fail(t);
      {
        ATerm p_26 = ATgetArgument(t, 1);
        if(((ATgetType(p_26) == AT_LIST) && !(ATisEmpty(p_26))))
          {
            s_69 = ATgetFirst((ATermList) p_26);
            t_69 = (ATerm) ATgetNext((ATermList) p_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_69, s_69), (ATerm) ATmakeAppl(sym__2, r_69, t_69));
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm u_69 = NULL,v_69 = NULL;
  if(match_cons(t, sym__2))
    {
      u_69 = ATgetArgument(t, 0);
      v_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_69), u_69);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_26 = ATgetArgument(t, 0);
      if(((ATgetType(q_26) != AT_LIST) || !(ATisEmpty(q_26))))
        _fail(t);
      {
        ATerm r_26 = ATgetArgument(t, 1);
        if(((ATgetType(r_26) != AT_LIST) || !(ATisEmpty(r_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_26 = ATgetArgument(t, 0);
      if(((ATgetType(s_26) == AT_LIST) && !(ATisEmpty(s_26))))
        {
          x_69 = ATgetFirst((ATermList) s_26);
          y_69 = (ATerm) ATgetNext((ATermList) s_26);
        }
      else
        _fail(t);
      {
        ATerm t_26 = ATgetArgument(t, 1);
        if(((ATgetType(t_26) == AT_LIST) && !(ATisEmpty(t_26))))
          {
            z_69 = ATgetFirst((ATermList) t_26);
            a_70 = (ATerm) ATgetNext((ATermList) t_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_69, z_69), (ATerm) ATmakeAppl(sym__2, y_69, a_70));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm b_70 = NULL,c_70 = NULL;
  if(match_cons(t, sym__2))
    {
      b_70 = ATgetArgument(t, 0);
      c_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_70), b_70);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm d_70 = NULL,e_70 = NULL,f_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_26 = ATgetArgument(t, 0);
      if(match_cons(u_26, sym__2))
        {
          d_70 = ATgetArgument(u_26, 0);
          e_70 = ATgetArgument(u_26, 1);
        }
      else
        _fail(t);
      f_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, d_70)), (ATerm) ATmakeAppl(sym_Seq_2, f_70, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_70))));
  return(t);
}
static ATerm j_11 (ATerm f_77, ATerm l_77, ATerm t)
{
  ATerm d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,n_69 = NULL;
  t = l_77;
  t = map_1_0(new_0_0, t);
  g_69 = t;
  t = map_1_0(i_1, t);
  d_69 = t;
  t = new_0_0(t);
  e_69 = t;
  t = l_77;
  t = map_1_0(new_0_0, t);
  h_69 = t;
  t = map_1_0(j_1, t);
  f_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_69, h_69);
  t = genzip_4_0(k_1, m_1, n_1, _id, t);
  n_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_69, l_77);
  t = genzip_4_0(o_1, p_1, q_1, r_1, t);
  i_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_69, h_69);
  t = conc_0_0(t);
  j_69 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, f_77, d_69), (ATerm) ATmakeAppl(sym_Var_1, e_69)));
  t = Mapp2_0_0(t);
  k_69 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, f_77, f_69), (ATerm) ATmakeAppl(sym_Var_1, e_69)));
  t = Bapp_0_0(t);
  l_69 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(j_69), e_69), (ATerm) ATmakeAppl(sym_Seq_2, k_69, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_69), l_69)));
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm h_70 = NULL,i_70 = NULL;
  h_70 = t;
  if(match_cons(t, sym_Build_1))
    {
      i_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_70 = NULL,k_70 = NULL,m_70 = NULL,n_70 = NULL;
        t = h_70;
        t = new_0_0(t);
        m_70 = t;
        t = i_70;
        {
          static ATerm s_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((j_70 != NULL) && (j_70 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_70 = ATgetArgument(t, 0);
                if(((k_70 != NULL) && (k_70 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  k_70 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, m_70);
            return(t);
          }
          t = pat_td_1_0(s_1, t);
        }
        n_70 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_70), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_x_26, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_70)), not_null(j_70))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_70)))), (ATerm) ATmakeAppl(sym_Build_1, n_70)));
        LocalPopChoice(w_26);
      }
    else
      {
        t = v_26;
        {
          ATerm y_26 = t;
          int z_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_70 = NULL,q_70 = NULL,r_70 = NULL;
              t = h_70;
              t = new_0_0(t);
              q_70 = t;
              t = i_70;
              {
                static ATerm t_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((o_70 != NULL) && (o_70 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        o_70 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, q_70);
                  return(t);
                }
                t = pat_td_1_0(t_1, t);
              }
              r_70 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_70), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_70), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_70)))), (ATerm) ATmakeAppl(sym_Build_1, r_70)));
              LocalPopChoice(z_26);
            }
          else
            {
              t = y_26;
              {
                ATerm s_70 = NULL,t_70 = NULL,v_70 = NULL,w_70 = NULL;
                t = h_70;
                t = new_0_0(t);
                v_70 = t;
                t = i_70;
                {
                  static ATerm v_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((s_70 != NULL) && (s_70 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          s_70 = ATgetArgument(t, 0);
                        if(((t_70 != NULL) && (t_70 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          t_70 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, v_70);
                    return(t);
                  }
                  t = pat_td_1_0(v_1, t);
                }
                w_70 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_70), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(s_70), not_null(t_70), (ATerm) ATmakeAppl(sym_Var_1, v_70))), (ATerm) ATmakeAppl(sym_Build_1, w_70)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm j_124 (ATerm), ATerm t)
{
  static ATerm r_71 (ATerm t)
  {
    ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL;
    q_71 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_71 = ATgetFirst((ATermList) t);
        p_71 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_2 = NULL,o_2 = NULL,p_4 = NULL;
          t = SSLgetAnnotations(q_71);
          l_2 = t;
          t = p_71;
          t = r_71(t);
          o_2 = t;
          t = (ATerm) ATinsert(CheckATermList(o_2), o_71);
          p_4 = t;
          t = SSLsetAnnotations(p_4, l_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_71;
        t = j_124(t);
      }
    return(t);
  }
  t = r_71(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_70 = NULL,z_70 = NULL,a_71 = NULL;
  y_70 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_70;
    }
  else
    {
      static ATerm w_1 (ATerm t)
      {
        t = not_null(a_71);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_70 = ATgetFirst((ATermList) t);
          if(((a_71 != NULL) && (a_71 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_70;
      t = at_end_1_0(w_1, t);
    }
  return(t);
}
static ATerm d_72 (ATerm v_71, ATerm t)
{
  ATerm w_71 = NULL;
  t = SSL_explode_term(v_71);
  if(match_cons(t, sym__2))
    {
      ATerm a_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_71;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_71 = NULL,z_71 = NULL,a_72 = NULL;
  a_72 = t;
  if(match_cons(t, sym__2))
    {
      y_71 = ATgetArgument(t, 0);
      z_71 = ATgetArgument(t, 1);
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_1 (ATerm t)
            {
              t = z_71;
              return(t);
            }
            t = y_71;
            t = at_end_1_0(x_1, t);
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            t = d_72(a_72, t);
          }
      }
    }
  else
    {
      t = d_72(a_72, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm t)
{
  static ATerm k_72 (ATerm t)
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_107(t);
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        {
          ATerm e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,r_4 = NULL;
          t = v_107(t);
          j_72 = t;
          if(match_cons(t, sym__2))
            {
              f_72 = ATgetArgument(t, 0);
              g_72 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_72);
          e_72 = t;
          t = f_72;
          t = x_107(t);
          h_72 = t;
          t = g_72;
          t = k_72(t);
          i_72 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_72, i_72);
          r_4 = t;
          t = SSLsetAnnotations(r_4, e_72);
          t = w_107(t);
        }
      }
    return(t);
  }
  t = k_72(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm y_72 = NULL;
  y_72 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_72);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm z_72 = NULL;
  z_72 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_72);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_27 = ATgetArgument(t, 0);
      if(((ATgetType(f_27) != AT_LIST) || !(ATisEmpty(f_27))))
        _fail(t);
      {
        ATerm g_27 = ATgetArgument(t, 1);
        if(((ATgetType(g_27) != AT_LIST) || !(ATisEmpty(g_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm a_73 = NULL,b_73 = NULL,d_73 = NULL,e_73 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_27 = ATgetArgument(t, 0);
      if(((ATgetType(h_27) == AT_LIST) && !(ATisEmpty(h_27))))
        {
          a_73 = ATgetFirst((ATermList) h_27);
          b_73 = (ATerm) ATgetNext((ATermList) h_27);
        }
      else
        _fail(t);
      {
        ATerm i_27 = ATgetArgument(t, 1);
        if(((ATgetType(i_27) == AT_LIST) && !(ATisEmpty(i_27))))
          {
            d_73 = ATgetFirst((ATermList) i_27);
            e_73 = (ATerm) ATgetNext((ATermList) i_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_73, d_73), (ATerm) ATmakeAppl(sym__2, b_73, e_73));
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL;
  if(match_cons(t, sym__2))
    {
      f_73 = ATgetArgument(t, 0);
      g_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_73), f_73);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_27 = ATgetArgument(t, 0);
      if(((ATgetType(j_27) != AT_LIST) || !(ATisEmpty(j_27))))
        _fail(t);
      {
        ATerm k_27 = ATgetArgument(t, 1);
        if(((ATgetType(k_27) != AT_LIST) || !(ATisEmpty(k_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_27 = ATgetArgument(t, 0);
      if(((ATgetType(m_27) == AT_LIST) && !(ATisEmpty(m_27))))
        {
          i_73 = ATgetFirst((ATermList) m_27);
          j_73 = (ATerm) ATgetNext((ATermList) m_27);
        }
      else
        _fail(t);
      {
        ATerm n_27 = ATgetArgument(t, 1);
        if(((ATgetType(n_27) == AT_LIST) && !(ATisEmpty(n_27))))
          {
            k_73 = ATgetFirst((ATermList) n_27);
            l_73 = (ATerm) ATgetNext((ATermList) n_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_73, k_73), (ATerm) ATmakeAppl(sym__2, j_73, l_73));
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm m_73 = NULL,n_73 = NULL;
  if(match_cons(t, sym__2))
    {
      m_73 = ATgetArgument(t, 0);
      n_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_73), m_73);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_27 = ATgetArgument(t, 0);
      if(match_cons(o_27, sym__2))
        {
          o_73 = ATgetArgument(o_27, 0);
          p_73 = ATgetArgument(o_27, 1);
        }
      else
        _fail(t);
      q_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, o_73)), (ATerm) ATmakeAppl(sym_Seq_2, q_73, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_73))));
  return(t);
}
static ATerm n_11 (ATerm q_77, ATerm y_77, ATerm x_77, ATerm t)
{
  ATerm m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL,x_72 = NULL;
  t = (ATerm) ATinsert(CheckATermList(y_77), x_77);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_72 = ATgetFirst((ATermList) t);
      q_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = map_1_0(y_1, t);
  n_72 = t;
  t = (ATerm) ATinsert(CheckATermList(y_77), x_77);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_72 = ATgetFirst((ATermList) t);
      r_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = map_1_0(z_1, t);
  p_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_72, r_72);
  t = genzip_4_0(a_2, b_2, c_2, _id, t);
  x_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_72, (ATerm) ATinsert(CheckATermList(y_77), x_77));
  t = genzip_4_0(d_2, e_2, f_2, g_2, t);
  s_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_72, r_72);
  t = conc_0_0(t);
  t_72 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, q_77, n_72), (ATerm) ATmakeAppl(sym_Var_1, m_72)));
  t = Mapp2_0_0(t);
  u_72 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, q_77, p_72), (ATerm) ATmakeAppl(sym_Var_1, o_72)));
  t = Bapp_0_0(t);
  v_72 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(t_72), o_72), m_72), (ATerm) ATmakeAppl(sym_Seq_2, u_72, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_72), v_72)));
  return(t);
}
ATerm pat_td_1_0 (ATerm o_101 (ATerm), ATerm t)
{
  ATerm p_27 = t;
  int q_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_101(t);
      LocalPopChoice(q_27);
    }
  else
    {
      t = p_27;
      {
        ATerm z_75 = NULL,a_76 = NULL,g_76 = NULL,h_76 = NULL;
        a_76 = t;
        if(match_cons(t, sym_Op_2))
          {
            g_76 = ATgetArgument(t, 0);
            h_76 = ATgetArgument(t, 1);
            {
              ATerm w_2 = NULL,z_2 = NULL,t_4 = NULL;
              t = SSLgetAnnotations(a_76);
              w_2 = t;
              t = h_76;
              {
                static ATerm h_2 (ATerm t)
                {
                  t = pat_td_1_0(o_101, t);
                  return(t);
                }
                t = fetch_1_0(h_2, t);
              }
              z_2 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, g_76, z_2);
              t_4 = t;
              t = SSLsetAnnotations(t_4, w_2);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                g_76 = ATgetArgument(t, 0);
                h_76 = ATgetArgument(t, 1);
                {
                  ATerm r_27 = t;
                  int s_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_3 = NULL,k_3 = NULL,v_4 = NULL;
                      t = SSLgetAnnotations(a_76);
                      h_3 = t;
                      t = h_76;
                      t = pat_td_1_0(o_101, t);
                      k_3 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, g_76, k_3);
                      v_4 = t;
                      t = SSLsetAnnotations(v_4, h_3);
                      LocalPopChoice(s_27);
                    }
                  else
                    {
                      t = r_27;
                      {
                        ATerm s_3 = NULL,v_3 = NULL,z_4 = NULL;
                        t = SSLgetAnnotations(a_76);
                        s_3 = t;
                        t = g_76;
                        t = pat_td_1_0(o_101, t);
                        v_3 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, v_3, h_76);
                        z_4 = t;
                        t = SSLsetAnnotations(z_4, s_3);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    g_76 = ATgetArgument(t, 0);
                    h_76 = ATgetArgument(t, 1);
                    z_75 = ATgetArgument(t, 2);
                    {
                      ATerm e_4 = NULL,i_4 = NULL,a_5 = NULL;
                      t = SSLgetAnnotations(a_76);
                      e_4 = t;
                      t = z_75;
                      {
                        static ATerm i_2 (ATerm t)
                        {
                          t = pat_td_1_0(o_101, t);
                          return(t);
                        }
                        t = fetch_1_0(i_2, t);
                      }
                      i_4 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, g_76, h_76, i_4);
                      a_5 = t;
                      t = SSLsetAnnotations(a_5, e_4);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        g_76 = ATgetArgument(t, 0);
                        h_76 = ATgetArgument(t, 1);
                        z_75 = ATgetArgument(t, 2);
                        {
                          ATerm h_5 = NULL,m_5 = NULL,b_5 = NULL;
                          t = SSLgetAnnotations(a_76);
                          h_5 = t;
                          t = z_75;
                          {
                            static ATerm j_2 (ATerm t)
                            {
                              t = pat_td_1_0(o_101, t);
                              return(t);
                            }
                            t = fetch_1_0(j_2, t);
                          }
                          m_5 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, g_76, h_76, m_5);
                          b_5 = t;
                          t = SSLsetAnnotations(b_5, h_5);
                        }
                      }
                    else
                      {
                        ATerm v_5 = NULL,y_5 = NULL,c_5 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            g_76 = ATgetArgument(t, 0);
                            h_76 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(a_76);
                        v_5 = t;
                        t = h_76;
                        t = pat_td_1_0(o_101, t);
                        y_5 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, g_76, y_5);
                        c_5 = t;
                        t = SSLsetAnnotations(c_5, v_5);
                      }
                  }
              }
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
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm p_76 = NULL,q_76 = NULL;
  p_76 = t;
  if(match_cons(t, sym_Match_1))
    {
      q_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL;
        t = p_76;
        t = new_0_0(t);
        u_76 = t;
        t = q_76;
        {
          static ATerm k_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((s_76 != NULL) && (s_76 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_76 = ATgetArgument(t, 0);
                if(((t_76 != NULL) && (t_76 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  t_76 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, u_76), s_76);
            return(t);
          }
          t = pat_td_1_0(k_2, t);
        }
        v_76 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_76), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_76), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_v_27, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_76))), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_76))))));
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        {
          ATerm x_27 = t;
          int y_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_76 = NULL,y_76 = NULL,z_76 = NULL;
              t = p_76;
              t = new_0_0(t);
              y_76 = t;
              t = q_76;
              {
                static ATerm m_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((x_76 != NULL) && (x_76 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        x_76 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, y_76);
                  return(t);
                }
                t = pat_td_1_0(m_2, t);
              }
              z_76 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_76), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_76), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, y_76)), not_null(x_76))));
              LocalPopChoice(y_27);
            }
          else
            {
              t = x_27;
              {
                ATerm o_77 = NULL,p_77 = NULL,a_78 = NULL,b_78 = NULL;
                t = p_76;
                t = new_0_0(t);
                a_78 = t;
                t = q_76;
                {
                  static ATerm n_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((p_77 != NULL) && (p_77 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          p_77 = ATgetArgument(t, 0);
                        if(((o_77 != NULL) && (o_77 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          o_77 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, a_78);
                    return(t);
                  }
                  t = pat_td_1_0(n_2, t);
                }
                b_78 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, a_78)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_77)), not_null(p_77)))));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm h_79 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      h_79 = ATgetArgument(t, 0);
      t = h_79;
    }
  else
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_z_27;
    }
  return(t);
}
ATerm MatchingCongruence_0_0 (ATerm t)
{
  ATerm j_78 = NULL,k_78 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      j_78 = ATgetArgument(t, 0);
      k_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_78;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, j_78, (ATerm) ATempty));
    }
  else
    {
      ATerm f_79 = NULL;
      t = k_78;
      t = map_1_0(p_2, t);
      f_79 = t;
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, j_78, f_79));
      t = Mapp2_0_0(t);
    }
  return(t);
}
ATerm repeat_2_0 (ATerm y_112 (ATerm), ATerm z_112 (ATerm), ATerm t)
{
  static ATerm c_80 (ATerm t)
  {
    ATerm a_28 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_112(t);
        t = c_80(t);
        LocalPopChoice(b_28);
      }
    else
      {
        t = a_28;
        t = z_112(t);
      }
    return(t);
  }
  t = c_80(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm j_103 (ATerm), ATerm t)
{
  static ATerm q_2 (ATerm t)
  {
    t = bottomup_1_0(j_103, t);
    return(t);
  }
  t = SRTS_all(q_2, t);
  t = j_103(t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = repeat_2_0(s_2, _id, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_28 = t;
      int f_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MatchingCongruence_0_0(t);
          LocalPopChoice(f_28);
        }
      else
        {
          t = e_28;
          {
            ATerm l_80 = NULL,m_80 = NULL,n_80 = NULL,o_80 = NULL,p_80 = NULL,q_80 = NULL,r_80 = NULL,s_80 = NULL,t_80 = NULL,u_80 = NULL;
            s_80 = t;
            if(match_cons(t, sym_Call_2))
              {
                t_80 = ATgetArgument(t, 0);
                u_80 = ATgetArgument(t, 1);
                t = t_80;
                if(match_cons(t, sym_SVar_1))
                  {
                    l_80 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = l_80;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
                  _fail(t);
                t = u_80;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    m_80 = ATgetFirst((ATermList) t);
                    p_80 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = m_80;
                if(match_cons(t, sym_Cong_2))
                  {
                    n_80 = ATgetArgument(t, 0);
                    o_80 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = p_80;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    q_80 = ATgetFirst((ATermList) t);
                    r_80 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = r_80;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = s_80;
                t = n_11(n_80, o_80, q_80, t);
              }
            else
              {
                if(match_cons(t, sym_Cong_2))
                  {
                    t_80 = ATgetArgument(t, 0);
                    u_80 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_80;
                t = j_11(t_80, u_80, t);
              }
          }
        }
      LocalPopChoice(d_28);
    }
  else
    {
      t = c_28;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm define_congruences_0_0 (ATerm t)
{
  t = bottomup_1_0(r_2, t);
  t = simplify_0_0(t);
  return(t);
}
ATerm map_1_0 (ATerm s_123 (ATerm), ATerm t)
{
  static ATerm q_81 (ATerm t)
  {
    ATerm n_81 = NULL,o_81 = NULL,p_81 = NULL;
    n_81 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_81;
      }
    else
      {
        ATerm g_6 = NULL,j_6 = NULL,k_6 = NULL,d_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_81 = ATgetFirst((ATermList) t);
            p_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_81);
        g_6 = t;
        t = o_81;
        t = s_123(t);
        j_6 = t;
        t = p_81;
        t = q_81(t);
        k_6 = t;
        t = (ATerm) ATinsert(CheckATermList(k_6), j_6);
        d_7 = t;
        t = SSLsetAnnotations(d_7, g_6);
      }
    return(t);
  }
  t = q_81(t);
  return(t);
}
static ATerm o_11 (ATerm v_43, ATerm w_43, ATerm t)
{
  ATerm s_81 = NULL;
  t = SSL_fputc(v_43, w_43);
  s_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_81);
  return(t);
}
static ATerm p_11 (ATerm w_48, ATerm x_48, ATerm t)
{
  ATerm t_81 = NULL;
  t = SSL_write_term_to_stream_text(w_48, x_48);
  t_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_81);
  return(t);
}
static ATerm r_11 (ATerm m_117 (ATerm), ATerm o_428, ATerm c_49, ATerm t)
{
  ATerm u_81 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_428, term_g_28);
  t = v_11(t);
  u_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_81, c_49);
  t = m_117(t);
  t = fclose_0_0(t);
  t = c_49;
  return(t);
}
static ATerm q_11 (ATerm s_48, ATerm t_48, ATerm t)
{
  ATerm v_81 = NULL;
  t = SSL_write_term_to_stream_baf(s_48, t_48);
  v_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_81);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm c_82 = NULL,d_82 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_28 = ATgetArgument(t, 0);
      if(match_cons(h_28, sym_Stream_1))
        {
          c_82 = ATgetArgument(h_28, 0);
        }
      else
        _fail(t);
      d_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(c_82, d_82, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_28 = ATgetArgument(t, 0);
      if(match_cons(i_28, sym_Stream_1))
        {
          h_82 = ATgetArgument(i_28, 0);
        }
      else
        _fail(t);
      i_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_11(h_82, i_82, t);
  e_82 = t;
  t = term_j_28;
  f_82 = t;
  t = e_82;
  if(match_cons(t, sym_Stream_1))
    {
      g_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_28, e_82);
  t = o_11(f_82, g_82, t);
  return(t);
}
ATerm output_1_0 (ATerm j_130 (ATerm), ATerm t)
{
  ATerm w_81 = NULL,x_81 = NULL;
  t = j_130(t);
  x_81 = t;
  {
    ATerm k_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_81 = NULL,z_81 = NULL;
        t = term_m_28;
        y_81 = t;
        t = term_n_28;
        z_81 = t;
        t = term_o_28;
        t = z_11(y_81, z_81, t);
        LocalPopChoice(l_28);
      }
    else
      {
        t = k_28;
        t = term_p_28;
      }
  }
  w_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_81, x_81);
  {
    ATerm q_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_82 = NULL,b_82 = NULL;
        t = term_m_28;
        a_82 = t;
        t = term_t_28;
        b_82 = t;
        t = term_u_28;
        t = z_11(a_82, b_82, t);
        t = (ATerm) ATmakeAppl(sym__2, w_81, x_81);
        LocalPopChoice(s_28);
        if(match_cons(t, sym__2))
          {
            ATerm v_28 = ATgetArgument(t, 0);
            ATerm x_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_11(t_2, w_81, x_81, t);
      }
    else
      {
        t = q_28;
        if(match_cons(t, sym__2))
          {
            ATerm y_28 = ATgetArgument(t, 0);
            ATerm z_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_11(u_2, w_81, x_81, t);
      }
  }
  return(t);
}
static ATerm w_82 (ATerm q_82, ATerm t)
{
  t = SSL_fclose(q_82);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_82 = NULL,u_82 = NULL;
  u_82 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_82 = ATgetArgument(t, 0);
      {
        ATerm a_29 = t;
        int b_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_82);
            LocalPopChoice(b_29);
          }
        else
          {
            t = a_29;
            t = w_82(u_82, t);
          }
      }
    }
  else
    {
      t = w_82(u_82, t);
    }
  return(t);
}
static ATerm s_11 (ATerm y_48, ATerm t)
{
  t = SSL_read_term_from_stream(y_48);
  return(t);
}
static ATerm t_11 (ATerm o_42, ATerm p_42, ATerm t)
{
  t = SSL_strcat(o_42, p_42);
  return(t);
}
static ATerm u_11 (ATerm x_43, ATerm y_43, ATerm t)
{
  ATerm x_82 = NULL;
  t = SSL_fopen(x_43, y_43);
  x_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_82);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_82 = NULL;
  t = SSL_stdin_stream();
  y_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_82);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_82 = NULL;
  t = SSL_stdout_stream();
  z_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_82);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_83 = NULL;
  t = SSL_stderr_stream();
  a_83 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_83);
  return(t);
}
static ATerm i_84 (ATerm g_83, ATerm t)
{
  ATerm h_83 = NULL;
  t = SSL_explode_term(g_83);
  if(match_cons(t, sym__2))
    {
      ATerm c_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_29 = ATgetArgument(t, 1);
        if(((ATgetType(d_29) == AT_LIST) && !(ATisEmpty(d_29))))
          {
            h_83 = ATgetFirst((ATermList) d_29);
            {
              ATerm e_29 = (ATerm) ATgetNext((ATermList) d_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_83;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_83;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_83;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_83;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_84 (ATerm k_83, ATerm l_83, ATerm m_83, ATerm t)
{
  ATerm n_83 = NULL,o_83 = NULL,p_83 = NULL,t_83 = NULL,s_14 = NULL;
  t = SSLgetAnnotations(m_83);
  p_83 = t;
  t = k_83;
  if(match_cons(t, sym_Path_1))
    {
      t_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_83, l_83);
  s_14 = t;
  t = SSLsetAnnotations(s_14, p_83);
  if(match_cons(t, sym__2))
    {
      n_83 = ATgetArgument(t, 0);
      o_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_11(n_83, o_83, t);
  return(t);
}
static ATerm k_84 (ATerm v_83, ATerm w_83, ATerm x_83, ATerm t)
{
  ATerm y_83 = NULL,z_83 = NULL,a_84 = NULL,d_84 = NULL,t_14 = NULL;
  t = SSLgetAnnotations(x_83);
  a_84 = t;
  t = SSL_is_string(v_83);
  d_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_84, w_83);
  t_14 = t;
  t = SSLsetAnnotations(t_14, a_84);
  if(match_cons(t, sym__2))
    {
      y_83 = ATgetArgument(t, 0);
      z_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_11(y_83, z_83, t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm f_84 = NULL,g_84 = NULL,h_84 = NULL;
  f_84 = t;
  if(match_cons(t, sym__2))
    {
      g_84 = ATgetArgument(t, 0);
      h_84 = ATgetArgument(t, 1);
      {
        ATerm f_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_84(f_84, t);
            LocalPopChoice(g_29);
          }
        else
          {
            t = f_29;
            {
              ATerm h_29 = t;
              int i_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_84(g_84, h_84, f_84, t);
                  LocalPopChoice(i_29);
                }
              else
                {
                  t = h_29;
                  t = k_84(g_84, h_84, f_84, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_84(f_84, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_84 = NULL,n_84 = NULL,o_84 = NULL,t_84 = NULL;
  t_84 = t;
  {
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_84, term_l_29);
        t = v_11(t);
        LocalPopChoice(k_29);
      }
    else
      {
        t = j_29;
        {
          ATerm x_6 = NULL,y_6 = NULL;
          t = term_m_29;
          y_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_29, t_84);
          t = t_11(y_6, t_84, t);
          x_6 = t;
          t = SSL_perror(x_6);
          _fail(t);
        }
      }
  }
  n_84 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_11(o_84, t);
  m_84 = t;
  t = n_84;
  t = fclose_0_0(t);
  t = m_84;
  return(t);
}
ATerm input_1_0 (ATerm k_130 (ATerm), ATerm t)
{
  ATerm n_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_84 = NULL,x_84 = NULL;
      t = term_m_28;
      w_84 = t;
      t = term_p_29;
      x_84 = t;
      t = term_q_29;
      t = z_11(w_84, x_84, t);
      LocalPopChoice(o_29);
    }
  else
    {
      t = n_29;
      t = term_r_29;
    }
  t = ReadFromFile_0_0(t);
  t = k_130(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL;
  y_84 = t;
  t = term_s_29;
  t = whoami_0_0(t);
  z_84 = t;
  t = term_t_29;
  b_85 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_29), z_84), term_u_29);
  c_85 = t;
  t = SSL_printnl(b_85, c_85);
  t = term_w_29;
  a_85 = t;
  t = SSL_exit(a_85);
  t = y_84;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm e_85 = NULL;
  e_85 = t;
  if(match_string(t, "-k"))
    {
      t = e_85;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_85;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm f_85 = NULL,g_85 = NULL,h_85 = NULL;
  f_85 = t;
  t = SSL_string_to_int(f_85);
  g_85 = t;
  t = term_x_29;
  h_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_29, g_85);
  t = c_12(h_85, g_85, t);
  t = f_85;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_z_29;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_2, x_2, y_2, t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm j_85 = NULL;
  j_85 = t;
  if(match_string(t, "-S"))
    {
      t = j_85;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_85;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm k_85 = NULL,l_85 = NULL;
  t = term_a_30;
  k_85 = t;
  t = term_b_30;
  l_85 = t;
  t = term_c_30;
  t = c_12(k_85, l_85, t);
  t = term_d_30;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_e_30;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm m_85 = NULL,n_85 = NULL,o_85 = NULL;
  m_85 = t;
  t = SSL_string_to_int(m_85);
  n_85 = t;
  t = term_a_30;
  o_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_30, n_85);
  t = c_12(o_85, n_85, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_85);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_f_30;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm p_85 = NULL,q_85 = NULL;
  t = term_g_30;
  p_85 = t;
  t = term_s_29;
  q_85 = t;
  t = term_h_30;
  t = c_12(p_85, q_85, t);
  t = term_i_30;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_j_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_3, b_3, c_3, t);
      LocalPopChoice(l_30);
    }
  else
    {
      t = k_30;
      {
        ATerm m_30 = t;
        int o_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_3, e_3, f_3, t);
            LocalPopChoice(o_30);
          }
        else
          {
            t = m_30;
            t = Option_3_0(g_3, i_3, j_3, t);
          }
      }
    }
  return(t);
}
static ATerm c_12 (ATerm q_47, ATerm r_47, ATerm t)
{
  ATerm r_85 = NULL;
  t = term_m_28;
  r_85 = t;
  t = SSL_table_put(r_85, q_47, r_47);
  t = (ATerm) ATmakeAppl(sym__3, term_m_28, q_47, r_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm u_85 = NULL,w_85 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_85 = NULL,z_85 = NULL,a_86 = NULL;
      t = term_s_29;
      t = e_0(t);
      x_85 = t;
      t = term_p_30;
      z_85 = t;
      t = term_q_30;
      a_86 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_30, term_q_30, x_85);
      t = a_12(z_85, a_86, x_85, t);
      _fail(t);
    }
  else
    {
      ATerm d_86 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_85 = ATgetFirst((ATermList) t);
          w_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_85;
      t = c_0(t);
      t = term_s_29;
      t = d_0(t);
      d_86 = t;
      t = (ATerm) ATinsert(CheckATermList(w_85), d_86);
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm f_86 = NULL;
  f_86 = t;
  if(match_string(t, "-o"))
    {
      t = f_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_86;
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm g_86 = NULL,h_86 = NULL;
  g_86 = t;
  t = term_n_28;
  h_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_28, g_86);
  t = c_12(h_86, g_86, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_86);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_r_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_3, m_3, n_3, t);
  return(t);
}
static ATerm a_12 (ATerm u_52, ATerm v_52, ATerm t_52, ATerm t)
{
  ATerm j_86 = NULL,k_86 = NULL,l_86 = NULL;
  j_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_52, v_52);
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_30 = ATgetArgument(t, 0);
            ATerm v_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_52, v_52);
        t = z_11(u_52, v_52, t);
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        t = (ATerm) ATempty;
      }
  }
  k_86 = t;
  t = (ATerm) ATinsert(CheckATermList(k_86), t_52);
  l_86 = t;
  t = SSL_table_put(u_52, v_52, l_86);
  t = j_86;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm s_86 = NULL,t_86 = NULL,u_86 = NULL,v_86 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_86 = NULL,x_86 = NULL,y_86 = NULL;
      t = term_s_29;
      t = n_0(t);
      w_86 = t;
      t = term_p_30;
      x_86 = t;
      t = term_q_30;
      y_86 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_30, term_q_30, w_86);
      t = a_12(x_86, y_86, w_86, t);
      _fail(t);
    }
  else
    {
      ATerm c_87 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_86 = ATgetFirst((ATermList) t);
          t_86 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_86;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_86 = ATgetFirst((ATermList) t);
          v_86 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_86;
      t = k_0(t);
      t = u_86;
      t = l_0(t);
      c_87 = t;
      t = (ATerm) ATinsert(CheckATermList(v_86), c_87);
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm e_87 = NULL;
  e_87 = t;
  if(match_string(t, "-i"))
    {
      t = e_87;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_87;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm f_87 = NULL,g_87 = NULL;
  f_87 = t;
  t = term_p_29;
  g_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_29, f_87);
  t = c_12(g_87, f_87, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_87);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_x_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_3, p_3, q_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_29;
  t = whoami_0_0(t);
  h_87 = t;
  t = term_t_29;
  j_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_30), h_87);
  k_87 = t;
  t = SSL_printnl(j_87, k_87);
  t = term_w_29;
  i_87 = t;
  t = SSL_exit(i_87);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm l_87 = NULL,m_87 = NULL;
  t = term_m_28;
  l_87 = t;
  t = term_z_30;
  m_87 = t;
  t = term_a_31;
  t = z_11(l_87, m_87, t);
  return(t);
}
static ATerm w_11 (ATerm c_50, ATerm d_50, ATerm t)
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_50, d_50);
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
      t = SSL_addr(c_50, d_50);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm t)
{
  ATerm o_87 = NULL,p_87 = NULL,q_87 = NULL;
  o_87 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_87;
      t = i_122(t);
    }
  else
    {
      ATerm t_87 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_87 = ATgetFirst((ATermList) t);
          q_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_87;
      t = foldr_2_0(i_122, j_122, t);
      t_87 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_87, t_87);
      t = j_122(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_b_30;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL;
  if(match_cons(t, sym__2))
    {
      e_7 = ATgetArgument(t, 0);
      f_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_11(e_7, f_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_87 = NULL,a_7 = NULL,b_7 = NULL;
  t = times_0_0(t);
  b_7 = t;
  t = SSL_explode_term(b_7);
  if(match_cons(t, sym__2))
    {
      ATerm d_31 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7;
  t = foldr_2_0(r_3, t_3, t);
  x_87 = t;
  t = SSL_TicksToSeconds(x_87);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_88 = NULL,j_88 = NULL,k_88 = NULL;
  i_88 = t;
  if(match_cons(t, sym__2))
    {
      j_88 = ATgetArgument(t, 0);
      k_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_31 = t;
    int f_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_88;
        if((j_88 != t))
          {
            _fail(t);
          }
        t = i_88;
        LocalPopChoice(f_31);
      }
    else
      {
        t = e_31;
        t = (ATerm) ATmakeAppl(sym__2, j_88, k_88);
        {
          ATerm g_31 = t;
          int h_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_88, k_88);
              LocalPopChoice(h_31);
            }
          else
            {
              t = g_31;
              t = SSL_gtr(j_88, k_88);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_88, k_88);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_115 (ATerm), ATerm t)
{
  ATerm q_88 = NULL;
  q_88 = t;
  {
    ATerm i_31 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_88 = NULL,t_88 = NULL,u_88 = NULL;
        t = term_m_28;
        t_88 = t;
        t = term_a_30;
        u_88 = t;
        t = term_k_31;
        t = z_11(t_88, u_88, t);
        s_88 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_88, term_w_29);
        t = geq_0_0(t);
        t = q_88;
        t = j_115(t);
        LocalPopChoice(j_31);
      }
    else
      {
        t = i_31;
        t = q_88;
      }
  }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm w_88 = NULL,x_88 = NULL,z_88 = NULL,a_89 = NULL;
  t = run_time_0_0(t);
  w_88 = t;
  t = term_s_29;
  t = whoami_0_0(t);
  x_88 = t;
  t = term_t_29;
  z_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_31), w_88), term_l_31), x_88);
  a_89 = t;
  t = SSL_printnl(z_88, a_89);
  t = (ATerm) ATmakeAppl(sym__2, term_t_29, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_31), w_88), term_l_31), x_88));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_89 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_30;
  b_89 = t;
  t = SSL_exit(b_89);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm l_89 = NULL,m_89 = NULL;
  m_89 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = m_89;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          l_89 = ATgetArgument(t, 0);
          {
            ATerm c_8 = NULL,e_15 = NULL;
            t = SSLgetAnnotations(m_89);
            c_8 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, l_89);
            e_15 = t;
            t = SSLsetAnnotations(e_15, c_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = m_89;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_130 (ATerm), ATerm t)
{
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_89 = NULL,f_89 = NULL;
      t = term_m_28;
      e_89 = t;
      t = term_p_31;
      f_89 = t;
      t = term_q_31;
      t = z_11(e_89, f_89, t);
      LocalPopChoice(o_31);
    }
  else
    {
      t = n_31;
      t = fetch_1_0(w_3, t);
    }
  t = a_130(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm p_89 = NULL,q_89 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_89 = ATgetFirst((ATermList) t);
      q_89 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_89 = NULL,v_89 = NULL;
        static ATerm x_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_89)), not_null(v_89));
          return(t);
        }
        t = q_89;
        t = i_0(t);
        if(((u_89 != NULL) && (u_89 != t)))
          _fail(t);
        else
          u_89 = t;
        t = p_89;
        t = g_0(t);
        if(((v_89 != NULL) && (v_89 != t)))
          _fail(t);
        else
          v_89 = t;
        t = q_89;
        t = reverse_acc_2_0(g_0, x_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_29;
      t = i_0(t);
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm b_90 = NULL,c_90 = NULL,d_90 = NULL,r_15 = NULL;
  d_90 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_90);
  b_90 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_90);
  r_15 = t;
  t = SSLsetAnnotations(r_15, b_90);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm f_90 = NULL;
  f_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_90), term_s_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_89 = NULL,y_89 = NULL;
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_89 = NULL,a_90 = NULL;
      t = term_m_28;
      z_89 = t;
      t = term_z_30;
      a_90 = t;
      t = term_a_31;
      t = z_11(z_89, a_90, t);
      LocalPopChoice(u_31);
    }
  else
    {
      t = t_31;
      t = fetch_1_0(y_3, t);
    }
  t = term_v_31;
  t = echo_0_0(t);
  t = term_p_30;
  x_89 = t;
  t = term_q_30;
  y_89 = t;
  t = term_w_31;
  t = z_11(x_89, y_89, t);
  t = reverse_acc_2_0(_id, z_3, t);
  t = map_1_0(a_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm c_124 (ATerm), ATerm t)
{
  static ATerm c_91 (ATerm t)
  {
    ATerm z_90 = NULL,a_91 = NULL,b_91 = NULL;
    z_90 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_91 = ATgetFirst((ATermList) t);
        b_91 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_31 = t;
      int y_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_8 = NULL,u_8 = NULL,t_15 = NULL;
          t = SSLgetAnnotations(z_90);
          q_8 = t;
          t = a_91;
          t = c_124(t);
          u_8 = t;
          t = (ATerm) ATinsert(CheckATermList(b_91), u_8);
          t_15 = t;
          t = SSLsetAnnotations(t_15, q_8);
          LocalPopChoice(y_31);
        }
      else
        {
          t = x_31;
          {
            ATerm c_9 = NULL,f_9 = NULL,u_15 = NULL;
            t = SSLgetAnnotations(z_90);
            c_9 = t;
            t = b_91;
            t = c_91(t);
            f_9 = t;
            t = (ATerm) ATinsert(CheckATermList(f_9), a_91);
            u_15 = t;
            t = SSLsetAnnotations(u_15, c_9);
          }
        }
    }
    return(t);
  }
  t = c_91(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_91 = NULL,h_91 = NULL,i_91 = NULL;
  g_91 = t;
  {
    ATerm z_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_91;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_32 = ATgetFirst((ATermList) t);
                ATerm c_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_91;
          }
        LocalPopChoice(a_32);
      }
    else
      {
        t = z_31;
        t = (ATerm) ATinsert(ATempty, g_91);
      }
  }
  h_91 = t;
  t = term_p_28;
  i_91 = t;
  t = SSL_printnl(i_91, h_91);
  t = g_91;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm m_91 = NULL,n_91 = NULL;
  t = term_m_28;
  m_91 = t;
  t = term_z_30;
  n_91 = t;
  t = term_a_31;
  t = z_11(m_91, n_91, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm z_11 (ATerm l_54, ATerm m_54, ATerm t)
{
  t = SSL_table_get(l_54, m_54);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm o_91 = NULL,p_91 = NULL;
  t = term_d_32;
  o_91 = t;
  t = term_s_29;
  p_91 = t;
  t = term_e_32;
  t = c_12(o_91, p_91, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_f_32;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm q_91 = NULL,r_91 = NULL,s_91 = NULL,t_91 = NULL;
  t = term_d_32;
  s_91 = t;
  t = term_s_29;
  t_91 = t;
  t = term_e_32;
  t = c_12(s_91, t_91, t);
  t = term_g_32;
  q_91 = t;
  t = term_s_29;
  r_91 = t;
  t = term_i_32;
  t = c_12(q_91, r_91, t);
  t = term_j_32;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_4, c_4, d_4, t);
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      t = Option_3_0(f_4, g_4, h_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm t)
{
  ATerm u_91 = NULL,v_91 = NULL,w_91 = NULL,x_91 = NULL,y_91 = NULL,z_91 = NULL,g_16 = NULL;
  z_91 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_91 = ATgetFirst((ATermList) t);
      w_91 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_91);
  u_91 = t;
  t = v_91;
  t = l_88(t);
  x_91 = t;
  t = w_91;
  t = m_88(t);
  y_91 = t;
  t = (ATerm) ATinsert(CheckATermList(y_91), x_91);
  g_16 = t;
  t = SSLsetAnnotations(g_16, u_91);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_132 (ATerm), ATerm t)
{
  ATerm e_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL,k_92 = NULL,l_92 = NULL,n_16 = NULL;
  e_92 = t;
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_32;
        t = d_132(t);
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
      }
  }
  t = e_92;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_92 = ATgetFirst((ATermList) t);
      h_92 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_92);
  f_92 = t;
  t = term_z_30;
  l_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_30, g_92);
  t = c_12(l_92, g_92, t);
  t = h_92;
  {
    static ATerm v_92 (ATerm t)
    {
      ATerm q_32 = t;
      int r_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_32 = t;
          int t_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_92 = NULL;
              o_92 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_92;
              LocalPopChoice(t_32);
            }
          else
            {
              t = s_32;
              t = d_132(t);
              t = Cons_2_0(_id, v_92, t);
            }
          LocalPopChoice(r_32);
        }
      else
        {
          t = q_32;
          {
            ATerm r_92 = NULL,s_92 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_92 = ATgetFirst((ATermList) t);
                s_92 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_92), (ATerm) ATmakeAppl(sym_Undefined_1, r_92));
          }
        }
      return(t);
    }
    t = v_92(t);
  }
  k_92 = t;
  t = (ATerm) ATinsert(CheckATermList(k_92), (ATerm) ATmakeAppl(sym_Program_1, g_92));
  n_16 = t;
  t = SSLsetAnnotations(n_16, f_92);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm h_93 = NULL;
  h_93 = t;
  if(match_string(t, "--help"))
    {
      t = h_93;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_93;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_93;
        }
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm i_93 = NULL,j_93 = NULL;
  t = term_p_31;
  i_93 = t;
  t = term_s_29;
  j_93 = t;
  t = term_u_32;
  t = c_12(i_93, j_93, t);
  t = term_v_32;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_w_32;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_132 (ATerm), ATerm t)
{
  ATerm a_93 = NULL,b_93 = NULL,c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL,g_93 = NULL;
  c_93 = t;
  t = term_p_30;
  e_93 = t;
  t = term_q_30;
  f_93 = t;
  t = (ATerm) ATempty;
  g_93 = t;
  t = SSL_table_put(e_93, f_93, g_93);
  t = c_93;
  {
    static ATerm j_4 (ATerm t)
    {
      ATerm x_32 = t;
      int y_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_132(t);
          LocalPopChoice(y_32);
        }
      else
        {
          t = x_32;
          {
            ATerm z_32 = t;
            int a_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_4, l_4, m_4, t);
                LocalPopChoice(a_33);
              }
            else
              {
                t = z_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_4, t);
  }
  {
    ATerm b_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_93 = NULL;
        u_93 = t;
        {
          ATerm d_33 = t;
          int e_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_9 = NULL;
              t = u_93;
              {
                ATerm f_33 = t;
                int g_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_9 = NULL,q_9 = NULL;
                    t = term_m_28;
                    p_9 = t;
                    t = term_p_31;
                    q_9 = t;
                    t = term_q_31;
                    t = z_11(p_9, q_9, t);
                    LocalPopChoice(g_33);
                  }
                else
                  {
                    t = f_33;
                    t = fetch_1_0(n_4, t);
                  }
              }
              t = u_93;
              t = default_system_usage_0_0(t);
              t = term_b_30;
              o_9 = t;
              t = SSL_exit(o_9);
              LocalPopChoice(e_33);
            }
          else
            {
              t = d_33;
              {
                ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
                t = term_m_28;
                w_9 = t;
                t = term_d_32;
                x_9 = t;
                t = term_h_33;
                t = z_11(w_9, x_9, t);
                t = u_93;
                t = default_system_about_0_0(t);
                t = term_b_30;
                v_9 = t;
                t = SSL_exit(v_9);
              }
            }
        }
        LocalPopChoice(c_33);
      }
    else
      {
        t = b_33;
        {
          ATerm i_33 = t;
          int j_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_93 = NULL,w_93 = NULL,x_93 = NULL;
              static ATerm o_4 (ATerm t)
              {
                ATerm y_93 = NULL,z_93 = NULL,a_94 = NULL,p_16 = NULL;
                a_94 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_93 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_94);
                y_93 = t;
                t = z_93;
                if(((a_93 != NULL) && (a_93 != t)))
                  _fail(t);
                else
                  a_93 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_93);
                p_16 = t;
                t = SSLsetAnnotations(p_16, y_93);
                return(t);
              }
              t = fetch_1_0(o_4, t);
              t = term_t_29;
              w_93 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_93)), term_k_33);
              x_93 = t;
              t = SSL_printnl(w_93, x_93);
              t = (ATerm) ATmakeAppl(sym__2, term_t_29, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_93)), term_k_33));
              t = default_system_usage_0_0(t);
              t = term_w_29;
              v_93 = t;
              t = SSL_exit(v_93);
              LocalPopChoice(j_33);
            }
          else
            {
              t = i_33;
            }
        }
      }
  }
  b_93 = t;
  t = term_p_30;
  d_93 = t;
  t = SSL_table_destroy(d_93);
  t = b_93;
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm t)
{
  ATerm f_94 = NULL,g_94 = NULL,h_94 = NULL,i_94 = NULL;
  t = parse_options_1_0(c_130, t);
  f_94 = t;
  t = term_l_33;
  i_94 = t;
  t = SSL_table_create(i_94);
  t = term_l_33;
  g_94 = t;
  t = term_n_33;
  h_94 = t;
  t = SSL_table_put(g_94, h_94, f_94);
  t = f_94;
  t = e_130(t);
  {
    ATerm o_33 = t;
    int p_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_130, t);
        LocalPopChoice(p_33);
      }
    else
      {
        t = o_33;
        {
          ATerm q_33 = t;
          int r_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_130(t);
              t = report_success_0_0(t);
              LocalPopChoice(r_33);
            }
          else
            {
              t = q_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm s_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(u_33);
    }
  else
    {
      t = s_33;
      {
        ATerm v_33 = t;
        int w_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(w_33);
          }
        else
          {
            t = v_33;
            {
              ATerm x_33 = t;
              int y_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(w_4, x_4, y_4, t);
                  LocalPopChoice(y_33);
                }
              else
                {
                  t = x_33;
                  {
                    ATerm a_34 = t;
                    int b_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(b_34);
                      }
                    else
                      {
                        t = a_34;
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
static ATerm s_4 (ATerm t)
{
  t = input_1_0(d_5, t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm n_94 = NULL,o_94 = NULL;
  t = term_t_28;
  n_94 = t;
  t = term_s_29;
  o_94 = t;
  t = term_c_34;
  t = c_12(n_94, o_94, t);
  t = term_d_34;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_e_34;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = output_1_0(e_5, t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm q_94 = NULL,r_94 = NULL,s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL,w_94 = NULL,x_94 = NULL,y_94 = NULL,z_94 = NULL,a_95 = NULL,b_95 = NULL,c_95 = NULL,d_95 = NULL,e_95 = NULL,i_17 = NULL,d_17 = NULL,c_17 = NULL,s_16 = NULL;
  e_95 = t;
  if(match_cons(t, sym_Specification_1))
    {
      r_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_95);
  q_94 = t;
  t = r_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_94 = ATgetFirst((ATermList) t);
      u_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_94);
  s_94 = t;
  t = u_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_94 = ATgetFirst((ATermList) t);
      y_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_94);
  w_94 = t;
  t = x_94;
  if(match_cons(t, sym_Strategies_1))
    {
      b_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_94);
  a_95 = t;
  t = b_95;
  t = map_1_0(f_5, t);
  c_95 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, c_95);
  s_16 = t;
  t = SSLsetAnnotations(s_16, a_95);
  d_95 = t;
  t = y_94;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_94), d_95);
  c_17 = t;
  t = SSLsetAnnotations(c_17, w_94);
  z_94 = t;
  t = (ATerm) ATinsert(CheckATermList(z_94), t_94);
  d_17 = t;
  t = SSLsetAnnotations(d_17, s_94);
  v_94 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, v_94);
  i_17 = t;
  t = SSLsetAnnotations(i_17, q_94);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm s_95 = NULL,t_95 = NULL,u_95 = NULL,v_95 = NULL,w_95 = NULL;
  w_95 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      s_95 = ATgetArgument(t, 0);
      t_95 = ATgetArgument(t, 1);
      u_95 = ATgetArgument(t, 2);
      v_95 = ATgetArgument(t, 3);
      {
        ATerm f_34 = t;
        int g_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_13 = NULL,x_13 = NULL,r_16 = NULL;
            t = SSLgetAnnotations(w_95);
            r_13 = t;
            t = v_95;
            t = define_congruences_0_0(t);
            x_13 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, s_95, t_95, u_95, x_13);
            r_16 = t;
            t = SSLsetAnnotations(r_16, r_13);
            LocalPopChoice(g_34);
          }
        else
          {
            t = f_34;
            t = w_95;
          }
      }
    }
  else
    {
      t = w_95;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(q_4, default_usage_0_0, _id, s_4, t);
  return(t);
}
