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
Symbol sym_Prefix_2;
Symbol sym_Undefined_0;
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
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
ATerm term_o_32;
ATerm term_n_32;
ATerm term_l_32;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_e_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_v_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_z_29;
ATerm term_q_29;
ATerm term_o_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_s_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_j_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_e_27;
ATerm term_b_27;
ATerm term_m_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_e_26;
ATerm term_b_26;
ATerm term_v_24;
ATerm term_b_24;
ATerm term_z_7;
ATerm term_s_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym__2, term_t_27, term_u_27);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_27);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym__2, term_a_28, term_j_27);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym__2, term_l_28, term_m_28);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym__2, term_j_30, term_j_27);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym__2, term_m_30, term_j_27);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym__2, term_k_29, term_j_27);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym__2, term_m_26, term_j_27);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm bottomup_1_0 (ATerm a_97 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm d_98 (ATerm), ATerm t);
static ATerm t_0 (ATerm c_0, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm h_0 (ATerm t);
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
static ATerm b_11 (ATerm m_27, ATerm n_27, ATerm o_27, ATerm t);
ATerm genzip_4_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm n_117 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm y_53 (ATerm p_53, ATerm t);
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
ATerm topdown_1_0 (ATerm z_96 (ATerm), ATerm t);
ATerm map_1_0 (ATerm x_116 (ATerm), ATerm t);
static ATerm f_11 (ATerm e_43, ATerm f_43, ATerm t);
static ATerm g_11 (ATerm k_48, ATerm l_48, ATerm t);
static ATerm i_11 (ATerm d_111 (ATerm), ATerm k_420, ATerm o_48, ATerm t);
static ATerm h_11 (ATerm g_48, ATerm h_48, ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm output_1_0 (ATerm h_123 (ATerm), ATerm t);
static ATerm x_58 (ATerm r_58, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm j_11 (ATerm m_48, ATerm t);
static ATerm k_11 (ATerm g_43, ATerm h_43, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_60 (ATerm h_59, ATerm t);
static ATerm j_60 (ATerm l_59, ATerm m_59, ATerm n_59, ATerm t);
static ATerm k_60 (ATerm v_59, ATerm w_59, ATerm x_59, ATerm t);
static ATerm l_11 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm i_123 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm t_11 (ATerm z_46, ATerm a_47, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_11 (ATerm k_51, ATerm l_51, ATerm j_51, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm m_11 (ATerm o_49, ATerm p_49, ATerm t);
ATerm foldr_2_0 (ATerm n_115 (ATerm), ATerm o_115 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm a_109 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm need_help_1_0 (ATerm y_122 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm h_117 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm p_11 (ATerm x_41, ATerm y_41, ATerm t);
ATerm debug_1_0 (ATerm b_111 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm q_11 (ATerm b_53, ATerm c_53, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm e_82 (ATerm), ATerm f_82 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm b_125 (ATerm), ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm parse_options_1_0 (ATerm a_125 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm a_123 (ATerm), ATerm b_123 (ATerm), ATerm c_123 (ATerm), ATerm d_123 (ATerm), ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm a_97 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = bottomup_1_0(a_97, t);
    return(t);
  }
  t = SRTS_all(a_0, t);
  t = a_97(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm d_98 (ATerm), ATerm t)
{
  static ATerm u_0 (ATerm t)
  {
    ATerm l_6 = t;
    int n_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_98(t);
        LocalPopChoice(n_6);
      }
    else
      {
        t = l_6;
        t = SRTS_one(u_0, t);
      }
    return(t);
  }
  t = u_0(t);
  return(t);
}
static ATerm t_0 (ATerm c_0, ATerm t)
{
  ATerm e_0 = NULL;
  t = SSL_explode_term(c_0);
  if(match_cons(t, sym__2))
    {
      ATerm o_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_0;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm j_0 = NULL,m_0 = NULL,q_0 = NULL;
  q_0 = t;
  if(match_cons(t, sym__2))
    {
      j_0 = ATgetArgument(t, 0);
      m_0 = ATgetArgument(t, 1);
      {
        ATerm p_6 = t;
        int q_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_0 (ATerm t)
            {
              t = m_0;
              return(t);
            }
            t = j_0;
            t = at_end_1_0(b_0, t);
            LocalPopChoice(q_6);
          }
        else
          {
            t = p_6;
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
static ATerm h_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_6 = ATgetArgument(t, 0);
      if(((ATgetType(r_6) != AT_LIST) || !(ATisEmpty(r_6))))
        _fail(t);
      {
        ATerm s_6 = ATgetArgument(t, 1);
        if(((ATgetType(s_6) != AT_LIST) || !(ATisEmpty(s_6))))
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
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_6 = ATgetArgument(t, 0);
      if(((ATgetType(t_6) == AT_LIST) && !(ATisEmpty(t_6))))
        {
          o_15 = ATgetFirst((ATermList) t_6);
          p_15 = (ATerm) ATgetNext((ATermList) t_6);
        }
      else
        _fail(t);
      {
        ATerm v_6 = ATgetArgument(t, 1);
        if(((ATgetType(v_6) == AT_LIST) && !(ATisEmpty(v_6))))
          {
            q_15 = ATgetFirst((ATermList) v_6);
            r_15 = (ATerm) ATgetNext((ATermList) v_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_15, q_15), (ATerm) ATmakeAppl(sym__2, p_15, r_15));
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL;
  if(match_cons(t, sym__2))
    {
      s_15 = ATgetArgument(t, 0);
      t_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_15), s_15);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm u_15 = NULL,x_15 = NULL;
  if(match_cons(t, sym__2))
    {
      u_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_15), (ATerm) ATmakeAppl(sym_Match_1, x_15));
  return(t);
}
static ATerm x_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_6 = ATgetArgument(t, 0);
      if(((ATgetType(w_6) != AT_LIST) || !(ATisEmpty(w_6))))
        _fail(t);
      {
        ATerm y_6 = ATgetArgument(t, 1);
        if(((ATgetType(y_6) != AT_LIST) || !(ATisEmpty(y_6))))
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
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL,e_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_6 = ATgetArgument(t, 0);
      if(((ATgetType(z_6) == AT_LIST) && !(ATisEmpty(z_6))))
        {
          x_24 = ATgetFirst((ATermList) z_6);
          y_24 = (ATerm) ATgetNext((ATermList) z_6);
        }
      else
        _fail(t);
      {
        ATerm b_7 = ATgetArgument(t, 1);
        if(((ATgetType(b_7) == AT_LIST) && !(ATisEmpty(b_7))))
          {
            z_24 = ATgetFirst((ATermList) b_7);
            e_25 = (ATerm) ATgetNext((ATermList) b_7);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_24, z_24), (ATerm) ATmakeAppl(sym__2, y_24, e_25));
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL;
  if(match_cons(t, sym__2))
    {
      f_25 = ATgetArgument(t, 0);
      g_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_25), f_25);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm k_25 = NULL,m_25 = NULL;
  if(match_cons(t, sym__2))
    {
      k_25 = ATgetArgument(t, 0);
      m_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_25), (ATerm) ATmakeAppl(sym_Match_1, m_25));
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm c_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm f_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(d_7);
      {
        ATerm q_36 = NULL,r_36 = NULL;
        q_36 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm g_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        r_36 = t;
        t = SSLgetAnnotations(q_36);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_7 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) h_7) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm j_7 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(j_7) != AT_LIST) || !(ATisEmpty(j_7))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = r_36;
      }
    }
  else
    {
      t = c_7;
      {
        ATerm k_7 = t;
        int l_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm m_7 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) m_7) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm n_7 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(l_7);
            _fail(t);
          }
        else
          {
            t = k_7;
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
  static ATerm f_0 (ATerm t)
  {
    ATerm i_8 = NULL,v_8 = NULL,x_8 = NULL,i_9 = NULL,r_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL;
    j_10 = t;
    if(match_cons(t, sym_Test_1))
      {
        i_10 = ATgetArgument(t, 0);
        t = i_10;
        if(match_cons(t, sym_Id_0))
          {
            ATerm o_7 = t;
            int r_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_s_7;
                t = f_0(t);
                LocalPopChoice(r_7);
              }
            else
              {
                t = o_7;
                {
                  ATerm t_7 = t;
                  int u_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL;
                      t = j_10;
                      t = new_0_0(t);
                      l_10 = t;
                      t = bottomup_1_0(f_0, t);
                      w_10 = t;
                      t = (ATerm) ATempty;
                      t = f_0(t);
                      x_10 = t;
                      t = (ATerm) ATinsert(CheckATermList(x_10), w_10);
                      t = f_0(t);
                      m_10 = t;
                      t = l_10;
                      t = bottomup_1_0(f_0, t);
                      v_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, v_10);
                      t = f_0(t);
                      u_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, u_10);
                      t = f_0(t);
                      o_10 = t;
                      t = i_10;
                      t = bottomup_1_0(f_0, t);
                      q_10 = t;
                      t = l_10;
                      t = bottomup_1_0(f_0, t);
                      t_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, t_10);
                      t = f_0(t);
                      s_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, s_10);
                      t = f_0(t);
                      r_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_10, r_10);
                      t = f_0(t);
                      p_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_10, p_10);
                      t = f_0(t);
                      n_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, n_10);
                      t = f_0(t);
                      LocalPopChoice(u_7);
                    }
                  else
                    {
                      t = t_7;
                      t = j_10;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm x_7 = t;
                int y_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_z_7;
                    t = f_0(t);
                    LocalPopChoice(y_7);
                  }
                else
                  {
                    t = x_7;
                    {
                      ATerm b_8 = t;
                      int c_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm a_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,n_11 = NULL,o_11 = NULL,s_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
                          t = j_10;
                          t = new_0_0(t);
                          a_11 = t;
                          t = bottomup_1_0(f_0, t);
                          y_11 = t;
                          t = (ATerm) ATempty;
                          t = f_0(t);
                          z_11 = t;
                          t = (ATerm) ATinsert(CheckATermList(z_11), y_11);
                          t = f_0(t);
                          c_11 = t;
                          t = a_11;
                          t = bottomup_1_0(f_0, t);
                          x_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, x_11);
                          t = f_0(t);
                          w_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, w_11);
                          t = f_0(t);
                          e_11 = t;
                          t = i_10;
                          t = bottomup_1_0(f_0, t);
                          o_11 = t;
                          t = a_11;
                          t = bottomup_1_0(f_0, t);
                          v_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, v_11);
                          t = f_0(t);
                          u_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                          t = f_0(t);
                          s_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, o_11, s_11);
                          t = f_0(t);
                          n_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_11, n_11);
                          t = f_0(t);
                          d_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, c_11, d_11);
                          t = f_0(t);
                          LocalPopChoice(c_8);
                        }
                      else
                        {
                          t = b_8;
                          t = j_10;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    f_10 = ATgetArgument(t, 0);
                    {
                      ATerm d_8 = t;
                      int e_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, f_10);
                          t = f_0(t);
                          LocalPopChoice(e_8);
                        }
                      else
                        {
                          t = d_8;
                          {
                            ATerm f_8 = t;
                            int h_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
                                t = j_10;
                                t = new_0_0(t);
                                d_12 = t;
                                t = bottomup_1_0(f_0, t);
                                o_12 = t;
                                t = (ATerm) ATempty;
                                t = f_0(t);
                                p_12 = t;
                                t = (ATerm) ATinsert(CheckATermList(p_12), o_12);
                                t = f_0(t);
                                e_12 = t;
                                t = d_12;
                                t = bottomup_1_0(f_0, t);
                                n_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, n_12);
                                t = f_0(t);
                                m_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, m_12);
                                t = f_0(t);
                                g_12 = t;
                                t = i_10;
                                t = bottomup_1_0(f_0, t);
                                i_12 = t;
                                t = d_12;
                                t = bottomup_1_0(f_0, t);
                                l_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, l_12);
                                t = f_0(t);
                                k_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, k_12);
                                t = f_0(t);
                                j_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, j_12);
                                t = f_0(t);
                                h_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                t = f_0(t);
                                f_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, f_12);
                                t = f_0(t);
                                LocalPopChoice(h_8);
                              }
                            else
                              {
                                t = f_8;
                                t = j_10;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm j_8 = t;
                    int k_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL;
                        t = j_10;
                        t = new_0_0(t);
                        s_12 = t;
                        t = bottomup_1_0(f_0, t);
                        d_13 = t;
                        t = (ATerm) ATempty;
                        t = f_0(t);
                        e_13 = t;
                        t = (ATerm) ATinsert(CheckATermList(e_13), d_13);
                        t = f_0(t);
                        t_12 = t;
                        t = s_12;
                        t = bottomup_1_0(f_0, t);
                        c_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, c_13);
                        t = f_0(t);
                        b_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, b_13);
                        t = f_0(t);
                        v_12 = t;
                        t = i_10;
                        t = bottomup_1_0(f_0, t);
                        x_12 = t;
                        t = s_12;
                        t = bottomup_1_0(f_0, t);
                        a_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, a_13);
                        t = f_0(t);
                        z_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, z_12);
                        t = f_0(t);
                        y_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                        t = f_0(t);
                        w_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, v_12, w_12);
                        t = f_0(t);
                        u_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, t_12, u_12);
                        t = f_0(t);
                        LocalPopChoice(k_8);
                      }
                    else
                      {
                        t = j_8;
                        t = j_10;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            i_10 = ATgetArgument(t, 0);
            t = i_10;
            if(match_cons(t, sym_Id_0))
              {
                ATerm l_8 = t;
                int m_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_z_7;
                    t = f_0(t);
                    LocalPopChoice(m_8);
                  }
                else
                  {
                    t = l_8;
                    t = j_10;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm n_8 = t;
                    int p_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_s_7;
                        t = f_0(t);
                        LocalPopChoice(p_8);
                      }
                    else
                      {
                        t = n_8;
                        t = j_10;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        f_10 = ATgetArgument(t, 0);
                        {
                          ATerm q_8 = t;
                          int r_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, f_10);
                              t = f_0(t);
                              LocalPopChoice(r_8);
                            }
                          else
                            {
                              t = q_8;
                              t = j_10;
                            }
                        }
                      }
                    else
                      {
                        t = j_10;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                i_10 = ATgetArgument(t, 0);
                h_10 = ATgetArgument(t, 1);
                t = h_10;
                if(match_cons(t, sym_Id_0))
                  {
                    t = i_10;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = h_10;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = i_10;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                f_10 = ATgetArgument(t, 0);
                                g_10 = ATgetArgument(t, 1);
                                t = i_10;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    f_10 = ATgetArgument(t, 0);
                                    g_10 = ATgetArgument(t, 1);
                                    t = i_10;
                                  }
                                else
                                  {
                                    t = i_10;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        d_10 = ATgetArgument(t, 0);
                        e_10 = ATgetArgument(t, 1);
                        t = d_10;
                        if(match_cons(t, sym_Match_1))
                          {
                            c_10 = ATgetArgument(t, 0);
                            t = c_10;
                            if(match_cons(t, sym_Op_2))
                              {
                                a_10 = ATgetArgument(t, 0);
                                v_9 = ATgetArgument(t, 1);
                                t = i_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = h_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm s_8 = t;
                                        int u_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_z_7;
                                            t = f_0(t);
                                            LocalPopChoice(u_8);
                                          }
                                        else
                                          {
                                            t = s_8;
                                            t = j_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_10 = ATgetArgument(t, 0);
                                            g_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm b_9 = t;
                                              int c_9 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm e_15 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                  t = f_0(t);
                                                  e_15 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, e_15);
                                                  t = f_0(t);
                                                  LocalPopChoice(c_9);
                                                }
                                              else
                                                {
                                                  t = b_9;
                                                  t = j_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                t = f_10;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    b_10 = ATgetArgument(t, 0);
                                                    w_9 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm d_9 = t;
                                                      int e_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, b_10, a_10);
                                                          {
                                                            ATerm f_9 = t;
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
                                                                t = f_9;
                                                              }
                                                          }
                                                          t = term_z_7;
                                                          t = bottomup_1_0(f_0, t);
                                                          LocalPopChoice(e_9);
                                                        }
                                                      else
                                                        {
                                                          t = d_9;
                                                          {
                                                            ATerm g_9 = t;
                                                            int h_9 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm m_15 = NULL;
                                                                t = a_10;
                                                                if((b_10 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, w_9, v_9);
                                                                t = genzip_4_0(h_0, r_0, s_0, v_0, t);
                                                                m_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_15), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, b_10, w_9)), e_10));
                                                                t = bottomup_1_0(f_0, t);
                                                                LocalPopChoice(h_9);
                                                              }
                                                            else
                                                              {
                                                                t = g_9;
                                                                {
                                                                  ATerm j_9 = t;
                                                                  int k_9 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm h_16 = NULL;
                                                                      t = c_10;
                                                                      if((f_10 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, f_10);
                                                                      t = f_0(t);
                                                                      h_16 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_16, e_10);
                                                                      t = f_0(t);
                                                                      LocalPopChoice(k_9);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = j_9;
                                                                      t = j_10;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm l_9 = t;
                                                    int n_9 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm n_16 = NULL;
                                                        t = c_10;
                                                        if((f_10 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, f_10);
                                                        t = f_0(t);
                                                        n_16 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, n_16, e_10);
                                                        t = f_0(t);
                                                        LocalPopChoice(n_9);
                                                      }
                                                    else
                                                      {
                                                        t = l_9;
                                                        t = j_10;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    f_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm q_9 = t;
                                                      int s_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm y_16 = NULL;
                                                          t = c_10;
                                                          if((f_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, f_10);
                                                          t = f_0(t);
                                                          y_16 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_16, e_10);
                                                          t = f_0(t);
                                                          LocalPopChoice(s_9);
                                                        }
                                                      else
                                                        {
                                                          t = q_9;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        g_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm k_10 = t;
                                                          int y_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm d_17 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                              t = f_0(t);
                                                              d_17 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, d_17);
                                                              t = f_0(t);
                                                              LocalPopChoice(y_10);
                                                            }
                                                          else
                                                            {
                                                              t = k_10;
                                                              t = j_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_10;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = i_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = h_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm z_10 = t;
                                        int a_12 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_z_7;
                                            t = f_0(t);
                                            LocalPopChoice(a_12);
                                          }
                                        else
                                          {
                                            t = z_10;
                                            t = j_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_10 = ATgetArgument(t, 0);
                                            g_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm b_12 = t;
                                              int c_12 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm a_18 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                  t = f_0(t);
                                                  a_18 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, a_18);
                                                  t = f_0(t);
                                                  LocalPopChoice(c_12);
                                                }
                                              else
                                                {
                                                  t = b_12;
                                                  t = j_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                {
                                                  ATerm q_12 = t;
                                                  int r_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm f_18 = NULL;
                                                      t = c_10;
                                                      if((f_10 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, f_10);
                                                      t = f_0(t);
                                                      f_18 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_18, e_10);
                                                      t = f_0(t);
                                                      LocalPopChoice(r_12);
                                                    }
                                                  else
                                                    {
                                                      t = q_12;
                                                      t = j_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    f_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm f_13 = t;
                                                      int g_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_18 = NULL;
                                                          t = c_10;
                                                          if((f_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, f_10);
                                                          t = f_0(t);
                                                          j_18 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_18, e_10);
                                                          t = f_0(t);
                                                          LocalPopChoice(g_13);
                                                        }
                                                      else
                                                        {
                                                          t = f_13;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        g_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_13 = t;
                                                          int i_13 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_18 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                              t = f_0(t);
                                                              r_18 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, r_18);
                                                              t = f_0(t);
                                                              LocalPopChoice(i_13);
                                                            }
                                                          else
                                                            {
                                                              t = h_13;
                                                              t = j_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_10;
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
                                c_10 = ATgetArgument(t, 0);
                                t = c_10;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    a_10 = ATgetArgument(t, 0);
                                    t = i_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm j_13 = t;
                                            int k_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_7;
                                                t = f_0(t);
                                                LocalPopChoice(k_13);
                                              }
                                            else
                                              {
                                                t = j_13;
                                                t = j_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                g_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm l_13 = t;
                                                  int m_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm h_19 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                      t = f_0(t);
                                                      h_19 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, h_19);
                                                      t = f_0(t);
                                                      LocalPopChoice(m_13);
                                                    }
                                                  else
                                                    {
                                                      t = l_13;
                                                      t = j_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm n_13 = t;
                                                int o_13 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm p_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(o_13);
                                                    {
                                                      ATerm q_13 = t;
                                                      int r_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm r_19 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_10);
                                                          t = f_0(t);
                                                          r_19 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, r_19, e_10);
                                                          t = f_0(t);
                                                          LocalPopChoice(r_13);
                                                        }
                                                      else
                                                        {
                                                          t = q_13;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = n_13;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        t = f_10;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            b_10 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm s_13 = t;
                                                              int t_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm v_19 = NULL,c_20 = NULL;
                                                                  t = a_10;
                                                                  if((b_10 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, b_10);
                                                                  t = f_0(t);
                                                                  c_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, c_20);
                                                                  t = f_0(t);
                                                                  v_19 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_19, e_10);
                                                                  t = f_0(t);
                                                                  LocalPopChoice(t_13);
                                                                }
                                                              else
                                                                {
                                                                  t = s_13;
                                                                  t = j_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_10;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_10 = ATgetArgument(t, 0);
                                                            g_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm u_13 = t;
                                                              int v_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm n_20 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                                  t = f_0(t);
                                                                  n_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, n_20);
                                                                  t = f_0(t);
                                                                  LocalPopChoice(v_13);
                                                                }
                                                              else
                                                                {
                                                                  t = u_13;
                                                                  t = j_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_10;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = i_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm w_13 = t;
                                            int x_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_7;
                                                t = f_0(t);
                                                LocalPopChoice(x_13);
                                              }
                                            else
                                              {
                                                t = w_13;
                                                t = j_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                g_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm z_13 = t;
                                                  int a_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm f_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                      t = f_0(t);
                                                      f_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, f_21);
                                                      t = f_0(t);
                                                      LocalPopChoice(a_14);
                                                    }
                                                  else
                                                    {
                                                      t = z_13;
                                                      t = j_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm b_14 = t;
                                                int c_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm f_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(c_14);
                                                    {
                                                      ATerm g_14 = t;
                                                      int i_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_10);
                                                          t = f_0(t);
                                                          j_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_21, e_10);
                                                          t = f_0(t);
                                                          LocalPopChoice(i_14);
                                                        }
                                                      else
                                                        {
                                                          t = g_14;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = b_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        g_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_14 = t;
                                                          int k_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm s_21 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                              t = f_0(t);
                                                              s_21 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, s_21);
                                                              t = f_0(t);
                                                              LocalPopChoice(k_14);
                                                            }
                                                          else
                                                            {
                                                              t = j_14;
                                                              t = j_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_10;
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
                                    c_10 = ATgetArgument(t, 0);
                                    x_9 = ATgetArgument(t, 1);
                                    y_9 = ATgetArgument(t, 2);
                                    t = i_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm l_14 = t;
                                            int m_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_7;
                                                t = f_0(t);
                                                LocalPopChoice(m_14);
                                              }
                                            else
                                              {
                                                t = l_14;
                                                t = j_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                g_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm n_14 = t;
                                                  int p_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                      t = f_0(t);
                                                      p_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, p_22);
                                                      t = f_0(t);
                                                      LocalPopChoice(p_14);
                                                    }
                                                  else
                                                    {
                                                      t = n_14;
                                                      t = j_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm r_14 = t;
                                                int u_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm v_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(u_14);
                                                    {
                                                      ATerm w_14 = t;
                                                      int x_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm v_22 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, c_10, x_9, y_9);
                                                          t = f_0(t);
                                                          v_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_22, e_10);
                                                          t = f_0(t);
                                                          LocalPopChoice(x_14);
                                                        }
                                                      else
                                                        {
                                                          t = w_14;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = r_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        g_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_15 = t;
                                                          int c_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm c_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                              t = f_0(t);
                                                              c_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, c_23);
                                                              t = f_0(t);
                                                              LocalPopChoice(c_15);
                                                            }
                                                          else
                                                            {
                                                              t = b_15;
                                                              t = j_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_10;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = i_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm d_15 = t;
                                            int f_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_7;
                                                t = f_0(t);
                                                LocalPopChoice(f_15);
                                              }
                                            else
                                              {
                                                t = d_15;
                                                t = j_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                g_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm g_15 = t;
                                                  int h_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                      t = f_0(t);
                                                      t_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, t_23);
                                                      t = f_0(t);
                                                      LocalPopChoice(h_15);
                                                    }
                                                  else
                                                    {
                                                      t = g_15;
                                                      t = j_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    f_10 = ATgetArgument(t, 0);
                                                    g_10 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm i_15 = t;
                                                      int j_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm y_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                          t = f_0(t);
                                                          y_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, y_23);
                                                          t = f_0(t);
                                                          LocalPopChoice(j_15);
                                                        }
                                                      else
                                                        {
                                                          t = i_15;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = j_10;
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
                            d_10 = ATgetArgument(t, 0);
                            t = d_10;
                            if(match_cons(t, sym_Op_2))
                              {
                                c_10 = ATgetArgument(t, 0);
                                x_9 = ATgetArgument(t, 1);
                                t = i_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = h_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm k_15 = t;
                                        int l_15 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_z_7;
                                            t = f_0(t);
                                            LocalPopChoice(l_15);
                                          }
                                        else
                                          {
                                            t = k_15;
                                            t = j_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_10 = ATgetArgument(t, 0);
                                            g_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm n_15 = t;
                                              int v_15 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm p_24 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                  t = f_0(t);
                                                  p_24 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, p_24);
                                                  t = f_0(t);
                                                  LocalPopChoice(v_15);
                                                }
                                              else
                                                {
                                                  t = n_15;
                                                  t = j_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                t = f_10;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    b_10 = ATgetArgument(t, 0);
                                                    w_9 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm w_15 = t;
                                                      int y_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, b_10, c_10);
                                                          {
                                                            ATerm z_15 = t;
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
                                                                t = z_15;
                                                              }
                                                          }
                                                          t = term_z_7;
                                                          t = bottomup_1_0(f_0, t);
                                                          LocalPopChoice(y_15);
                                                        }
                                                      else
                                                        {
                                                          t = w_15;
                                                          {
                                                            ATerm a_16 = t;
                                                            int b_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm u_24 = NULL;
                                                                t = c_10;
                                                                if((b_10 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, w_9, x_9);
                                                                t = genzip_4_0(x_0, y_0, z_0, a_1, t);
                                                                u_24 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_24), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, b_10, w_9)));
                                                                t = bottomup_1_0(f_0, t);
                                                                LocalPopChoice(b_16);
                                                              }
                                                            else
                                                              {
                                                                t = a_16;
                                                                {
                                                                  ATerm c_16 = t;
                                                                  int d_16 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = d_10;
                                                                      if((f_10 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, f_10);
                                                                      t = f_0(t);
                                                                      LocalPopChoice(d_16);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = c_16;
                                                                      t = j_10;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm e_16 = t;
                                                    int f_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = d_10;
                                                        if((f_10 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, f_10);
                                                        t = f_0(t);
                                                        LocalPopChoice(f_16);
                                                      }
                                                    else
                                                      {
                                                        t = e_16;
                                                        t = j_10;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    f_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm g_16 = t;
                                                      int i_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = d_10;
                                                          if((f_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, f_10);
                                                          t = f_0(t);
                                                          LocalPopChoice(i_16);
                                                        }
                                                      else
                                                        {
                                                          t = g_16;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        g_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_16 = t;
                                                          int k_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm w_25 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                              t = f_0(t);
                                                              w_25 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, w_25);
                                                              t = f_0(t);
                                                              LocalPopChoice(k_16);
                                                            }
                                                          else
                                                            {
                                                              t = j_16;
                                                              t = j_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_10;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = i_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = h_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm l_16 = t;
                                        int m_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_z_7;
                                            t = f_0(t);
                                            LocalPopChoice(m_16);
                                          }
                                        else
                                          {
                                            t = l_16;
                                            t = j_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_10 = ATgetArgument(t, 0);
                                            g_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm o_16 = t;
                                              int p_16 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm f_26 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                  t = f_0(t);
                                                  f_26 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, f_26);
                                                  t = f_0(t);
                                                  LocalPopChoice(p_16);
                                                }
                                              else
                                                {
                                                  t = o_16;
                                                  t = j_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                {
                                                  ATerm q_16 = t;
                                                  int r_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = d_10;
                                                      if((f_10 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, f_10);
                                                      t = f_0(t);
                                                      LocalPopChoice(r_16);
                                                    }
                                                  else
                                                    {
                                                      t = q_16;
                                                      t = j_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    f_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm s_16 = t;
                                                      int t_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = d_10;
                                                          if((f_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, f_10);
                                                          t = f_0(t);
                                                          LocalPopChoice(t_16);
                                                        }
                                                      else
                                                        {
                                                          t = s_16;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        g_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm u_16 = t;
                                                          int v_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                              t = f_0(t);
                                                              u_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, u_26);
                                                              t = f_0(t);
                                                              LocalPopChoice(v_16);
                                                            }
                                                          else
                                                            {
                                                              t = u_16;
                                                              t = j_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_10;
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
                                d_10 = ATgetArgument(t, 0);
                                t = d_10;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    c_10 = ATgetArgument(t, 0);
                                    t = i_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm w_16 = t;
                                            int x_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_7;
                                                t = f_0(t);
                                                LocalPopChoice(x_16);
                                              }
                                            else
                                              {
                                                t = w_16;
                                                t = j_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                g_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm z_16 = t;
                                                  int a_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_27 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                      t = f_0(t);
                                                      x_27 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, x_27);
                                                      t = f_0(t);
                                                      LocalPopChoice(a_17);
                                                    }
                                                  else
                                                    {
                                                      t = z_16;
                                                      t = j_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm b_17 = t;
                                                int c_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm e_17 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(c_17);
                                                    {
                                                      ATerm f_17 = t;
                                                      int g_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, d_10);
                                                          t = f_0(t);
                                                          LocalPopChoice(g_17);
                                                        }
                                                      else
                                                        {
                                                          t = f_17;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = b_17;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        t = f_10;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            b_10 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm h_17 = t;
                                                              int i_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm c_28 = NULL;
                                                                  t = c_10;
                                                                  if((b_10 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, b_10);
                                                                  t = f_0(t);
                                                                  c_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, c_28);
                                                                  t = f_0(t);
                                                                  LocalPopChoice(i_17);
                                                                }
                                                              else
                                                                {
                                                                  t = h_17;
                                                                  t = j_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_10;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_10 = ATgetArgument(t, 0);
                                                            g_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm j_17 = t;
                                                              int k_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm k_28 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                                  t = f_0(t);
                                                                  k_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, k_28);
                                                                  t = f_0(t);
                                                                  LocalPopChoice(k_17);
                                                                }
                                                              else
                                                                {
                                                                  t = j_17;
                                                                  t = j_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_10;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = i_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm l_17 = t;
                                            int m_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_7;
                                                t = f_0(t);
                                                LocalPopChoice(m_17);
                                              }
                                            else
                                              {
                                                t = l_17;
                                                t = j_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                g_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm n_17 = t;
                                                  int o_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                      t = f_0(t);
                                                      t_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, t_28);
                                                      t = f_0(t);
                                                      LocalPopChoice(o_17);
                                                    }
                                                  else
                                                    {
                                                      t = n_17;
                                                      t = j_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm p_17 = t;
                                                int q_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm r_17 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(q_17);
                                                    {
                                                      ATerm s_17 = t;
                                                      int t_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, d_10);
                                                          t = f_0(t);
                                                          LocalPopChoice(t_17);
                                                        }
                                                      else
                                                        {
                                                          t = s_17;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = p_17;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        g_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm u_17 = t;
                                                          int v_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm e_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                              t = f_0(t);
                                                              e_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, e_29);
                                                              t = f_0(t);
                                                              LocalPopChoice(v_17);
                                                            }
                                                          else
                                                            {
                                                              t = u_17;
                                                              t = j_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_10;
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
                                    d_10 = ATgetArgument(t, 0);
                                    e_10 = ATgetArgument(t, 1);
                                    z_9 = ATgetArgument(t, 2);
                                    t = i_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm w_17 = t;
                                            int x_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_7;
                                                t = f_0(t);
                                                LocalPopChoice(x_17);
                                              }
                                            else
                                              {
                                                t = w_17;
                                                t = j_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                g_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm y_17 = t;
                                                  int z_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                      t = f_0(t);
                                                      p_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, p_29);
                                                      t = f_0(t);
                                                      LocalPopChoice(z_17);
                                                    }
                                                  else
                                                    {
                                                      t = y_17;
                                                      t = j_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm b_18 = t;
                                                int c_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm d_18 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(c_18);
                                                    {
                                                      ATerm e_18 = t;
                                                      int g_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, d_10, e_10, z_9);
                                                          t = f_0(t);
                                                          LocalPopChoice(g_18);
                                                        }
                                                      else
                                                        {
                                                          t = e_18;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = b_18;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        g_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_18 = t;
                                                          int i_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm c_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                              t = f_0(t);
                                                              c_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, c_30);
                                                              t = f_0(t);
                                                              LocalPopChoice(i_18);
                                                            }
                                                          else
                                                            {
                                                              t = h_18;
                                                              t = j_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_10;
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
                                        d_10 = ATgetArgument(t, 0);
                                        e_10 = ATgetArgument(t, 1);
                                        t = i_10;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = h_10;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm k_18 = t;
                                                int l_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_z_7;
                                                    t = f_0(t);
                                                    LocalPopChoice(l_18);
                                                  }
                                                else
                                                  {
                                                    t = k_18;
                                                    {
                                                      ATerm m_18 = t;
                                                      int n_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm u_30 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_10, e_10);
                                                          t = f_0(t);
                                                          u_30 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, d_10, u_30);
                                                          t = f_0(t);
                                                          LocalPopChoice(n_18);
                                                        }
                                                      else
                                                        {
                                                          t = m_18;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    f_10 = ATgetArgument(t, 0);
                                                    g_10 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm o_18 = t;
                                                      int p_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm z_30 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                          t = f_0(t);
                                                          z_30 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, z_30);
                                                          t = f_0(t);
                                                          LocalPopChoice(p_18);
                                                        }
                                                      else
                                                        {
                                                          t = o_18;
                                                          {
                                                            ATerm q_18 = t;
                                                            int s_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm d_31 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_10, e_10);
                                                                t = f_0(t);
                                                                d_31 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, d_10, d_31);
                                                                t = f_0(t);
                                                                LocalPopChoice(s_18);
                                                              }
                                                            else
                                                              {
                                                                t = q_18;
                                                                t = j_10;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        g_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_18 = t;
                                                          int u_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_10, e_10);
                                                              t = f_0(t);
                                                              i_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, d_10, i_31);
                                                              t = f_0(t);
                                                              LocalPopChoice(u_18);
                                                            }
                                                          else
                                                            {
                                                              t = t_18;
                                                              {
                                                                ATerm v_18 = t;
                                                                int w_18 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm m_31 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                                    t = f_0(t);
                                                                    m_31 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, m_31);
                                                                    t = f_0(t);
                                                                    LocalPopChoice(w_18);
                                                                  }
                                                                else
                                                                  {
                                                                    t = v_18;
                                                                    t = j_10;
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
                                                            ATerm s_31 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, i_10, e_10);
                                                            t = f_0(t);
                                                            s_31 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, d_10, s_31);
                                                            t = f_0(t);
                                                            LocalPopChoice(y_18);
                                                          }
                                                        else
                                                          {
                                                            t = x_18;
                                                            t = j_10;
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
                                            d_10 = ATgetArgument(t, 0);
                                            e_10 = ATgetArgument(t, 1);
                                            t = i_10;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = h_10;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm z_18 = t;
                                                    int a_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_z_7;
                                                        t = f_0(t);
                                                        LocalPopChoice(a_19);
                                                      }
                                                    else
                                                      {
                                                        t = z_18;
                                                        {
                                                          ATerm b_19 = t;
                                                          int c_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm d_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_10, e_10);
                                                              t = f_0(t);
                                                              d_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, d_10, d_32);
                                                              t = f_0(t);
                                                              LocalPopChoice(c_19);
                                                            }
                                                          else
                                                            {
                                                              t = b_19;
                                                              t = j_10;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        g_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm d_19 = t;
                                                          int e_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                              t = f_0(t);
                                                              i_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, i_32);
                                                              t = f_0(t);
                                                              LocalPopChoice(e_19);
                                                            }
                                                          else
                                                            {
                                                              t = d_19;
                                                              {
                                                                ATerm f_19 = t;
                                                                int g_19 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm m_32 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, i_10, e_10);
                                                                    t = f_0(t);
                                                                    m_32 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, d_10, m_32);
                                                                    t = f_0(t);
                                                                    LocalPopChoice(g_19);
                                                                  }
                                                                else
                                                                  {
                                                                    t = f_19;
                                                                    t = j_10;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_10 = ATgetArgument(t, 0);
                                                            g_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm i_19 = t;
                                                              int j_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm t_32 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_10, e_10);
                                                                  t = f_0(t);
                                                                  t_32 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, d_10, t_32);
                                                                  t = f_0(t);
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
                                                                        ATerm e_33 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                                        t = f_0(t);
                                                                        e_33 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, e_33);
                                                                        t = f_0(t);
                                                                        LocalPopChoice(l_19);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = k_19;
                                                                        t = j_10;
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
                                                                ATerm m_33 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_10, e_10);
                                                                t = f_0(t);
                                                                m_33 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, d_10, m_33);
                                                                t = f_0(t);
                                                                LocalPopChoice(n_19);
                                                              }
                                                            else
                                                              {
                                                                t = m_19;
                                                                t = j_10;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = i_10;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = h_10;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm o_19 = t;
                                                    int p_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_z_7;
                                                        t = f_0(t);
                                                        LocalPopChoice(p_19);
                                                      }
                                                    else
                                                      {
                                                        t = o_19;
                                                        t = j_10;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        g_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm q_19 = t;
                                                          int s_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                              t = f_0(t);
                                                              f_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, f_34);
                                                              t = f_0(t);
                                                              LocalPopChoice(s_19);
                                                            }
                                                          else
                                                            {
                                                              t = q_19;
                                                              t = j_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_10 = ATgetArgument(t, 0);
                                                            g_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm t_19 = t;
                                                              int u_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm k_34 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                                  t = f_0(t);
                                                                  k_34 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, k_34);
                                                                  t = f_0(t);
                                                                  LocalPopChoice(u_19);
                                                                }
                                                              else
                                                                {
                                                                  t = t_19;
                                                                  t = j_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_10;
                                                          }
                                                      }
                                                  }
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
                    i_10 = ATgetArgument(t, 0);
                    h_10 = ATgetArgument(t, 1);
                    t = h_10;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = i_10;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm w_19 = t;
                            int x_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_s_7;
                                t = f_0(t);
                                LocalPopChoice(x_19);
                              }
                            else
                              {
                                t = w_19;
                                t = i_10;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = h_10;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    f_10 = ATgetArgument(t, 0);
                                    g_10 = ATgetArgument(t, 1);
                                    t = i_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        f_10 = ATgetArgument(t, 0);
                                        t = i_10;
                                      }
                                    else
                                      {
                                        t = i_10;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = i_10;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm y_19 = t;
                            int z_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_s_7;
                                t = f_0(t);
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
                                      t = h_10;
                                      if((i_10 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(b_20);
                                    }
                                  else
                                    {
                                      t = a_20;
                                      t = j_10;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = h_10;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    f_10 = ATgetArgument(t, 0);
                                    g_10 = ATgetArgument(t, 1);
                                    {
                                      ATerm d_20 = t;
                                      int e_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm i_36 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, g_10, h_10);
                                          t = f_0(t);
                                          i_36 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, f_10, i_36);
                                          t = f_0(t);
                                          LocalPopChoice(e_20);
                                        }
                                      else
                                        {
                                          t = d_20;
                                          {
                                            ATerm f_20 = t;
                                            int g_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = h_10;
                                                if((i_10 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(g_20);
                                              }
                                            else
                                              {
                                                t = f_20;
                                                t = j_10;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        f_10 = ATgetArgument(t, 0);
                                        {
                                          ATerm h_20 = t;
                                          int i_20 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = h_10;
                                              if((i_10 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(i_20);
                                            }
                                          else
                                            {
                                              t = h_20;
                                              {
                                                ATerm j_20 = t;
                                                int k_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = f_10;
                                                    t = topdown_1_0(b_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, f_10);
                                                    t = bottomup_1_0(f_0, t);
                                                    LocalPopChoice(k_20);
                                                  }
                                                else
                                                  {
                                                    t = j_20;
                                                    t = j_10;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm l_20 = t;
                                        int m_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = h_10;
                                            if((i_10 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(m_20);
                                          }
                                        else
                                          {
                                            t = l_20;
                                            t = j_10;
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
                        i_10 = ATgetArgument(t, 0);
                        h_10 = ATgetArgument(t, 1);
                        t = h_10;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = i_10;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm o_20 = t;
                                int p_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_s_7;
                                    t = f_0(t);
                                    LocalPopChoice(p_20);
                                  }
                                else
                                  {
                                    t = o_20;
                                    t = h_10;
                                  }
                              }
                            else
                              {
                                ATerm q_20 = t;
                                int r_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_s_7;
                                    t = f_0(t);
                                    LocalPopChoice(r_20);
                                  }
                                else
                                  {
                                    t = q_20;
                                    t = j_10;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = i_10;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm s_20 = t;
                                    int t_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_z_7;
                                        t = f_0(t);
                                        LocalPopChoice(t_20);
                                      }
                                    else
                                      {
                                        t = s_20;
                                        t = h_10;
                                      }
                                  }
                                else
                                  {
                                    ATerm u_20 = t;
                                    int v_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_z_7;
                                        t = f_0(t);
                                        LocalPopChoice(v_20);
                                      }
                                    else
                                      {
                                        t = u_20;
                                        t = j_10;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    d_10 = ATgetArgument(t, 0);
                                    e_10 = ATgetArgument(t, 1);
                                    t = i_10;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = h_10;
                                      }
                                    else
                                      {
                                        ATerm w_20 = t;
                                        int x_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm q_37 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, i_10, d_10);
                                            t = conc_0_0(t);
                                            q_37 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, q_37, e_10);
                                            t = bottomup_1_0(f_0, t);
                                            LocalPopChoice(x_20);
                                          }
                                        else
                                          {
                                            t = w_20;
                                            t = j_10;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = i_10;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = h_10;
                                      }
                                    else
                                      {
                                        t = j_10;
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
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm a_21 = ATgetArgument(t, 0);
                                h_10 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(z_20);
                            t = h_10;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm b_21 = t;
                                int c_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_s_7;
                                    t = f_0(t);
                                    LocalPopChoice(c_21);
                                  }
                                else
                                  {
                                    t = b_21;
                                    t = j_10;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm d_21 = t;
                                    int e_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_z_7;
                                        t = f_0(t);
                                        LocalPopChoice(e_21);
                                      }
                                    else
                                      {
                                        t = d_21;
                                        t = j_10;
                                      }
                                  }
                                else
                                  {
                                    t = j_10;
                                  }
                              }
                          }
                        else
                          {
                            t = y_20;
                            if(match_cons(t, sym_All_1))
                              {
                                i_10 = ATgetArgument(t, 0);
                                t = i_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm g_21 = t;
                                    int h_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_s_7;
                                        t = f_0(t);
                                        LocalPopChoice(h_21);
                                      }
                                    else
                                      {
                                        t = g_21;
                                        t = j_10;
                                      }
                                  }
                                else
                                  {
                                    t = j_10;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    i_10 = ATgetArgument(t, 0);
                                    t = i_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm i_21 = t;
                                        int k_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_s_7;
                                            t = f_0(t);
                                            LocalPopChoice(k_21);
                                          }
                                        else
                                          {
                                            t = i_21;
                                            {
                                              ATerm l_21 = t;
                                              int m_21 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL;
                                                  t = j_10;
                                                  t = new_0_0(t);
                                                  c_38 = t;
                                                  t = bottomup_1_0(f_0, t);
                                                  r_38 = t;
                                                  t = (ATerm) ATempty;
                                                  t = f_0(t);
                                                  s_38 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(s_38), r_38);
                                                  t = f_0(t);
                                                  d_38 = t;
                                                  t = c_38;
                                                  t = bottomup_1_0(f_0, t);
                                                  q_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, q_38);
                                                  t = f_0(t);
                                                  p_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, p_38);
                                                  t = f_0(t);
                                                  f_38 = t;
                                                  t = i_10;
                                                  t = bottomup_1_0(f_0, t);
                                                  h_38 = t;
                                                  t = c_38;
                                                  t = bottomup_1_0(f_0, t);
                                                  k_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, k_38);
                                                  t = f_0(t);
                                                  j_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, j_38);
                                                  t = f_0(t);
                                                  i_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_38, i_38);
                                                  t = f_0(t);
                                                  g_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_38, g_38);
                                                  t = f_0(t);
                                                  e_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, d_38, e_38);
                                                  t = f_0(t);
                                                  LocalPopChoice(m_21);
                                                }
                                              else
                                                {
                                                  t = l_21;
                                                  t = j_10;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm n_21 = t;
                                            int o_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_7;
                                                t = f_0(t);
                                                LocalPopChoice(o_21);
                                              }
                                            else
                                              {
                                                t = n_21;
                                                {
                                                  ATerm p_21 = t;
                                                  int q_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm w_38 = NULL,x_38 = NULL,z_38 = NULL,b_39 = NULL,e_39 = NULL,f_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL;
                                                      t = j_10;
                                                      t = new_0_0(t);
                                                      w_38 = t;
                                                      t = bottomup_1_0(f_0, t);
                                                      t_39 = t;
                                                      t = (ATerm) ATempty;
                                                      t = f_0(t);
                                                      u_39 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(u_39), t_39);
                                                      t = f_0(t);
                                                      x_38 = t;
                                                      t = w_38;
                                                      t = bottomup_1_0(f_0, t);
                                                      s_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, s_39);
                                                      t = f_0(t);
                                                      r_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, r_39);
                                                      t = f_0(t);
                                                      b_39 = t;
                                                      t = i_10;
                                                      t = bottomup_1_0(f_0, t);
                                                      f_39 = t;
                                                      t = w_38;
                                                      t = bottomup_1_0(f_0, t);
                                                      k_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, k_39);
                                                      t = f_0(t);
                                                      j_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, j_39);
                                                      t = f_0(t);
                                                      i_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_39, i_39);
                                                      t = f_0(t);
                                                      e_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_39, e_39);
                                                      t = f_0(t);
                                                      z_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, x_38, z_38);
                                                      t = f_0(t);
                                                      LocalPopChoice(q_21);
                                                    }
                                                  else
                                                    {
                                                      t = p_21;
                                                      t = j_10;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                g_10 = ATgetArgument(t, 1);
                                                t = g_10;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    v_8 = ATgetArgument(t, 0);
                                                    i_9 = ATgetArgument(t, 1);
                                                    t = v_8;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        x_8 = ATgetArgument(t, 0);
                                                        t = f_10;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            b_10 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm r_21 = t;
                                                              int t_21 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm b_40 = NULL,c_40 = NULL,f_40 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, x_8);
                                                                  t = f_0(t);
                                                                  f_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_40, i_9);
                                                                  t = f_0(t);
                                                                  c_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_10, c_40);
                                                                  t = f_0(t);
                                                                  b_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, b_40);
                                                                  t = f_0(t);
                                                                  LocalPopChoice(t_21);
                                                                }
                                                              else
                                                                {
                                                                  t = r_21;
                                                                  {
                                                                    ATerm u_21 = t;
                                                                    int v_21 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL;
                                                                        t = j_10;
                                                                        t = new_0_0(t);
                                                                        h_40 = t;
                                                                        t = bottomup_1_0(f_0, t);
                                                                        t_40 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = f_0(t);
                                                                        u_40 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(u_40), t_40);
                                                                        t = f_0(t);
                                                                        i_40 = t;
                                                                        t = h_40;
                                                                        t = bottomup_1_0(f_0, t);
                                                                        s_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, s_40);
                                                                        t = f_0(t);
                                                                        r_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, r_40);
                                                                        t = f_0(t);
                                                                        k_40 = t;
                                                                        t = i_10;
                                                                        t = bottomup_1_0(f_0, t);
                                                                        n_40 = t;
                                                                        t = h_40;
                                                                        t = bottomup_1_0(f_0, t);
                                                                        q_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, q_40);
                                                                        t = f_0(t);
                                                                        p_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, p_40);
                                                                        t = f_0(t);
                                                                        o_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, n_40, o_40);
                                                                        t = f_0(t);
                                                                        l_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, k_40, l_40);
                                                                        t = f_0(t);
                                                                        j_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, i_40, j_40);
                                                                        t = f_0(t);
                                                                        LocalPopChoice(v_21);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = u_21;
                                                                        t = j_10;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm w_21 = t;
                                                            int x_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm x_40 = NULL,a_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,k_41 = NULL,l_41 = NULL,p_41 = NULL,t_41 = NULL,w_41 = NULL,z_41 = NULL,a_42 = NULL;
                                                                t = j_10;
                                                                t = new_0_0(t);
                                                                x_40 = t;
                                                                t = bottomup_1_0(f_0, t);
                                                                z_41 = t;
                                                                t = (ATerm) ATempty;
                                                                t = f_0(t);
                                                                a_42 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(a_42), z_41);
                                                                t = f_0(t);
                                                                a_41 = t;
                                                                t = x_40;
                                                                t = bottomup_1_0(f_0, t);
                                                                w_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, w_41);
                                                                t = f_0(t);
                                                                t_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, t_41);
                                                                t = f_0(t);
                                                                e_41 = t;
                                                                t = i_10;
                                                                t = bottomup_1_0(f_0, t);
                                                                g_41 = t;
                                                                t = x_40;
                                                                t = bottomup_1_0(f_0, t);
                                                                p_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, p_41);
                                                                t = f_0(t);
                                                                l_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, l_41);
                                                                t = f_0(t);
                                                                k_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, g_41, k_41);
                                                                t = f_0(t);
                                                                f_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, e_41, f_41);
                                                                t = f_0(t);
                                                                d_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, a_41, d_41);
                                                                t = f_0(t);
                                                                LocalPopChoice(x_21);
                                                              }
                                                            else
                                                              {
                                                                t = w_21;
                                                                t = j_10;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = f_10;
                                                        {
                                                          ATerm y_21 = t;
                                                          int z_21 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_42 = NULL,h_42 = NULL,i_42 = NULL,o_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL;
                                                              t = j_10;
                                                              t = new_0_0(t);
                                                              f_42 = t;
                                                              t = bottomup_1_0(f_0, t);
                                                              a_43 = t;
                                                              t = (ATerm) ATempty;
                                                              t = f_0(t);
                                                              b_43 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(b_43), a_43);
                                                              t = f_0(t);
                                                              h_42 = t;
                                                              t = f_42;
                                                              t = bottomup_1_0(f_0, t);
                                                              z_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, z_42);
                                                              t = f_0(t);
                                                              x_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, x_42);
                                                              t = f_0(t);
                                                              o_42 = t;
                                                              t = i_10;
                                                              t = bottomup_1_0(f_0, t);
                                                              t_42 = t;
                                                              t = f_42;
                                                              t = bottomup_1_0(f_0, t);
                                                              w_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, w_42);
                                                              t = f_0(t);
                                                              v_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, v_42);
                                                              t = f_0(t);
                                                              u_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_42, u_42);
                                                              t = f_0(t);
                                                              s_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, o_42, s_42);
                                                              t = f_0(t);
                                                              i_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, h_42, i_42);
                                                              t = f_0(t);
                                                              LocalPopChoice(z_21);
                                                            }
                                                          else
                                                            {
                                                              t = y_21;
                                                              t = j_10;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = f_10;
                                                    {
                                                      ATerm a_22 = t;
                                                      int b_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL;
                                                          t = j_10;
                                                          t = new_0_0(t);
                                                          k_43 = t;
                                                          t = bottomup_1_0(f_0, t);
                                                          v_43 = t;
                                                          t = (ATerm) ATempty;
                                                          t = f_0(t);
                                                          w_43 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(w_43), v_43);
                                                          t = f_0(t);
                                                          l_43 = t;
                                                          t = k_43;
                                                          t = bottomup_1_0(f_0, t);
                                                          u_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, u_43);
                                                          t = f_0(t);
                                                          t_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, t_43);
                                                          t = f_0(t);
                                                          n_43 = t;
                                                          t = i_10;
                                                          t = bottomup_1_0(f_0, t);
                                                          p_43 = t;
                                                          t = k_43;
                                                          t = bottomup_1_0(f_0, t);
                                                          s_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, s_43);
                                                          t = f_0(t);
                                                          r_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, r_43);
                                                          t = f_0(t);
                                                          q_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_43, q_43);
                                                          t = f_0(t);
                                                          o_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_43, o_43);
                                                          t = f_0(t);
                                                          m_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, l_43, m_43);
                                                          t = f_0(t);
                                                          LocalPopChoice(b_22);
                                                        }
                                                      else
                                                        {
                                                          t = a_22;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    f_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm c_22 = t;
                                                      int d_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, f_10);
                                                          t = f_0(t);
                                                          LocalPopChoice(d_22);
                                                        }
                                                      else
                                                        {
                                                          t = c_22;
                                                          {
                                                            ATerm e_22 = t;
                                                            int f_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL;
                                                                t = j_10;
                                                                t = new_0_0(t);
                                                                a_44 = t;
                                                                t = bottomup_1_0(f_0, t);
                                                                n_44 = t;
                                                                t = (ATerm) ATempty;
                                                                t = f_0(t);
                                                                o_44 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(o_44), n_44);
                                                                t = f_0(t);
                                                                b_44 = t;
                                                                t = a_44;
                                                                t = bottomup_1_0(f_0, t);
                                                                m_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, m_44);
                                                                t = f_0(t);
                                                                j_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, j_44);
                                                                t = f_0(t);
                                                                d_44 = t;
                                                                t = i_10;
                                                                t = bottomup_1_0(f_0, t);
                                                                f_44 = t;
                                                                t = a_44;
                                                                t = bottomup_1_0(f_0, t);
                                                                i_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, i_44);
                                                                t = f_0(t);
                                                                h_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, h_44);
                                                                t = f_0(t);
                                                                g_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, f_44, g_44);
                                                                t = f_0(t);
                                                                e_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, d_44, e_44);
                                                                t = f_0(t);
                                                                c_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, b_44, c_44);
                                                                t = f_0(t);
                                                                LocalPopChoice(f_22);
                                                              }
                                                            else
                                                              {
                                                                t = e_22;
                                                                t = j_10;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm g_22 = t;
                                                    int h_22 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL;
                                                        t = j_10;
                                                        t = new_0_0(t);
                                                        u_44 = t;
                                                        t = bottomup_1_0(f_0, t);
                                                        f_45 = t;
                                                        t = (ATerm) ATempty;
                                                        t = f_0(t);
                                                        g_45 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(g_45), f_45);
                                                        t = f_0(t);
                                                        v_44 = t;
                                                        t = u_44;
                                                        t = bottomup_1_0(f_0, t);
                                                        e_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, e_45);
                                                        t = f_0(t);
                                                        d_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, d_45);
                                                        t = f_0(t);
                                                        x_44 = t;
                                                        t = i_10;
                                                        t = bottomup_1_0(f_0, t);
                                                        z_44 = t;
                                                        t = u_44;
                                                        t = bottomup_1_0(f_0, t);
                                                        c_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, c_45);
                                                        t = f_0(t);
                                                        b_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, b_45);
                                                        t = f_0(t);
                                                        a_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, z_44, a_45);
                                                        t = f_0(t);
                                                        y_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, x_44, y_44);
                                                        t = f_0(t);
                                                        w_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, v_44, w_44);
                                                        t = f_0(t);
                                                        LocalPopChoice(h_22);
                                                      }
                                                    else
                                                      {
                                                        t = g_22;
                                                        t = j_10;
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
                                        i_10 = ATgetArgument(t, 0);
                                        t = i_10;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm i_22 = t;
                                            int j_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_s_7;
                                                t = f_0(t);
                                                LocalPopChoice(j_22);
                                              }
                                            else
                                              {
                                                t = i_22;
                                                t = j_10;
                                              }
                                          }
                                        else
                                          {
                                            t = j_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            i_10 = ATgetArgument(t, 0);
                                            t = i_10;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm k_22 = t;
                                                int l_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_z_7;
                                                    t = f_0(t);
                                                    LocalPopChoice(l_22);
                                                  }
                                                else
                                                  {
                                                    t = k_22;
                                                    t = j_10;
                                                  }
                                              }
                                            else
                                              {
                                                t = j_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                i_10 = ATgetArgument(t, 0);
                                                t = i_10;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm m_22 = t;
                                                    int n_22 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_z_7;
                                                        t = f_0(t);
                                                        LocalPopChoice(n_22);
                                                      }
                                                    else
                                                      {
                                                        t = m_22;
                                                        t = j_10;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = j_10;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm o_22 = t;
                                                int q_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm r_22 = ATgetArgument(t, 0);
                                                        h_10 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(q_22);
                                                    t = h_10;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm s_22 = t;
                                                        int t_22 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_z_7;
                                                            t = f_0(t);
                                                            LocalPopChoice(t_22);
                                                          }
                                                        else
                                                          {
                                                            t = s_22;
                                                            t = j_10;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = j_10;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = o_22;
                                                    {
                                                      ATerm u_22 = t;
                                                      int w_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm x_22 = ATgetArgument(t, 0);
                                                              h_10 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(w_22);
                                                          {
                                                            ATerm y_22 = t;
                                                            int z_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = h_10;
                                                                t = fetch_1_0(c_1, t);
                                                                t = term_z_7;
                                                                t = bottomup_1_0(f_0, t);
                                                                LocalPopChoice(z_22);
                                                              }
                                                            else
                                                              {
                                                                t = y_22;
                                                                t = j_10;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = u_22;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              i_10 = ATgetArgument(t, 0);
                                                              h_10 = ATgetArgument(t, 1);
                                                              t = h_10;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = i_10;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = h_10;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          f_10 = ATgetArgument(t, 0);
                                                                          g_10 = ATgetArgument(t, 1);
                                                                          t = i_10;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = i_10;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = i_10;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = h_10;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          f_10 = ATgetArgument(t, 0);
                                                                          g_10 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm a_23 = t;
                                                                            int b_23 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm n_46 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, g_10, h_10);
                                                                                t = f_0(t);
                                                                                n_46 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, f_10, n_46);
                                                                                t = f_0(t);
                                                                                LocalPopChoice(b_23);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = a_23;
                                                                                {
                                                                                  ATerm d_23 = t;
                                                                                  int e_23 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = h_10;
                                                                                      if((i_10 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(e_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = d_23;
                                                                                      t = j_10;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm f_23 = t;
                                                                          int g_23 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = h_10;
                                                                              if((i_10 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(g_23);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_23;
                                                                              t = j_10;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  i_10 = ATgetArgument(t, 0);
                                                                  h_10 = ATgetArgument(t, 1);
                                                                  i_8 = ATgetArgument(t, 2);
                                                                  t = i_8;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm h_23 = t;
                                                                      int i_23 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_10, h_10);
                                                                          t = f_0(t);
                                                                          LocalPopChoice(i_23);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = h_23;
                                                                          t = j_10;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = j_10;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      i_10 = ATgetArgument(t, 0);
                                                                      h_10 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm j_23 = t;
                                                                        int k_23 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, i_10, h_10);
                                                                            t = f_0(t);
                                                                            LocalPopChoice(k_23);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = j_23;
                                                                            t = j_10;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          i_10 = ATgetArgument(t, 0);
                                                                          t = i_10;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              f_10 = ATgetFirst((ATermList) t);
                                                                              g_10 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm l_23 = t;
                                                                                int m_23 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm e_47 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, g_10);
                                                                                    t = f_0(t);
                                                                                    e_47 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, f_10, e_47);
                                                                                    t = f_0(t);
                                                                                    LocalPopChoice(m_23);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_23;
                                                                                    t = j_10;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm n_23 = t;
                                                                                  int o_23 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_z_7;
                                                                                      t = f_0(t);
                                                                                      LocalPopChoice(o_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = n_23;
                                                                                      t = j_10;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = j_10;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              i_10 = ATgetArgument(t, 0);
                                                                              t = i_10;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  f_10 = ATgetFirst((ATermList) t);
                                                                                  g_10 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm p_23 = t;
                                                                                    int q_23 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm p_47 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, g_10);
                                                                                        t = f_0(t);
                                                                                        p_47 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, f_10, p_47);
                                                                                        t = f_0(t);
                                                                                        LocalPopChoice(q_23);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = p_23;
                                                                                        t = j_10;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm r_23 = t;
                                                                                      int s_23 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_z_7;
                                                                                          t = f_0(t);
                                                                                          LocalPopChoice(s_23);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = r_23;
                                                                                          t = j_10;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = j_10;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  i_10 = ATgetArgument(t, 0);
                                                                                  t = i_10;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      f_10 = ATgetFirst((ATermList) t);
                                                                                      g_10 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm u_23 = t;
                                                                                        int v_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm v_47 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, g_10);
                                                                                            t = f_0(t);
                                                                                            v_47 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, v_47);
                                                                                            t = f_0(t);
                                                                                            LocalPopChoice(v_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = u_23;
                                                                                            t = j_10;
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
                                                                                              t = term_s_7;
                                                                                              t = f_0(t);
                                                                                              LocalPopChoice(x_23);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = w_23;
                                                                                              t = j_10;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = j_10;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      i_10 = ATgetArgument(t, 0);
                                                                                      h_10 = ATgetArgument(t, 1);
                                                                                      i_8 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm z_23 = t;
                                                                                        int a_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,i_48 = NULL;
                                                                                            t = term_b_24;
                                                                                            t = bottomup_1_0(f_0, t);
                                                                                            d_48 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = f_0(t);
                                                                                            i_48 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(i_48), i_8);
                                                                                            t = f_0(t);
                                                                                            f_48 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(f_48), i_10);
                                                                                            t = f_0(t);
                                                                                            e_48 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, d_48, e_48);
                                                                                            t = f_0(t);
                                                                                            c_48 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, h_10, c_48);
                                                                                            t = f_0(t);
                                                                                            LocalPopChoice(a_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = z_23;
                                                                                            t = j_10;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          i_10 = ATgetArgument(t, 0);
                                                                                          h_10 = ATgetArgument(t, 1);
                                                                                          i_8 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm c_24 = t;
                                                                                            int d_24 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, h_10);
                                                                                                t = f_0(t);
                                                                                                u_48 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, i_8);
                                                                                                t = f_0(t);
                                                                                                x_48 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = f_0(t);
                                                                                                y_48 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(y_48), x_48);
                                                                                                t = f_0(t);
                                                                                                w_48 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(w_48), i_10);
                                                                                                t = f_0(t);
                                                                                                v_48 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(v_48), u_48);
                                                                                                t = f_0(t);
                                                                                                t_48 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, t_48);
                                                                                                t = f_0(t);
                                                                                                LocalPopChoice(d_24);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = c_24;
                                                                                                t = j_10;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              i_10 = ATgetArgument(t, 0);
                                                                                              h_10 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm e_24 = t;
                                                                                                int f_24 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm c_49 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, h_10);
                                                                                                    t = f_0(t);
                                                                                                    c_49 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, i_10, c_49);
                                                                                                    t = f_0(t);
                                                                                                    LocalPopChoice(f_24);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = e_24;
                                                                                                    t = j_10;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  i_10 = ATgetArgument(t, 0);
                                                                                                  h_10 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm g_24 = t;
                                                                                                    int h_24 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm g_49 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, i_10);
                                                                                                        t = f_0(t);
                                                                                                        g_49 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_49, h_10);
                                                                                                        t = f_0(t);
                                                                                                        LocalPopChoice(h_24);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = g_24;
                                                                                                        t = j_10;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      i_10 = ATgetArgument(t, 0);
                                                                                                      h_10 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm i_24 = t;
                                                                                                        int j_24 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm k_49 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, h_10);
                                                                                                            t = f_0(t);
                                                                                                            k_49 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, k_49, i_10);
                                                                                                            t = f_0(t);
                                                                                                            LocalPopChoice(j_24);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = i_24;
                                                                                                            t = j_10;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          i_10 = ATgetArgument(t, 0);
                                                                                                          h_10 = ATgetArgument(t, 1);
                                                                                                          t = h_10;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              d_10 = ATgetArgument(t, 0);
                                                                                                              e_10 = ATgetArgument(t, 1);
                                                                                                              t = i_10;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = h_10;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm k_24 = t;
                                                                                                                  int l_24 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm x_49 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, i_10, d_10);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      x_49 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, x_49, e_10);
                                                                                                                      t = bottomup_1_0(f_0, t);
                                                                                                                      LocalPopChoice(l_24);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = k_24;
                                                                                                                      t = j_10;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  d_10 = ATgetArgument(t, 0);
                                                                                                                  e_10 = ATgetArgument(t, 1);
                                                                                                                  z_9 = ATgetArgument(t, 2);
                                                                                                                  t = z_9;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = e_10;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = d_10;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              c_10 = ATgetArgument(t, 0);
                                                                                                                              t = i_10;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = h_10;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      f_10 = ATgetFirst((ATermList) t);
                                                                                                                                      g_10 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = g_10;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = f_10;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              b_10 = ATgetArgument(t, 0);
                                                                                                                                              w_9 = ATgetArgument(t, 1);
                                                                                                                                              r_9 = ATgetArgument(t, 2);
                                                                                                                                              u_9 = ATgetArgument(t, 3);
                                                                                                                                              t = r_9;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = w_9;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm m_24 = t;
                                                                                                                                                      int n_24 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = c_10;
                                                                                                                                                          if((b_10 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = u_9;
                                                                                                                                                          {
                                                                                                                                                            ATerm o_24 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm e_1 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm q_24 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(q_24, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((b_10 != ATgetArgument(q_24, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(q_24, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm r_24 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(r_24) != AT_LIST) || !(ATisEmpty(r_24))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm s_24 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(s_24) != AT_LIST) || !(ATisEmpty(s_24))))
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
                                                                                                                                                                t = o_24;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = u_9;
                                                                                                                                                          t = bottomup_1_0(f_0, t);
                                                                                                                                                          LocalPopChoice(n_24);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = m_24;
                                                                                                                                                          t = j_10;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = j_10;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = j_10;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = j_10;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = j_10;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = j_10;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = i_10;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = h_10;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = j_10;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = i_10;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = h_10;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = j_10;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = i_10;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = h_10;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = j_10;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = i_10;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = h_10;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = j_10;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              i_10 = ATgetArgument(t, 0);
                                                                                                              h_10 = ATgetArgument(t, 1);
                                                                                                              t = i_10;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = h_10;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = j_10;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = j_10;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  }
                                              }
                                          }
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
  t = bottomup_1_0(f_0, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm t_24 = t;
  if((PushChoice() == 0))
    {
      ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL,m_5 = NULL;
      t_51 = t;
      if(match_cons(t, sym_Var_1))
        {
          s_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_51);
      r_51 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, s_51);
      m_5 = t;
      t = SSLsetAnnotations(m_5, r_51);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_24;
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_v_24;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_51 = ATgetFirst((ATermList) t);
      v_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_51, v_51);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_24 = ATgetArgument(t, 0);
      if(match_cons(w_24, sym__2))
        {
          w_51 = ATgetArgument(w_24, 0);
          x_51 = ATgetArgument(w_24, 1);
        }
      else
        _fail(t);
      {
        ATerm a_25 = ATgetArgument(t, 1);
        if(match_cons(a_25, sym__2))
          {
            y_51 = ATgetArgument(a_25, 0);
            z_51 = ATgetArgument(a_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_51), w_51), (ATerm) ATinsert(CheckATermList(z_51), x_51));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_v_24;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_52 = ATgetFirst((ATermList) t);
      b_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_52, b_52);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_25 = ATgetArgument(t, 0);
      if(match_cons(b_25, sym__2))
        {
          c_52 = ATgetArgument(b_25, 0);
          d_52 = ATgetArgument(b_25, 1);
        }
      else
        _fail(t);
      {
        ATerm c_25 = ATgetArgument(t, 1);
        if(match_cons(c_25, sym__2))
          {
            e_52 = ATgetArgument(c_25, 0);
            f_52 = ATgetArgument(c_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_52), c_52), (ATerm) ATinsert(CheckATermList(f_52), d_52));
  return(t);
}
static ATerm b_11 (ATerm m_27, ATerm n_27, ATerm o_27, ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,m_51 = NULL,n_51 = NULL,p_51 = NULL,q_51 = NULL,n_5 = NULL;
  t = o_27;
  t = fetch_1_0(f_1, t);
  t = o_27;
  t = genzip_4_0(g_1, h_1, i_1, LiftPrimArg_0_0, t);
  q_51 = t;
  if(match_cons(t, sym__2))
    {
      i_51 = ATgetArgument(t, 0);
      m_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_51);
  h_51 = t;
  t = i_51;
  t = concat_0_0(t);
  n_51 = t;
  t = m_51;
  t = genzip_4_0(j_1, k_1, l_1, _id, t);
  p_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_51, p_51);
  n_5 = t;
  t = SSLsetAnnotations(n_5, h_51);
  if(match_cons(t, sym__2))
    {
      e_51 = ATgetArgument(t, 0);
      {
        ATerm d_25 = ATgetArgument(t, 1);
        if(match_cons(d_25, sym__2))
          {
            f_51 = ATgetArgument(d_25, 0);
            g_51 = ATgetArgument(d_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, e_51, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, f_51), (ATerm) ATmakeAppl(sym_CallT_3, m_27, n_27, g_51)));
  return(t);
}
ATerm genzip_4_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm t)
{
  static ATerm n_52 (ATerm t)
  {
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_101(t);
        LocalPopChoice(i_25);
      }
    else
      {
        t = h_25;
        {
          ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,a_7 = NULL;
          t = m_101(t);
          m_52 = t;
          if(match_cons(t, sym__2))
            {
              i_52 = ATgetArgument(t, 0);
              j_52 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_52);
          h_52 = t;
          t = i_52;
          t = o_101(t);
          k_52 = t;
          t = j_52;
          t = n_52(t);
          l_52 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_52, l_52);
          a_7 = t;
          t = SSLsetAnnotations(a_7, h_52);
          t = n_101(t);
        }
      }
    return(t);
  }
  t = n_52(t);
  return(t);
}
ATerm at_end_1_0 (ATerm n_117 (ATerm), ATerm t)
{
  static ATerm e_53 (ATerm t)
  {
    ATerm z_52 = NULL,a_53 = NULL,d_53 = NULL;
    d_53 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_52 = ATgetFirst((ATermList) t);
        a_53 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_1 = NULL,w_1 = NULL,e_7 = NULL;
          t = SSLgetAnnotations(d_53);
          t_1 = t;
          t = a_53;
          t = e_53(t);
          w_1 = t;
          t = (ATerm) ATinsert(CheckATermList(w_1), z_52);
          e_7 = t;
          t = SSLsetAnnotations(e_7, t_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_53;
        t = n_117(t);
      }
    return(t);
  }
  t = e_53(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL;
  h_53 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_53;
    }
  else
    {
      static ATerm m_1 (ATerm t)
      {
        t = not_null(j_53);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_53 = ATgetFirst((ATermList) t);
          if(((j_53 != NULL) && (j_53 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_53;
      t = at_end_1_0(m_1, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm y_53 (ATerm p_53, ATerm t)
{
  ATerm r_53 = NULL;
  t = p_53;
  {
    ATerm j_25 = t;
    if((PushChoice() == 0))
      {
        ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL,i_7 = NULL;
        u_53 = t;
        if(match_cons(t, sym_Var_1))
          {
            t_53 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_53);
        s_53 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, t_53);
        i_7 = t;
        t = SSLsetAnnotations(i_7, s_53);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_25;
      }
  }
  t = new_0_0(t);
  r_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, r_53), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_53), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_53)))), (ATerm) ATmakeAppl(sym_Var_1, r_53)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL;
  v_53 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_53 = ATgetArgument(t, 0);
      {
        ATerm l_25 = t;
        int n_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_53(v_53, t);
            LocalPopChoice(n_25);
          }
        else
          {
            t = l_25;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_s_7, (ATerm) ATmakeAppl(sym_Var_1, w_53)));
          }
      }
    }
  else
    {
      t = y_53(v_53, t);
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm o_25 = t;
  if((PushChoice() == 0))
    {
      ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,p_7 = NULL;
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
      p_7 = t;
      t = SSLsetAnnotations(p_7, r_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_25;
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_v_24;
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
      ATerm p_25 = ATgetArgument(t, 0);
      if(match_cons(p_25, sym__2))
        {
          w_2 = ATgetArgument(p_25, 0);
          x_2 = ATgetArgument(p_25, 1);
        }
      else
        _fail(t);
      {
        ATerm q_25 = ATgetArgument(t, 1);
        if(match_cons(q_25, sym__2))
          {
            y_2 = ATgetArgument(q_25, 0);
            z_2 = ATgetArgument(q_25, 1);
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
  t = term_v_24;
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
      ATerm r_25 = ATgetArgument(t, 0);
      if(match_cons(r_25, sym__2))
        {
          c_3 = ATgetArgument(r_25, 0);
          d_3 = ATgetArgument(r_25, 1);
        }
      else
        _fail(t);
      {
        ATerm s_25 = ATgetArgument(t, 1);
        if(match_cons(s_25, sym__2))
          {
            e_3 = ATgetArgument(s_25, 0);
            f_3 = ATgetArgument(s_25, 1);
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
  ATerm t_25 = t;
  if((PushChoice() == 0))
    {
      ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,v_7 = NULL;
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
      v_7 = t;
      t = SSLsetAnnotations(v_7, z_3);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_25;
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_v_24;
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
      ATerm u_25 = ATgetArgument(t, 0);
      if(match_cons(u_25, sym__2))
        {
          e_4 = ATgetArgument(u_25, 0);
          f_4 = ATgetArgument(u_25, 1);
        }
      else
        _fail(t);
      {
        ATerm v_25 = ATgetArgument(t, 1);
        if(match_cons(v_25, sym__2))
          {
            g_4 = ATgetArgument(v_25, 0);
            h_4 = ATgetArgument(v_25, 1);
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
  t = term_v_24;
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
      ATerm x_25 = ATgetArgument(t, 0);
      if(match_cons(x_25, sym__2))
        {
          k_4 = ATgetArgument(x_25, 0);
          l_4 = ATgetArgument(x_25, 1);
        }
      else
        _fail(t);
      {
        ATerm y_25 = ATgetArgument(t, 1);
        if(match_cons(y_25, sym__2))
          {
            m_4 = ATgetArgument(y_25, 0);
            n_4 = ATgetArgument(y_25, 1);
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
  ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL;
  c_57 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      d_57 = ATgetArgument(t, 0);
      e_57 = ATgetArgument(t, 1);
      b_57 = ATgetArgument(t, 2);
      {
        ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,q_7 = NULL;
        t = b_57;
        t = fetch_1_0(n_1, t);
        t = b_57;
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
        q_7 = t;
        t = SSLsetAnnotations(q_7, l_2);
        if(match_cons(t, sym__2))
          {
            i_2 = ATgetArgument(t, 0);
            {
              ATerm z_25 = ATgetArgument(t, 1);
              if(match_cons(z_25, sym__2))
                {
                  j_2 = ATgetArgument(z_25, 0);
                  k_2 = ATgetArgument(z_25, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, i_2, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_2), (ATerm) ATmakeAppl(sym_PrimT_3, d_57, e_57, k_2)));
      }
    }
  else
    {
      ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,w_7 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          d_57 = ATgetArgument(t, 0);
          e_57 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_57;
      t = fetch_1_0(v_1, t);
      t = e_57;
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
      w_7 = t;
      t = SSLsetAnnotations(w_7, t_3);
      if(match_cons(t, sym__2))
        {
          q_3 = ATgetArgument(t, 0);
          {
            ATerm a_26 = ATgetArgument(t, 1);
            if(match_cons(a_26, sym__2))
              {
                r_3 = ATgetArgument(a_26, 0);
                s_3 = ATgetArgument(a_26, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, q_3, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_3), (ATerm) ATmakeAppl(sym_PrimT_3, d_57, (ATerm)ATempty, s_3)));
    }
  return(t);
}
ATerm topdown_1_0 (ATerm z_96 (ATerm), ATerm t)
{
  static ATerm d_2 (ATerm t)
  {
    t = topdown_1_0(z_96, t);
    return(t);
  }
  t = z_96(t);
  t = SRTS_all(d_2, t);
  return(t);
}
ATerm map_1_0 (ATerm x_116 (ATerm), ATerm t)
{
  static ATerm v_57 (ATerm t)
  {
    ATerm s_57 = NULL,t_57 = NULL,u_57 = NULL;
    s_57 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_57;
      }
    else
      {
        ATerm v_4 = NULL,y_4 = NULL,z_4 = NULL,m_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_57 = ATgetFirst((ATermList) t);
            u_57 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_57);
        v_4 = t;
        t = t_57;
        t = x_116(t);
        y_4 = t;
        t = u_57;
        t = v_57(t);
        z_4 = t;
        t = (ATerm) ATinsert(CheckATermList(z_4), y_4);
        m_9 = t;
        t = SSLsetAnnotations(m_9, v_4);
      }
    return(t);
  }
  t = v_57(t);
  return(t);
}
static ATerm f_11 (ATerm e_43, ATerm f_43, ATerm t)
{
  ATerm x_57 = NULL;
  t = SSL_fputc(e_43, f_43);
  x_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_57);
  return(t);
}
static ATerm g_11 (ATerm k_48, ATerm l_48, ATerm t)
{
  ATerm y_57 = NULL;
  t = SSL_write_term_to_stream_text(k_48, l_48);
  y_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_57);
  return(t);
}
static ATerm i_11 (ATerm d_111 (ATerm), ATerm k_420, ATerm o_48, ATerm t)
{
  ATerm z_57 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_420, term_b_26);
  t = l_11(t);
  z_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_57, o_48);
  t = d_111(t);
  t = fclose_0_0(t);
  t = o_48;
  return(t);
}
static ATerm h_11 (ATerm g_48, ATerm h_48, ATerm t)
{
  ATerm a_58 = NULL;
  t = SSL_write_term_to_stream_baf(g_48, h_48);
  a_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_58);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm d_58 = NULL,e_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_26 = ATgetArgument(t, 0);
      if(match_cons(c_26, sym_Stream_1))
        {
          d_58 = ATgetArgument(c_26, 0);
        }
      else
        _fail(t);
      e_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(d_58, e_58, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      if(match_cons(d_26, sym_Stream_1))
        {
          i_58 = ATgetArgument(d_26, 0);
        }
      else
        _fail(t);
      j_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_11(i_58, j_58, t);
  f_58 = t;
  t = term_e_26;
  g_58 = t;
  t = f_58;
  if(match_cons(t, sym_Stream_1))
    {
      h_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_e_26, f_58);
  t = f_11(g_58, h_58, t);
  return(t);
}
ATerm output_1_0 (ATerm h_123 (ATerm), ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL;
  t = h_123(t);
  c_58 = t;
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_26;
        t = get_config_0_0(t);
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        t = term_j_26;
      }
  }
  b_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_58, c_58);
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_26;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, b_58, c_58);
        LocalPopChoice(l_26);
        if(match_cons(t, sym__2))
          {
            ATerm n_26 = ATgetArgument(t, 0);
            ATerm o_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_11(e_2, b_58, c_58, t);
      }
    else
      {
        t = k_26;
        if(match_cons(t, sym__2))
          {
            ATerm p_26 = ATgetArgument(t, 0);
            ATerm q_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_11(f_2, b_58, c_58, t);
      }
  }
  return(t);
}
static ATerm x_58 (ATerm r_58, ATerm t)
{
  t = SSL_fclose(r_58);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL;
  v_58 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_58 = ATgetArgument(t, 0);
      {
        ATerm r_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_58);
            LocalPopChoice(s_26);
          }
        else
          {
            t = r_26;
            t = x_58(v_58, t);
          }
      }
    }
  else
    {
      t = x_58(v_58, t);
    }
  return(t);
}
static ATerm j_11 (ATerm m_48, ATerm t)
{
  t = SSL_read_term_from_stream(m_48);
  return(t);
}
static ATerm k_11 (ATerm g_43, ATerm h_43, ATerm t)
{
  ATerm y_58 = NULL;
  t = SSL_fopen(g_43, h_43);
  y_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_58);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_58 = NULL;
  t = SSL_stdin_stream();
  z_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_58);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_59 = NULL;
  t = SSL_stdout_stream();
  a_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_59);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_59 = NULL;
  t = SSL_stderr_stream();
  b_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_59);
  return(t);
}
static ATerm i_60 (ATerm h_59, ATerm t)
{
  ATerm i_59 = NULL;
  t = SSL_explode_term(h_59);
  if(match_cons(t, sym__2))
    {
      ATerm t_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_26 = ATgetArgument(t, 1);
        if(((ATgetType(v_26) == AT_LIST) && !(ATisEmpty(v_26))))
          {
            i_59 = ATgetFirst((ATermList) v_26);
            {
              ATerm w_26 = (ATerm) ATgetNext((ATermList) v_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_59;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_59;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_59;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_59;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_60 (ATerm l_59, ATerm m_59, ATerm n_59, ATerm t)
{
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL,t_59 = NULL,o_9 = NULL;
  t = SSLgetAnnotations(n_59);
  q_59 = t;
  t = l_59;
  if(match_cons(t, sym_Path_1))
    {
      t_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_59, m_59);
  o_9 = t;
  t = SSLsetAnnotations(o_9, q_59);
  if(match_cons(t, sym__2))
    {
      o_59 = ATgetArgument(t, 0);
      p_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(o_59, p_59, t);
  return(t);
}
static ATerm k_60 (ATerm v_59, ATerm w_59, ATerm x_59, ATerm t)
{
  ATerm y_59 = NULL,z_59 = NULL,a_60 = NULL,d_60 = NULL,p_9 = NULL;
  t = SSLgetAnnotations(x_59);
  a_60 = t;
  t = SSL_is_string(v_59);
  d_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_60, w_59);
  p_9 = t;
  t = SSLsetAnnotations(p_9, a_60);
  if(match_cons(t, sym__2))
    {
      y_59 = ATgetArgument(t, 0);
      z_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(y_59, z_59, t);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm f_60 = NULL,g_60 = NULL,h_60 = NULL;
  f_60 = t;
  if(match_cons(t, sym__2))
    {
      g_60 = ATgetArgument(t, 0);
      h_60 = ATgetArgument(t, 1);
      {
        ATerm x_26 = t;
        int y_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_60(f_60, t);
            LocalPopChoice(y_26);
          }
        else
          {
            t = x_26;
            {
              ATerm z_26 = t;
              int a_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_60(g_60, h_60, f_60, t);
                  LocalPopChoice(a_27);
                }
              else
                {
                  t = z_26;
                  t = k_60(g_60, h_60, f_60, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_60(f_60, t);
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_b_27;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL;
  ATerm c_27 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_60 = NULL;
      o_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_60, term_e_27);
      t = l_11(t);
      LocalPopChoice(d_27);
    }
  else
    {
      t = c_27;
      t = debug_1_0(g_2, t);
      _fail(t);
    }
  m_60 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_11(n_60, t);
  l_60 = t;
  t = m_60;
  t = fclose_0_0(t);
  t = l_60;
  return(t);
}
ATerm input_1_0 (ATerm i_123 (ATerm), ATerm t)
{
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_27;
      t = get_config_0_0(t);
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
      t = term_i_27;
    }
  t = ReadFromFile_0_0(t);
  t = i_123(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL;
  q_60 = t;
  t = term_j_27;
  t = whoami_0_0(t);
  r_60 = t;
  t = term_k_27;
  t_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_27), r_60), term_l_27);
  u_60 = t;
  t = SSL_printnl(t_60, u_60);
  t = term_q_27;
  s_60 = t;
  t = SSL_exit(s_60);
  t = q_60;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm w_60 = NULL;
  w_60 = t;
  if(match_string(t, "-k"))
    {
      t = w_60;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_60;
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm x_60 = NULL,y_60 = NULL,z_60 = NULL;
  x_60 = t;
  t = SSL_string_to_int(x_60);
  y_60 = t;
  t = term_r_27;
  z_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_27, y_60);
  t = t_11(z_60, y_60, t);
  t = x_60;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_s_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_2, g_3, h_3, t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm b_61 = NULL;
  b_61 = t;
  if(match_string(t, "-S"))
    {
      t = b_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_61;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm c_61 = NULL,d_61 = NULL;
  t = term_t_27;
  c_61 = t;
  t = term_u_27;
  d_61 = t;
  t = term_v_27;
  t = t_11(c_61, d_61, t);
  t = term_w_27;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_y_27;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm e_61 = NULL,f_61 = NULL,g_61 = NULL;
  e_61 = t;
  t = SSL_string_to_int(e_61);
  f_61 = t;
  t = term_t_27;
  g_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_27, f_61);
  t = t_11(g_61, f_61, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_61);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_z_27;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm h_61 = NULL,i_61 = NULL;
  t = term_a_28;
  h_61 = t;
  t = term_j_27;
  i_61 = t;
  t = term_b_28;
  t = t_11(h_61, i_61, t);
  t = term_d_28;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_e_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_3, j_3, k_3, t);
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
      {
        ATerm h_28 = t;
        int i_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_3, m_3, n_3, t);
            LocalPopChoice(i_28);
          }
        else
          {
            t = h_28;
            t = Option_3_0(o_3, p_3, o_4, t);
          }
      }
    }
  return(t);
}
static ATerm t_11 (ATerm z_46, ATerm a_47, ATerm t)
{
  ATerm j_61 = NULL;
  t = term_j_28;
  j_61 = t;
  t = SSL_table_put(j_61, z_46, a_47);
  t = (ATerm) ATmakeAppl(sym__3, term_j_28, z_46, a_47);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm m_61 = NULL,n_61 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL;
      t = term_j_27;
      t = i_0(t);
      o_61 = t;
      t = term_l_28;
      p_61 = t;
      t = term_m_28;
      q_61 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_28, term_m_28, o_61);
      t = r_11(p_61, q_61, o_61, t);
      _fail(t);
    }
  else
    {
      ATerm t_61 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_61 = ATgetFirst((ATermList) t);
          n_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_61;
      t = d_0(t);
      t = term_j_27;
      t = g_0(t);
      t_61 = t;
      t = (ATerm) ATinsert(CheckATermList(n_61), t_61);
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm v_61 = NULL;
  v_61 = t;
  if(match_string(t, "-o"))
    {
      t = v_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_61;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm w_61 = NULL,x_61 = NULL;
  w_61 = t;
  t = term_i_26;
  x_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_26, w_61);
  t = t_11(x_61, w_61, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_61);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_n_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_4, q_4, r_4, t);
  return(t);
}
static ATerm r_11 (ATerm k_51, ATerm l_51, ATerm j_51, ATerm t)
{
  ATerm z_61 = NULL,a_62 = NULL,b_62 = NULL;
  z_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_51, l_51);
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_28 = ATgetArgument(t, 0);
            ATerm r_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_51, l_51);
        t = q_11(k_51, l_51, t);
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
        t = (ATerm) ATempty;
      }
  }
  a_62 = t;
  t = (ATerm) ATinsert(CheckATermList(a_62), j_51);
  b_62 = t;
  t = SSL_table_put(k_51, l_51, b_62);
  t = z_61;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_62 = NULL,s_62 = NULL,t_62 = NULL;
      t = term_j_27;
      t = p_0(t);
      m_62 = t;
      t = term_l_28;
      s_62 = t;
      t = term_m_28;
      t_62 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_28, term_m_28, m_62);
      t = r_11(s_62, t_62, m_62, t);
      _fail(t);
    }
  else
    {
      ATerm x_62 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_62 = ATgetFirst((ATermList) t);
          j_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_62;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_62 = ATgetFirst((ATermList) t);
          l_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_62;
      t = n_0(t);
      t = k_62;
      t = o_0(t);
      x_62 = t;
      t = (ATerm) ATinsert(CheckATermList(l_62), x_62);
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm z_62 = NULL;
  z_62 = t;
  if(match_string(t, "-i"))
    {
      t = z_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_62;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL;
  a_63 = t;
  t = term_h_27;
  b_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_27, a_63);
  t = t_11(b_63, a_63, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_63);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_s_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_4, t_4, u_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_27;
  t = whoami_0_0(t);
  d_63 = t;
  t = term_k_27;
  f_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_28), d_63);
  g_63 = t;
  t = SSL_printnl(f_63, g_63);
  t = term_q_27;
  e_63 = t;
  t = SSL_exit(e_63);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_v_28;
  t = get_config_0_0(t);
  return(t);
}
static ATerm m_11 (ATerm o_49, ATerm p_49, ATerm t)
{
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(o_49, p_49);
      LocalPopChoice(x_28);
    }
  else
    {
      t = w_28;
      t = SSL_addr(o_49, p_49);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_115 (ATerm), ATerm o_115 (ATerm), ATerm t)
{
  ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL;
  i_63 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_63;
      t = n_115(t);
    }
  else
    {
      ATerm n_63 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_63 = ATgetFirst((ATermList) t);
          k_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_63;
      t = foldr_2_0(n_115, o_115, t);
      n_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_63, n_63);
      t = o_115(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_u_27;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL;
  if(match_cons(t, sym__2))
    {
      o_5 = ATgetArgument(t, 0);
      p_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_11(o_5, p_5, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_63 = NULL,k_5 = NULL,l_5 = NULL;
  t = times_0_0(t);
  l_5 = t;
  t = SSL_explode_term(l_5);
  if(match_cons(t, sym__2))
    {
      ATerm y_28 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5;
  t = foldr_2_0(w_4, x_4, t);
  q_63 = t;
  t = SSL_TicksToSeconds(q_63);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL;
  b_64 = t;
  if(match_cons(t, sym__2))
    {
      c_64 = ATgetArgument(t, 0);
      d_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_64;
        if((c_64 != t))
          {
            _fail(t);
          }
        t = b_64;
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        t = (ATerm) ATmakeAppl(sym__2, c_64, d_64);
        {
          ATerm b_29 = t;
          int c_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_64, d_64);
              LocalPopChoice(c_29);
            }
          else
            {
              t = b_29;
              t = SSL_gtr(c_64, d_64);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_64, d_64);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_109 (ATerm), ATerm t)
{
  ATerm h_64 = NULL;
  h_64 = t;
  {
    ATerm d_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_64 = NULL;
        t = term_t_27;
        t = get_config_0_0(t);
        j_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_64, term_q_27);
        t = geq_0_0(t);
        t = h_64;
        t = a_109(t);
        LocalPopChoice(f_29);
      }
    else
      {
        t = d_29;
        t = h_64;
      }
  }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL,o_64 = NULL,p_64 = NULL;
  t = run_time_0_0(t);
  l_64 = t;
  t = term_j_27;
  t = whoami_0_0(t);
  m_64 = t;
  t = term_k_27;
  o_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_29), l_64), term_g_29), m_64);
  p_64 = t;
  t = SSL_printnl(o_64, p_64);
  t = (ATerm) ATmakeAppl(sym__2, term_k_27, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_29), l_64), term_g_29), m_64));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_64 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_27;
  q_64 = t;
  t = SSL_exit(q_64);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm y_64 = NULL,z_64 = NULL;
  z_64 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_64;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_64 = ATgetArgument(t, 0);
          {
            ATerm b_6 = NULL,t_9 = NULL;
            t = SSLgetAnnotations(z_64);
            b_6 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_64);
            t_9 = t;
            t = SSLsetAnnotations(t_9, b_6);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_64;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_122 (ATerm), ATerm t)
{
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_29;
      t = get_config_0_0(t);
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
      t = fetch_1_0(b_5, t);
    }
  t = y_122(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm c_65 = NULL,d_65 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_65 = ATgetFirst((ATermList) t);
      d_65 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_65 = NULL,i_65 = NULL;
        static ATerm c_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(h_65)), not_null(i_65));
          return(t);
        }
        t = d_65;
        t = l_0(t);
        if(((h_65 != NULL) && (h_65 != t)))
          _fail(t);
        else
          h_65 = t;
        t = c_65;
        t = k_0(t);
        if(((i_65 != NULL) && (i_65 != t)))
          _fail(t);
        else
          i_65 = t;
        t = d_65;
        t = reverse_acc_2_0(k_0, c_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_27;
      t = l_0(t);
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL,y_13 = NULL;
  o_65 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_65);
  m_65 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_65);
  y_13 = t;
  t = SSLsetAnnotations(y_13, m_65);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm q_65 = NULL;
  q_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_65), term_l_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_65 = NULL,l_65 = NULL;
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_28;
      t = get_config_0_0(t);
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
      t = fetch_1_0(d_5, t);
    }
  t = term_o_29;
  t = echo_0_0(t);
  t = term_l_28;
  k_65 = t;
  t = term_m_28;
  l_65 = t;
  t = term_q_29;
  t = q_11(k_65, l_65, t);
  t = reverse_acc_2_0(_id, e_5, t);
  t = map_1_0(f_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm h_117 (ATerm), ATerm t)
{
  static ATerm n_66 (ATerm t)
  {
    ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL;
    k_66 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_66 = ATgetFirst((ATermList) t);
        m_66 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_29 = t;
      int s_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_6 = NULL,m_6 = NULL,d_14 = NULL;
          t = SSLgetAnnotations(k_66);
          j_6 = t;
          t = l_66;
          t = h_117(t);
          m_6 = t;
          t = (ATerm) ATinsert(CheckATermList(m_66), m_6);
          d_14 = t;
          t = SSLsetAnnotations(d_14, j_6);
          LocalPopChoice(s_29);
        }
      else
        {
          t = r_29;
          {
            ATerm u_6 = NULL,x_6 = NULL,e_14 = NULL;
            t = SSLgetAnnotations(k_66);
            u_6 = t;
            t = m_66;
            t = n_66(t);
            x_6 = t;
            t = (ATerm) ATinsert(CheckATermList(x_6), l_66);
            e_14 = t;
            t = SSLsetAnnotations(e_14, u_6);
          }
        }
    }
    return(t);
  }
  t = n_66(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_66 = NULL,s_66 = NULL,t_66 = NULL;
  r_66 = t;
  {
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_66;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_29 = ATgetFirst((ATermList) t);
                ATerm w_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_66;
          }
        LocalPopChoice(u_29);
      }
    else
      {
        t = t_29;
        t = (ATerm) ATinsert(ATempty, r_66);
      }
  }
  s_66 = t;
  t = term_j_26;
  t_66 = t;
  t = SSL_printnl(t_66, s_66);
  t = r_66;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_v_28;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm p_11 (ATerm x_41, ATerm y_41, ATerm t)
{
  t = SSL_strcat(x_41, y_41);
  return(t);
}
ATerm debug_1_0 (ATerm b_111 (ATerm), ATerm t)
{
  ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL;
  x_66 = t;
  t = b_111(t);
  y_66 = t;
  t = term_k_27;
  z_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_66), y_66);
  a_67 = t;
  t = SSL_printnl(z_66, a_67);
  t = x_66;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm x_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(y_29);
    }
  else
    {
      t = x_29;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_z_29;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_30 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_67 = NULL;
      h_67 = t;
      t = SSL_is_string(h_67);
      LocalPopChoice(b_30);
    }
  else
    {
      t = a_30;
      {
        ATerm d_30 = t;
        int e_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_5, t);
            LocalPopChoice(e_30);
          }
        else
          {
            t = d_30;
            {
              ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL;
              n_67 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_67 = ATgetArgument(t, 0);
                  t = o_67;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_67 = ATgetArgument(t, 0);
                      t = o_67;
                      {
                        ATerm f_30 = t;
                        int g_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(g_30);
                          }
                        else
                          {
                            t = f_30;
                            t = debug_1_0(h_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_67 = NULL,u_67 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_67 = ATgetArgument(t, 0);
                          p_67 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_67;
                      t = eval_config_0_0(t);
                      t_67 = t;
                      t = p_67;
                      t = eval_config_0_0(t);
                      u_67 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_67, u_67);
                      t = p_11(t_67, u_67, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_11 (ATerm b_53, ATerm c_53, ATerm t)
{
  t = SSL_table_get(b_53, c_53);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm y_67 = NULL,z_67 = NULL;
  y_67 = t;
  t = term_j_28;
  z_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_28, y_67);
  t = q_11(z_67, y_67, t);
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_68 = NULL,b_68 = NULL;
        t = eval_config_0_0(t);
        a_68 = t;
        t = term_j_28;
        b_68 = t;
        t = SSL_table_put(b_68, y_67, a_68);
        t = a_68;
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
      }
  }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL;
  t = term_j_30;
  e_68 = t;
  t = term_j_27;
  f_68 = t;
  t = term_k_30;
  t = t_11(e_68, f_68, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_l_30;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL;
  t = term_j_30;
  i_68 = t;
  t = term_j_27;
  j_68 = t;
  t = term_k_30;
  t = t_11(i_68, j_68, t);
  t = term_m_30;
  g_68 = t;
  t = term_j_27;
  h_68 = t;
  t = term_n_30;
  t = t_11(g_68, h_68, t);
  t = term_o_30;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_p_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_5, j_5, q_5, t);
      LocalPopChoice(r_30);
    }
  else
    {
      t = q_30;
      t = Option_3_0(r_5, s_5, t_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_82 (ATerm), ATerm f_82 (ATerm), ATerm t)
{
  ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,h_14 = NULL;
  p_68 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_68 = ATgetFirst((ATermList) t);
      m_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_68);
  k_68 = t;
  t = l_68;
  t = e_82(t);
  n_68 = t;
  t = m_68;
  t = f_82(t);
  o_68 = t;
  t = (ATerm) ATinsert(CheckATermList(o_68), n_68);
  h_14 = t;
  t = SSLsetAnnotations(h_14, k_68);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_125 (ATerm), ATerm t)
{
  ATerm u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,z_68 = NULL,a_69 = NULL,o_14 = NULL;
  u_68 = t;
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_30;
        t = b_125(t);
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
      }
  }
  t = u_68;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_68 = ATgetFirst((ATermList) t);
      x_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_68);
  v_68 = t;
  t = term_v_28;
  a_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_28, w_68);
  t = t_11(a_69, w_68, t);
  t = x_68;
  {
    static ATerm k_69 (ATerm t)
    {
      ATerm w_30 = t;
      int x_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_69 = NULL;
              d_69 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_69;
              LocalPopChoice(a_31);
            }
          else
            {
              t = y_30;
              t = b_125(t);
              t = Cons_2_0(_id, k_69, t);
            }
          LocalPopChoice(x_30);
        }
      else
        {
          t = w_30;
          {
            ATerm g_69 = NULL,h_69 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_69 = ATgetFirst((ATermList) t);
                h_69 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_69), (ATerm) ATmakeAppl(sym_Undefined_1, g_69));
          }
        }
      return(t);
    }
    t = k_69(t);
  }
  z_68 = t;
  t = (ATerm) ATinsert(CheckATermList(z_68), (ATerm) ATmakeAppl(sym_Program_1, w_68));
  o_14 = t;
  t = SSLsetAnnotations(o_14, v_68);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm w_69 = NULL;
  w_69 = t;
  if(match_string(t, "--help"))
    {
      t = w_69;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_69;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_69;
        }
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm x_69 = NULL,y_69 = NULL;
  t = term_k_29;
  x_69 = t;
  t = term_j_27;
  y_69 = t;
  t = term_b_31;
  t = t_11(x_69, y_69, t);
  t = term_c_31;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_e_31;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_125 (ATerm), ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL;
  r_69 = t;
  t = term_l_28;
  t_69 = t;
  t = term_m_28;
  u_69 = t;
  t = (ATerm) ATempty;
  v_69 = t;
  t = SSL_table_put(t_69, u_69, v_69);
  t = r_69;
  {
    static ATerm u_5 (ATerm t)
    {
      ATerm f_31 = t;
      int g_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_125(t);
          LocalPopChoice(g_31);
        }
      else
        {
          t = f_31;
          {
            ATerm h_31 = t;
            int j_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(v_5, w_5, x_5, t);
                LocalPopChoice(j_31);
              }
            else
              {
                t = h_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_5, t);
  }
  {
    ATerm k_31 = t;
    int l_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_70 = NULL;
        f_70 = t;
        {
          ATerm n_31 = t;
          int o_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_8 = NULL;
              t = f_70;
              {
                ATerm p_31 = t;
                int q_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_k_29;
                    t = get_config_0_0(t);
                    LocalPopChoice(q_31);
                  }
                else
                  {
                    t = p_31;
                    t = fetch_1_0(y_5, t);
                  }
              }
              t = f_70;
              t = default_system_usage_0_0(t);
              t = term_u_27;
              a_8 = t;
              t = SSL_exit(a_8);
              LocalPopChoice(o_31);
            }
          else
            {
              t = n_31;
              {
                ATerm g_8 = NULL;
                t = term_j_30;
                t = get_config_0_0(t);
                t = f_70;
                t = default_system_about_0_0(t);
                t = term_u_27;
                g_8 = t;
                t = SSL_exit(g_8);
              }
            }
        }
        LocalPopChoice(l_31);
      }
    else
      {
        t = k_31;
        {
          ATerm r_31 = t;
          int t_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL;
              static ATerm z_5 (ATerm t)
              {
                ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL,q_14 = NULL;
                l_70 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    k_70 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_70);
                j_70 = t;
                t = k_70;
                if(((p_69 != NULL) && (p_69 != t)))
                  _fail(t);
                else
                  p_69 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, k_70);
                q_14 = t;
                t = SSLsetAnnotations(q_14, j_70);
                return(t);
              }
              t = fetch_1_0(z_5, t);
              t = term_k_27;
              h_70 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_69)), term_u_31);
              i_70 = t;
              t = SSL_printnl(h_70, i_70);
              t = (ATerm) ATmakeAppl(sym__2, term_k_27, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_69)), term_u_31));
              t = default_system_usage_0_0(t);
              t = term_q_27;
              g_70 = t;
              t = SSL_exit(g_70);
              LocalPopChoice(t_31);
            }
          else
            {
              t = r_31;
            }
        }
      }
  }
  q_69 = t;
  t = term_l_28;
  s_69 = t;
  t = SSL_table_destroy(s_69);
  t = q_69;
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_123 (ATerm), ATerm b_123 (ATerm), ATerm c_123 (ATerm), ATerm d_123 (ATerm), ATerm t)
{
  ATerm q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL;
  t = parse_options_1_0(a_123, t);
  q_70 = t;
  t = term_v_31;
  t_70 = t;
  t = SSL_table_create(t_70);
  t = term_v_31;
  r_70 = t;
  t = term_w_31;
  s_70 = t;
  t = SSL_table_put(r_70, s_70, q_70);
  t = q_70;
  t = c_123(t);
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_123, t);
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
              t = d_123(t);
              t = report_success_0_0(t);
              LocalPopChoice(a_32);
            }
          else
            {
              t = z_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(c_32);
    }
  else
    {
      t = b_32;
      {
        ATerm e_32 = t;
        int f_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(f_32);
          }
        else
          {
            t = e_32;
            {
              ATerm g_32 = t;
              int h_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(d_6, e_6, f_6, t);
                  LocalPopChoice(h_32);
                }
              else
                {
                  t = g_32;
                  {
                    ATerm j_32 = t;
                    int k_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(k_32);
                      }
                    else
                      {
                        t = j_32;
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
static ATerm c_6 (ATerm t)
{
  t = input_1_0(g_6, t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL;
  t = term_m_26;
  a_71 = t;
  t = term_j_27;
  b_71 = t;
  t = term_l_32;
  t = t_11(a_71, b_71, t);
  t = term_n_32;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_o_32;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = output_1_0(h_6, t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,a_15 = NULL,z_14 = NULL,y_14 = NULL,t_14 = NULL;
  r_71 = t;
  if(match_cons(t, sym_Specification_1))
    {
      e_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_71);
  d_71 = t;
  t = e_71;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_71 = ATgetFirst((ATermList) t);
      h_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_71);
  f_71 = t;
  t = h_71;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_71 = ATgetFirst((ATermList) t);
      l_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_71);
  j_71 = t;
  t = k_71;
  if(match_cons(t, sym_Strategies_1))
    {
      o_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_71);
  n_71 = t;
  t = o_71;
  t = map_1_0(i_6, t);
  p_71 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, p_71);
  t_14 = t;
  t = SSLsetAnnotations(t_14, n_71);
  q_71 = t;
  t = l_71;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_71), q_71);
  y_14 = t;
  t = SSLsetAnnotations(y_14, j_71);
  m_71 = t;
  t = (ATerm) ATinsert(CheckATermList(m_71), g_71);
  z_14 = t;
  t = SSLsetAnnotations(z_14, f_71);
  i_71 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, i_71);
  a_15 = t;
  t = SSLsetAnnotations(a_15, d_71);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL;
  r_72 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      n_72 = ATgetArgument(t, 0);
      o_72 = ATgetArgument(t, 1);
      p_72 = ATgetArgument(t, 2);
      q_72 = ATgetArgument(t, 3);
      {
        ATerm p_32 = t;
        int q_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_8 = NULL,t_8 = NULL,s_14 = NULL;
            t = SSLgetAnnotations(r_72);
            o_8 = t;
            t = q_72;
            t = topdown_1_0(k_6, t);
            t = simplify_0_0(t);
            t_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, n_72, o_72, p_72, t_8);
            s_14 = t;
            t = SSLsetAnnotations(s_14, o_8);
            LocalPopChoice(q_32);
          }
        else
          {
            t = p_32;
            t = r_72;
          }
      }
    }
  else
    {
      t = r_72;
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_32 = t;
      int v_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = LiftPrimArgs_0_0(t);
          LocalPopChoice(v_32);
        }
      else
        {
          t = u_32;
          {
            ATerm w_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
            w_8 = t;
            if(match_cons(t, sym_CallT_3))
              {
                y_8 = ATgetArgument(t, 0);
                z_8 = ATgetArgument(t, 1);
                a_9 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = w_8;
            t = b_11(y_8, z_8, a_9, t);
          }
        }
      LocalPopChoice(s_32);
    }
  else
    {
      t = r_32;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(a_6, default_usage_0_0, _id, c_6, t);
  return(t);
}
