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
Symbol sym_Prefix_2;
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
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_r_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_w_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_j_31;
ATerm term_h_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_j_29;
ATerm term_g_29;
ATerm term_c_29;
ATerm term_n_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_g_28;
ATerm term_d_28;
ATerm term_w_27;
ATerm term_s_27;
ATerm term_u_26;
ATerm term_w_22;
ATerm term_v_6;
ATerm term_o_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym__2, term_t_29, term_u_29);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_29);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym__2, term_z_29, term_m_29);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym__2, term_i_30, term_j_30);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym__2, term_g_32, term_m_29);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym__2, term_j_32, term_m_29);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym__2, term_h_31, term_m_29);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_m_29);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
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
ATerm topdown_1_0 (ATerm v_96 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
static ATerm b_5 (ATerm v_71, ATerm u_71, ATerm t);
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
ATerm oncetd_1_0 (ATerm z_97 (ATerm), ATerm t);
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
static ATerm q_11 (ATerm w_70, ATerm c_71, ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm j_117 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm a_74 (ATerm f_73, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm u_11 (ATerm h_71, ATerm p_71, ATerm o_71, ATerm t);
ATerm pat_td_1_0 (ATerm b_95 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm MatchingCongruence_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm l_106 (ATerm), ATerm m_106 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm w_96 (ATerm), ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm define_congruences_0_0 (ATerm t);
ATerm map_1_0 (ATerm t_116 (ATerm), ATerm t);
static ATerm v_11 (ATerm d_43, ATerm e_43, ATerm t);
static ATerm w_11 (ATerm i_48, ATerm j_48, ATerm t);
static ATerm y_11 (ATerm z_110 (ATerm), ATerm b_419, ATerm m_48, ATerm t);
static ATerm x_11 (ATerm e_48, ATerm f_48, ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm output_1_0 (ATerm d_123 (ATerm), ATerm t);
static ATerm i_82 (ATerm c_82, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm z_11 (ATerm k_48, ATerm t);
static ATerm a_12 (ATerm f_43, ATerm g_43, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_83 (ATerm t_82, ATerm t);
static ATerm v_83 (ATerm x_82, ATerm y_82, ATerm z_82, ATerm t);
static ATerm w_83 (ATerm h_83, ATerm i_83, ATerm j_83, ATerm t);
static ATerm b_12 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm e_123 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm j_12 (ATerm x_46, ATerm y_46, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm h_12 (ATerm i_51, ATerm j_51, ATerm h_51, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm c_12 (ATerm m_49, ATerm n_49, ATerm t);
ATerm foldr_2_0 (ATerm j_115 (ATerm), ATerm k_115 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_108 (ATerm), ATerm t);
static ATerm w_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm need_help_1_0 (ATerm u_122 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm d_117 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm f_12 (ATerm w_41, ATerm x_41, ATerm t);
ATerm debug_1_0 (ATerm x_110 (ATerm), ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm g_12 (ATerm z_52, ATerm a_53, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm x_124 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm parse_options_1_0 (ATerm w_124 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm w_122 (ATerm), ATerm x_122 (ATerm), ATerm y_122 (ATerm), ATerm z_122 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
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
      ATerm q_5 = ATgetArgument(t, 0);
      if(((ATgetType(q_5) != AT_LIST) || !(ATisEmpty(q_5))))
        _fail(t);
      {
        ATerm r_5 = ATgetArgument(t, 1);
        if(((ATgetType(r_5) != AT_LIST) || !(ATisEmpty(r_5))))
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
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_5 = ATgetArgument(t, 0);
      if(((ATgetType(s_5) == AT_LIST) && !(ATisEmpty(s_5))))
        {
          d_15 = ATgetFirst((ATermList) s_5);
          e_15 = (ATerm) ATgetNext((ATermList) s_5);
        }
      else
        _fail(t);
      {
        ATerm u_5 = ATgetArgument(t, 1);
        if(((ATgetType(u_5) == AT_LIST) && !(ATisEmpty(u_5))))
          {
            f_15 = ATgetFirst((ATermList) u_5);
            g_15 = (ATerm) ATgetNext((ATermList) u_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_15, f_15), (ATerm) ATmakeAppl(sym__2, e_15, g_15));
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL;
  if(match_cons(t, sym__2))
    {
      h_15 = ATgetArgument(t, 0);
      i_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_15), h_15);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL;
  if(match_cons(t, sym__2))
    {
      j_15 = ATgetArgument(t, 0);
      k_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_15), (ATerm) ATmakeAppl(sym_Match_1, k_15));
  return(t);
}
static ATerm o_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_5 = ATgetArgument(t, 0);
      if(((ATgetType(v_5) != AT_LIST) || !(ATisEmpty(v_5))))
        _fail(t);
      {
        ATerm w_5 = ATgetArgument(t, 1);
        if(((ATgetType(w_5) != AT_LIST) || !(ATisEmpty(w_5))))
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
  ATerm w_23 = NULL,x_23 = NULL,a_24 = NULL,b_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_5 = ATgetArgument(t, 0);
      if(((ATgetType(x_5) == AT_LIST) && !(ATisEmpty(x_5))))
        {
          w_23 = ATgetFirst((ATermList) x_5);
          x_23 = (ATerm) ATgetNext((ATermList) x_5);
        }
      else
        _fail(t);
      {
        ATerm y_5 = ATgetArgument(t, 1);
        if(((ATgetType(y_5) == AT_LIST) && !(ATisEmpty(y_5))))
          {
            a_24 = ATgetFirst((ATermList) y_5);
            b_24 = (ATerm) ATgetNext((ATermList) y_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_23, a_24), (ATerm) ATmakeAppl(sym__2, x_23, b_24));
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL;
  if(match_cons(t, sym__2))
    {
      c_24 = ATgetArgument(t, 0);
      d_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_24), c_24);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm e_24 = NULL,g_24 = NULL;
  if(match_cons(t, sym__2))
    {
      e_24 = ATgetArgument(t, 0);
      g_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_24), (ATerm) ATmakeAppl(sym_Match_1, g_24));
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm z_5 = t;
  int a_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm b_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(a_6);
      {
        ATerm n_41 = NULL,o_41 = NULL;
        n_41 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm d_6 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        o_41 = t;
        t = SSLgetAnnotations(n_41);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_6 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) e_6) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_6 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(g_6) != AT_LIST) || !(ATisEmpty(g_6))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = o_41;
      }
    }
  else
    {
      t = z_5;
      {
        ATerm h_6 = t;
        int i_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm j_6 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) j_6) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm k_6 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(i_6);
            _fail(t);
          }
        else
          {
            t = h_6;
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
    ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,p_5 = NULL,n_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,a_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL;
    q_8 = t;
    if(match_cons(t, sym_Test_1))
      {
        p_8 = ATgetArgument(t, 0);
        t = p_8;
        if(match_cons(t, sym_Id_0))
          {
            ATerm l_6 = t;
            int m_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_o_6;
                t = a_0(t);
                LocalPopChoice(m_6);
              }
            else
              {
                t = l_6;
                {
                  ATerm p_6 = t;
                  int s_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_8 = NULL,a_9 = NULL,n_9 = NULL,p_9 = NULL,a_10 = NULL,j_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL;
                      t = q_8;
                      t = new_0_0(t);
                      v_8 = t;
                      t = bottomup_1_0(a_0, t);
                      r_10 = t;
                      t = (ATerm) ATempty;
                      t = a_0(t);
                      s_10 = t;
                      t = (ATerm) ATinsert(CheckATermList(s_10), r_10);
                      t = a_0(t);
                      a_9 = t;
                      t = v_8;
                      t = bottomup_1_0(a_0, t);
                      q_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, q_10);
                      t = a_0(t);
                      p_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, p_10);
                      t = a_0(t);
                      p_9 = t;
                      t = p_8;
                      t = bottomup_1_0(a_0, t);
                      j_10 = t;
                      t = v_8;
                      t = bottomup_1_0(a_0, t);
                      o_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, o_10);
                      t = a_0(t);
                      n_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, n_10);
                      t = a_0(t);
                      m_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_10, m_10);
                      t = a_0(t);
                      a_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_9, a_10);
                      t = a_0(t);
                      n_9 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, a_9, n_9);
                      t = a_0(t);
                      LocalPopChoice(s_6);
                    }
                  else
                    {
                      t = p_6;
                      t = q_8;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm t_6 = t;
                int u_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_v_6;
                    t = a_0(t);
                    LocalPopChoice(u_6);
                  }
                else
                  {
                    t = t_6;
                    {
                      ATerm w_6 = t;
                      int x_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL;
                          t = q_8;
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
                          t = p_8;
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
                          LocalPopChoice(x_6);
                        }
                      else
                        {
                          t = w_6;
                          t = q_8;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    i_8 = ATgetArgument(t, 0);
                    {
                      ATerm y_6 = t;
                      int z_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, i_8);
                          t = a_0(t);
                          LocalPopChoice(z_6);
                        }
                      else
                        {
                          t = y_6;
                          {
                            ATerm a_7 = t;
                            int b_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,d_12 = NULL,e_12 = NULL,i_12 = NULL,k_12 = NULL,l_12 = NULL;
                                t = q_8;
                                t = new_0_0(t);
                                l_11 = t;
                                t = bottomup_1_0(a_0, t);
                                k_12 = t;
                                t = (ATerm) ATempty;
                                t = a_0(t);
                                l_12 = t;
                                t = (ATerm) ATinsert(CheckATermList(l_12), k_12);
                                t = a_0(t);
                                m_11 = t;
                                t = l_11;
                                t = bottomup_1_0(a_0, t);
                                i_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, i_12);
                                t = a_0(t);
                                e_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, e_12);
                                t = a_0(t);
                                o_11 = t;
                                t = p_8;
                                t = bottomup_1_0(a_0, t);
                                r_11 = t;
                                t = l_11;
                                t = bottomup_1_0(a_0, t);
                                d_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, d_12);
                                t = a_0(t);
                                t_11 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, t_11);
                                t = a_0(t);
                                s_11 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, r_11, s_11);
                                t = a_0(t);
                                p_11 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, o_11, p_11);
                                t = a_0(t);
                                n_11 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, m_11, n_11);
                                t = a_0(t);
                                LocalPopChoice(b_7);
                              }
                            else
                              {
                                t = a_7;
                                t = q_8;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm f_7 = t;
                    int i_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
                        t = q_8;
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
                        t = p_8;
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
                        LocalPopChoice(i_7);
                      }
                    else
                      {
                        t = f_7;
                        t = q_8;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            p_8 = ATgetArgument(t, 0);
            t = p_8;
            if(match_cons(t, sym_Id_0))
              {
                ATerm j_7 = t;
                int k_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_v_6;
                    t = a_0(t);
                    LocalPopChoice(k_7);
                  }
                else
                  {
                    t = j_7;
                    t = q_8;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm l_7 = t;
                    int m_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_o_6;
                        t = a_0(t);
                        LocalPopChoice(m_7);
                      }
                    else
                      {
                        t = l_7;
                        t = q_8;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        i_8 = ATgetArgument(t, 0);
                        {
                          ATerm o_7 = t;
                          int p_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, i_8);
                              t = a_0(t);
                              LocalPopChoice(p_7);
                            }
                          else
                            {
                              t = o_7;
                              t = q_8;
                            }
                        }
                      }
                    else
                      {
                        t = q_8;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                p_8 = ATgetArgument(t, 0);
                o_8 = ATgetArgument(t, 1);
                t = o_8;
                if(match_cons(t, sym_Id_0))
                  {
                    t = p_8;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = o_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = p_8;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                i_8 = ATgetArgument(t, 0);
                                n_8 = ATgetArgument(t, 1);
                                t = p_8;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    i_8 = ATgetArgument(t, 0);
                                    n_8 = ATgetArgument(t, 1);
                                    t = p_8;
                                  }
                                else
                                  {
                                    t = p_8;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        g_8 = ATgetArgument(t, 0);
                        h_8 = ATgetArgument(t, 1);
                        t = g_8;
                        if(match_cons(t, sym_Match_1))
                          {
                            a_8 = ATgetArgument(t, 0);
                            t = a_8;
                            if(match_cons(t, sym_Op_2))
                              {
                                w_7 = ATgetArgument(t, 0);
                                n_7 = ATgetArgument(t, 1);
                                t = p_8;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm t_7 = t;
                                        int u_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_v_6;
                                            t = a_0(t);
                                            LocalPopChoice(u_7);
                                          }
                                        else
                                          {
                                            t = t_7;
                                            t = q_8;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            i_8 = ATgetArgument(t, 0);
                                            n_8 = ATgetArgument(t, 1);
                                            {
                                              ATerm y_7 = t;
                                              int z_7 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm o_14 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                  t = a_0(t);
                                                  o_14 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, o_14);
                                                  t = a_0(t);
                                                  LocalPopChoice(z_7);
                                                }
                                              else
                                                {
                                                  t = y_7;
                                                  t = q_8;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                i_8 = ATgetArgument(t, 0);
                                                t = i_8;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    x_7 = ATgetArgument(t, 0);
                                                    q_7 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm c_8 = t;
                                                      int d_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, x_7, w_7);
                                                          {
                                                            ATerm e_8 = t;
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
                                                                t = e_8;
                                                              }
                                                          }
                                                          t = term_v_6;
                                                          t = bottomup_1_0(a_0, t);
                                                          LocalPopChoice(d_8);
                                                        }
                                                      else
                                                        {
                                                          t = c_8;
                                                          {
                                                            ATerm f_8 = t;
                                                            int j_8 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm w_14 = NULL;
                                                                t = w_7;
                                                                if((x_7 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, q_7, n_7);
                                                                t = genzip_4_0(b_0, f_0, h_0, m_0, t);
                                                                w_14 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_14), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, x_7, q_7)), h_8));
                                                                t = bottomup_1_0(a_0, t);
                                                                LocalPopChoice(j_8);
                                                              }
                                                            else
                                                              {
                                                                t = f_8;
                                                                {
                                                                  ATerm k_8 = t;
                                                                  int l_8 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm p_15 = NULL;
                                                                      t = a_8;
                                                                      if((i_8 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, i_8);
                                                                      t = a_0(t);
                                                                      p_15 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_15, h_8);
                                                                      t = a_0(t);
                                                                      LocalPopChoice(l_8);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = k_8;
                                                                      t = q_8;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm r_8 = t;
                                                    int s_8 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm t_15 = NULL;
                                                        t = a_8;
                                                        if((i_8 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, i_8);
                                                        t = a_0(t);
                                                        t_15 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, t_15, h_8);
                                                        t = a_0(t);
                                                        LocalPopChoice(s_8);
                                                      }
                                                    else
                                                      {
                                                        t = r_8;
                                                        t = q_8;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    i_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm t_8 = t;
                                                      int w_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_15 = NULL;
                                                          t = a_8;
                                                          if((i_8 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, i_8);
                                                          t = a_0(t);
                                                          x_15 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_15, h_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(w_8);
                                                        }
                                                      else
                                                        {
                                                          t = t_8;
                                                          t = q_8;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_8 = ATgetArgument(t, 0);
                                                        n_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm x_8 = t;
                                                          int y_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_16 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                              t = a_0(t);
                                                              i_16 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_8, i_16);
                                                              t = a_0(t);
                                                              LocalPopChoice(y_8);
                                                            }
                                                          else
                                                            {
                                                              t = x_8;
                                                              t = q_8;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_8;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = p_8;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm z_8 = t;
                                        int b_9 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_v_6;
                                            t = a_0(t);
                                            LocalPopChoice(b_9);
                                          }
                                        else
                                          {
                                            t = z_8;
                                            t = q_8;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            i_8 = ATgetArgument(t, 0);
                                            n_8 = ATgetArgument(t, 1);
                                            {
                                              ATerm c_9 = t;
                                              int d_9 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm t_16 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                  t = a_0(t);
                                                  t_16 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, t_16);
                                                  t = a_0(t);
                                                  LocalPopChoice(d_9);
                                                }
                                              else
                                                {
                                                  t = c_9;
                                                  t = q_8;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                i_8 = ATgetArgument(t, 0);
                                                {
                                                  ATerm f_9 = t;
                                                  int g_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm d_17 = NULL;
                                                      t = a_8;
                                                      if((i_8 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, i_8);
                                                      t = a_0(t);
                                                      d_17 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_17, h_8);
                                                      t = a_0(t);
                                                      LocalPopChoice(g_9);
                                                    }
                                                  else
                                                    {
                                                      t = f_9;
                                                      t = q_8;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    i_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm i_9 = t;
                                                      int j_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm h_17 = NULL;
                                                          t = a_8;
                                                          if((i_8 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, i_8);
                                                          t = a_0(t);
                                                          h_17 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_17, h_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(j_9);
                                                        }
                                                      else
                                                        {
                                                          t = i_9;
                                                          t = q_8;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_8 = ATgetArgument(t, 0);
                                                        n_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm k_9 = t;
                                                          int l_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm o_17 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                              t = a_0(t);
                                                              o_17 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_8, o_17);
                                                              t = a_0(t);
                                                              LocalPopChoice(l_9);
                                                            }
                                                          else
                                                            {
                                                              t = k_9;
                                                              t = q_8;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_8;
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
                                a_8 = ATgetArgument(t, 0);
                                t = a_8;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    w_7 = ATgetArgument(t, 0);
                                    t = p_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm m_9 = t;
                                            int o_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_v_6;
                                                t = a_0(t);
                                                LocalPopChoice(o_9);
                                              }
                                            else
                                              {
                                                t = m_9;
                                                t = q_8;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_8 = ATgetArgument(t, 0);
                                                n_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm q_9 = t;
                                                  int r_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm z_17 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                      t = a_0(t);
                                                      z_17 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, z_17);
                                                      t = a_0(t);
                                                      LocalPopChoice(r_9);
                                                    }
                                                  else
                                                    {
                                                      t = q_9;
                                                      t = q_8;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm s_9 = t;
                                                int t_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm u_9 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(t_9);
                                                    {
                                                      ATerm v_9 = t;
                                                      int w_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm d_18 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, a_8);
                                                          t = a_0(t);
                                                          d_18 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_18, h_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(w_9);
                                                        }
                                                      else
                                                        {
                                                          t = v_9;
                                                          t = q_8;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = s_9;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        i_8 = ATgetArgument(t, 0);
                                                        t = i_8;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            x_7 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm x_9 = t;
                                                              int z_9 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm k_18 = NULL,n_18 = NULL;
                                                                  t = w_7;
                                                                  if((x_7 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, x_7);
                                                                  t = a_0(t);
                                                                  n_18 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, n_18);
                                                                  t = a_0(t);
                                                                  k_18 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, k_18, h_8);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(z_9);
                                                                }
                                                              else
                                                                {
                                                                  t = x_9;
                                                                  t = q_8;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = q_8;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            i_8 = ATgetArgument(t, 0);
                                                            n_8 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm b_10 = t;
                                                              int c_10 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm a_19 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                                  t = a_0(t);
                                                                  a_19 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, i_8, a_19);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(c_10);
                                                                }
                                                              else
                                                                {
                                                                  t = b_10;
                                                                  t = q_8;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = q_8;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = p_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm e_10 = t;
                                            int f_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_v_6;
                                                t = a_0(t);
                                                LocalPopChoice(f_10);
                                              }
                                            else
                                              {
                                                t = e_10;
                                                t = q_8;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_8 = ATgetArgument(t, 0);
                                                n_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm g_10 = t;
                                                  int h_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_19 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                      t = a_0(t);
                                                      o_19 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, o_19);
                                                      t = a_0(t);
                                                      LocalPopChoice(h_10);
                                                    }
                                                  else
                                                    {
                                                      t = g_10;
                                                      t = q_8;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm i_10 = t;
                                                int k_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm t_10 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(k_10);
                                                    {
                                                      ATerm u_10 = t;
                                                      int i_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm t_19 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, a_8);
                                                          t = a_0(t);
                                                          t_19 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_19, h_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(i_11);
                                                        }
                                                      else
                                                        {
                                                          t = u_10;
                                                          t = q_8;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = i_10;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_8 = ATgetArgument(t, 0);
                                                        n_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_11 = t;
                                                          int k_11 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                              t = a_0(t);
                                                              a_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_8, a_20);
                                                              t = a_0(t);
                                                              LocalPopChoice(k_11);
                                                            }
                                                          else
                                                            {
                                                              t = j_11;
                                                              t = q_8;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_8;
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
                                    a_8 = ATgetArgument(t, 0);
                                    r_7 = ATgetArgument(t, 1);
                                    s_7 = ATgetArgument(t, 2);
                                    t = p_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm m_12 = t;
                                            int n_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_v_6;
                                                t = a_0(t);
                                                LocalPopChoice(n_12);
                                              }
                                            else
                                              {
                                                t = m_12;
                                                t = q_8;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_8 = ATgetArgument(t, 0);
                                                n_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm b_13 = t;
                                                  int c_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm m_20 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                      t = a_0(t);
                                                      m_20 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, m_20);
                                                      t = a_0(t);
                                                      LocalPopChoice(c_13);
                                                    }
                                                  else
                                                    {
                                                      t = b_13;
                                                      t = q_8;
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
                                                          ATerm a_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, a_8, r_7, s_7);
                                                          t = a_0(t);
                                                          a_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_21, h_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(h_13);
                                                        }
                                                      else
                                                        {
                                                          t = g_13;
                                                          t = q_8;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = d_13;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_8 = ATgetArgument(t, 0);
                                                        n_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm i_13 = t;
                                                          int j_13 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_21 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                              t = a_0(t);
                                                              h_21 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_8, h_21);
                                                              t = a_0(t);
                                                              LocalPopChoice(j_13);
                                                            }
                                                          else
                                                            {
                                                              t = i_13;
                                                              t = q_8;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_8;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = p_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm k_13 = t;
                                            int l_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_v_6;
                                                t = a_0(t);
                                                LocalPopChoice(l_13);
                                              }
                                            else
                                              {
                                                t = k_13;
                                                t = q_8;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_8 = ATgetArgument(t, 0);
                                                n_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm m_13 = t;
                                                  int n_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm q_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                      t = a_0(t);
                                                      q_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, q_22);
                                                      t = a_0(t);
                                                      LocalPopChoice(n_13);
                                                    }
                                                  else
                                                    {
                                                      t = m_13;
                                                      t = q_8;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    i_8 = ATgetArgument(t, 0);
                                                    n_8 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm o_13 = t;
                                                      int p_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_22 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                          t = a_0(t);
                                                          x_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, i_8, x_22);
                                                          t = a_0(t);
                                                          LocalPopChoice(p_13);
                                                        }
                                                      else
                                                        {
                                                          t = o_13;
                                                          t = q_8;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = q_8;
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
                            g_8 = ATgetArgument(t, 0);
                            t = g_8;
                            if(match_cons(t, sym_Op_2))
                              {
                                a_8 = ATgetArgument(t, 0);
                                r_7 = ATgetArgument(t, 1);
                                t = p_8;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm q_13 = t;
                                        int r_13 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_v_6;
                                            t = a_0(t);
                                            LocalPopChoice(r_13);
                                          }
                                        else
                                          {
                                            t = q_13;
                                            t = q_8;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            i_8 = ATgetArgument(t, 0);
                                            n_8 = ATgetArgument(t, 1);
                                            {
                                              ATerm s_13 = t;
                                              int t_13 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm q_23 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                  t = a_0(t);
                                                  q_23 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, q_23);
                                                  t = a_0(t);
                                                  LocalPopChoice(t_13);
                                                }
                                              else
                                                {
                                                  t = s_13;
                                                  t = q_8;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                i_8 = ATgetArgument(t, 0);
                                                t = i_8;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    x_7 = ATgetArgument(t, 0);
                                                    q_7 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm u_13 = t;
                                                      int v_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, x_7, a_8);
                                                          {
                                                            ATerm w_13 = t;
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
                                                                t = w_13;
                                                              }
                                                          }
                                                          t = term_v_6;
                                                          t = bottomup_1_0(a_0, t);
                                                          LocalPopChoice(v_13);
                                                        }
                                                      else
                                                        {
                                                          t = u_13;
                                                          {
                                                            ATerm x_13 = t;
                                                            int y_13 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm v_23 = NULL;
                                                                t = a_8;
                                                                if((x_7 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, q_7, r_7);
                                                                t = genzip_4_0(o_0, p_0, q_0, r_0, t);
                                                                v_23 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_23), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, x_7, q_7)));
                                                                t = bottomup_1_0(a_0, t);
                                                                LocalPopChoice(y_13);
                                                              }
                                                            else
                                                              {
                                                                t = x_13;
                                                                {
                                                                  ATerm z_13 = t;
                                                                  int a_14 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = g_8;
                                                                      if((i_8 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, i_8);
                                                                      t = a_0(t);
                                                                      LocalPopChoice(a_14);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = z_13;
                                                                      t = q_8;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm b_14 = t;
                                                    int c_14 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = g_8;
                                                        if((i_8 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, i_8);
                                                        t = a_0(t);
                                                        LocalPopChoice(c_14);
                                                      }
                                                    else
                                                      {
                                                        t = b_14;
                                                        t = q_8;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    i_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm e_14 = t;
                                                      int f_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = g_8;
                                                          if((i_8 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, i_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(f_14);
                                                        }
                                                      else
                                                        {
                                                          t = e_14;
                                                          t = q_8;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_8 = ATgetArgument(t, 0);
                                                        n_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm g_14 = t;
                                                          int h_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_25 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                              t = a_0(t);
                                                              i_25 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_8, i_25);
                                                              t = a_0(t);
                                                              LocalPopChoice(h_14);
                                                            }
                                                          else
                                                            {
                                                              t = g_14;
                                                              t = q_8;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_8;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = p_8;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm i_14 = t;
                                        int j_14 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_v_6;
                                            t = a_0(t);
                                            LocalPopChoice(j_14);
                                          }
                                        else
                                          {
                                            t = i_14;
                                            t = q_8;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            i_8 = ATgetArgument(t, 0);
                                            n_8 = ATgetArgument(t, 1);
                                            {
                                              ATerm k_14 = t;
                                              int l_14 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm c_27 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                  t = a_0(t);
                                                  c_27 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, c_27);
                                                  t = a_0(t);
                                                  LocalPopChoice(l_14);
                                                }
                                              else
                                                {
                                                  t = k_14;
                                                  t = q_8;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                i_8 = ATgetArgument(t, 0);
                                                {
                                                  ATerm m_14 = t;
                                                  int n_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = g_8;
                                                      if((i_8 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, i_8);
                                                      t = a_0(t);
                                                      LocalPopChoice(n_14);
                                                    }
                                                  else
                                                    {
                                                      t = m_14;
                                                      t = q_8;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    i_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm p_14 = t;
                                                      int q_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = g_8;
                                                          if((i_8 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, i_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(q_14);
                                                        }
                                                      else
                                                        {
                                                          t = p_14;
                                                          t = q_8;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_8 = ATgetArgument(t, 0);
                                                        n_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm r_14 = t;
                                                          int s_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                              t = a_0(t);
                                                              u_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_8, u_27);
                                                              t = a_0(t);
                                                              LocalPopChoice(s_14);
                                                            }
                                                          else
                                                            {
                                                              t = r_14;
                                                              t = q_8;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_8;
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
                                g_8 = ATgetArgument(t, 0);
                                t = g_8;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    a_8 = ATgetArgument(t, 0);
                                    t = p_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm t_14 = t;
                                            int u_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_v_6;
                                                t = a_0(t);
                                                LocalPopChoice(u_14);
                                              }
                                            else
                                              {
                                                t = t_14;
                                                t = q_8;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_8 = ATgetArgument(t, 0);
                                                n_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm v_14 = t;
                                                  int x_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm z_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                      t = a_0(t);
                                                      z_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, z_28);
                                                      t = a_0(t);
                                                      LocalPopChoice(x_14);
                                                    }
                                                  else
                                                    {
                                                      t = v_14;
                                                      t = q_8;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm a_15 = t;
                                                int b_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm l_15 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(b_15);
                                                    {
                                                      ATerm n_15 = t;
                                                      int o_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, g_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(o_15);
                                                        }
                                                      else
                                                        {
                                                          t = n_15;
                                                          t = q_8;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = a_15;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        i_8 = ATgetArgument(t, 0);
                                                        t = i_8;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            x_7 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm q_15 = t;
                                                              int r_15 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm e_29 = NULL;
                                                                  t = a_8;
                                                                  if((x_7 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, x_7);
                                                                  t = a_0(t);
                                                                  e_29 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, e_29);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(r_15);
                                                                }
                                                              else
                                                                {
                                                                  t = q_15;
                                                                  t = q_8;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = q_8;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            i_8 = ATgetArgument(t, 0);
                                                            n_8 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm s_15 = t;
                                                              int u_15 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm k_29 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                                  t = a_0(t);
                                                                  k_29 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, i_8, k_29);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(u_15);
                                                                }
                                                              else
                                                                {
                                                                  t = s_15;
                                                                  t = q_8;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = q_8;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = p_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm v_15 = t;
                                            int w_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_v_6;
                                                t = a_0(t);
                                                LocalPopChoice(w_15);
                                              }
                                            else
                                              {
                                                t = v_15;
                                                t = q_8;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_8 = ATgetArgument(t, 0);
                                                n_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm y_15 = t;
                                                  int b_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm m_30 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                      t = a_0(t);
                                                      m_30 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, m_30);
                                                      t = a_0(t);
                                                      LocalPopChoice(b_16);
                                                    }
                                                  else
                                                    {
                                                      t = y_15;
                                                      t = q_8;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm c_16 = t;
                                                int e_16 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm f_16 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(e_16);
                                                    {
                                                      ATerm g_16 = t;
                                                      int h_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, g_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(h_16);
                                                        }
                                                      else
                                                        {
                                                          t = g_16;
                                                          t = q_8;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = c_16;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_8 = ATgetArgument(t, 0);
                                                        n_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_16 = t;
                                                          int k_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                              t = a_0(t);
                                                              u_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_8, u_30);
                                                              t = a_0(t);
                                                              LocalPopChoice(k_16);
                                                            }
                                                          else
                                                            {
                                                              t = j_16;
                                                              t = q_8;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_8;
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
                                    g_8 = ATgetArgument(t, 0);
                                    h_8 = ATgetArgument(t, 1);
                                    v_7 = ATgetArgument(t, 2);
                                    t = p_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm l_16 = t;
                                            int m_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_v_6;
                                                t = a_0(t);
                                                LocalPopChoice(m_16);
                                              }
                                            else
                                              {
                                                t = l_16;
                                                t = q_8;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_8 = ATgetArgument(t, 0);
                                                n_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm n_16 = t;
                                                  int p_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm i_31 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                      t = a_0(t);
                                                      i_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, i_31);
                                                      t = a_0(t);
                                                      LocalPopChoice(p_16);
                                                    }
                                                  else
                                                    {
                                                      t = n_16;
                                                      t = q_8;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm q_16 = t;
                                                int r_16 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm s_16 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(r_16);
                                                    {
                                                      ATerm u_16 = t;
                                                      int w_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, g_8, h_8, v_7);
                                                          t = a_0(t);
                                                          LocalPopChoice(w_16);
                                                        }
                                                      else
                                                        {
                                                          t = u_16;
                                                          t = q_8;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = q_16;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_8 = ATgetArgument(t, 0);
                                                        n_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_17 = t;
                                                          int b_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                              t = a_0(t);
                                                              b_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_8, b_32);
                                                              t = a_0(t);
                                                              LocalPopChoice(b_17);
                                                            }
                                                          else
                                                            {
                                                              t = a_17;
                                                              t = q_8;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_8;
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
                                        g_8 = ATgetArgument(t, 0);
                                        h_8 = ATgetArgument(t, 1);
                                        t = p_8;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = o_8;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm c_17 = t;
                                                int e_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_v_6;
                                                    t = a_0(t);
                                                    LocalPopChoice(e_17);
                                                  }
                                                else
                                                  {
                                                    t = c_17;
                                                    {
                                                      ATerm f_17 = t;
                                                      int g_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm f_33 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_8, h_8);
                                                          t = a_0(t);
                                                          f_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, g_8, f_33);
                                                          t = a_0(t);
                                                          LocalPopChoice(g_17);
                                                        }
                                                      else
                                                        {
                                                          t = f_17;
                                                          t = q_8;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    i_8 = ATgetArgument(t, 0);
                                                    n_8 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm i_17 = t;
                                                      int l_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm m_33 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                          t = a_0(t);
                                                          m_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, m_33);
                                                          t = a_0(t);
                                                          LocalPopChoice(l_17);
                                                        }
                                                      else
                                                        {
                                                          t = i_17;
                                                          {
                                                            ATerm m_17 = t;
                                                            int n_17 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm r_33 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_8, h_8);
                                                                t = a_0(t);
                                                                r_33 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, g_8, r_33);
                                                                t = a_0(t);
                                                                LocalPopChoice(n_17);
                                                              }
                                                            else
                                                              {
                                                                t = m_17;
                                                                t = q_8;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_8 = ATgetArgument(t, 0);
                                                        n_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm p_17 = t;
                                                          int q_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_8, h_8);
                                                              t = a_0(t);
                                                              g_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, g_8, g_34);
                                                              t = a_0(t);
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
                                                                    ATerm q_34 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                                    t = a_0(t);
                                                                    q_34 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, i_8, q_34);
                                                                    t = a_0(t);
                                                                    LocalPopChoice(s_17);
                                                                  }
                                                                else
                                                                  {
                                                                    t = r_17;
                                                                    t = q_8;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm t_17 = t;
                                                        int u_17 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm y_34 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, p_8, h_8);
                                                            t = a_0(t);
                                                            y_34 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, g_8, y_34);
                                                            t = a_0(t);
                                                            LocalPopChoice(u_17);
                                                          }
                                                        else
                                                          {
                                                            t = t_17;
                                                            t = q_8;
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
                                            g_8 = ATgetArgument(t, 0);
                                            h_8 = ATgetArgument(t, 1);
                                            t = p_8;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = o_8;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm v_17 = t;
                                                    int w_17 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_v_6;
                                                        t = a_0(t);
                                                        LocalPopChoice(w_17);
                                                      }
                                                    else
                                                      {
                                                        t = v_17;
                                                        {
                                                          ATerm x_17 = t;
                                                          int y_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm w_35 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_8, h_8);
                                                              t = a_0(t);
                                                              w_35 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_8, w_35);
                                                              t = a_0(t);
                                                              LocalPopChoice(y_17);
                                                            }
                                                          else
                                                            {
                                                              t = x_17;
                                                              t = q_8;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        i_8 = ATgetArgument(t, 0);
                                                        n_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_18 = t;
                                                          int b_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_36 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                              t = a_0(t);
                                                              f_36 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, f_36);
                                                              t = a_0(t);
                                                              LocalPopChoice(b_18);
                                                            }
                                                          else
                                                            {
                                                              t = a_18;
                                                              {
                                                                ATerm c_18 = t;
                                                                int e_18 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm k_36 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, p_8, h_8);
                                                                    t = a_0(t);
                                                                    k_36 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, g_8, k_36);
                                                                    t = a_0(t);
                                                                    LocalPopChoice(e_18);
                                                                  }
                                                                else
                                                                  {
                                                                    t = c_18;
                                                                    t = q_8;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            i_8 = ATgetArgument(t, 0);
                                                            n_8 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm f_18 = t;
                                                              int g_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm q_36 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_8, h_8);
                                                                  t = a_0(t);
                                                                  q_36 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, g_8, q_36);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(g_18);
                                                                }
                                                              else
                                                                {
                                                                  t = f_18;
                                                                  {
                                                                    ATerm h_18 = t;
                                                                    int i_18 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm w_36 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                                        t = a_0(t);
                                                                        w_36 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, i_8, w_36);
                                                                        t = a_0(t);
                                                                        LocalPopChoice(i_18);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = h_18;
                                                                        t = q_8;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm j_18 = t;
                                                            int l_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm b_37 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_8, h_8);
                                                                t = a_0(t);
                                                                b_37 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, g_8, b_37);
                                                                t = a_0(t);
                                                                LocalPopChoice(l_18);
                                                              }
                                                            else
                                                              {
                                                                t = j_18;
                                                                t = q_8;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = p_8;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = o_8;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm m_18 = t;
                                                    int o_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_v_6;
                                                        t = a_0(t);
                                                        LocalPopChoice(o_18);
                                                      }
                                                    else
                                                      {
                                                        t = m_18;
                                                        t = q_8;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        i_8 = ATgetArgument(t, 0);
                                                        n_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm p_18 = t;
                                                          int q_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_37 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                              t = a_0(t);
                                                              p_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, p_37);
                                                              t = a_0(t);
                                                              LocalPopChoice(q_18);
                                                            }
                                                          else
                                                            {
                                                              t = p_18;
                                                              t = q_8;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            i_8 = ATgetArgument(t, 0);
                                                            n_8 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm r_18 = t;
                                                              int s_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm a_38 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                                  t = a_0(t);
                                                                  a_38 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, i_8, a_38);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(s_18);
                                                                }
                                                              else
                                                                {
                                                                  t = r_18;
                                                                  t = q_8;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = q_8;
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
                    p_8 = ATgetArgument(t, 0);
                    o_8 = ATgetArgument(t, 1);
                    t = o_8;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = p_8;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm t_18 = t;
                            int u_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_o_6;
                                t = a_0(t);
                                LocalPopChoice(u_18);
                              }
                            else
                              {
                                t = t_18;
                                t = p_8;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = o_8;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    i_8 = ATgetArgument(t, 0);
                                    n_8 = ATgetArgument(t, 1);
                                    t = p_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        i_8 = ATgetArgument(t, 0);
                                        t = p_8;
                                      }
                                    else
                                      {
                                        t = p_8;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = p_8;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm v_18 = t;
                            int w_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_o_6;
                                t = a_0(t);
                                LocalPopChoice(w_18);
                              }
                            else
                              {
                                t = v_18;
                                {
                                  ATerm x_18 = t;
                                  int y_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = o_8;
                                      if((p_8 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(y_18);
                                    }
                                  else
                                    {
                                      t = x_18;
                                      t = q_8;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = o_8;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    i_8 = ATgetArgument(t, 0);
                                    n_8 = ATgetArgument(t, 1);
                                    {
                                      ATerm z_18 = t;
                                      int b_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm x_40 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, n_8, o_8);
                                          t = a_0(t);
                                          x_40 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, i_8, x_40);
                                          t = a_0(t);
                                          LocalPopChoice(b_19);
                                        }
                                      else
                                        {
                                          t = z_18;
                                          {
                                            ATerm c_19 = t;
                                            int d_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = o_8;
                                                if((p_8 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(d_19);
                                              }
                                            else
                                              {
                                                t = c_19;
                                                t = q_8;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        i_8 = ATgetArgument(t, 0);
                                        {
                                          ATerm e_19 = t;
                                          int f_19 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = o_8;
                                              if((p_8 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(f_19);
                                            }
                                          else
                                            {
                                              t = e_19;
                                              {
                                                ATerm g_19 = t;
                                                int h_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = i_8;
                                                    t = topdown_1_0(s_0, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, i_8);
                                                    t = bottomup_1_0(a_0, t);
                                                    LocalPopChoice(h_19);
                                                  }
                                                else
                                                  {
                                                    t = g_19;
                                                    t = q_8;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm i_19 = t;
                                        int j_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = o_8;
                                            if((p_8 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(j_19);
                                          }
                                        else
                                          {
                                            t = i_19;
                                            t = q_8;
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
                        p_8 = ATgetArgument(t, 0);
                        o_8 = ATgetArgument(t, 1);
                        t = o_8;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = p_8;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm k_19 = t;
                                int l_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_o_6;
                                    t = a_0(t);
                                    LocalPopChoice(l_19);
                                  }
                                else
                                  {
                                    t = k_19;
                                    t = o_8;
                                  }
                              }
                            else
                              {
                                ATerm m_19 = t;
                                int n_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_o_6;
                                    t = a_0(t);
                                    LocalPopChoice(n_19);
                                  }
                                else
                                  {
                                    t = m_19;
                                    t = q_8;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = p_8;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm p_19 = t;
                                    int q_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_v_6;
                                        t = a_0(t);
                                        LocalPopChoice(q_19);
                                      }
                                    else
                                      {
                                        t = p_19;
                                        t = o_8;
                                      }
                                  }
                                else
                                  {
                                    ATerm r_19 = t;
                                    int s_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_v_6;
                                        t = a_0(t);
                                        LocalPopChoice(s_19);
                                      }
                                    else
                                      {
                                        t = r_19;
                                        t = q_8;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    g_8 = ATgetArgument(t, 0);
                                    h_8 = ATgetArgument(t, 1);
                                    t = p_8;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = o_8;
                                      }
                                    else
                                      {
                                        ATerm u_19 = t;
                                        int v_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm s_42 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, p_8, g_8);
                                            t = conc_0_0(t);
                                            s_42 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, s_42, h_8);
                                            t = bottomup_1_0(a_0, t);
                                            LocalPopChoice(v_19);
                                          }
                                        else
                                          {
                                            t = u_19;
                                            t = q_8;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = p_8;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = o_8;
                                      }
                                    else
                                      {
                                        t = q_8;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm w_19 = t;
                        int x_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm y_19 = ATgetArgument(t, 0);
                                o_8 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(x_19);
                            t = o_8;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm z_19 = t;
                                int b_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_o_6;
                                    t = a_0(t);
                                    LocalPopChoice(b_20);
                                  }
                                else
                                  {
                                    t = z_19;
                                    t = q_8;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm c_20 = t;
                                    int d_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_v_6;
                                        t = a_0(t);
                                        LocalPopChoice(d_20);
                                      }
                                    else
                                      {
                                        t = c_20;
                                        t = q_8;
                                      }
                                  }
                                else
                                  {
                                    t = q_8;
                                  }
                              }
                          }
                        else
                          {
                            t = w_19;
                            if(match_cons(t, sym_All_1))
                              {
                                p_8 = ATgetArgument(t, 0);
                                t = p_8;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm e_20 = t;
                                    int f_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_o_6;
                                        t = a_0(t);
                                        LocalPopChoice(f_20);
                                      }
                                    else
                                      {
                                        t = e_20;
                                        t = q_8;
                                      }
                                  }
                                else
                                  {
                                    t = q_8;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    p_8 = ATgetArgument(t, 0);
                                    t = p_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm g_20 = t;
                                        int h_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_o_6;
                                            t = a_0(t);
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
                                                  ATerm l_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,z_43 = NULL;
                                                  t = q_8;
                                                  t = new_0_0(t);
                                                  l_43 = t;
                                                  t = bottomup_1_0(a_0, t);
                                                  x_43 = t;
                                                  t = (ATerm) ATempty;
                                                  t = a_0(t);
                                                  z_43 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(z_43), x_43);
                                                  t = a_0(t);
                                                  n_43 = t;
                                                  t = l_43;
                                                  t = bottomup_1_0(a_0, t);
                                                  w_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, w_43);
                                                  t = a_0(t);
                                                  v_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, v_43);
                                                  t = a_0(t);
                                                  p_43 = t;
                                                  t = p_8;
                                                  t = bottomup_1_0(a_0, t);
                                                  r_43 = t;
                                                  t = l_43;
                                                  t = bottomup_1_0(a_0, t);
                                                  u_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, u_43);
                                                  t = a_0(t);
                                                  t_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, t_43);
                                                  t = a_0(t);
                                                  s_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, r_43, s_43);
                                                  t = a_0(t);
                                                  q_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_43, q_43);
                                                  t = a_0(t);
                                                  o_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, n_43, o_43);
                                                  t = a_0(t);
                                                  LocalPopChoice(j_20);
                                                }
                                              else
                                                {
                                                  t = i_20;
                                                  t = q_8;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm k_20 = t;
                                            int l_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_v_6;
                                                t = a_0(t);
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
                                                      ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL;
                                                      t = q_8;
                                                      t = new_0_0(t);
                                                      c_44 = t;
                                                      t = bottomup_1_0(a_0, t);
                                                      n_44 = t;
                                                      t = (ATerm) ATempty;
                                                      t = a_0(t);
                                                      o_44 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(o_44), n_44);
                                                      t = a_0(t);
                                                      d_44 = t;
                                                      t = c_44;
                                                      t = bottomup_1_0(a_0, t);
                                                      m_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, m_44);
                                                      t = a_0(t);
                                                      l_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, l_44);
                                                      t = a_0(t);
                                                      f_44 = t;
                                                      t = p_8;
                                                      t = bottomup_1_0(a_0, t);
                                                      h_44 = t;
                                                      t = c_44;
                                                      t = bottomup_1_0(a_0, t);
                                                      k_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, k_44);
                                                      t = a_0(t);
                                                      j_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, j_44);
                                                      t = a_0(t);
                                                      i_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_44, i_44);
                                                      t = a_0(t);
                                                      g_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_44, g_44);
                                                      t = a_0(t);
                                                      e_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, d_44, e_44);
                                                      t = a_0(t);
                                                      LocalPopChoice(o_20);
                                                    }
                                                  else
                                                    {
                                                      t = n_20;
                                                      t = q_8;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_8 = ATgetArgument(t, 0);
                                                n_8 = ATgetArgument(t, 1);
                                                t = n_8;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    k_5 = ATgetArgument(t, 0);
                                                    m_5 = ATgetArgument(t, 1);
                                                    t = k_5;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        l_5 = ATgetArgument(t, 0);
                                                        t = i_8;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            x_7 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm p_20 = t;
                                                              int q_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, l_5);
                                                                  t = a_0(t);
                                                                  v_44 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_44, m_5);
                                                                  t = a_0(t);
                                                                  u_44 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_7, u_44);
                                                                  t = a_0(t);
                                                                  t_44 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, t_44);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(q_20);
                                                                }
                                                              else
                                                                {
                                                                  t = p_20;
                                                                  {
                                                                    ATerm r_20 = t;
                                                                    int s_20 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL;
                                                                        t = q_8;
                                                                        t = new_0_0(t);
                                                                        x_44 = t;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        i_45 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = a_0(t);
                                                                        j_45 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(j_45), i_45);
                                                                        t = a_0(t);
                                                                        y_44 = t;
                                                                        t = x_44;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        h_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, h_45);
                                                                        t = a_0(t);
                                                                        g_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, g_45);
                                                                        t = a_0(t);
                                                                        a_45 = t;
                                                                        t = p_8;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        c_45 = t;
                                                                        t = x_44;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        f_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, f_45);
                                                                        t = a_0(t);
                                                                        e_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, e_45);
                                                                        t = a_0(t);
                                                                        d_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, c_45, d_45);
                                                                        t = a_0(t);
                                                                        b_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, a_45, b_45);
                                                                        t = a_0(t);
                                                                        z_44 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, y_44, z_44);
                                                                        t = a_0(t);
                                                                        LocalPopChoice(s_20);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_20;
                                                                        t = q_8;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm t_20 = t;
                                                            int u_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL;
                                                                t = q_8;
                                                                t = new_0_0(t);
                                                                m_45 = t;
                                                                t = bottomup_1_0(a_0, t);
                                                                x_45 = t;
                                                                t = (ATerm) ATempty;
                                                                t = a_0(t);
                                                                y_45 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(y_45), x_45);
                                                                t = a_0(t);
                                                                n_45 = t;
                                                                t = m_45;
                                                                t = bottomup_1_0(a_0, t);
                                                                w_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, w_45);
                                                                t = a_0(t);
                                                                v_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, v_45);
                                                                t = a_0(t);
                                                                p_45 = t;
                                                                t = p_8;
                                                                t = bottomup_1_0(a_0, t);
                                                                r_45 = t;
                                                                t = m_45;
                                                                t = bottomup_1_0(a_0, t);
                                                                u_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, u_45);
                                                                t = a_0(t);
                                                                t_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, t_45);
                                                                t = a_0(t);
                                                                s_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, r_45, s_45);
                                                                t = a_0(t);
                                                                q_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_45, q_45);
                                                                t = a_0(t);
                                                                o_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, n_45, o_45);
                                                                t = a_0(t);
                                                                LocalPopChoice(u_20);
                                                              }
                                                            else
                                                              {
                                                                t = t_20;
                                                                t = q_8;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = i_8;
                                                        {
                                                          ATerm v_20 = t;
                                                          int w_20 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL;
                                                              t = q_8;
                                                              t = new_0_0(t);
                                                              b_46 = t;
                                                              t = bottomup_1_0(a_0, t);
                                                              n_46 = t;
                                                              t = (ATerm) ATempty;
                                                              t = a_0(t);
                                                              o_46 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(o_46), n_46);
                                                              t = a_0(t);
                                                              c_46 = t;
                                                              t = b_46;
                                                              t = bottomup_1_0(a_0, t);
                                                              m_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, m_46);
                                                              t = a_0(t);
                                                              l_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, l_46);
                                                              t = a_0(t);
                                                              e_46 = t;
                                                              t = p_8;
                                                              t = bottomup_1_0(a_0, t);
                                                              h_46 = t;
                                                              t = b_46;
                                                              t = bottomup_1_0(a_0, t);
                                                              k_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, k_46);
                                                              t = a_0(t);
                                                              j_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, j_46);
                                                              t = a_0(t);
                                                              i_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_46, i_46);
                                                              t = a_0(t);
                                                              f_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, e_46, f_46);
                                                              t = a_0(t);
                                                              d_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, c_46, d_46);
                                                              t = a_0(t);
                                                              LocalPopChoice(w_20);
                                                            }
                                                          else
                                                            {
                                                              t = v_20;
                                                              t = q_8;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = i_8;
                                                    {
                                                      ATerm x_20 = t;
                                                      int y_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL;
                                                          t = q_8;
                                                          t = new_0_0(t);
                                                          r_46 = t;
                                                          t = bottomup_1_0(a_0, t);
                                                          e_47 = t;
                                                          t = (ATerm) ATempty;
                                                          t = a_0(t);
                                                          f_47 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(f_47), e_47);
                                                          t = a_0(t);
                                                          s_46 = t;
                                                          t = r_46;
                                                          t = bottomup_1_0(a_0, t);
                                                          d_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, d_47);
                                                          t = a_0(t);
                                                          c_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, c_47);
                                                          t = a_0(t);
                                                          u_46 = t;
                                                          t = p_8;
                                                          t = bottomup_1_0(a_0, t);
                                                          w_46 = t;
                                                          t = r_46;
                                                          t = bottomup_1_0(a_0, t);
                                                          b_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, b_47);
                                                          t = a_0(t);
                                                          a_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, a_47);
                                                          t = a_0(t);
                                                          z_46 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_46, z_46);
                                                          t = a_0(t);
                                                          v_46 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_46, v_46);
                                                          t = a_0(t);
                                                          t_46 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, s_46, t_46);
                                                          t = a_0(t);
                                                          LocalPopChoice(y_20);
                                                        }
                                                      else
                                                        {
                                                          t = x_20;
                                                          t = q_8;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    i_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm z_20 = t;
                                                      int b_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, i_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(b_21);
                                                        }
                                                      else
                                                        {
                                                          t = z_20;
                                                          {
                                                            ATerm c_21 = t;
                                                            int d_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL;
                                                                t = q_8;
                                                                t = new_0_0(t);
                                                                o_47 = t;
                                                                t = bottomup_1_0(a_0, t);
                                                                a_48 = t;
                                                                t = (ATerm) ATempty;
                                                                t = a_0(t);
                                                                b_48 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(b_48), a_48);
                                                                t = a_0(t);
                                                                p_47 = t;
                                                                t = o_47;
                                                                t = bottomup_1_0(a_0, t);
                                                                z_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, z_47);
                                                                t = a_0(t);
                                                                y_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, y_47);
                                                                t = a_0(t);
                                                                r_47 = t;
                                                                t = p_8;
                                                                t = bottomup_1_0(a_0, t);
                                                                t_47 = t;
                                                                t = o_47;
                                                                t = bottomup_1_0(a_0, t);
                                                                x_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, x_47);
                                                                t = a_0(t);
                                                                w_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, w_47);
                                                                t = a_0(t);
                                                                u_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, t_47, u_47);
                                                                t = a_0(t);
                                                                s_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, r_47, s_47);
                                                                t = a_0(t);
                                                                q_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, p_47, q_47);
                                                                t = a_0(t);
                                                                LocalPopChoice(d_21);
                                                              }
                                                            else
                                                              {
                                                                t = c_21;
                                                                t = q_8;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm e_21 = t;
                                                    int f_21 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm g_48 = NULL,h_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL;
                                                        t = q_8;
                                                        t = new_0_0(t);
                                                        g_48 = t;
                                                        t = bottomup_1_0(a_0, t);
                                                        w_48 = t;
                                                        t = (ATerm) ATempty;
                                                        t = a_0(t);
                                                        x_48 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(x_48), w_48);
                                                        t = a_0(t);
                                                        h_48 = t;
                                                        t = g_48;
                                                        t = bottomup_1_0(a_0, t);
                                                        v_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, v_48);
                                                        t = a_0(t);
                                                        u_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, u_48);
                                                        t = a_0(t);
                                                        o_48 = t;
                                                        t = p_8;
                                                        t = bottomup_1_0(a_0, t);
                                                        q_48 = t;
                                                        t = g_48;
                                                        t = bottomup_1_0(a_0, t);
                                                        t_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, t_48);
                                                        t = a_0(t);
                                                        s_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, s_48);
                                                        t = a_0(t);
                                                        r_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, q_48, r_48);
                                                        t = a_0(t);
                                                        p_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, o_48, p_48);
                                                        t = a_0(t);
                                                        n_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, h_48, n_48);
                                                        t = a_0(t);
                                                        LocalPopChoice(f_21);
                                                      }
                                                    else
                                                      {
                                                        t = e_21;
                                                        t = q_8;
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
                                        p_8 = ATgetArgument(t, 0);
                                        t = p_8;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm g_21 = t;
                                            int i_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_6;
                                                t = a_0(t);
                                                LocalPopChoice(i_21);
                                              }
                                            else
                                              {
                                                t = g_21;
                                                t = q_8;
                                              }
                                          }
                                        else
                                          {
                                            t = q_8;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            p_8 = ATgetArgument(t, 0);
                                            t = p_8;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm j_21 = t;
                                                int k_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_v_6;
                                                    t = a_0(t);
                                                    LocalPopChoice(k_21);
                                                  }
                                                else
                                                  {
                                                    t = j_21;
                                                    t = q_8;
                                                  }
                                              }
                                            else
                                              {
                                                t = q_8;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                p_8 = ATgetArgument(t, 0);
                                                t = p_8;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm l_21 = t;
                                                    int m_21 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_v_6;
                                                        t = a_0(t);
                                                        LocalPopChoice(m_21);
                                                      }
                                                    else
                                                      {
                                                        t = l_21;
                                                        t = q_8;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = q_8;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm n_21 = t;
                                                int o_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm p_21 = ATgetArgument(t, 0);
                                                        o_8 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(o_21);
                                                    t = o_8;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm q_21 = t;
                                                        int r_21 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_v_6;
                                                            t = a_0(t);
                                                            LocalPopChoice(r_21);
                                                          }
                                                        else
                                                          {
                                                            t = q_21;
                                                            t = q_8;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = q_8;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = n_21;
                                                    {
                                                      ATerm s_21 = t;
                                                      int t_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm u_21 = ATgetArgument(t, 0);
                                                              o_8 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(t_21);
                                                          {
                                                            ATerm v_21 = t;
                                                            int w_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = o_8;
                                                                t = fetch_1_0(u_0, t);
                                                                t = term_v_6;
                                                                t = bottomup_1_0(a_0, t);
                                                                LocalPopChoice(w_21);
                                                              }
                                                            else
                                                              {
                                                                t = v_21;
                                                                t = q_8;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = s_21;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              p_8 = ATgetArgument(t, 0);
                                                              o_8 = ATgetArgument(t, 1);
                                                              t = o_8;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = p_8;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = o_8;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          i_8 = ATgetArgument(t, 0);
                                                                          n_8 = ATgetArgument(t, 1);
                                                                          t = p_8;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = p_8;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = p_8;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = o_8;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          i_8 = ATgetArgument(t, 0);
                                                                          n_8 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm x_21 = t;
                                                                            int y_21 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm g_50 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, n_8, o_8);
                                                                                t = a_0(t);
                                                                                g_50 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, i_8, g_50);
                                                                                t = a_0(t);
                                                                                LocalPopChoice(y_21);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = x_21;
                                                                                {
                                                                                  ATerm z_21 = t;
                                                                                  int a_22 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = o_8;
                                                                                      if((p_8 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(a_22);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = z_21;
                                                                                      t = q_8;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm b_22 = t;
                                                                          int c_22 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = o_8;
                                                                              if((p_8 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(c_22);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_22;
                                                                              t = q_8;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  p_8 = ATgetArgument(t, 0);
                                                                  o_8 = ATgetArgument(t, 1);
                                                                  j_5 = ATgetArgument(t, 2);
                                                                  t = j_5;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm d_22 = t;
                                                                      int e_22 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_8, o_8);
                                                                          t = a_0(t);
                                                                          LocalPopChoice(e_22);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = d_22;
                                                                          t = q_8;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = q_8;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      p_8 = ATgetArgument(t, 0);
                                                                      o_8 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm f_22 = t;
                                                                        int g_22 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, p_8, o_8);
                                                                            t = a_0(t);
                                                                            LocalPopChoice(g_22);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = f_22;
                                                                            t = q_8;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          p_8 = ATgetArgument(t, 0);
                                                                          t = p_8;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              i_8 = ATgetFirst((ATermList) t);
                                                                              n_8 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm h_22 = t;
                                                                                int i_22 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm v_50 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, n_8);
                                                                                    t = a_0(t);
                                                                                    v_50 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, i_8, v_50);
                                                                                    t = a_0(t);
                                                                                    LocalPopChoice(i_22);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = h_22;
                                                                                    t = q_8;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm j_22 = t;
                                                                                  int k_22 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_v_6;
                                                                                      t = a_0(t);
                                                                                      LocalPopChoice(k_22);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = j_22;
                                                                                      t = q_8;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = q_8;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              p_8 = ATgetArgument(t, 0);
                                                                              t = p_8;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  i_8 = ATgetFirst((ATermList) t);
                                                                                  n_8 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm l_22 = t;
                                                                                    int m_22 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm c_51 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, n_8);
                                                                                        t = a_0(t);
                                                                                        c_51 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, i_8, c_51);
                                                                                        t = a_0(t);
                                                                                        LocalPopChoice(m_22);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = l_22;
                                                                                        t = q_8;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm n_22 = t;
                                                                                      int o_22 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_v_6;
                                                                                          t = a_0(t);
                                                                                          LocalPopChoice(o_22);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = n_22;
                                                                                          t = q_8;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = q_8;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  p_8 = ATgetArgument(t, 0);
                                                                                  t = p_8;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      i_8 = ATgetFirst((ATermList) t);
                                                                                      n_8 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm p_22 = t;
                                                                                        int r_22 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm l_51 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, n_8);
                                                                                            t = a_0(t);
                                                                                            l_51 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, l_51);
                                                                                            t = a_0(t);
                                                                                            LocalPopChoice(r_22);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = p_22;
                                                                                            t = q_8;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm s_22 = t;
                                                                                          int t_22 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_o_6;
                                                                                              t = a_0(t);
                                                                                              LocalPopChoice(t_22);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = s_22;
                                                                                              t = q_8;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = q_8;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      p_8 = ATgetArgument(t, 0);
                                                                                      o_8 = ATgetArgument(t, 1);
                                                                                      j_5 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm u_22 = t;
                                                                                        int v_22 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL;
                                                                                            t = term_w_22;
                                                                                            t = bottomup_1_0(a_0, t);
                                                                                            t_51 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = a_0(t);
                                                                                            w_51 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(w_51), j_5);
                                                                                            t = a_0(t);
                                                                                            v_51 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(v_51), p_8);
                                                                                            t = a_0(t);
                                                                                            u_51 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, t_51, u_51);
                                                                                            t = a_0(t);
                                                                                            s_51 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, o_8, s_51);
                                                                                            t = a_0(t);
                                                                                            LocalPopChoice(v_22);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = u_22;
                                                                                            t = q_8;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          p_8 = ATgetArgument(t, 0);
                                                                                          o_8 = ATgetArgument(t, 1);
                                                                                          j_5 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm y_22 = t;
                                                                                            int z_22 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, o_8);
                                                                                                t = a_0(t);
                                                                                                c_52 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, j_5);
                                                                                                t = a_0(t);
                                                                                                f_52 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = a_0(t);
                                                                                                g_52 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(g_52), f_52);
                                                                                                t = a_0(t);
                                                                                                e_52 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(e_52), p_8);
                                                                                                t = a_0(t);
                                                                                                d_52 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(d_52), c_52);
                                                                                                t = a_0(t);
                                                                                                b_52 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, b_52);
                                                                                                t = a_0(t);
                                                                                                LocalPopChoice(z_22);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = y_22;
                                                                                                t = q_8;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              p_8 = ATgetArgument(t, 0);
                                                                                              o_8 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm a_23 = t;
                                                                                                int b_23 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm l_52 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, o_8);
                                                                                                    t = a_0(t);
                                                                                                    l_52 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, p_8, l_52);
                                                                                                    t = a_0(t);
                                                                                                    LocalPopChoice(b_23);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = a_23;
                                                                                                    t = q_8;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  p_8 = ATgetArgument(t, 0);
                                                                                                  o_8 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm c_23 = t;
                                                                                                    int d_23 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm p_52 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, p_8);
                                                                                                        t = a_0(t);
                                                                                                        p_52 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, p_52, o_8);
                                                                                                        t = a_0(t);
                                                                                                        LocalPopChoice(d_23);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = c_23;
                                                                                                        t = q_8;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      p_8 = ATgetArgument(t, 0);
                                                                                                      o_8 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm e_23 = t;
                                                                                                        int f_23 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm t_52 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, o_8);
                                                                                                            t = a_0(t);
                                                                                                            t_52 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, t_52, p_8);
                                                                                                            t = a_0(t);
                                                                                                            LocalPopChoice(f_23);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = e_23;
                                                                                                            t = q_8;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          p_8 = ATgetArgument(t, 0);
                                                                                                          o_8 = ATgetArgument(t, 1);
                                                                                                          t = o_8;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              g_8 = ATgetArgument(t, 0);
                                                                                                              h_8 = ATgetArgument(t, 1);
                                                                                                              t = p_8;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = o_8;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm g_23 = t;
                                                                                                                  int h_23 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm g_53 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, p_8, g_8);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      g_53 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, g_53, h_8);
                                                                                                                      t = bottomup_1_0(a_0, t);
                                                                                                                      LocalPopChoice(h_23);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = g_23;
                                                                                                                      t = q_8;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  g_8 = ATgetArgument(t, 0);
                                                                                                                  h_8 = ATgetArgument(t, 1);
                                                                                                                  v_7 = ATgetArgument(t, 2);
                                                                                                                  t = v_7;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = h_8;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = g_8;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              a_8 = ATgetArgument(t, 0);
                                                                                                                              t = p_8;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = o_8;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      i_8 = ATgetFirst((ATermList) t);
                                                                                                                                      n_8 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = n_8;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = i_8;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              x_7 = ATgetArgument(t, 0);
                                                                                                                                              q_7 = ATgetArgument(t, 1);
                                                                                                                                              n_5 = ATgetArgument(t, 2);
                                                                                                                                              p_5 = ATgetArgument(t, 3);
                                                                                                                                              t = n_5;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = q_7;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm i_23 = t;
                                                                                                                                                      int j_23 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = a_8;
                                                                                                                                                          if((x_7 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = p_5;
                                                                                                                                                          {
                                                                                                                                                            ATerm k_23 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm v_0 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm l_23 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(l_23, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((x_7 != ATgetArgument(l_23, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(l_23, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm m_23 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(m_23) != AT_LIST) || !(ATisEmpty(m_23))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm n_23 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(n_23) != AT_LIST) || !(ATisEmpty(n_23))))
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
                                                                                                                                                                t = k_23;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = p_5;
                                                                                                                                                          t = bottomup_1_0(a_0, t);
                                                                                                                                                          LocalPopChoice(j_23);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = i_23;
                                                                                                                                                          t = q_8;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = q_8;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = q_8;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = q_8;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = q_8;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = q_8;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = p_8;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = o_8;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = q_8;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = p_8;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = o_8;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = q_8;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = p_8;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = o_8;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = q_8;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = p_8;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = o_8;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = q_8;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              p_8 = ATgetArgument(t, 0);
                                                                                                              o_8 = ATgetArgument(t, 1);
                                                                                                              t = p_8;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = o_8;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = q_8;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = q_8;
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
ATerm topdown_1_0 (ATerm v_96 (ATerm), ATerm t)
{
  static ATerm w_0 (ATerm t)
  {
    t = topdown_1_0(v_96, t);
    return(t);
  }
  t = v_96(t);
  t = SRTS_all(w_0, t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm o_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm r_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(p_23);
      {
        ATerm p_54 = NULL,q_54 = NULL;
        p_54 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm s_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        q_54 = t;
        t = SSLgetAnnotations(p_54);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_23 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) t_23) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm u_23 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(u_23) != AT_LIST) || !(ATisEmpty(u_23))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = q_54;
      }
    }
  else
    {
      t = o_23;
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm f_24 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) f_24) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm h_24 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(z_23);
            _fail(t);
          }
        else
          {
            t = y_23;
          }
      }
    }
  return(t);
}
static ATerm b_5 (ATerm v_71, ATerm u_71, ATerm t)
{
  t = v_71;
  t = topdown_1_0(x_0, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, v_71);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm z_54 = NULL,a_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL,h_55 = NULL,i_55 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      c_55 = ATgetArgument(t, 0);
      f_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_55;
  if(match_cons(t, sym_Match_1))
    {
      d_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_55;
  if(match_cons(t, sym_Var_1))
    {
      e_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_55;
  if(match_cons(t, sym_Seq_2))
    {
      h_55 = ATgetArgument(t, 0);
      a_55 = ATgetArgument(t, 1);
      t = h_55;
      if(match_cons(t, sym_Build_1))
        {
          i_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_55;
      if(match_cons(t, sym_Var_1))
        {
          z_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_54;
      if((e_55 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_55)), a_55);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          h_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_55;
      if(match_cons(t, sym_Var_1))
        {
          i_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_55;
      if((e_55 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_55));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      v_55 = ATgetArgument(t, 0);
      x_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_55;
  if(match_cons(t, sym_Build_1))
    {
      w_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_55;
  if(match_cons(t, sym_Seq_2))
    {
      y_55 = ATgetArgument(t, 0);
      t_55 = ATgetArgument(t, 1);
      t = y_55;
      if(match_cons(t, sym_Match_1))
        {
          s_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_55;
      if((w_55 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_55), t_55);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          y_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_55;
      if((w_55 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, w_55);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm l_56 = NULL,m_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      o_56 = ATgetArgument(t, 0);
      q_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_56;
  if(match_cons(t, sym_Match_1))
    {
      p_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_56;
  if(match_cons(t, sym_Seq_2))
    {
      r_56 = ATgetArgument(t, 0);
      m_56 = ATgetArgument(t, 1);
      t = r_56;
      if(match_cons(t, sym_Match_1))
        {
          l_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_56;
      if((p_56 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_56), m_56);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          r_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_56;
      if((p_56 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, p_56);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL,f_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      f_57 = ATgetArgument(t, 0);
      h_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_57;
  if(match_cons(t, sym_Build_1))
    {
      ATerm i_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_57;
  if(match_cons(t, sym_Seq_2))
    {
      i_57 = ATgetArgument(t, 0);
      j_57 = ATgetArgument(t, 1);
      t = i_57;
      if(match_cons(t, sym_PrimT_3))
        {
          b_57 = ATgetArgument(t, 0);
          c_57 = ATgetArgument(t, 1);
          d_57 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, b_57, c_57, d_57), j_57);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          i_57 = ATgetArgument(t, 0);
          j_57 = ATgetArgument(t, 1);
          k_57 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, i_57, j_57, k_57);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL,z_57 = NULL,b_58 = NULL,c_58 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      z_57 = ATgetArgument(t, 0);
      b_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_57;
  if(match_cons(t, sym_Build_1))
    {
      ATerm j_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_58;
  if(match_cons(t, sym_Seq_2))
    {
      c_58 = ATgetArgument(t, 0);
      x_57 = ATgetArgument(t, 1);
      t = c_58;
      if(match_cons(t, sym_Build_1))
        {
          w_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_57), x_57);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          c_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, c_58);
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
  ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_24 = ATgetArgument(t, 0);
      if(((ATgetType(m_24) == AT_LIST) && !(ATisEmpty(m_24))))
        {
          e_59 = ATgetFirst((ATermList) m_24);
          f_59 = (ATerm) ATgetNext((ATermList) m_24);
        }
      else
        _fail(t);
      {
        ATerm n_24 = ATgetArgument(t, 1);
        if(((ATgetType(n_24) == AT_LIST) && !(ATisEmpty(n_24))))
          {
            g_59 = ATgetFirst((ATermList) n_24);
            h_59 = (ATerm) ATgetNext((ATermList) n_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_59, g_59), (ATerm) ATmakeAppl(sym__2, f_59, h_59));
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm i_59 = NULL,j_59 = NULL;
  if(match_cons(t, sym__2))
    {
      i_59 = ATgetArgument(t, 0);
      j_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_59), i_59);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL;
  if(match_cons(t, sym__2))
    {
      k_59 = ATgetArgument(t, 0);
      l_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_59), (ATerm) ATmakeAppl(sym_Match_1, l_59));
  return(t);
}
static ATerm c_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_24 = ATgetArgument(t, 0);
      if(((ATgetType(o_24) != AT_LIST) || !(ATisEmpty(o_24))))
        _fail(t);
      {
        ATerm p_24 = ATgetArgument(t, 1);
        if(((ATgetType(p_24) != AT_LIST) || !(ATisEmpty(p_24))))
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
  ATerm q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_24 = ATgetArgument(t, 0);
      if(((ATgetType(q_24) == AT_LIST) && !(ATisEmpty(q_24))))
        {
          q_59 = ATgetFirst((ATermList) q_24);
          r_59 = (ATerm) ATgetNext((ATermList) q_24);
        }
      else
        _fail(t);
      {
        ATerm r_24 = ATgetArgument(t, 1);
        if(((ATgetType(r_24) == AT_LIST) && !(ATisEmpty(r_24))))
          {
            s_59 = ATgetFirst((ATermList) r_24);
            t_59 = (ATerm) ATgetNext((ATermList) r_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_59, s_59), (ATerm) ATmakeAppl(sym__2, r_59, t_59));
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm u_59 = NULL,v_59 = NULL;
  if(match_cons(t, sym__2))
    {
      u_59 = ATgetArgument(t, 0);
      v_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_59), u_59);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL;
  if(match_cons(t, sym__2))
    {
      w_59 = ATgetArgument(t, 0);
      x_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_59), (ATerm) ATmakeAppl(sym_Match_1, x_59));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      r_58 = ATgetArgument(t, 0);
      v_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_58;
  if(match_cons(t, sym_Build_1))
    {
      s_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_58;
  if(match_cons(t, sym_Op_2))
    {
      t_58 = ATgetArgument(t, 0);
      u_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_58;
  if(match_cons(t, sym_Seq_2))
    {
      w_58 = ATgetArgument(t, 0);
      p_58 = ATgetArgument(t, 1);
      {
        ATerm d_59 = NULL;
        t = w_58;
        if(match_cons(t, sym_Match_1))
          {
            x_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_58;
        if(match_cons(t, sym_Op_2))
          {
            n_58 = ATgetArgument(t, 0);
            o_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_58;
        if((t_58 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, u_58, o_58);
        t = genzip_4_0(y_0, z_0, a_1, b_1, t);
        d_59 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, d_59), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, t_58, u_58)), p_58));
      }
    }
  else
    {
      ATerm p_59 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          w_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_58;
      if(match_cons(t, sym_Op_2))
        {
          x_58 = ATgetArgument(t, 0);
          y_58 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_58;
      if((t_58 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, u_58, y_58);
      t = genzip_4_0(c_1, d_1, e_1, f_1, t);
      p_59 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_59), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, t_58, u_58)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm t_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL;
  w_60 = t;
  if(match_cons(t, sym_Seq_2))
    {
      x_60 = ATgetArgument(t, 0);
      b_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_60;
  if(match_cons(t, sym_Build_1))
    {
      y_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_60;
  if(match_cons(t, sym_Op_2))
    {
      z_60 = ATgetArgument(t, 0);
      {
        ATerm s_24 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = b_61;
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            c_61 = ATgetArgument(t, 0);
            {
              ATerm v_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(u_24);
        t = c_61;
        if(match_cons(t, sym_Match_1))
          {
            d_61 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_61;
        if(match_cons(t, sym_Op_2))
          {
            t_60 = ATgetArgument(t, 0);
            {
              ATerm w_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_60, t_60);
        {
          ATerm x_24 = t;
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
              t = x_24;
            }
        }
        t = term_v_6;
      }
    else
      {
        t = t_24;
        if(match_cons(t, sym_Match_1))
          {
            c_61 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_61;
        if(match_cons(t, sym_Op_2))
          {
            d_61 = ATgetArgument(t, 0);
            {
              ATerm y_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_60, d_61);
        {
          ATerm z_24 = t;
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
              t = z_24;
            }
        }
        t = term_v_6;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm z_97 (ATerm), ATerm t)
{
  static ATerm h_61 (ATerm t)
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_97(t);
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        t = SRTS_one(h_61, t);
      }
    return(t);
  }
  t = h_61(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL;
  a_62 = t;
  if(match_cons(t, sym_Let_2))
    {
      b_62 = ATgetArgument(t, 0);
      i_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_62;
  if(match_cons(t, sym_Let_2))
    {
      o_62 = ATgetArgument(t, 0);
      q_62 = ATgetArgument(t, 1);
      {
        ATerm v_62 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, b_62, o_62);
        t = conc_0_0(t);
        v_62 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, v_62, q_62);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          o_62 = ATgetArgument(t, 0);
          q_62 = ATgetArgument(t, 1);
          r_62 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = b_62;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_62 = ATgetFirst((ATermList) t);
          h_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_62;
      if(match_cons(t, sym_SDefT_4))
        {
          d_62 = ATgetArgument(t, 0);
          e_62 = ATgetArgument(t, 1);
          f_62 = ATgetArgument(t, 2);
          g_62 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = e_62;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_62;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_62;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_62;
      if(match_cons(t, sym_SVar_1))
        {
          p_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_62;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_62;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_62;
      if((d_62 != t))
        {
          _fail(t);
        }
      t = g_62;
      {
        ATerm c_25 = t;
        if((PushChoice() == 0))
          {
            static ATerm g_1 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm d_25 = ATgetArgument(t, 0);
                  if(match_cons(d_25, sym_SVar_1))
                    {
                      if((d_62 != ATgetArgument(d_25, 0)))
                        {
                          _fail(ATgetArgument(d_25, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm e_25 = ATgetArgument(t, 1);
                    if(((ATgetType(e_25) != AT_LIST) || !(ATisEmpty(e_25))))
                      _fail(t);
                  }
                  {
                    ATerm f_25 = ATgetArgument(t, 2);
                    if(((ATgetType(f_25) != AT_LIST) || !(ATisEmpty(f_25))))
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
            t = c_25;
          }
      }
      t = g_62;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,m_63 = NULL,n_63 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      m_63 = ATgetArgument(t, 0);
      t = m_63;
      if(match_cons(t, sym_Seq_2))
        {
          k_63 = ATgetArgument(t, 0);
          g_63 = ATgetArgument(t, 1);
          t = k_63;
          if(match_cons(t, sym_Where_1))
            {
              f_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_63;
          if(match_cons(t, sym_Seq_2))
            {
              h_63 = ATgetArgument(t, 0);
              j_63 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_63;
          if(match_cons(t, sym_Build_1))
            {
              i_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, f_63, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_63), j_63)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              k_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, k_63);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          m_63 = ATgetArgument(t, 0);
          t = m_63;
          if(match_cons(t, sym_Test_1))
            {
              k_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, k_63);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              m_63 = ATgetArgument(t, 0);
              t = m_63;
              if(match_cons(t, sym_Not_1))
                {
                  k_63 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, k_63);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  m_63 = ATgetArgument(t, 0);
                  n_63 = ATgetArgument(t, 1);
                  t = n_63;
                  if((m_63 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      m_63 = ATgetArgument(t, 0);
                      n_63 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = n_63;
                  if((m_63 != t))
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
  ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      b_64 = ATgetArgument(t, 0);
      e_64 = ATgetArgument(t, 1);
      t = b_64;
      if(match_cons(t, sym_LChoice_2))
        {
          c_64 = ATgetArgument(t, 0);
          d_64 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, c_64, (ATerm) ATmakeAppl(sym_LChoice_2, d_64, e_64));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          b_64 = ATgetArgument(t, 0);
          e_64 = ATgetArgument(t, 1);
          t = b_64;
          if(match_cons(t, sym_Seq_2))
            {
              c_64 = ATgetArgument(t, 0);
              d_64 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, c_64, (ATerm) ATmakeAppl(sym_Seq_2, d_64, e_64));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              b_64 = ATgetArgument(t, 0);
              e_64 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_64;
          if(match_cons(t, sym_Choice_2))
            {
              c_64 = ATgetArgument(t, 0);
              d_64 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, c_64, (ATerm) ATmakeAppl(sym_Choice_2, d_64, e_64));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL,w_64 = NULL,x_64 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      w_64 = ATgetArgument(t, 0);
      x_64 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, w_64, x_64);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          w_64 = ATgetArgument(t, 0);
          t = w_64;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_64 = ATgetFirst((ATermList) t);
              t_64 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, s_64, (ATerm) ATmakeAppl(sym_LChoices_1, t_64));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_v_6;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              w_64 = ATgetArgument(t, 0);
              t = w_64;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_64 = ATgetFirst((ATermList) t);
                  t_64 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, s_64, (ATerm) ATmakeAppl(sym_Choices_1, t_64));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_v_6;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  w_64 = ATgetArgument(t, 0);
                  t = w_64;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      s_64 = ATgetFirst((ATermList) t);
                      t_64 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_64, (ATerm) ATmakeAppl(sym_Seqs_1, t_64));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_o_6;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      w_64 = ATgetArgument(t, 0);
                      x_64 = ATgetArgument(t, 1);
                      u_64 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, x_64, (ATerm) ATmakeAppl(sym_Op_2, term_w_22, (ATerm) ATinsert(ATinsert(ATempty, u_64), w_64)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          w_64 = ATgetArgument(t, 0);
                          x_64 = ATgetArgument(t, 1);
                          u_64 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, u_64)), w_64), (ATerm) ATmakeAppl(sym_Build_1, x_64)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              w_64 = ATgetArgument(t, 0);
                              x_64 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_64, (ATerm) ATmakeAppl(sym_Match_1, x_64));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  w_64 = ATgetArgument(t, 0);
                                  x_64 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_64), x_64);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      w_64 = ATgetArgument(t, 0);
                                      x_64 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_64), w_64);
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
  ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      k_66 = ATgetArgument(t, 0);
      t = k_66;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_v_6;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          k_66 = ATgetArgument(t, 0);
          t = k_66;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_o_6;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              k_66 = ATgetArgument(t, 0);
              l_66 = ATgetArgument(t, 1);
              t = k_66;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_v_6;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  k_66 = ATgetArgument(t, 0);
                  l_66 = ATgetArgument(t, 1);
                  t = l_66;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_v_6;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      k_66 = ATgetArgument(t, 0);
                      l_66 = ATgetArgument(t, 1);
                      t = l_66;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_v_6;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          k_66 = ATgetArgument(t, 0);
                          t = k_66;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_v_6;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              k_66 = ATgetArgument(t, 0);
                              t = k_66;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_v_6;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  k_66 = ATgetArgument(t, 0);
                                  l_66 = ATgetArgument(t, 1);
                                  t = l_66;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_v_6;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      k_66 = ATgetArgument(t, 0);
                                      l_66 = ATgetArgument(t, 1);
                                      t = l_66;
                                      t = fetch_1_0(h_1, t);
                                      t = term_v_6;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          k_66 = ATgetArgument(t, 0);
                                          l_66 = ATgetArgument(t, 1);
                                          t = l_66;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = k_66;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = l_66;
                                                }
                                              else
                                                {
                                                  t = k_66;
                                                }
                                            }
                                          else
                                            {
                                              t = k_66;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = l_66;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              k_66 = ATgetArgument(t, 0);
                                              l_66 = ATgetArgument(t, 1);
                                              t = l_66;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = k_66;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = l_66;
                                                    }
                                                  else
                                                    {
                                                      t = k_66;
                                                    }
                                                }
                                              else
                                                {
                                                  t = k_66;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = l_66;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  k_66 = ATgetArgument(t, 0);
                                                  t = k_66;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_v_6;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      k_66 = ATgetArgument(t, 0);
                                                      l_66 = ATgetArgument(t, 1);
                                                      m_66 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = m_66;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, k_66, l_66);
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
  ATerm p_67 = NULL,r_67 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      r_67 = ATgetArgument(t, 0);
      t = r_67;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_o_6;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          r_67 = ATgetArgument(t, 0);
          t = r_67;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_v_6;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              r_67 = ATgetArgument(t, 0);
              p_67 = ATgetArgument(t, 1);
              t = p_67;
              if(match_cons(t, sym_Id_0))
                {
                  t = r_67;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = p_67;
                    }
                  else
                    {
                      t = r_67;
                    }
                }
              else
                {
                  t = r_67;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = p_67;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  r_67 = ATgetArgument(t, 0);
                  p_67 = ATgetArgument(t, 1);
                  t = r_67;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_o_6;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      r_67 = ATgetArgument(t, 0);
                      p_67 = ATgetArgument(t, 1);
                      t = p_67;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_o_6;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          r_67 = ATgetArgument(t, 0);
                          p_67 = ATgetArgument(t, 1);
                          t = p_67;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_o_6;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              r_67 = ATgetArgument(t, 0);
                              t = r_67;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_o_6;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  r_67 = ATgetArgument(t, 0);
                                  t = r_67;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_o_6;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      r_67 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = r_67;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_o_6;
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
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      {
        ATerm j_25 = t;
        int k_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
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
                  t = HL_0_0(t);
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
                        t = AssociateR_0_0(t);
                        LocalPopChoice(o_25);
                      }
                    else
                      {
                        t = n_25;
                        {
                          ATerm p_25 = t;
                          int q_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(q_25);
                            }
                          else
                            {
                              t = p_25;
                              {
                                ATerm r_25 = t;
                                int s_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_68 = NULL,h_68 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        g_68 = ATgetArgument(t, 0);
                                        h_68 = ATgetArgument(t, 1);
                                        t = g_68;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = h_68;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            g_68 = ATgetArgument(t, 0);
                                            h_68 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = g_68;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = h_68;
                                      }
                                    LocalPopChoice(s_25);
                                  }
                                else
                                  {
                                    t = r_25;
                                    {
                                      ATerm t_25 = t;
                                      int u_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(u_25);
                                        }
                                      else
                                        {
                                          t = t_25;
                                          {
                                            ATerm v_25 = t;
                                            int w_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(w_25);
                                              }
                                            else
                                              {
                                                t = v_25;
                                                {
                                                  ATerm x_25 = t;
                                                  int y_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(y_25);
                                                    }
                                                  else
                                                    {
                                                      t = x_25;
                                                      {
                                                        ATerm z_25 = t;
                                                        int a_26 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(a_26);
                                                          }
                                                        else
                                                          {
                                                            t = z_25;
                                                            {
                                                              ATerm b_26 = t;
                                                              int c_26 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(c_26);
                                                                }
                                                              else
                                                                {
                                                                  t = b_26;
                                                                  {
                                                                    ATerm d_26 = t;
                                                                    int e_26 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(e_26);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = d_26;
                                                                        {
                                                                          ATerm f_26 = t;
                                                                          int g_26 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(g_26);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_26;
                                                                              {
                                                                                ATerm h_26 = t;
                                                                                int i_26 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(i_26);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = h_26;
                                                                                    {
                                                                                      ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL;
                                                                                      l_68 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          m_68 = ATgetArgument(t, 0);
                                                                                          n_68 = ATgetArgument(t, 1);
                                                                                          t = m_68;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              k_68 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = l_68;
                                                                                          t = b_5(k_68, n_68, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              m_68 = ATgetArgument(t, 0);
                                                                                              n_68 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = m_68;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = n_68;
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
  ATerm d_69 = NULL;
  d_69 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, d_69);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm e_69 = NULL;
  e_69 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, e_69);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_26 = ATgetArgument(t, 0);
      if(((ATgetType(j_26) != AT_LIST) || !(ATisEmpty(j_26))))
        _fail(t);
      {
        ATerm k_26 = ATgetArgument(t, 1);
        if(((ATgetType(k_26) != AT_LIST) || !(ATisEmpty(k_26))))
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
  ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_26 = ATgetArgument(t, 0);
      if(((ATgetType(l_26) == AT_LIST) && !(ATisEmpty(l_26))))
        {
          f_69 = ATgetFirst((ATermList) l_26);
          g_69 = (ATerm) ATgetNext((ATermList) l_26);
        }
      else
        _fail(t);
      {
        ATerm m_26 = ATgetArgument(t, 1);
        if(((ATgetType(m_26) == AT_LIST) && !(ATisEmpty(m_26))))
          {
            h_69 = ATgetFirst((ATermList) m_26);
            i_69 = (ATerm) ATgetNext((ATermList) m_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_69, h_69), (ATerm) ATmakeAppl(sym__2, g_69, i_69));
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm j_69 = NULL,k_69 = NULL;
  if(match_cons(t, sym__2))
    {
      j_69 = ATgetArgument(t, 0);
      k_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_69), j_69);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_26 = ATgetArgument(t, 0);
      if(((ATgetType(n_26) != AT_LIST) || !(ATisEmpty(n_26))))
        _fail(t);
      {
        ATerm o_26 = ATgetArgument(t, 1);
        if(((ATgetType(o_26) != AT_LIST) || !(ATisEmpty(o_26))))
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
  ATerm m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_26 = ATgetArgument(t, 0);
      if(((ATgetType(p_26) == AT_LIST) && !(ATisEmpty(p_26))))
        {
          m_69 = ATgetFirst((ATermList) p_26);
          n_69 = (ATerm) ATgetNext((ATermList) p_26);
        }
      else
        _fail(t);
      {
        ATerm q_26 = ATgetArgument(t, 1);
        if(((ATgetType(q_26) == AT_LIST) && !(ATisEmpty(q_26))))
          {
            o_69 = ATgetFirst((ATermList) q_26);
            p_69 = (ATerm) ATgetNext((ATermList) q_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_69, o_69), (ATerm) ATmakeAppl(sym__2, n_69, p_69));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm q_69 = NULL,r_69 = NULL;
  if(match_cons(t, sym__2))
    {
      q_69 = ATgetArgument(t, 0);
      r_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_69), q_69);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_26 = ATgetArgument(t, 0);
      if(match_cons(r_26, sym__2))
        {
          x_69 = ATgetArgument(r_26, 0);
          y_69 = ATgetArgument(r_26, 1);
        }
      else
        _fail(t);
      z_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, x_69)), (ATerm) ATmakeAppl(sym_Seq_2, z_69, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_69))));
  return(t);
}
static ATerm q_11 (ATerm w_70, ATerm c_71, ATerm t)
{
  ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL,c_69 = NULL;
  t = c_71;
  t = map_1_0(new_0_0, t);
  v_68 = t;
  t = map_1_0(i_1, t);
  s_68 = t;
  t = new_0_0(t);
  t_68 = t;
  t = c_71;
  t = map_1_0(new_0_0, t);
  w_68 = t;
  t = map_1_0(j_1, t);
  u_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_68, w_68);
  t = genzip_4_0(k_1, m_1, n_1, _id, t);
  c_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_69, c_71);
  t = genzip_4_0(o_1, p_1, q_1, r_1, t);
  x_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_68, w_68);
  t = conc_0_0(t);
  y_68 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, w_70, s_68), (ATerm) ATmakeAppl(sym_Var_1, t_68)));
  t = Mapp2_0_0(t);
  z_68 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, w_70, u_68), (ATerm) ATmakeAppl(sym_Var_1, t_68)));
  t = Bapp_0_0(t);
  a_69 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(y_68), t_68), (ATerm) ATmakeAppl(sym_Seq_2, z_68, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_68), a_69)));
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm b_70 = NULL,c_70 = NULL;
  b_70 = t;
  if(match_cons(t, sym_Build_1))
    {
      c_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_70 = NULL,e_70 = NULL,g_70 = NULL,h_70 = NULL;
        t = b_70;
        t = new_0_0(t);
        g_70 = t;
        t = c_70;
        {
          static ATerm s_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((d_70 != NULL) && (d_70 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_70 = ATgetArgument(t, 0);
                if(((e_70 != NULL) && (e_70 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  e_70 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, g_70);
            return(t);
          }
          t = pat_td_1_0(s_1, t);
        }
        h_70 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_70), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_26, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_70)), not_null(d_70))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_70)))), (ATerm) ATmakeAppl(sym_Build_1, h_70)));
        LocalPopChoice(t_26);
      }
    else
      {
        t = s_26;
        {
          ATerm v_26 = t;
          int w_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_70 = NULL,k_70 = NULL,l_70 = NULL;
              t = b_70;
              t = new_0_0(t);
              k_70 = t;
              t = c_70;
              {
                static ATerm t_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((i_70 != NULL) && (i_70 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        i_70 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, k_70);
                  return(t);
                }
                t = pat_td_1_0(t_1, t);
              }
              l_70 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_70), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_70), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_70)))), (ATerm) ATmakeAppl(sym_Build_1, l_70)));
              LocalPopChoice(w_26);
            }
          else
            {
              t = v_26;
              {
                ATerm m_70 = NULL,n_70 = NULL,p_70 = NULL,q_70 = NULL;
                t = b_70;
                t = new_0_0(t);
                p_70 = t;
                t = c_70;
                {
                  static ATerm v_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((m_70 != NULL) && (m_70 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          m_70 = ATgetArgument(t, 0);
                        if(((n_70 != NULL) && (n_70 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          n_70 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, p_70);
                    return(t);
                  }
                  t = pat_td_1_0(v_1, t);
                }
                q_70 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_70), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(m_70), not_null(n_70), (ATerm) ATmakeAppl(sym_Var_1, p_70))), (ATerm) ATmakeAppl(sym_Build_1, q_70)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm j_117 (ATerm), ATerm t)
{
  static ATerm v_72 (ATerm t)
  {
    ATerm o_72 = NULL,p_72 = NULL,u_72 = NULL;
    u_72 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_72 = ATgetFirst((ATermList) t);
        p_72 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_2 = NULL,o_2 = NULL,m_4 = NULL;
          t = SSLgetAnnotations(u_72);
          l_2 = t;
          t = p_72;
          t = v_72(t);
          o_2 = t;
          t = (ATerm) ATinsert(CheckATermList(o_2), o_72);
          m_4 = t;
          t = SSLsetAnnotations(m_4, l_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_72;
        t = j_117(t);
      }
    return(t);
  }
  t = v_72(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_71 = NULL,g_71 = NULL,r_71 = NULL;
  f_71 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_71;
    }
  else
    {
      static ATerm w_1 (ATerm t)
      {
        t = not_null(r_71);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_71 = ATgetFirst((ATermList) t);
          if(((r_71 != NULL) && (r_71 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_71;
      t = at_end_1_0(w_1, t);
    }
  return(t);
}
static ATerm a_74 (ATerm f_73, ATerm t)
{
  ATerm t_73 = NULL;
  t = SSL_explode_term(f_73);
  if(match_cons(t, sym__2))
    {
      ATerm x_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_73;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_73 = NULL,w_73 = NULL,x_73 = NULL;
  x_73 = t;
  if(match_cons(t, sym__2))
    {
      v_73 = ATgetArgument(t, 0);
      w_73 = ATgetArgument(t, 1);
      {
        ATerm y_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_1 (ATerm t)
            {
              t = w_73;
              return(t);
            }
            t = v_73;
            t = at_end_1_0(x_1, t);
            LocalPopChoice(z_26);
          }
        else
          {
            t = y_26;
            t = a_74(x_73, t);
          }
      }
    }
  else
    {
      t = a_74(x_73, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm t)
{
  static ATerm h_74 (ATerm t)
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_101(t);
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
        {
          ATerm b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,p_4 = NULL;
          t = i_101(t);
          g_74 = t;
          if(match_cons(t, sym__2))
            {
              c_74 = ATgetArgument(t, 0);
              d_74 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_74);
          b_74 = t;
          t = c_74;
          t = k_101(t);
          e_74 = t;
          t = d_74;
          t = h_74(t);
          f_74 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_74, f_74);
          p_4 = t;
          t = SSLsetAnnotations(p_4, b_74);
          t = j_101(t);
        }
      }
    return(t);
  }
  t = h_74(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm v_74 = NULL;
  v_74 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_74);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm w_74 = NULL;
  w_74 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_74);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      if(((ATgetType(d_27) != AT_LIST) || !(ATisEmpty(d_27))))
        _fail(t);
      {
        ATerm e_27 = ATgetArgument(t, 1);
        if(((ATgetType(e_27) != AT_LIST) || !(ATisEmpty(e_27))))
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
  ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_27 = ATgetArgument(t, 0);
      if(((ATgetType(f_27) == AT_LIST) && !(ATisEmpty(f_27))))
        {
          x_74 = ATgetFirst((ATermList) f_27);
          y_74 = (ATerm) ATgetNext((ATermList) f_27);
        }
      else
        _fail(t);
      {
        ATerm g_27 = ATgetArgument(t, 1);
        if(((ATgetType(g_27) == AT_LIST) && !(ATisEmpty(g_27))))
          {
            z_74 = ATgetFirst((ATermList) g_27);
            a_75 = (ATerm) ATgetNext((ATermList) g_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_74, z_74), (ATerm) ATmakeAppl(sym__2, y_74, a_75));
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm b_75 = NULL,c_75 = NULL;
  if(match_cons(t, sym__2))
    {
      b_75 = ATgetArgument(t, 0);
      c_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_75), b_75);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_27 = ATgetArgument(t, 0);
      if(((ATgetType(h_27) != AT_LIST) || !(ATisEmpty(h_27))))
        _fail(t);
      {
        ATerm i_27 = ATgetArgument(t, 1);
        if(((ATgetType(i_27) != AT_LIST) || !(ATisEmpty(i_27))))
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
  ATerm e_75 = NULL,f_75 = NULL,g_75 = NULL,h_75 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_27 = ATgetArgument(t, 0);
      if(((ATgetType(j_27) == AT_LIST) && !(ATisEmpty(j_27))))
        {
          e_75 = ATgetFirst((ATermList) j_27);
          f_75 = (ATerm) ATgetNext((ATermList) j_27);
        }
      else
        _fail(t);
      {
        ATerm k_27 = ATgetArgument(t, 1);
        if(((ATgetType(k_27) == AT_LIST) && !(ATisEmpty(k_27))))
          {
            g_75 = ATgetFirst((ATermList) k_27);
            h_75 = (ATerm) ATgetNext((ATermList) k_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_75, g_75), (ATerm) ATmakeAppl(sym__2, f_75, h_75));
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm i_75 = NULL,j_75 = NULL;
  if(match_cons(t, sym__2))
    {
      i_75 = ATgetArgument(t, 0);
      j_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_75), i_75);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm k_75 = NULL,l_75 = NULL,m_75 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_27 = ATgetArgument(t, 0);
      if(match_cons(l_27, sym__2))
        {
          k_75 = ATgetArgument(l_27, 0);
          l_75 = ATgetArgument(l_27, 1);
        }
      else
        _fail(t);
      m_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, k_75)), (ATerm) ATmakeAppl(sym_Seq_2, m_75, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_75))));
  return(t);
}
static ATerm u_11 (ATerm h_71, ATerm p_71, ATerm o_71, ATerm t)
{
  ATerm j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL,u_74 = NULL;
  t = (ATerm) ATinsert(CheckATermList(p_71), o_71);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_74 = ATgetFirst((ATermList) t);
      n_74 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = map_1_0(y_1, t);
  k_74 = t;
  t = (ATerm) ATinsert(CheckATermList(p_71), o_71);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_74 = ATgetFirst((ATermList) t);
      o_74 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = map_1_0(z_1, t);
  m_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_74, o_74);
  t = genzip_4_0(a_2, b_2, c_2, _id, t);
  u_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_74, (ATerm) ATinsert(CheckATermList(p_71), o_71));
  t = genzip_4_0(d_2, e_2, f_2, g_2, t);
  p_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_74, o_74);
  t = conc_0_0(t);
  q_74 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, h_71, k_74), (ATerm) ATmakeAppl(sym_Var_1, j_74)));
  t = Mapp2_0_0(t);
  r_74 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, h_71, m_74), (ATerm) ATmakeAppl(sym_Var_1, l_74)));
  t = Bapp_0_0(t);
  s_74 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(q_74), l_74), j_74), (ATerm) ATmakeAppl(sym_Seq_2, r_74, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_74), s_74)));
  return(t);
}
ATerm pat_td_1_0 (ATerm b_95 (ATerm), ATerm t)
{
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_95(t);
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
      {
        ATerm u_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL;
        w_77 = t;
        if(match_cons(t, sym_Op_2))
          {
            x_77 = ATgetArgument(t, 0);
            y_77 = ATgetArgument(t, 1);
            {
              ATerm w_2 = NULL,z_2 = NULL,r_4 = NULL;
              t = SSLgetAnnotations(w_77);
              w_2 = t;
              t = y_77;
              {
                static ATerm h_2 (ATerm t)
                {
                  t = pat_td_1_0(b_95, t);
                  return(t);
                }
                t = fetch_1_0(h_2, t);
              }
              z_2 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, x_77, z_2);
              r_4 = t;
              t = SSLsetAnnotations(r_4, w_2);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                x_77 = ATgetArgument(t, 0);
                y_77 = ATgetArgument(t, 1);
                {
                  ATerm o_27 = t;
                  int p_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_3 = NULL,k_3 = NULL,t_4 = NULL;
                      t = SSLgetAnnotations(w_77);
                      h_3 = t;
                      t = y_77;
                      t = pat_td_1_0(b_95, t);
                      k_3 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, x_77, k_3);
                      t_4 = t;
                      t = SSLsetAnnotations(t_4, h_3);
                      LocalPopChoice(p_27);
                    }
                  else
                    {
                      t = o_27;
                      {
                        ATerm s_3 = NULL,v_3 = NULL,u_4 = NULL;
                        t = SSLgetAnnotations(w_77);
                        s_3 = t;
                        t = x_77;
                        t = pat_td_1_0(b_95, t);
                        v_3 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, v_3, y_77);
                        u_4 = t;
                        t = SSLsetAnnotations(u_4, s_3);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    x_77 = ATgetArgument(t, 0);
                    y_77 = ATgetArgument(t, 1);
                    u_77 = ATgetArgument(t, 2);
                    {
                      ATerm e_4 = NULL,i_4 = NULL,w_4 = NULL;
                      t = SSLgetAnnotations(w_77);
                      e_4 = t;
                      t = u_77;
                      {
                        static ATerm i_2 (ATerm t)
                        {
                          t = pat_td_1_0(b_95, t);
                          return(t);
                        }
                        t = fetch_1_0(i_2, t);
                      }
                      i_4 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, x_77, y_77, i_4);
                      w_4 = t;
                      t = SSLsetAnnotations(w_4, e_4);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        x_77 = ATgetArgument(t, 0);
                        y_77 = ATgetArgument(t, 1);
                        u_77 = ATgetArgument(t, 2);
                        {
                          ATerm o_5 = NULL,t_5 = NULL,x_4 = NULL;
                          t = SSLgetAnnotations(w_77);
                          o_5 = t;
                          t = u_77;
                          {
                            static ATerm j_2 (ATerm t)
                            {
                              t = pat_td_1_0(b_95, t);
                              return(t);
                            }
                            t = fetch_1_0(j_2, t);
                          }
                          t_5 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, x_77, y_77, t_5);
                          x_4 = t;
                          t = SSLsetAnnotations(x_4, o_5);
                        }
                      }
                    else
                      {
                        ATerm c_6 = NULL,f_6 = NULL,y_4 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            x_77 = ATgetArgument(t, 0);
                            y_77 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(w_77);
                        c_6 = t;
                        t = y_77;
                        t = pat_td_1_0(b_95, t);
                        f_6 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, x_77, f_6);
                        y_4 = t;
                        t = SSLsetAnnotations(y_4, c_6);
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
  ATerm g_78 = NULL,h_78 = NULL;
  g_78 = t;
  if(match_cons(t, sym_Match_1))
    {
      h_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL;
        t = g_78;
        t = new_0_0(t);
        l_78 = t;
        t = h_78;
        {
          static ATerm k_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((j_78 != NULL) && (j_78 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_78 = ATgetArgument(t, 0);
                if(((k_78 != NULL) && (k_78 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  k_78 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_78), j_78);
            return(t);
          }
          t = pat_td_1_0(k_2, t);
        }
        m_78 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_78), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_s_27, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_78))), (ATerm) ATmakeAppl(sym_Match_1, not_null(k_78))))));
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
        {
          ATerm t_27 = t;
          int v_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL;
              t = g_78;
              t = new_0_0(t);
              p_78 = t;
              t = h_78;
              {
                static ATerm m_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((o_78 != NULL) && (o_78 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        o_78 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, p_78);
                  return(t);
                }
                t = pat_td_1_0(m_2, t);
              }
              q_78 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, p_78)), not_null(o_78))));
              LocalPopChoice(v_27);
            }
          else
            {
              t = t_27;
              {
                ATerm s_78 = NULL,t_78 = NULL,u_78 = NULL,v_78 = NULL;
                t = g_78;
                t = new_0_0(t);
                u_78 = t;
                t = h_78;
                {
                  static ATerm n_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((t_78 != NULL) && (t_78 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          t_78 = ATgetArgument(t, 0);
                        if(((s_78 != NULL) && (s_78 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          s_78 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, u_78);
                    return(t);
                  }
                  t = pat_td_1_0(n_2, t);
                }
                v_78 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, u_78)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(s_78)), not_null(t_78)))));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm n_79 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      n_79 = ATgetArgument(t, 0);
      t = n_79;
    }
  else
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_w_27;
    }
  return(t);
}
ATerm MatchingCongruence_0_0 (ATerm t)
{
  ATerm b_79 = NULL,c_79 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      b_79 = ATgetArgument(t, 0);
      c_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_79;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, b_79, (ATerm) ATempty));
    }
  else
    {
      ATerm m_79 = NULL;
      t = c_79;
      t = map_1_0(p_2, t);
      m_79 = t;
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, b_79, m_79));
      t = Mapp2_0_0(t);
    }
  return(t);
}
ATerm repeat_2_0 (ATerm l_106 (ATerm), ATerm m_106 (ATerm), ATerm t)
{
  static ATerm q_79 (ATerm t)
  {
    ATerm x_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_106(t);
        t = q_79(t);
        LocalPopChoice(y_27);
      }
    else
      {
        t = x_27;
        t = m_106(t);
      }
    return(t);
  }
  t = q_79(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm w_96 (ATerm), ATerm t)
{
  static ATerm q_2 (ATerm t)
  {
    t = bottomup_1_0(w_96, t);
    return(t);
  }
  t = SRTS_all(q_2, t);
  t = w_96(t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = repeat_2_0(s_2, _id, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_28 = t;
      int c_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MatchingCongruence_0_0(t);
          LocalPopChoice(c_28);
        }
      else
        {
          t = b_28;
          {
            ATerm z_79 = NULL,a_80 = NULL,b_80 = NULL,c_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL,h_80 = NULL,i_80 = NULL,j_80 = NULL;
            h_80 = t;
            if(match_cons(t, sym_Call_2))
              {
                i_80 = ATgetArgument(t, 0);
                j_80 = ATgetArgument(t, 1);
                t = i_80;
                if(match_cons(t, sym_SVar_1))
                  {
                    z_79 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = z_79;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
                  _fail(t);
                t = j_80;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    a_80 = ATgetFirst((ATermList) t);
                    e_80 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = a_80;
                if(match_cons(t, sym_Cong_2))
                  {
                    b_80 = ATgetArgument(t, 0);
                    c_80 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_80;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_80 = ATgetFirst((ATermList) t);
                    g_80 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = g_80;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = h_80;
                t = u_11(b_80, c_80, f_80, t);
              }
            else
              {
                if(match_cons(t, sym_Cong_2))
                  {
                    i_80 = ATgetArgument(t, 0);
                    j_80 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = h_80;
                t = q_11(i_80, j_80, t);
              }
          }
        }
      LocalPopChoice(a_28);
    }
  else
    {
      t = z_27;
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
ATerm map_1_0 (ATerm t_116 (ATerm), ATerm t)
{
  static ATerm e_81 (ATerm t)
  {
    ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL;
    b_81 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_81;
      }
    else
      {
        ATerm n_6 = NULL,q_6 = NULL,r_6 = NULL,e_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_81 = ATgetFirst((ATermList) t);
            d_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_81);
        n_6 = t;
        t = c_81;
        t = t_116(t);
        q_6 = t;
        t = d_81;
        t = e_81(t);
        r_6 = t;
        t = (ATerm) ATinsert(CheckATermList(r_6), q_6);
        e_7 = t;
        t = SSLsetAnnotations(e_7, n_6);
      }
    return(t);
  }
  t = e_81(t);
  return(t);
}
static ATerm v_11 (ATerm d_43, ATerm e_43, ATerm t)
{
  ATerm g_81 = NULL;
  t = SSL_fputc(d_43, e_43);
  g_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_81);
  return(t);
}
static ATerm w_11 (ATerm i_48, ATerm j_48, ATerm t)
{
  ATerm h_81 = NULL;
  t = SSL_write_term_to_stream_text(i_48, j_48);
  h_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_81);
  return(t);
}
static ATerm y_11 (ATerm z_110 (ATerm), ATerm b_419, ATerm m_48, ATerm t)
{
  ATerm i_81 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_419, term_d_28);
  t = b_12(t);
  i_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_81, m_48);
  t = z_110(t);
  t = fclose_0_0(t);
  t = m_48;
  return(t);
}
static ATerm x_11 (ATerm e_48, ATerm f_48, ATerm t)
{
  ATerm j_81 = NULL;
  t = SSL_write_term_to_stream_baf(e_48, f_48);
  j_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_81);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm m_81 = NULL,n_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_28 = ATgetArgument(t, 0);
      if(match_cons(e_28, sym_Stream_1))
        {
          m_81 = ATgetArgument(e_28, 0);
        }
      else
        _fail(t);
      n_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(m_81, n_81, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm o_81 = NULL,p_81 = NULL,q_81 = NULL,r_81 = NULL,s_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_28 = ATgetArgument(t, 0);
      if(match_cons(f_28, sym_Stream_1))
        {
          r_81 = ATgetArgument(f_28, 0);
        }
      else
        _fail(t);
      s_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_11(r_81, s_81, t);
  o_81 = t;
  t = term_g_28;
  p_81 = t;
  t = o_81;
  if(match_cons(t, sym_Stream_1))
    {
      q_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_28, o_81);
  t = v_11(p_81, q_81, t);
  return(t);
}
ATerm output_1_0 (ATerm d_123 (ATerm), ATerm t)
{
  ATerm k_81 = NULL,l_81 = NULL;
  t = d_123(t);
  l_81 = t;
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_28;
        t = get_config_0_0(t);
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        t = term_k_28;
      }
  }
  k_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_81, l_81);
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_28;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, k_81, l_81);
        LocalPopChoice(m_28);
        if(match_cons(t, sym__2))
          {
            ATerm o_28 = ATgetArgument(t, 0);
            ATerm p_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_11(t_2, k_81, l_81, t);
      }
    else
      {
        t = l_28;
        if(match_cons(t, sym__2))
          {
            ATerm q_28 = ATgetArgument(t, 0);
            ATerm r_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_11(u_2, k_81, l_81, t);
      }
  }
  return(t);
}
static ATerm i_82 (ATerm c_82, ATerm t)
{
  t = SSL_fclose(c_82);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_82 = NULL,g_82 = NULL;
  g_82 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_82 = ATgetArgument(t, 0);
      {
        ATerm s_28 = t;
        int t_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_82);
            LocalPopChoice(t_28);
          }
        else
          {
            t = s_28;
            t = i_82(g_82, t);
          }
      }
    }
  else
    {
      t = i_82(g_82, t);
    }
  return(t);
}
static ATerm z_11 (ATerm k_48, ATerm t)
{
  t = SSL_read_term_from_stream(k_48);
  return(t);
}
static ATerm a_12 (ATerm f_43, ATerm g_43, ATerm t)
{
  ATerm j_82 = NULL;
  t = SSL_fopen(f_43, g_43);
  j_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_82);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_82 = NULL;
  t = SSL_stdin_stream();
  k_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_82);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_82 = NULL;
  t = SSL_stdout_stream();
  l_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_82);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_82 = NULL;
  t = SSL_stderr_stream();
  m_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_82);
  return(t);
}
static ATerm u_83 (ATerm t_82, ATerm t)
{
  ATerm u_82 = NULL;
  t = SSL_explode_term(t_82);
  if(match_cons(t, sym__2))
    {
      ATerm u_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_28 = ATgetArgument(t, 1);
        if(((ATgetType(v_28) == AT_LIST) && !(ATisEmpty(v_28))))
          {
            u_82 = ATgetFirst((ATermList) v_28);
            {
              ATerm w_28 = (ATerm) ATgetNext((ATermList) v_28);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_82;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_82;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_82;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_82;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm v_83 (ATerm x_82, ATerm y_82, ATerm z_82, ATerm t)
{
  ATerm a_83 = NULL,b_83 = NULL,c_83 = NULL,f_83 = NULL,y_14 = NULL;
  t = SSLgetAnnotations(z_82);
  c_83 = t;
  t = x_82;
  if(match_cons(t, sym_Path_1))
    {
      f_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_83, y_82);
  y_14 = t;
  t = SSLsetAnnotations(y_14, c_83);
  if(match_cons(t, sym__2))
    {
      a_83 = ATgetArgument(t, 0);
      b_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12(a_83, b_83, t);
  return(t);
}
static ATerm w_83 (ATerm h_83, ATerm i_83, ATerm j_83, ATerm t)
{
  ATerm k_83 = NULL,l_83 = NULL,m_83 = NULL,p_83 = NULL,z_14 = NULL;
  t = SSLgetAnnotations(j_83);
  m_83 = t;
  t = SSL_is_string(h_83);
  p_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_83, i_83);
  z_14 = t;
  t = SSLsetAnnotations(z_14, m_83);
  if(match_cons(t, sym__2))
    {
      k_83 = ATgetArgument(t, 0);
      l_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12(k_83, l_83, t);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm r_83 = NULL,s_83 = NULL,t_83 = NULL;
  r_83 = t;
  if(match_cons(t, sym__2))
    {
      s_83 = ATgetArgument(t, 0);
      t_83 = ATgetArgument(t, 1);
      {
        ATerm x_28 = t;
        int y_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_83(r_83, t);
            LocalPopChoice(y_28);
          }
        else
          {
            t = x_28;
            {
              ATerm a_29 = t;
              int b_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_83(s_83, t_83, r_83, t);
                  LocalPopChoice(b_29);
                }
              else
                {
                  t = a_29;
                  t = w_83(s_83, t_83, r_83, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_83(r_83, t);
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_83 = NULL,y_83 = NULL,z_83 = NULL;
  ATerm d_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_84 = NULL;
      a_84 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_84, term_g_29);
      t = b_12(t);
      LocalPopChoice(f_29);
    }
  else
    {
      t = d_29;
      t = debug_1_0(v_2, t);
      _fail(t);
    }
  y_83 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(z_83, t);
  x_83 = t;
  t = y_83;
  t = fclose_0_0(t);
  t = x_83;
  return(t);
}
ATerm input_1_0 (ATerm e_123 (ATerm), ATerm t)
{
  ATerm h_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_29;
      t = get_config_0_0(t);
      LocalPopChoice(i_29);
    }
  else
    {
      t = h_29;
      t = term_l_29;
    }
  t = ReadFromFile_0_0(t);
  t = e_123(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_84 = NULL,d_84 = NULL,e_84 = NULL,f_84 = NULL,g_84 = NULL;
  c_84 = t;
  t = term_m_29;
  t = whoami_0_0(t);
  d_84 = t;
  t = term_n_29;
  f_84 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_29), d_84), term_o_29);
  g_84 = t;
  t = SSL_printnl(f_84, g_84);
  t = term_q_29;
  e_84 = t;
  t = SSL_exit(e_84);
  t = c_84;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm i_84 = NULL;
  i_84 = t;
  if(match_string(t, "-k"))
    {
      t = i_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_84;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm j_84 = NULL,k_84 = NULL,l_84 = NULL;
  j_84 = t;
  t = SSL_string_to_int(j_84);
  k_84 = t;
  t = term_r_29;
  l_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_29, k_84);
  t = j_12(l_84, k_84, t);
  t = j_84;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_s_29;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_2, y_2, a_3, t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm n_84 = NULL;
  n_84 = t;
  if(match_string(t, "-S"))
    {
      t = n_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_84;
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm o_84 = NULL,q_84 = NULL;
  t = term_t_29;
  o_84 = t;
  t = term_u_29;
  q_84 = t;
  t = term_v_29;
  t = j_12(o_84, q_84, t);
  t = term_w_29;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_x_29;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm r_84 = NULL,s_84 = NULL,t_84 = NULL;
  r_84 = t;
  t = SSL_string_to_int(r_84);
  s_84 = t;
  t = term_t_29;
  t_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_29, s_84);
  t = j_12(t_84, s_84, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_84);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_y_29;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm u_84 = NULL,v_84 = NULL;
  t = term_z_29;
  u_84 = t;
  t = term_m_29;
  v_84 = t;
  t = term_a_30;
  t = j_12(u_84, v_84, t);
  t = term_b_30;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_c_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_30 = t;
  int e_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_3, c_3, d_3, t);
      LocalPopChoice(e_30);
    }
  else
    {
      t = d_30;
      {
        ATerm f_30 = t;
        int g_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_3, f_3, g_3, t);
            LocalPopChoice(g_30);
          }
        else
          {
            t = f_30;
            t = Option_3_0(i_3, j_3, l_3, t);
          }
      }
    }
  return(t);
}
static ATerm j_12 (ATerm x_46, ATerm y_46, ATerm t)
{
  ATerm w_84 = NULL;
  t = term_h_30;
  w_84 = t;
  t = SSL_table_put(w_84, x_46, y_46);
  t = (ATerm) ATmakeAppl(sym__3, term_h_30, x_46, y_46);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm z_84 = NULL,a_85 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_85 = NULL,c_85 = NULL,d_85 = NULL;
      t = term_m_29;
      t = e_0(t);
      b_85 = t;
      t = term_i_30;
      c_85 = t;
      t = term_j_30;
      d_85 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_30, term_j_30, b_85);
      t = h_12(c_85, d_85, b_85, t);
      _fail(t);
    }
  else
    {
      ATerm g_85 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_84 = ATgetFirst((ATermList) t);
          a_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_84;
      t = c_0(t);
      t = term_m_29;
      t = d_0(t);
      g_85 = t;
      t = (ATerm) ATinsert(CheckATermList(a_85), g_85);
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm i_85 = NULL;
  i_85 = t;
  if(match_string(t, "-o"))
    {
      t = i_85;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_85;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm j_85 = NULL,k_85 = NULL;
  j_85 = t;
  t = term_j_28;
  k_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_28, j_85);
  t = j_12(k_85, j_85, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_85);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_k_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_3, n_3, o_3, t);
  return(t);
}
static ATerm h_12 (ATerm i_51, ATerm j_51, ATerm h_51, ATerm t)
{
  ATerm m_85 = NULL,n_85 = NULL,o_85 = NULL;
  m_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_51, j_51);
  {
    ATerm l_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_30 = ATgetArgument(t, 0);
            ATerm p_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_51, j_51);
        t = g_12(i_51, j_51, t);
        LocalPopChoice(n_30);
      }
    else
      {
        t = l_30;
        t = (ATerm) ATempty;
      }
  }
  n_85 = t;
  t = (ATerm) ATinsert(CheckATermList(n_85), h_51);
  o_85 = t;
  t = SSL_table_put(i_51, j_51, o_85);
  t = m_85;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm v_85 = NULL,w_85 = NULL,x_85 = NULL,y_85 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_85 = NULL,a_86 = NULL,b_86 = NULL;
      t = term_m_29;
      t = n_0(t);
      z_85 = t;
      t = term_i_30;
      a_86 = t;
      t = term_j_30;
      b_86 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_30, term_j_30, z_85);
      t = h_12(a_86, b_86, z_85, t);
      _fail(t);
    }
  else
    {
      ATerm f_86 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_85 = ATgetFirst((ATermList) t);
          w_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_85;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_85 = ATgetFirst((ATermList) t);
          y_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_85;
      t = k_0(t);
      t = x_85;
      t = l_0(t);
      f_86 = t;
      t = (ATerm) ATinsert(CheckATermList(y_85), f_86);
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm h_86 = NULL;
  h_86 = t;
  if(match_string(t, "-i"))
    {
      t = h_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_86;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm i_86 = NULL,j_86 = NULL;
  i_86 = t;
  t = term_j_29;
  j_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_29, i_86);
  t = j_12(j_86, i_86, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_86);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_q_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_3, q_3, r_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_86 = NULL,l_86 = NULL,m_86 = NULL,n_86 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_29;
  t = whoami_0_0(t);
  k_86 = t;
  t = term_n_29;
  m_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_30), k_86);
  n_86 = t;
  t = SSL_printnl(m_86, n_86);
  t = term_q_29;
  l_86 = t;
  t = SSL_exit(l_86);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_s_30;
  t = get_config_0_0(t);
  return(t);
}
static ATerm c_12 (ATerm m_49, ATerm n_49, ATerm t)
{
  ATerm t_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_49, n_49);
      LocalPopChoice(v_30);
    }
  else
    {
      t = t_30;
      t = SSL_addr(m_49, n_49);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_115 (ATerm), ATerm k_115 (ATerm), ATerm t)
{
  ATerm p_86 = NULL,q_86 = NULL,s_86 = NULL;
  p_86 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_86;
      t = j_115(t);
    }
  else
    {
      ATerm w_86 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_86 = ATgetFirst((ATermList) t);
          s_86 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_86;
      t = foldr_2_0(j_115, k_115, t);
      w_86 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_86, w_86);
      t = k_115(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_u_29;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL;
  if(match_cons(t, sym__2))
    {
      g_7 = ATgetArgument(t, 0);
      h_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_12(g_7, h_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_86 = NULL,c_7 = NULL,d_7 = NULL;
  t = times_0_0(t);
  d_7 = t;
  t = SSL_explode_term(d_7);
  if(match_cons(t, sym__2))
    {
      ATerm w_30 = ATgetArgument(t, 0);
      c_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7;
  t = foldr_2_0(t_3, u_3, t);
  z_86 = t;
  t = SSL_TicksToSeconds(z_86);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_87 = NULL,l_87 = NULL,m_87 = NULL;
  k_87 = t;
  if(match_cons(t, sym__2))
    {
      l_87 = ATgetArgument(t, 0);
      m_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_87;
        if((l_87 != t))
          {
            _fail(t);
          }
        t = k_87;
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
        t = (ATerm) ATmakeAppl(sym__2, l_87, m_87);
        {
          ATerm z_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_87, m_87);
              LocalPopChoice(a_31);
            }
          else
            {
              t = z_30;
              t = SSL_gtr(l_87, m_87);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_87, m_87);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_108 (ATerm), ATerm t)
{
  ATerm q_87 = NULL;
  q_87 = t;
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_87 = NULL;
        t = term_t_29;
        t = get_config_0_0(t);
        s_87 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_87, term_q_29);
        t = geq_0_0(t);
        t = q_87;
        t = w_108(t);
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
        t = q_87;
      }
  }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm u_87 = NULL,v_87 = NULL,x_87 = NULL,y_87 = NULL;
  t = run_time_0_0(t);
  u_87 = t;
  t = term_m_29;
  t = whoami_0_0(t);
  v_87 = t;
  t = term_n_29;
  x_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_31), u_87), term_d_31), v_87);
  y_87 = t;
  t = SSL_printnl(x_87, y_87);
  t = (ATerm) ATmakeAppl(sym__2, term_n_29, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_31), u_87), term_d_31), v_87));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_87 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_29;
  z_87 = t;
  t = SSL_exit(z_87);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm h_88 = NULL,i_88 = NULL;
  i_88 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_88;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_88 = ATgetArgument(t, 0);
          {
            ATerm b_8 = NULL,c_15 = NULL;
            t = SSLgetAnnotations(i_88);
            b_8 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_88);
            c_15 = t;
            t = SSLsetAnnotations(c_15, b_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_88;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_122 (ATerm), ATerm t)
{
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_31;
      t = get_config_0_0(t);
      LocalPopChoice(g_31);
    }
  else
    {
      t = f_31;
      t = fetch_1_0(x_3, t);
    }
  t = u_122(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm m_88 = NULL,n_88 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_88 = ATgetFirst((ATermList) t);
      n_88 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_88 = NULL,s_88 = NULL;
        static ATerm y_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_88)), not_null(s_88));
          return(t);
        }
        t = n_88;
        t = i_0(t);
        if(((r_88 != NULL) && (r_88 != t)))
          _fail(t);
        else
          r_88 = t;
        t = m_88;
        t = g_0(t);
        if(((s_88 != NULL) && (s_88 != t)))
          _fail(t);
        else
          s_88 = t;
        t = n_88;
        t = reverse_acc_2_0(g_0, y_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_29;
      t = i_0(t);
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm w_88 = NULL,x_88 = NULL,y_88 = NULL,m_15 = NULL;
  y_88 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_88);
  w_88 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_88);
  m_15 = t;
  t = SSLsetAnnotations(m_15, w_88);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm a_89 = NULL;
  a_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_89), term_j_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_88 = NULL,v_88 = NULL;
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_30;
      t = get_config_0_0(t);
      LocalPopChoice(l_31);
    }
  else
    {
      t = k_31;
      t = fetch_1_0(z_3, t);
    }
  t = term_m_31;
  t = echo_0_0(t);
  t = term_i_30;
  u_88 = t;
  t = term_j_30;
  v_88 = t;
  t = term_n_31;
  t = g_12(u_88, v_88, t);
  t = reverse_acc_2_0(_id, a_4, t);
  t = map_1_0(b_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm d_117 (ATerm), ATerm t)
{
  static ATerm x_89 (ATerm t)
  {
    ATerm u_89 = NULL,v_89 = NULL,w_89 = NULL;
    u_89 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_89 = ATgetFirst((ATermList) t);
        w_89 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_31 = t;
      int p_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_8 = NULL,u_8 = NULL,z_15 = NULL;
          t = SSLgetAnnotations(u_89);
          m_8 = t;
          t = v_89;
          t = d_117(t);
          u_8 = t;
          t = (ATerm) ATinsert(CheckATermList(w_89), u_8);
          z_15 = t;
          t = SSLsetAnnotations(z_15, m_8);
          LocalPopChoice(p_31);
        }
      else
        {
          t = o_31;
          {
            ATerm e_9 = NULL,h_9 = NULL,a_16 = NULL;
            t = SSLgetAnnotations(u_89);
            e_9 = t;
            t = w_89;
            t = x_89(t);
            h_9 = t;
            t = (ATerm) ATinsert(CheckATermList(h_9), v_89);
            a_16 = t;
            t = SSLsetAnnotations(a_16, e_9);
          }
        }
    }
    return(t);
  }
  t = x_89(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_90 = NULL,c_90 = NULL,d_90 = NULL;
  b_90 = t;
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_90;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_31 = ATgetFirst((ATermList) t);
                ATerm t_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_90;
          }
        LocalPopChoice(r_31);
      }
    else
      {
        t = q_31;
        t = (ATerm) ATinsert(ATempty, b_90);
      }
  }
  c_90 = t;
  t = term_k_28;
  d_90 = t;
  t = SSL_printnl(d_90, c_90);
  t = b_90;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_s_30;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm f_12 (ATerm w_41, ATerm x_41, ATerm t)
{
  t = SSL_strcat(w_41, x_41);
  return(t);
}
ATerm debug_1_0 (ATerm x_110 (ATerm), ATerm t)
{
  ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL,k_90 = NULL;
  h_90 = t;
  t = x_110(t);
  i_90 = t;
  t = term_n_29;
  j_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_90), i_90);
  k_90 = t;
  t = SSL_printnl(j_90, k_90);
  t = h_90;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_w_31;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_90 = NULL;
      r_90 = t;
      t = SSL_is_string(r_90);
      LocalPopChoice(y_31);
    }
  else
    {
      t = x_31;
      {
        ATerm z_31 = t;
        int a_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(c_4, t);
            LocalPopChoice(a_32);
          }
        else
          {
            t = z_31;
            {
              ATerm x_90 = NULL,y_90 = NULL,z_90 = NULL;
              x_90 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_90 = ATgetArgument(t, 0);
                  t = y_90;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_90 = ATgetArgument(t, 0);
                      t = y_90;
                      {
                        ATerm c_32 = t;
                        int d_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(d_32);
                          }
                        else
                          {
                            t = c_32;
                            t = debug_1_0(d_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_91 = NULL,e_91 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_90 = ATgetArgument(t, 0);
                          z_90 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_90;
                      t = eval_config_0_0(t);
                      d_91 = t;
                      t = z_90;
                      t = eval_config_0_0(t);
                      e_91 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_91, e_91);
                      t = f_12(d_91, e_91, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_12 (ATerm z_52, ATerm a_53, ATerm t)
{
  t = SSL_table_get(z_52, a_53);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm i_91 = NULL,j_91 = NULL;
  i_91 = t;
  t = term_h_30;
  j_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_30, i_91);
  t = g_12(j_91, i_91, t);
  {
    ATerm e_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_91 = NULL,l_91 = NULL;
        t = eval_config_0_0(t);
        k_91 = t;
        t = term_h_30;
        l_91 = t;
        t = SSL_table_put(l_91, i_91, k_91);
        t = k_91;
        LocalPopChoice(f_32);
      }
    else
      {
        t = e_32;
      }
  }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm o_91 = NULL,p_91 = NULL;
  t = term_g_32;
  o_91 = t;
  t = term_m_29;
  p_91 = t;
  t = term_h_32;
  t = j_12(o_91, p_91, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_i_32;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm q_91 = NULL,r_91 = NULL,s_91 = NULL,t_91 = NULL;
  t = term_g_32;
  s_91 = t;
  t = term_m_29;
  t_91 = t;
  t = term_h_32;
  t = j_12(s_91, t_91, t);
  t = term_j_32;
  q_91 = t;
  t = term_m_29;
  r_91 = t;
  t = term_k_32;
  t = j_12(q_91, r_91, t);
  t = term_l_32;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_m_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_32 = t;
  int o_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_4, g_4, h_4, t);
      LocalPopChoice(o_32);
    }
  else
    {
      t = n_32;
      t = Option_3_0(j_4, k_4, l_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm t)
{
  ATerm u_91 = NULL,v_91 = NULL,w_91 = NULL,x_91 = NULL,y_91 = NULL,z_91 = NULL,d_16 = NULL;
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
  t = a_82(t);
  x_91 = t;
  t = w_91;
  t = b_82(t);
  y_91 = t;
  t = (ATerm) ATinsert(CheckATermList(y_91), x_91);
  d_16 = t;
  t = SSLsetAnnotations(d_16, u_91);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_124 (ATerm), ATerm t)
{
  ATerm e_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL,j_92 = NULL,k_92 = NULL,o_16 = NULL;
  e_92 = t;
  {
    ATerm p_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_32;
        t = x_124(t);
        LocalPopChoice(q_32);
      }
    else
      {
        t = p_32;
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
  t = term_s_30;
  k_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_30, g_92);
  t = j_12(k_92, g_92, t);
  t = h_92;
  {
    static ATerm v_92 (ATerm t)
    {
      ATerm s_32 = t;
      int t_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_32 = t;
          int v_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_92 = NULL;
              n_92 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_92;
              LocalPopChoice(v_32);
            }
          else
            {
              t = u_32;
              t = x_124(t);
              t = Cons_2_0(_id, v_92, t);
            }
          LocalPopChoice(t_32);
        }
      else
        {
          t = s_32;
          {
            ATerm q_92 = NULL,r_92 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_92 = ATgetFirst((ATermList) t);
                r_92 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_92), (ATerm) ATmakeAppl(sym_Undefined_1, q_92));
          }
        }
      return(t);
    }
    t = v_92(t);
  }
  j_92 = t;
  t = (ATerm) ATinsert(CheckATermList(j_92), (ATerm) ATmakeAppl(sym_Program_1, g_92));
  o_16 = t;
  t = SSLsetAnnotations(o_16, f_92);
  return(t);
}
static ATerm o_4 (ATerm t)
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
static ATerm q_4 (ATerm t)
{
  ATerm i_93 = NULL,j_93 = NULL;
  t = term_h_31;
  i_93 = t;
  t = term_m_29;
  j_93 = t;
  t = term_w_32;
  t = j_12(i_93, j_93, t);
  t = term_x_32;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_y_32;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_124 (ATerm), ATerm t)
{
  ATerm a_93 = NULL,b_93 = NULL,c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL,g_93 = NULL;
  c_93 = t;
  t = term_i_30;
  e_93 = t;
  t = term_j_30;
  f_93 = t;
  t = (ATerm) ATempty;
  g_93 = t;
  t = SSL_table_put(e_93, f_93, g_93);
  t = c_93;
  {
    static ATerm n_4 (ATerm t)
    {
      ATerm z_32 = t;
      int a_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_124(t);
          LocalPopChoice(a_33);
        }
      else
        {
          t = z_32;
          {
            ATerm b_33 = t;
            int c_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_4, q_4, s_4, t);
                LocalPopChoice(c_33);
              }
            else
              {
                t = b_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_4, t);
  }
  {
    ATerm d_33 = t;
    int e_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_93 = NULL;
        q_93 = t;
        {
          ATerm g_33 = t;
          int h_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_9 = NULL;
              t = q_93;
              {
                ATerm i_33 = t;
                int j_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_h_31;
                    t = get_config_0_0(t);
                    LocalPopChoice(j_33);
                  }
                else
                  {
                    t = i_33;
                    t = fetch_1_0(v_4, t);
                  }
              }
              t = q_93;
              t = default_system_usage_0_0(t);
              t = term_u_29;
              y_9 = t;
              t = SSL_exit(y_9);
              LocalPopChoice(h_33);
            }
          else
            {
              t = g_33;
              {
                ATerm d_10 = NULL;
                t = term_g_32;
                t = get_config_0_0(t);
                t = q_93;
                t = default_system_about_0_0(t);
                t = term_u_29;
                d_10 = t;
                t = SSL_exit(d_10);
              }
            }
        }
        LocalPopChoice(e_33);
      }
    else
      {
        t = d_33;
        {
          ATerm k_33 = t;
          int l_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_93 = NULL,s_93 = NULL,t_93 = NULL;
              static ATerm z_4 (ATerm t)
              {
                ATerm u_93 = NULL,v_93 = NULL,w_93 = NULL,v_16 = NULL;
                w_93 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_93 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_93);
                u_93 = t;
                t = v_93;
                if(((a_93 != NULL) && (a_93 != t)))
                  _fail(t);
                else
                  a_93 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_93);
                v_16 = t;
                t = SSLsetAnnotations(v_16, u_93);
                return(t);
              }
              t = fetch_1_0(z_4, t);
              t = term_n_29;
              s_93 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_93)), term_n_33);
              t_93 = t;
              t = SSL_printnl(s_93, t_93);
              t = (ATerm) ATmakeAppl(sym__2, term_n_29, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_93)), term_n_33));
              t = default_system_usage_0_0(t);
              t = term_q_29;
              r_93 = t;
              t = SSL_exit(r_93);
              LocalPopChoice(l_33);
            }
          else
            {
              t = k_33;
            }
        }
      }
  }
  b_93 = t;
  t = term_i_30;
  d_93 = t;
  t = SSL_table_destroy(d_93);
  t = b_93;
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_122 (ATerm), ATerm x_122 (ATerm), ATerm y_122 (ATerm), ATerm z_122 (ATerm), ATerm t)
{
  ATerm b_94 = NULL,c_94 = NULL,d_94 = NULL,e_94 = NULL;
  t = parse_options_1_0(w_122, t);
  b_94 = t;
  t = term_o_33;
  e_94 = t;
  t = SSL_table_create(e_94);
  t = term_o_33;
  c_94 = t;
  t = term_p_33;
  d_94 = t;
  t = SSL_table_put(c_94, d_94, b_94);
  t = b_94;
  t = y_122(t);
  {
    ATerm q_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_122, t);
        LocalPopChoice(s_33);
      }
    else
      {
        t = q_33;
        {
          ATerm t_33 = t;
          int u_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_122(t);
              t = report_success_0_0(t);
              LocalPopChoice(u_33);
            }
          else
            {
              t = t_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm v_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
            LocalPopChoice(y_33);
          }
        else
          {
            t = x_33;
            {
              ATerm z_33 = t;
              int a_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(d_5, e_5, f_5, t);
                  LocalPopChoice(a_34);
                }
              else
                {
                  t = z_33;
                  {
                    ATerm b_34 = t;
                    int c_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(c_34);
                      }
                    else
                      {
                        t = b_34;
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
static ATerm c_5 (ATerm t)
{
  t = input_1_0(g_5, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm j_94 = NULL,k_94 = NULL;
  t = term_n_28;
  j_94 = t;
  t = term_m_29;
  k_94 = t;
  t = term_d_34;
  t = j_12(j_94, k_94, t);
  t = term_e_34;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_f_34;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = output_1_0(h_5, t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm m_94 = NULL,n_94 = NULL,o_94 = NULL,p_94 = NULL,q_94 = NULL,r_94 = NULL,s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL,w_94 = NULL,x_94 = NULL,y_94 = NULL,z_94 = NULL,a_95 = NULL,k_17 = NULL,j_17 = NULL,z_16 = NULL,y_16 = NULL;
  a_95 = t;
  if(match_cons(t, sym_Specification_1))
    {
      n_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_95);
  m_94 = t;
  t = n_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_94 = ATgetFirst((ATermList) t);
      q_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_94);
  o_94 = t;
  t = q_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_94 = ATgetFirst((ATermList) t);
      u_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_94);
  s_94 = t;
  t = t_94;
  if(match_cons(t, sym_Strategies_1))
    {
      x_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_94);
  w_94 = t;
  t = x_94;
  t = map_1_0(i_5, t);
  y_94 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, y_94);
  y_16 = t;
  t = SSLsetAnnotations(y_16, w_94);
  z_94 = t;
  t = u_94;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_94), z_94);
  z_16 = t;
  t = SSLsetAnnotations(z_16, s_94);
  v_94 = t;
  t = (ATerm) ATinsert(CheckATermList(v_94), p_94);
  j_17 = t;
  t = SSLsetAnnotations(j_17, o_94);
  r_94 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, r_94);
  k_17 = t;
  t = SSLsetAnnotations(k_17, m_94);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm o_95 = NULL,p_95 = NULL,q_95 = NULL,r_95 = NULL,s_95 = NULL;
  s_95 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      o_95 = ATgetArgument(t, 0);
      p_95 = ATgetArgument(t, 1);
      q_95 = ATgetArgument(t, 2);
      r_95 = ATgetArgument(t, 3);
      {
        ATerm h_34 = t;
        int i_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_10 = NULL,d_14 = NULL,x_16 = NULL;
            t = SSLgetAnnotations(s_95);
            l_10 = t;
            t = r_95;
            t = define_congruences_0_0(t);
            d_14 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, o_95, p_95, q_95, d_14);
            x_16 = t;
            t = SSLsetAnnotations(x_16, l_10);
            LocalPopChoice(i_34);
          }
        else
          {
            t = h_34;
            t = s_95;
          }
      }
    }
  else
    {
      t = s_95;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(a_5, default_usage_0_0, _id, c_5, t);
  return(t);
}
