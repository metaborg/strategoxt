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
ATerm term_m_28;
ATerm term_l_28;
ATerm term_j_28;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_w_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_b_26;
ATerm term_p_25;
ATerm term_n_25;
ATerm term_i_25;
ATerm term_g_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_a_23;
ATerm term_x_22;
ATerm term_g_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_v_21;
ATerm term_a_21;
ATerm term_u_5;
ATerm term_p_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym__2, term_p_23, term_q_23);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_23);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__2, term_v_23, term_g_23);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym__2, term_g_24, term_h_24);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym__2, term_l_26, term_g_23);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__2, term_o_26, term_g_23);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym__2, term_g_25, term_g_23);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym__2, term_g_22, term_g_23);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm bottomup_1_0 (ATerm n_101 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm q_102 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm f_122 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm e_2 (ATerm u_1, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm m_101 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm t);
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
ATerm map_1_0 (ATerm p_121 (ATerm), ATerm t);
static ATerm x_10 (ATerm i_43, ATerm j_43, ATerm t);
static ATerm y_10 (ATerm n_48, ATerm o_48, ATerm t);
static ATerm a_11 (ATerm q_115 (ATerm), ATerm k_425, ATerm r_48, ATerm t);
static ATerm z_10 (ATerm j_48, ATerm k_48, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm output_1_0 (ATerm z_127 (ATerm), ATerm t);
static ATerm k_50 (ATerm d_50, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm b_11 (ATerm p_48, ATerm t);
static ATerm c_11 (ATerm k_43, ATerm l_43, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm x_51 (ATerm u_50, ATerm t);
static ATerm y_51 (ATerm z_50, ATerm a_51, ATerm b_51, ATerm t);
static ATerm z_51 (ATerm j_51, ATerm k_51, ATerm l_51, ATerm t);
static ATerm d_11 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm a_128 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm l_11 (ATerm c_47, ATerm d_47, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm j_11 (ATerm j_52, ATerm k_52, ATerm i_52, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm e_11 (ATerm r_49, ATerm s_49, ATerm t);
ATerm foldr_2_0 (ATerm f_120 (ATerm), ATerm g_120 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm n_113 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm need_help_1_0 (ATerm q_127 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm z_121 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm h_11 (ATerm c_42, ATerm d_42, ATerm t);
ATerm debug_1_0 (ATerm o_115 (ATerm), ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm i_11 (ATerm a_54, ATerm b_54, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_129 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm parse_options_1_0 (ATerm s_129 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm s_127 (ATerm), ATerm t_127 (ATerm), ATerm u_127 (ATerm), ATerm v_127 (ATerm), ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm n_101 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = bottomup_1_0(n_101, t);
    return(t);
  }
  t = SRTS_all(a_0, t);
  t = n_101(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm q_102 (ATerm), ATerm t)
{
  static ATerm n_2 (ATerm t)
  {
    ATerm m_0 = t;
    int l_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_102(t);
        LocalPopChoice(l_4);
      }
    else
      {
        t = m_0;
        t = SRTS_one(n_2, t);
      }
    return(t);
  }
  t = n_2(t);
  return(t);
}
ATerm at_end_1_0 (ATerm f_122 (ATerm), ATerm t)
{
  static ATerm o_1 (ATerm t)
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
          t = o_1(t);
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
        t = f_122(t);
      }
    return(t);
  }
  t = o_1(t);
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
      static ATerm f_0 (ATerm t)
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
static ATerm e_2 (ATerm u_1, ATerm t)
{
  ATerm v_1 = NULL;
  t = SSL_explode_term(u_1);
  if(match_cons(t, sym__2))
    {
      ATerm m_4 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_4) != ATmakeSymbol("", 0, ATtrue)))
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
        ATerm n_4 = t;
        int o_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm h_0 (ATerm t)
            {
              t = z_1;
              return(t);
            }
            t = y_1;
            t = at_end_1_0(h_0, t);
            LocalPopChoice(o_4);
          }
        else
          {
            t = n_4;
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
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm topdown_1_0 (ATerm m_101 (ATerm), ATerm t)
{
  static ATerm j_0 (ATerm t)
  {
    t = topdown_1_0(m_101, t);
    return(t);
  }
  t = m_101(t);
  t = SRTS_all(j_0, t);
  return(t);
}
ATerm genzip_4_0 (ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm t)
{
  static ATerm m_2 (ATerm t)
  {
    ATerm p_4 = t;
    int q_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_105(t);
        LocalPopChoice(q_4);
      }
    else
      {
        t = p_4;
        {
          ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,u_0 = NULL;
          t = z_105(t);
          l_2 = t;
          if(match_cons(t, sym__2))
            {
              h_2 = ATgetArgument(t, 0);
              i_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_2);
          g_2 = t;
          t = h_2;
          t = b_106(t);
          j_2 = t;
          t = i_2;
          t = m_2(t);
          k_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_2, k_2);
          u_0 = t;
          t = SSLsetAnnotations(u_0, g_2);
          t = a_106(t);
        }
      }
    return(t);
  }
  t = m_2(t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_4 = ATgetArgument(t, 0);
      if(((ATgetType(r_4) != AT_LIST) || !(ATisEmpty(r_4))))
        _fail(t);
      {
        ATerm t_4 = ATgetArgument(t, 1);
        if(((ATgetType(t_4) != AT_LIST) || !(ATisEmpty(t_4))))
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
  ATerm w_17 = NULL,x_17 = NULL,z_17 = NULL,a_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_4 = ATgetArgument(t, 0);
      if(((ATgetType(u_4) == AT_LIST) && !(ATisEmpty(u_4))))
        {
          w_17 = ATgetFirst((ATermList) u_4);
          x_17 = (ATerm) ATgetNext((ATermList) u_4);
        }
      else
        _fail(t);
      {
        ATerm w_4 = ATgetArgument(t, 1);
        if(((ATgetType(w_4) == AT_LIST) && !(ATisEmpty(w_4))))
          {
            z_17 = ATgetFirst((ATermList) w_4);
            a_18 = (ATerm) ATgetNext((ATermList) w_4);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_17, z_17), (ATerm) ATmakeAppl(sym__2, x_17, a_18));
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm b_18 = NULL,h_18 = NULL;
  if(match_cons(t, sym__2))
    {
      b_18 = ATgetArgument(t, 0);
      h_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_18), b_18);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL;
  if(match_cons(t, sym__2))
    {
      i_18 = ATgetArgument(t, 0);
      j_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_18), (ATerm) ATmakeAppl(sym_Match_1, j_18));
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_4 = ATgetArgument(t, 0);
      if(((ATgetType(x_4) != AT_LIST) || !(ATisEmpty(x_4))))
        _fail(t);
      {
        ATerm y_4 = ATgetArgument(t, 1);
        if(((ATgetType(y_4) != AT_LIST) || !(ATisEmpty(y_4))))
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
  ATerm d_25 = NULL,h_25 = NULL,j_25 = NULL,m_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_4 = ATgetArgument(t, 0);
      if(((ATgetType(z_4) == AT_LIST) && !(ATisEmpty(z_4))))
        {
          d_25 = ATgetFirst((ATermList) z_4);
          h_25 = (ATerm) ATgetNext((ATermList) z_4);
        }
      else
        _fail(t);
      {
        ATerm a_5 = ATgetArgument(t, 1);
        if(((ATgetType(a_5) == AT_LIST) && !(ATisEmpty(a_5))))
          {
            j_25 = ATgetFirst((ATermList) a_5);
            m_25 = (ATerm) ATgetNext((ATermList) a_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_25, j_25), (ATerm) ATmakeAppl(sym__2, h_25, m_25));
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm o_25 = NULL,s_25 = NULL;
  if(match_cons(t, sym__2))
    {
      o_25 = ATgetArgument(t, 0);
      s_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_25), o_25);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL;
  if(match_cons(t, sym__2))
    {
      t_25 = ATgetArgument(t, 0);
      u_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_25), (ATerm) ATmakeAppl(sym_Match_1, u_25));
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm b_5 = t;
  int c_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm e_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(c_5);
      {
        ATerm e_36 = NULL,f_36 = NULL;
        e_36 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm f_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        f_36 = t;
        t = SSLgetAnnotations(e_36);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_5 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) h_5) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm i_5 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(i_5) != AT_LIST) || !(ATisEmpty(i_5))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = f_36;
      }
    }
  else
    {
      t = b_5;
      {
        ATerm j_5 = t;
        int k_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm l_5 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) l_5) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm m_5 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(k_5);
            _fail(t);
          }
        else
          {
            t = j_5;
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
    ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,f_11 = NULL,g_11 = NULL,k_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
    y_11 = t;
    if(match_cons(t, sym_Test_1))
      {
        x_11 = ATgetArgument(t, 0);
        t = x_11;
        if(match_cons(t, sym_Id_0))
          {
            ATerm n_5 = t;
            int o_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_p_5;
                t = q_0(t);
                LocalPopChoice(o_5);
              }
            else
              {
                t = n_5;
                {
                  ATerm q_5 = t;
                  int r_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
                      t = y_11;
                      t = new_0_0(t);
                      a_12 = t;
                      t = bottomup_1_0(q_0, t);
                      l_12 = t;
                      t = (ATerm) ATempty;
                      t = q_0(t);
                      m_12 = t;
                      t = (ATerm) ATinsert(CheckATermList(m_12), l_12);
                      t = q_0(t);
                      b_12 = t;
                      t = a_12;
                      t = bottomup_1_0(q_0, t);
                      k_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, k_12);
                      t = q_0(t);
                      j_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, j_12);
                      t = q_0(t);
                      d_12 = t;
                      t = x_11;
                      t = bottomup_1_0(q_0, t);
                      f_12 = t;
                      t = a_12;
                      t = bottomup_1_0(q_0, t);
                      i_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, i_12);
                      t = q_0(t);
                      h_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, h_12);
                      t = q_0(t);
                      g_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                      t = q_0(t);
                      e_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                      t = q_0(t);
                      c_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, b_12, c_12);
                      t = q_0(t);
                      LocalPopChoice(r_5);
                    }
                  else
                    {
                      t = q_5;
                      t = y_11;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm s_5 = t;
                int t_5 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_u_5;
                    t = q_0(t);
                    LocalPopChoice(t_5);
                  }
                else
                  {
                    t = s_5;
                    {
                      ATerm w_5 = t;
                      int x_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
                          t = y_11;
                          t = new_0_0(t);
                          p_12 = t;
                          t = bottomup_1_0(q_0, t);
                          a_13 = t;
                          t = (ATerm) ATempty;
                          t = q_0(t);
                          b_13 = t;
                          t = (ATerm) ATinsert(CheckATermList(b_13), a_13);
                          t = q_0(t);
                          q_12 = t;
                          t = p_12;
                          t = bottomup_1_0(q_0, t);
                          z_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, z_12);
                          t = q_0(t);
                          y_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, y_12);
                          t = q_0(t);
                          s_12 = t;
                          t = x_11;
                          t = bottomup_1_0(q_0, t);
                          u_12 = t;
                          t = p_12;
                          t = bottomup_1_0(q_0, t);
                          x_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, x_12);
                          t = q_0(t);
                          w_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, w_12);
                          t = q_0(t);
                          v_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_12, v_12);
                          t = q_0(t);
                          t_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, s_12, t_12);
                          t = q_0(t);
                          r_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, q_12, r_12);
                          t = q_0(t);
                          LocalPopChoice(x_5);
                        }
                      else
                        {
                          t = w_5;
                          t = y_11;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    u_11 = ATgetArgument(t, 0);
                    {
                      ATerm y_5 = t;
                      int a_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, u_11);
                          t = q_0(t);
                          LocalPopChoice(a_6);
                        }
                      else
                        {
                          t = y_5;
                          {
                            ATerm b_6 = t;
                            int c_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,s_13 = NULL,v_13 = NULL,w_13 = NULL;
                                t = y_11;
                                t = new_0_0(t);
                                f_13 = t;
                                t = bottomup_1_0(q_0, t);
                                v_13 = t;
                                t = (ATerm) ATempty;
                                t = q_0(t);
                                w_13 = t;
                                t = (ATerm) ATinsert(CheckATermList(w_13), v_13);
                                t = q_0(t);
                                g_13 = t;
                                t = f_13;
                                t = bottomup_1_0(q_0, t);
                                s_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, s_13);
                                t = q_0(t);
                                o_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, o_13);
                                t = q_0(t);
                                i_13 = t;
                                t = x_11;
                                t = bottomup_1_0(q_0, t);
                                k_13 = t;
                                t = f_13;
                                t = bottomup_1_0(q_0, t);
                                n_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, n_13);
                                t = q_0(t);
                                m_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, m_13);
                                t = q_0(t);
                                l_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, k_13, l_13);
                                t = q_0(t);
                                j_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_13, j_13);
                                t = q_0(t);
                                h_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, g_13, h_13);
                                t = q_0(t);
                                LocalPopChoice(c_6);
                              }
                            else
                              {
                                t = b_6;
                                t = y_11;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm d_6 = t;
                    int e_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,v_14 = NULL,w_14 = NULL,y_14 = NULL,d_15 = NULL,f_15 = NULL,g_15 = NULL;
                        t = y_11;
                        t = new_0_0(t);
                        f_14 = t;
                        t = bottomup_1_0(q_0, t);
                        f_15 = t;
                        t = (ATerm) ATempty;
                        t = q_0(t);
                        g_15 = t;
                        t = (ATerm) ATinsert(CheckATermList(g_15), f_15);
                        t = q_0(t);
                        g_14 = t;
                        t = f_14;
                        t = bottomup_1_0(q_0, t);
                        d_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, d_15);
                        t = q_0(t);
                        y_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, y_14);
                        t = q_0(t);
                        o_14 = t;
                        t = x_11;
                        t = bottomup_1_0(q_0, t);
                        q_14 = t;
                        t = f_14;
                        t = bottomup_1_0(q_0, t);
                        w_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, w_14);
                        t = q_0(t);
                        v_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, v_14);
                        t = q_0(t);
                        r_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, q_14, r_14);
                        t = q_0(t);
                        p_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, o_14, p_14);
                        t = q_0(t);
                        h_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, g_14, h_14);
                        t = q_0(t);
                        LocalPopChoice(e_6);
                      }
                    else
                      {
                        t = d_6;
                        t = y_11;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            x_11 = ATgetArgument(t, 0);
            t = x_11;
            if(match_cons(t, sym_Id_0))
              {
                ATerm f_6 = t;
                int h_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_u_5;
                    t = q_0(t);
                    LocalPopChoice(h_6);
                  }
                else
                  {
                    t = f_6;
                    t = y_11;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm i_6 = t;
                    int j_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_p_5;
                        t = q_0(t);
                        LocalPopChoice(j_6);
                      }
                    else
                      {
                        t = i_6;
                        t = y_11;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        u_11 = ATgetArgument(t, 0);
                        {
                          ATerm k_6 = t;
                          int m_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, u_11);
                              t = q_0(t);
                              LocalPopChoice(m_6);
                            }
                          else
                            {
                              t = k_6;
                              t = y_11;
                            }
                        }
                      }
                    else
                      {
                        t = y_11;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                x_11 = ATgetArgument(t, 0);
                w_11 = ATgetArgument(t, 1);
                t = w_11;
                if(match_cons(t, sym_Id_0))
                  {
                    t = x_11;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = w_11;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = x_11;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                u_11 = ATgetArgument(t, 0);
                                v_11 = ATgetArgument(t, 1);
                                t = x_11;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    u_11 = ATgetArgument(t, 0);
                                    v_11 = ATgetArgument(t, 1);
                                    t = x_11;
                                  }
                                else
                                  {
                                    t = x_11;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        s_11 = ATgetArgument(t, 0);
                        t_11 = ATgetArgument(t, 1);
                        t = s_11;
                        if(match_cons(t, sym_Match_1))
                          {
                            r_11 = ATgetArgument(t, 0);
                            t = r_11;
                            if(match_cons(t, sym_Op_2))
                              {
                                p_11 = ATgetArgument(t, 0);
                                g_11 = ATgetArgument(t, 1);
                                t = x_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = w_11;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm n_6 = t;
                                        int o_6 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_u_5;
                                            t = q_0(t);
                                            LocalPopChoice(o_6);
                                          }
                                        else
                                          {
                                            t = n_6;
                                            t = y_11;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            u_11 = ATgetArgument(t, 0);
                                            v_11 = ATgetArgument(t, 1);
                                            {
                                              ATerm p_6 = t;
                                              int q_6 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm n_17 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                  t = q_0(t);
                                                  n_17 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, n_17);
                                                  t = q_0(t);
                                                  LocalPopChoice(q_6);
                                                }
                                              else
                                                {
                                                  t = p_6;
                                                  t = y_11;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                u_11 = ATgetArgument(t, 0);
                                                t = u_11;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    q_11 = ATgetArgument(t, 0);
                                                    k_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm r_6 = t;
                                                      int s_6 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, q_11, p_11);
                                                          {
                                                            ATerm u_6 = t;
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
                                                                t = u_6;
                                                              }
                                                          }
                                                          t = term_u_5;
                                                          t = bottomup_1_0(q_0, t);
                                                          LocalPopChoice(s_6);
                                                        }
                                                      else
                                                        {
                                                          t = r_6;
                                                          {
                                                            ATerm x_6 = t;
                                                            int y_6 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm t_17 = NULL;
                                                                t = p_11;
                                                                if((q_11 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, k_11, g_11);
                                                                t = genzip_4_0(t_0, v_0, x_0, y_0, t);
                                                                t_17 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_17), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, q_11, k_11)), t_11));
                                                                t = bottomup_1_0(q_0, t);
                                                                LocalPopChoice(y_6);
                                                              }
                                                            else
                                                              {
                                                                t = x_6;
                                                                {
                                                                  ATerm a_7 = t;
                                                                  int c_7 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm s_18 = NULL;
                                                                      t = r_11;
                                                                      if((u_11 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                                                                      t = q_0(t);
                                                                      s_18 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_18, t_11);
                                                                      t = q_0(t);
                                                                      LocalPopChoice(c_7);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = a_7;
                                                                      t = y_11;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm e_7 = t;
                                                    int k_7 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm d_19 = NULL;
                                                        t = r_11;
                                                        if((u_11 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                                                        t = q_0(t);
                                                        d_19 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, d_19, t_11);
                                                        t = q_0(t);
                                                        LocalPopChoice(k_7);
                                                      }
                                                    else
                                                      {
                                                        t = e_7;
                                                        t = y_11;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    u_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm l_7 = t;
                                                      int m_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm l_19 = NULL;
                                                          t = r_11;
                                                          if((u_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, u_11);
                                                          t = q_0(t);
                                                          l_19 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, l_19, t_11);
                                                          t = q_0(t);
                                                          LocalPopChoice(m_7);
                                                        }
                                                      else
                                                        {
                                                          t = l_7;
                                                          t = y_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm n_7 = t;
                                                          int o_7 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_19 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = q_0(t);
                                                              q_19 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, q_19);
                                                              t = q_0(t);
                                                              LocalPopChoice(o_7);
                                                            }
                                                          else
                                                            {
                                                              t = n_7;
                                                              t = y_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = y_11;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = x_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = w_11;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm p_7 = t;
                                        int q_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_u_5;
                                            t = q_0(t);
                                            LocalPopChoice(q_7);
                                          }
                                        else
                                          {
                                            t = p_7;
                                            t = y_11;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            u_11 = ATgetArgument(t, 0);
                                            v_11 = ATgetArgument(t, 1);
                                            {
                                              ATerm r_7 = t;
                                              int s_7 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm z_19 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                  t = q_0(t);
                                                  z_19 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, z_19);
                                                  t = q_0(t);
                                                  LocalPopChoice(s_7);
                                                }
                                              else
                                                {
                                                  t = r_7;
                                                  t = y_11;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                u_11 = ATgetArgument(t, 0);
                                                {
                                                  ATerm t_7 = t;
                                                  int u_7 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm d_20 = NULL;
                                                      t = r_11;
                                                      if((u_11 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, u_11);
                                                      t = q_0(t);
                                                      d_20 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_20, t_11);
                                                      t = q_0(t);
                                                      LocalPopChoice(u_7);
                                                    }
                                                  else
                                                    {
                                                      t = t_7;
                                                      t = y_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    u_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm v_7 = t;
                                                      int w_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm h_20 = NULL;
                                                          t = r_11;
                                                          if((u_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                                                          t = q_0(t);
                                                          h_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_20, t_11);
                                                          t = q_0(t);
                                                          LocalPopChoice(w_7);
                                                        }
                                                      else
                                                        {
                                                          t = v_7;
                                                          t = y_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm x_7 = t;
                                                          int y_7 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm m_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = q_0(t);
                                                              m_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, m_20);
                                                              t = q_0(t);
                                                              LocalPopChoice(y_7);
                                                            }
                                                          else
                                                            {
                                                              t = x_7;
                                                              t = y_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = y_11;
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
                                r_11 = ATgetArgument(t, 0);
                                t = r_11;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    p_11 = ATgetArgument(t, 0);
                                    t = x_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = w_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm z_7 = t;
                                            int a_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_u_5;
                                                t = q_0(t);
                                                LocalPopChoice(a_8);
                                              }
                                            else
                                              {
                                                t = z_7;
                                                t = y_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                u_11 = ATgetArgument(t, 0);
                                                v_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm b_8 = t;
                                                  int c_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm d_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                      t = q_0(t);
                                                      d_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, d_21);
                                                      t = q_0(t);
                                                      LocalPopChoice(c_8);
                                                    }
                                                  else
                                                    {
                                                      t = b_8;
                                                      t = y_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm d_8 = t;
                                                int e_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm f_8 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(e_8);
                                                    {
                                                      ATerm g_8 = t;
                                                      int h_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, r_11);
                                                          t = q_0(t);
                                                          j_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_21, t_11);
                                                          t = q_0(t);
                                                          LocalPopChoice(h_8);
                                                        }
                                                      else
                                                        {
                                                          t = g_8;
                                                          t = y_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = d_8;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        t = u_11;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            q_11 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm i_8 = t;
                                                              int j_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm q_21 = NULL,r_21 = NULL;
                                                                  t = p_11;
                                                                  if((q_11 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, q_11);
                                                                  t = q_0(t);
                                                                  r_21 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, r_21);
                                                                  t = q_0(t);
                                                                  q_21 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_21, t_11);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(j_8);
                                                                }
                                                              else
                                                                {
                                                                  t = i_8;
                                                                  t = y_11;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = y_11;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            u_11 = ATgetArgument(t, 0);
                                                            v_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm k_8 = t;
                                                              int l_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm x_21 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                                  t = q_0(t);
                                                                  x_21 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, x_21);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(l_8);
                                                                }
                                                              else
                                                                {
                                                                  t = k_8;
                                                                  t = y_11;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = y_11;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = x_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = w_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm m_8 = t;
                                            int n_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_u_5;
                                                t = q_0(t);
                                                LocalPopChoice(n_8);
                                              }
                                            else
                                              {
                                                t = m_8;
                                                t = y_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                u_11 = ATgetArgument(t, 0);
                                                v_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm o_8 = t;
                                                  int p_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm j_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                      t = q_0(t);
                                                      j_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, j_22);
                                                      t = q_0(t);
                                                      LocalPopChoice(p_8);
                                                    }
                                                  else
                                                    {
                                                      t = o_8;
                                                      t = y_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm q_8 = t;
                                                int r_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm s_8 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(r_8);
                                                    {
                                                      ATerm t_8 = t;
                                                      int u_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm n_22 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, r_11);
                                                          t = q_0(t);
                                                          n_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, t_11);
                                                          t = q_0(t);
                                                          LocalPopChoice(u_8);
                                                        }
                                                      else
                                                        {
                                                          t = t_8;
                                                          t = y_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = q_8;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm v_8 = t;
                                                          int w_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm s_22 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = q_0(t);
                                                              s_22 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, s_22);
                                                              t = q_0(t);
                                                              LocalPopChoice(w_8);
                                                            }
                                                          else
                                                            {
                                                              t = v_8;
                                                              t = y_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = y_11;
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
                                    r_11 = ATgetArgument(t, 0);
                                    m_11 = ATgetArgument(t, 1);
                                    n_11 = ATgetArgument(t, 2);
                                    t = x_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = w_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm x_8 = t;
                                            int y_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_u_5;
                                                t = q_0(t);
                                                LocalPopChoice(y_8);
                                              }
                                            else
                                              {
                                                t = x_8;
                                                t = y_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                u_11 = ATgetArgument(t, 0);
                                                v_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm z_8 = t;
                                                  int a_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm d_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                      t = q_0(t);
                                                      d_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, d_23);
                                                      t = q_0(t);
                                                      LocalPopChoice(a_9);
                                                    }
                                                  else
                                                    {
                                                      t = z_8;
                                                      t = y_11;
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
                                                          ATerm j_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, r_11, m_11, n_11);
                                                          t = q_0(t);
                                                          j_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_23, t_11);
                                                          t = q_0(t);
                                                          LocalPopChoice(f_9);
                                                        }
                                                      else
                                                        {
                                                          t = e_9;
                                                          t = y_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = b_9;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm g_9 = t;
                                                          int h_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm o_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = q_0(t);
                                                              o_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, o_23);
                                                              t = q_0(t);
                                                              LocalPopChoice(h_9);
                                                            }
                                                          else
                                                            {
                                                              t = g_9;
                                                              t = y_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = y_11;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = x_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = w_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm i_9 = t;
                                            int j_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_u_5;
                                                t = q_0(t);
                                                LocalPopChoice(j_9);
                                              }
                                            else
                                              {
                                                t = i_9;
                                                t = y_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                u_11 = ATgetArgument(t, 0);
                                                v_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm k_9 = t;
                                                  int l_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                      t = q_0(t);
                                                      x_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, x_23);
                                                      t = q_0(t);
                                                      LocalPopChoice(l_9);
                                                    }
                                                  else
                                                    {
                                                      t = k_9;
                                                      t = y_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    u_11 = ATgetArgument(t, 0);
                                                    v_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm m_9 = t;
                                                      int n_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm e_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                          t = q_0(t);
                                                          e_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, e_24);
                                                          t = q_0(t);
                                                          LocalPopChoice(n_9);
                                                        }
                                                      else
                                                        {
                                                          t = m_9;
                                                          t = y_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = y_11;
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
                            s_11 = ATgetArgument(t, 0);
                            t = s_11;
                            if(match_cons(t, sym_Op_2))
                              {
                                r_11 = ATgetArgument(t, 0);
                                m_11 = ATgetArgument(t, 1);
                                t = x_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = w_11;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm o_9 = t;
                                        int p_9 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_u_5;
                                            t = q_0(t);
                                            LocalPopChoice(p_9);
                                          }
                                        else
                                          {
                                            t = o_9;
                                            t = y_11;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            u_11 = ATgetArgument(t, 0);
                                            v_11 = ATgetArgument(t, 1);
                                            {
                                              ATerm q_9 = t;
                                              int r_9 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm u_24 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                  t = q_0(t);
                                                  u_24 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, u_24);
                                                  t = q_0(t);
                                                  LocalPopChoice(r_9);
                                                }
                                              else
                                                {
                                                  t = q_9;
                                                  t = y_11;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                u_11 = ATgetArgument(t, 0);
                                                t = u_11;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    q_11 = ATgetArgument(t, 0);
                                                    k_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm s_9 = t;
                                                      int t_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, q_11, r_11);
                                                          {
                                                            ATerm u_9 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm o_2 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    o_2 = ATgetArgument(t, 0);
                                                                    if((o_2 != ATgetArgument(t, 1)))
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
                                                                t = u_9;
                                                              }
                                                          }
                                                          t = term_u_5;
                                                          t = bottomup_1_0(q_0, t);
                                                          LocalPopChoice(t_9);
                                                        }
                                                      else
                                                        {
                                                          t = s_9;
                                                          {
                                                            ATerm v_9 = t;
                                                            int w_9 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm c_25 = NULL;
                                                                t = r_11;
                                                                if((q_11 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, k_11, m_11);
                                                                t = genzip_4_0(z_0, d_1, e_1, h_1, t);
                                                                c_25 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_25), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, q_11, k_11)));
                                                                t = bottomup_1_0(q_0, t);
                                                                LocalPopChoice(w_9);
                                                              }
                                                            else
                                                              {
                                                                t = v_9;
                                                                {
                                                                  ATerm x_9 = t;
                                                                  int y_9 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = s_11;
                                                                      if((u_11 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                                                                      t = q_0(t);
                                                                      LocalPopChoice(y_9);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = x_9;
                                                                      t = y_11;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm z_9 = t;
                                                    int a_10 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = s_11;
                                                        if((u_11 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                                                        t = q_0(t);
                                                        LocalPopChoice(a_10);
                                                      }
                                                    else
                                                      {
                                                        t = z_9;
                                                        t = y_11;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    u_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm b_10 = t;
                                                      int c_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = s_11;
                                                          if((u_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, u_11);
                                                          t = q_0(t);
                                                          LocalPopChoice(c_10);
                                                        }
                                                      else
                                                        {
                                                          t = b_10;
                                                          t = y_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm d_10 = t;
                                                          int e_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm k_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = q_0(t);
                                                              k_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, k_26);
                                                              t = q_0(t);
                                                              LocalPopChoice(e_10);
                                                            }
                                                          else
                                                            {
                                                              t = d_10;
                                                              t = y_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = y_11;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = x_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = w_11;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm f_10 = t;
                                        int g_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_u_5;
                                            t = q_0(t);
                                            LocalPopChoice(g_10);
                                          }
                                        else
                                          {
                                            t = f_10;
                                            t = y_11;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            u_11 = ATgetArgument(t, 0);
                                            v_11 = ATgetArgument(t, 1);
                                            {
                                              ATerm h_10 = t;
                                              int i_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm a_27 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                  t = q_0(t);
                                                  a_27 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, a_27);
                                                  t = q_0(t);
                                                  LocalPopChoice(i_10);
                                                }
                                              else
                                                {
                                                  t = h_10;
                                                  t = y_11;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                u_11 = ATgetArgument(t, 0);
                                                {
                                                  ATerm j_10 = t;
                                                  int k_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = s_11;
                                                      if((u_11 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, u_11);
                                                      t = q_0(t);
                                                      LocalPopChoice(k_10);
                                                    }
                                                  else
                                                    {
                                                      t = j_10;
                                                      t = y_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    u_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm l_10 = t;
                                                      int m_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = s_11;
                                                          if((u_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                                                          t = q_0(t);
                                                          LocalPopChoice(m_10);
                                                        }
                                                      else
                                                        {
                                                          t = l_10;
                                                          t = y_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm n_10 = t;
                                                          int o_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm l_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = q_0(t);
                                                              l_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, l_27);
                                                              t = q_0(t);
                                                              LocalPopChoice(o_10);
                                                            }
                                                          else
                                                            {
                                                              t = n_10;
                                                              t = y_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = y_11;
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
                                s_11 = ATgetArgument(t, 0);
                                t = s_11;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    r_11 = ATgetArgument(t, 0);
                                    t = x_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = w_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm p_10 = t;
                                            int q_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_u_5;
                                                t = q_0(t);
                                                LocalPopChoice(q_10);
                                              }
                                            else
                                              {
                                                t = p_10;
                                                t = y_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                u_11 = ATgetArgument(t, 0);
                                                v_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm r_10 = t;
                                                  int z_11 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm z_27 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                      t = q_0(t);
                                                      z_27 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, z_27);
                                                      t = q_0(t);
                                                      LocalPopChoice(z_11);
                                                    }
                                                  else
                                                    {
                                                      t = r_10;
                                                      t = y_11;
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
                                                        ATerm c_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(o_12);
                                                    {
                                                      ATerm d_13 = t;
                                                      int e_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_11);
                                                          t = q_0(t);
                                                          LocalPopChoice(e_13);
                                                        }
                                                      else
                                                        {
                                                          t = d_13;
                                                          t = y_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = n_12;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        t = u_11;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            q_11 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm p_13 = t;
                                                              int q_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm e_28 = NULL;
                                                                  t = r_11;
                                                                  if((q_11 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, q_11);
                                                                  t = q_0(t);
                                                                  e_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, e_28);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(q_13);
                                                                }
                                                              else
                                                                {
                                                                  t = p_13;
                                                                  t = y_11;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = y_11;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            u_11 = ATgetArgument(t, 0);
                                                            v_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm r_13 = t;
                                                              int t_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm k_28 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                                  t = q_0(t);
                                                                  k_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, k_28);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(t_13);
                                                                }
                                                              else
                                                                {
                                                                  t = r_13;
                                                                  t = y_11;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = y_11;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = x_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = w_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm u_13 = t;
                                            int x_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_u_5;
                                                t = q_0(t);
                                                LocalPopChoice(x_13);
                                              }
                                            else
                                              {
                                                t = u_13;
                                                t = y_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                u_11 = ATgetArgument(t, 0);
                                                v_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm y_13 = t;
                                                  int z_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                      t = q_0(t);
                                                      t_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, t_28);
                                                      t = q_0(t);
                                                      LocalPopChoice(z_13);
                                                    }
                                                  else
                                                    {
                                                      t = y_13;
                                                      t = y_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm a_14 = t;
                                                int b_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm c_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(b_14);
                                                    {
                                                      ATerm d_14 = t;
                                                      int e_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_11);
                                                          t = q_0(t);
                                                          LocalPopChoice(e_14);
                                                        }
                                                      else
                                                        {
                                                          t = d_14;
                                                          t = y_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = a_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm i_14 = t;
                                                          int j_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = q_0(t);
                                                              a_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, a_29);
                                                              t = q_0(t);
                                                              LocalPopChoice(j_14);
                                                            }
                                                          else
                                                            {
                                                              t = i_14;
                                                              t = y_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = y_11;
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
                                    s_11 = ATgetArgument(t, 0);
                                    t_11 = ATgetArgument(t, 1);
                                    o_11 = ATgetArgument(t, 2);
                                    t = x_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = w_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm k_14 = t;
                                            int l_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_u_5;
                                                t = q_0(t);
                                                LocalPopChoice(l_14);
                                              }
                                            else
                                              {
                                                t = k_14;
                                                t = y_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                u_11 = ATgetArgument(t, 0);
                                                v_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm m_14 = t;
                                                  int n_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm l_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                      t = q_0(t);
                                                      l_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, l_29);
                                                      t = q_0(t);
                                                      LocalPopChoice(n_14);
                                                    }
                                                  else
                                                    {
                                                      t = m_14;
                                                      t = y_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm s_14 = t;
                                                int t_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm u_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(t_14);
                                                    {
                                                      ATerm x_14 = t;
                                                      int z_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, s_11, t_11, o_11);
                                                          t = q_0(t);
                                                          LocalPopChoice(z_14);
                                                        }
                                                      else
                                                        {
                                                          t = x_14;
                                                          t = y_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = s_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_15 = t;
                                                          int b_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = q_0(t);
                                                              u_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, u_29);
                                                              t = q_0(t);
                                                              LocalPopChoice(b_15);
                                                            }
                                                          else
                                                            {
                                                              t = a_15;
                                                              t = y_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = y_11;
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
                                        s_11 = ATgetArgument(t, 0);
                                        t_11 = ATgetArgument(t, 1);
                                        t = x_11;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = w_11;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm c_15 = t;
                                                int e_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_u_5;
                                                    t = q_0(t);
                                                    LocalPopChoice(e_15);
                                                  }
                                                else
                                                  {
                                                    t = c_15;
                                                    {
                                                      ATerm h_15 = t;
                                                      int i_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_30 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                          t = q_0(t);
                                                          j_30 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, s_11, j_30);
                                                          t = q_0(t);
                                                          LocalPopChoice(i_15);
                                                        }
                                                      else
                                                        {
                                                          t = h_15;
                                                          t = y_11;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    u_11 = ATgetArgument(t, 0);
                                                    v_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm j_15 = t;
                                                      int k_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm p_30 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                          t = q_0(t);
                                                          p_30 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, p_30);
                                                          t = q_0(t);
                                                          LocalPopChoice(k_15);
                                                        }
                                                      else
                                                        {
                                                          t = j_15;
                                                          {
                                                            ATerm l_15 = t;
                                                            int m_15 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm w_30 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                                t = q_0(t);
                                                                w_30 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, s_11, w_30);
                                                                t = q_0(t);
                                                                LocalPopChoice(m_15);
                                                              }
                                                            else
                                                              {
                                                                t = l_15;
                                                                t = y_11;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm n_15 = t;
                                                          int o_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                              t = q_0(t);
                                                              i_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, s_11, i_31);
                                                              t = q_0(t);
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
                                                                    ATerm n_31 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                                    t = q_0(t);
                                                                    n_31 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, n_31);
                                                                    t = q_0(t);
                                                                    LocalPopChoice(q_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = p_15;
                                                                    t = y_11;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm r_15 = t;
                                                        int s_15 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm t_31 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                            t = q_0(t);
                                                            t_31 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, s_11, t_31);
                                                            t = q_0(t);
                                                            LocalPopChoice(s_15);
                                                          }
                                                        else
                                                          {
                                                            t = r_15;
                                                            t = y_11;
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
                                            s_11 = ATgetArgument(t, 0);
                                            t_11 = ATgetArgument(t, 1);
                                            t = x_11;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = w_11;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm t_15 = t;
                                                    int u_15 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_u_5;
                                                        t = q_0(t);
                                                        LocalPopChoice(u_15);
                                                      }
                                                    else
                                                      {
                                                        t = t_15;
                                                        {
                                                          ATerm v_15 = t;
                                                          int w_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                              t = q_0(t);
                                                              g_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, s_11, g_32);
                                                              t = q_0(t);
                                                              LocalPopChoice(w_15);
                                                            }
                                                          else
                                                            {
                                                              t = v_15;
                                                              t = y_11;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm x_15 = t;
                                                          int y_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm m_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = q_0(t);
                                                              m_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, m_32);
                                                              t = q_0(t);
                                                              LocalPopChoice(y_15);
                                                            }
                                                          else
                                                            {
                                                              t = x_15;
                                                              {
                                                                ATerm z_15 = t;
                                                                int a_16 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm q_32 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                                    t = q_0(t);
                                                                    q_32 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, s_11, q_32);
                                                                    t = q_0(t);
                                                                    LocalPopChoice(a_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = z_15;
                                                                    t = y_11;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            u_11 = ATgetArgument(t, 0);
                                                            v_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm b_16 = t;
                                                              int c_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm a_33 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                                  t = q_0(t);
                                                                  a_33 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, s_11, a_33);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(c_16);
                                                                }
                                                              else
                                                                {
                                                                  t = b_16;
                                                                  {
                                                                    ATerm d_16 = t;
                                                                    int e_16 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm h_33 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                                        t = q_0(t);
                                                                        h_33 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, h_33);
                                                                        t = q_0(t);
                                                                        LocalPopChoice(e_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = d_16;
                                                                        t = y_11;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm f_16 = t;
                                                            int g_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm s_33 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                                t = q_0(t);
                                                                s_33 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, s_11, s_33);
                                                                t = q_0(t);
                                                                LocalPopChoice(g_16);
                                                              }
                                                            else
                                                              {
                                                                t = f_16;
                                                                t = y_11;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = x_11;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = w_11;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm h_16 = t;
                                                    int i_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_u_5;
                                                        t = q_0(t);
                                                        LocalPopChoice(i_16);
                                                      }
                                                    else
                                                      {
                                                        t = h_16;
                                                        t = y_11;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_16 = t;
                                                          int k_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = q_0(t);
                                                              i_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, i_34);
                                                              t = q_0(t);
                                                              LocalPopChoice(k_16);
                                                            }
                                                          else
                                                            {
                                                              t = j_16;
                                                              t = y_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            u_11 = ATgetArgument(t, 0);
                                                            v_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm l_16 = t;
                                                              int m_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm n_34 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                                  t = q_0(t);
                                                                  n_34 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, n_34);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(m_16);
                                                                }
                                                              else
                                                                {
                                                                  t = l_16;
                                                                  t = y_11;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = y_11;
                                                          }
                                                      }
                                                  }
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
                    x_11 = ATgetArgument(t, 0);
                    w_11 = ATgetArgument(t, 1);
                    t = w_11;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = x_11;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm n_16 = t;
                            int o_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_p_5;
                                t = q_0(t);
                                LocalPopChoice(o_16);
                              }
                            else
                              {
                                t = n_16;
                                t = x_11;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = w_11;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    u_11 = ATgetArgument(t, 0);
                                    v_11 = ATgetArgument(t, 1);
                                    t = x_11;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        u_11 = ATgetArgument(t, 0);
                                        t = x_11;
                                      }
                                    else
                                      {
                                        t = x_11;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = x_11;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm p_16 = t;
                            int q_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_p_5;
                                t = q_0(t);
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
                                      t = w_11;
                                      if((x_11 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(s_16);
                                    }
                                  else
                                    {
                                      t = r_16;
                                      t = y_11;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = w_11;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    u_11 = ATgetArgument(t, 0);
                                    v_11 = ATgetArgument(t, 1);
                                    {
                                      ATerm t_16 = t;
                                      int u_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm z_35 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, v_11, w_11);
                                          t = q_0(t);
                                          z_35 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, u_11, z_35);
                                          t = q_0(t);
                                          LocalPopChoice(u_16);
                                        }
                                      else
                                        {
                                          t = t_16;
                                          {
                                            ATerm v_16 = t;
                                            int w_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = w_11;
                                                if((x_11 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(w_16);
                                              }
                                            else
                                              {
                                                t = v_16;
                                                t = y_11;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        u_11 = ATgetArgument(t, 0);
                                        {
                                          ATerm x_16 = t;
                                          int y_16 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = w_11;
                                              if((x_11 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(y_16);
                                            }
                                          else
                                            {
                                              t = x_16;
                                              {
                                                ATerm z_16 = t;
                                                int a_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = u_11;
                                                    t = topdown_1_0(i_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                                                    t = bottomup_1_0(q_0, t);
                                                    LocalPopChoice(a_17);
                                                  }
                                                else
                                                  {
                                                    t = z_16;
                                                    t = y_11;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm b_17 = t;
                                        int c_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = w_11;
                                            if((x_11 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(c_17);
                                          }
                                        else
                                          {
                                            t = b_17;
                                            t = y_11;
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
                        x_11 = ATgetArgument(t, 0);
                        w_11 = ATgetArgument(t, 1);
                        t = w_11;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = x_11;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm d_17 = t;
                                int e_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_p_5;
                                    t = q_0(t);
                                    LocalPopChoice(e_17);
                                  }
                                else
                                  {
                                    t = d_17;
                                    t = w_11;
                                  }
                              }
                            else
                              {
                                ATerm f_17 = t;
                                int g_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_p_5;
                                    t = q_0(t);
                                    LocalPopChoice(g_17);
                                  }
                                else
                                  {
                                    t = f_17;
                                    t = y_11;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = x_11;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm h_17 = t;
                                    int i_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_u_5;
                                        t = q_0(t);
                                        LocalPopChoice(i_17);
                                      }
                                    else
                                      {
                                        t = h_17;
                                        t = w_11;
                                      }
                                  }
                                else
                                  {
                                    ATerm j_17 = t;
                                    int k_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_u_5;
                                        t = q_0(t);
                                        LocalPopChoice(k_17);
                                      }
                                    else
                                      {
                                        t = j_17;
                                        t = y_11;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    s_11 = ATgetArgument(t, 0);
                                    t_11 = ATgetArgument(t, 1);
                                    t = x_11;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = w_11;
                                      }
                                    else
                                      {
                                        ATerm l_17 = t;
                                        int m_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm z_36 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, x_11, s_11);
                                            t = conc_0_0(t);
                                            z_36 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, z_36, t_11);
                                            t = bottomup_1_0(q_0, t);
                                            LocalPopChoice(m_17);
                                          }
                                        else
                                          {
                                            t = l_17;
                                            t = y_11;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = x_11;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = w_11;
                                      }
                                    else
                                      {
                                        t = y_11;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm o_17 = t;
                        int p_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm q_17 = ATgetArgument(t, 0);
                                w_11 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(p_17);
                            t = w_11;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm r_17 = t;
                                int s_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_p_5;
                                    t = q_0(t);
                                    LocalPopChoice(s_17);
                                  }
                                else
                                  {
                                    t = r_17;
                                    t = y_11;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm u_17 = t;
                                    int v_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_u_5;
                                        t = q_0(t);
                                        LocalPopChoice(v_17);
                                      }
                                    else
                                      {
                                        t = u_17;
                                        t = y_11;
                                      }
                                  }
                                else
                                  {
                                    t = y_11;
                                  }
                              }
                          }
                        else
                          {
                            t = o_17;
                            if(match_cons(t, sym_All_1))
                              {
                                x_11 = ATgetArgument(t, 0);
                                t = x_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm y_17 = t;
                                    int c_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_p_5;
                                        t = q_0(t);
                                        LocalPopChoice(c_18);
                                      }
                                    else
                                      {
                                        t = y_17;
                                        t = y_11;
                                      }
                                  }
                                else
                                  {
                                    t = y_11;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    x_11 = ATgetArgument(t, 0);
                                    t = x_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm d_18 = t;
                                        int e_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_p_5;
                                            t = q_0(t);
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
                                                  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,x_37 = NULL,y_37 = NULL,a_38 = NULL;
                                                  t = y_11;
                                                  t = new_0_0(t);
                                                  m_37 = t;
                                                  t = bottomup_1_0(q_0, t);
                                                  y_37 = t;
                                                  t = (ATerm) ATempty;
                                                  t = q_0(t);
                                                  a_38 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(a_38), y_37);
                                                  t = q_0(t);
                                                  n_37 = t;
                                                  t = m_37;
                                                  t = bottomup_1_0(q_0, t);
                                                  x_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, x_37);
                                                  t = q_0(t);
                                                  v_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, v_37);
                                                  t = q_0(t);
                                                  p_37 = t;
                                                  t = x_11;
                                                  t = bottomup_1_0(q_0, t);
                                                  r_37 = t;
                                                  t = m_37;
                                                  t = bottomup_1_0(q_0, t);
                                                  u_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, u_37);
                                                  t = q_0(t);
                                                  t_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, t_37);
                                                  t = q_0(t);
                                                  s_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, r_37, s_37);
                                                  t = q_0(t);
                                                  q_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_37, q_37);
                                                  t = q_0(t);
                                                  o_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, n_37, o_37);
                                                  t = q_0(t);
                                                  LocalPopChoice(g_18);
                                                }
                                              else
                                                {
                                                  t = f_18;
                                                  t = y_11;
                                                }
                                            }
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
                                                t = term_u_5;
                                                t = q_0(t);
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
                                                      ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL;
                                                      t = y_11;
                                                      t = new_0_0(t);
                                                      e_38 = t;
                                                      t = bottomup_1_0(q_0, t);
                                                      p_38 = t;
                                                      t = (ATerm) ATempty;
                                                      t = q_0(t);
                                                      q_38 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(q_38), p_38);
                                                      t = q_0(t);
                                                      f_38 = t;
                                                      t = e_38;
                                                      t = bottomup_1_0(q_0, t);
                                                      o_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, o_38);
                                                      t = q_0(t);
                                                      n_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, n_38);
                                                      t = q_0(t);
                                                      h_38 = t;
                                                      t = x_11;
                                                      t = bottomup_1_0(q_0, t);
                                                      j_38 = t;
                                                      t = e_38;
                                                      t = bottomup_1_0(q_0, t);
                                                      m_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, m_38);
                                                      t = q_0(t);
                                                      l_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, l_38);
                                                      t = q_0(t);
                                                      k_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_38, k_38);
                                                      t = q_0(t);
                                                      i_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_38, i_38);
                                                      t = q_0(t);
                                                      g_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, f_38, g_38);
                                                      t = q_0(t);
                                                      LocalPopChoice(n_18);
                                                    }
                                                  else
                                                    {
                                                      t = m_18;
                                                      t = y_11;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                u_11 = ATgetArgument(t, 0);
                                                v_11 = ATgetArgument(t, 1);
                                                t = v_11;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    t_10 = ATgetArgument(t, 0);
                                                    v_10 = ATgetArgument(t, 1);
                                                    t = t_10;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        u_10 = ATgetArgument(t, 0);
                                                        t = u_11;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            q_11 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm o_18 = t;
                                                              int p_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, u_10);
                                                                  t = q_0(t);
                                                                  x_38 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_38, v_10);
                                                                  t = q_0(t);
                                                                  w_38 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_11, w_38);
                                                                  t = q_0(t);
                                                                  v_38 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, v_38);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(p_18);
                                                                }
                                                              else
                                                                {
                                                                  t = o_18;
                                                                  {
                                                                    ATerm q_18 = t;
                                                                    int r_18 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
                                                                        t = y_11;
                                                                        t = new_0_0(t);
                                                                        z_38 = t;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        k_39 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = q_0(t);
                                                                        l_39 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(l_39), k_39);
                                                                        t = q_0(t);
                                                                        a_39 = t;
                                                                        t = z_38;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        j_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, j_39);
                                                                        t = q_0(t);
                                                                        i_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, i_39);
                                                                        t = q_0(t);
                                                                        c_39 = t;
                                                                        t = x_11;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        e_39 = t;
                                                                        t = z_38;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        h_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, h_39);
                                                                        t = q_0(t);
                                                                        g_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, g_39);
                                                                        t = q_0(t);
                                                                        f_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, e_39, f_39);
                                                                        t = q_0(t);
                                                                        d_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, c_39, d_39);
                                                                        t = q_0(t);
                                                                        b_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, a_39, b_39);
                                                                        t = q_0(t);
                                                                        LocalPopChoice(r_18);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_18;
                                                                        t = y_11;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm t_18 = t;
                                                            int u_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL;
                                                                t = y_11;
                                                                t = new_0_0(t);
                                                                o_39 = t;
                                                                t = bottomup_1_0(q_0, t);
                                                                z_39 = t;
                                                                t = (ATerm) ATempty;
                                                                t = q_0(t);
                                                                a_40 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(a_40), z_39);
                                                                t = q_0(t);
                                                                p_39 = t;
                                                                t = o_39;
                                                                t = bottomup_1_0(q_0, t);
                                                                y_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, y_39);
                                                                t = q_0(t);
                                                                x_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, x_39);
                                                                t = q_0(t);
                                                                r_39 = t;
                                                                t = x_11;
                                                                t = bottomup_1_0(q_0, t);
                                                                t_39 = t;
                                                                t = o_39;
                                                                t = bottomup_1_0(q_0, t);
                                                                w_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, w_39);
                                                                t = q_0(t);
                                                                v_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, v_39);
                                                                t = q_0(t);
                                                                u_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, t_39, u_39);
                                                                t = q_0(t);
                                                                s_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, r_39, s_39);
                                                                t = q_0(t);
                                                                q_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, p_39, q_39);
                                                                t = q_0(t);
                                                                LocalPopChoice(u_18);
                                                              }
                                                            else
                                                              {
                                                                t = t_18;
                                                                t = y_11;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = u_11;
                                                        {
                                                          ATerm v_18 = t;
                                                          int w_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,l_40 = NULL,m_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL;
                                                              t = y_11;
                                                              t = new_0_0(t);
                                                              d_40 = t;
                                                              t = bottomup_1_0(q_0, t);
                                                              q_40 = t;
                                                              t = (ATerm) ATempty;
                                                              t = q_0(t);
                                                              r_40 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(r_40), q_40);
                                                              t = q_0(t);
                                                              e_40 = t;
                                                              t = d_40;
                                                              t = bottomup_1_0(q_0, t);
                                                              p_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, p_40);
                                                              t = q_0(t);
                                                              o_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, o_40);
                                                              t = q_0(t);
                                                              g_40 = t;
                                                              t = x_11;
                                                              t = bottomup_1_0(q_0, t);
                                                              i_40 = t;
                                                              t = d_40;
                                                              t = bottomup_1_0(q_0, t);
                                                              m_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, m_40);
                                                              t = q_0(t);
                                                              l_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, l_40);
                                                              t = q_0(t);
                                                              j_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_40, j_40);
                                                              t = q_0(t);
                                                              h_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_40, h_40);
                                                              t = q_0(t);
                                                              f_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_40, f_40);
                                                              t = q_0(t);
                                                              LocalPopChoice(w_18);
                                                            }
                                                          else
                                                            {
                                                              t = v_18;
                                                              t = y_11;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = u_11;
                                                    {
                                                      ATerm x_18 = t;
                                                      int y_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,a_41 = NULL,b_41 = NULL,d_41 = NULL,e_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL;
                                                          t = y_11;
                                                          t = new_0_0(t);
                                                          u_40 = t;
                                                          t = bottomup_1_0(q_0, t);
                                                          i_41 = t;
                                                          t = (ATerm) ATempty;
                                                          t = q_0(t);
                                                          j_41 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(j_41), i_41);
                                                          t = q_0(t);
                                                          v_40 = t;
                                                          t = u_40;
                                                          t = bottomup_1_0(q_0, t);
                                                          h_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, h_41);
                                                          t = q_0(t);
                                                          g_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, g_41);
                                                          t = q_0(t);
                                                          x_40 = t;
                                                          t = x_11;
                                                          t = bottomup_1_0(q_0, t);
                                                          a_41 = t;
                                                          t = u_40;
                                                          t = bottomup_1_0(q_0, t);
                                                          e_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, e_41);
                                                          t = q_0(t);
                                                          d_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, d_41);
                                                          t = q_0(t);
                                                          b_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_41, b_41);
                                                          t = q_0(t);
                                                          y_40 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_40, y_40);
                                                          t = q_0(t);
                                                          w_40 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, v_40, w_40);
                                                          t = q_0(t);
                                                          LocalPopChoice(y_18);
                                                        }
                                                      else
                                                        {
                                                          t = x_18;
                                                          t = y_11;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    u_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm z_18 = t;
                                                      int a_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, u_11);
                                                          t = q_0(t);
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
                                                                ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL;
                                                                t = y_11;
                                                                t = new_0_0(t);
                                                                n_41 = t;
                                                                t = bottomup_1_0(q_0, t);
                                                                z_41 = t;
                                                                t = (ATerm) ATempty;
                                                                t = q_0(t);
                                                                a_42 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(a_42), z_41);
                                                                t = q_0(t);
                                                                o_41 = t;
                                                                t = n_41;
                                                                t = bottomup_1_0(q_0, t);
                                                                y_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, y_41);
                                                                t = q_0(t);
                                                                x_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, x_41);
                                                                t = q_0(t);
                                                                q_41 = t;
                                                                t = x_11;
                                                                t = bottomup_1_0(q_0, t);
                                                                t_41 = t;
                                                                t = n_41;
                                                                t = bottomup_1_0(q_0, t);
                                                                w_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, w_41);
                                                                t = q_0(t);
                                                                v_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, v_41);
                                                                t = q_0(t);
                                                                u_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, t_41, u_41);
                                                                t = q_0(t);
                                                                s_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, q_41, s_41);
                                                                t = q_0(t);
                                                                p_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, o_41, p_41);
                                                                t = q_0(t);
                                                                LocalPopChoice(c_19);
                                                              }
                                                            else
                                                              {
                                                                t = b_19;
                                                                t = y_11;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm e_19 = t;
                                                    int f_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
                                                        t = y_11;
                                                        t = new_0_0(t);
                                                        f_42 = t;
                                                        t = bottomup_1_0(q_0, t);
                                                        q_42 = t;
                                                        t = (ATerm) ATempty;
                                                        t = q_0(t);
                                                        r_42 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(r_42), q_42);
                                                        t = q_0(t);
                                                        g_42 = t;
                                                        t = f_42;
                                                        t = bottomup_1_0(q_0, t);
                                                        p_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, p_42);
                                                        t = q_0(t);
                                                        o_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, o_42);
                                                        t = q_0(t);
                                                        i_42 = t;
                                                        t = x_11;
                                                        t = bottomup_1_0(q_0, t);
                                                        k_42 = t;
                                                        t = f_42;
                                                        t = bottomup_1_0(q_0, t);
                                                        n_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, n_42);
                                                        t = q_0(t);
                                                        m_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, m_42);
                                                        t = q_0(t);
                                                        l_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, k_42, l_42);
                                                        t = q_0(t);
                                                        j_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, i_42, j_42);
                                                        t = q_0(t);
                                                        h_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, g_42, h_42);
                                                        t = q_0(t);
                                                        LocalPopChoice(f_19);
                                                      }
                                                    else
                                                      {
                                                        t = e_19;
                                                        t = y_11;
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
                                        x_11 = ATgetArgument(t, 0);
                                        t = x_11;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm g_19 = t;
                                            int h_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_p_5;
                                                t = q_0(t);
                                                LocalPopChoice(h_19);
                                              }
                                            else
                                              {
                                                t = g_19;
                                                t = y_11;
                                              }
                                          }
                                        else
                                          {
                                            t = y_11;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            x_11 = ATgetArgument(t, 0);
                                            t = x_11;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm i_19 = t;
                                                int j_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_u_5;
                                                    t = q_0(t);
                                                    LocalPopChoice(j_19);
                                                  }
                                                else
                                                  {
                                                    t = i_19;
                                                    t = y_11;
                                                  }
                                              }
                                            else
                                              {
                                                t = y_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                x_11 = ATgetArgument(t, 0);
                                                t = x_11;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm k_19 = t;
                                                    int m_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_u_5;
                                                        t = q_0(t);
                                                        LocalPopChoice(m_19);
                                                      }
                                                    else
                                                      {
                                                        t = k_19;
                                                        t = y_11;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = y_11;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm n_19 = t;
                                                int o_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm p_19 = ATgetArgument(t, 0);
                                                        w_11 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(o_19);
                                                    t = w_11;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm r_19 = t;
                                                        int s_19 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_u_5;
                                                            t = q_0(t);
                                                            LocalPopChoice(s_19);
                                                          }
                                                        else
                                                          {
                                                            t = r_19;
                                                            t = y_11;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = y_11;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = n_19;
                                                    {
                                                      ATerm t_19 = t;
                                                      int u_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm v_19 = ATgetArgument(t, 0);
                                                              w_11 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(u_19);
                                                          {
                                                            ATerm w_19 = t;
                                                            int x_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = w_11;
                                                                t = fetch_1_0(j_1, t);
                                                                t = term_u_5;
                                                                t = bottomup_1_0(q_0, t);
                                                                LocalPopChoice(x_19);
                                                              }
                                                            else
                                                              {
                                                                t = w_19;
                                                                t = y_11;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = t_19;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              x_11 = ATgetArgument(t, 0);
                                                              w_11 = ATgetArgument(t, 1);
                                                              t = w_11;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = x_11;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = w_11;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          u_11 = ATgetArgument(t, 0);
                                                                          v_11 = ATgetArgument(t, 1);
                                                                          t = x_11;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = x_11;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = x_11;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = w_11;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          u_11 = ATgetArgument(t, 0);
                                                                          v_11 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm y_19 = t;
                                                                            int a_20 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm d_44 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, v_11, w_11);
                                                                                t = q_0(t);
                                                                                d_44 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, u_11, d_44);
                                                                                t = q_0(t);
                                                                                LocalPopChoice(a_20);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = y_19;
                                                                                {
                                                                                  ATerm b_20 = t;
                                                                                  int c_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = w_11;
                                                                                      if((x_11 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(c_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = b_20;
                                                                                      t = y_11;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm e_20 = t;
                                                                          int f_20 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = w_11;
                                                                              if((x_11 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(f_20);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = e_20;
                                                                              t = y_11;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  x_11 = ATgetArgument(t, 0);
                                                                  w_11 = ATgetArgument(t, 1);
                                                                  s_10 = ATgetArgument(t, 2);
                                                                  t = s_10;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm g_20 = t;
                                                                      int i_20 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, w_11);
                                                                          t = q_0(t);
                                                                          LocalPopChoice(i_20);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = g_20;
                                                                          t = y_11;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = y_11;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      x_11 = ATgetArgument(t, 0);
                                                                      w_11 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm j_20 = t;
                                                                        int k_20 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, x_11, w_11);
                                                                            t = q_0(t);
                                                                            LocalPopChoice(k_20);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = j_20;
                                                                            t = y_11;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          x_11 = ATgetArgument(t, 0);
                                                                          t = x_11;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              u_11 = ATgetFirst((ATermList) t);
                                                                              v_11 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm l_20 = t;
                                                                                int n_20 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm s_44 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, v_11);
                                                                                    t = q_0(t);
                                                                                    s_44 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, u_11, s_44);
                                                                                    t = q_0(t);
                                                                                    LocalPopChoice(n_20);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_20;
                                                                                    t = y_11;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm o_20 = t;
                                                                                  int p_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_u_5;
                                                                                      t = q_0(t);
                                                                                      LocalPopChoice(p_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = o_20;
                                                                                      t = y_11;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = y_11;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              x_11 = ATgetArgument(t, 0);
                                                                              t = x_11;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  u_11 = ATgetFirst((ATermList) t);
                                                                                  v_11 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm q_20 = t;
                                                                                    int r_20 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm y_44 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, v_11);
                                                                                        t = q_0(t);
                                                                                        y_44 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, u_11, y_44);
                                                                                        t = q_0(t);
                                                                                        LocalPopChoice(r_20);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = q_20;
                                                                                        t = y_11;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm s_20 = t;
                                                                                      int t_20 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_u_5;
                                                                                          t = q_0(t);
                                                                                          LocalPopChoice(t_20);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = s_20;
                                                                                          t = y_11;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = y_11;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  x_11 = ATgetArgument(t, 0);
                                                                                  t = x_11;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      u_11 = ATgetFirst((ATermList) t);
                                                                                      v_11 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm u_20 = t;
                                                                                        int v_20 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm e_45 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, v_11);
                                                                                            t = q_0(t);
                                                                                            e_45 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, e_45);
                                                                                            t = q_0(t);
                                                                                            LocalPopChoice(v_20);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = u_20;
                                                                                            t = y_11;
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
                                                                                              t = term_p_5;
                                                                                              t = q_0(t);
                                                                                              LocalPopChoice(x_20);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = w_20;
                                                                                              t = y_11;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = y_11;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      x_11 = ATgetArgument(t, 0);
                                                                                      w_11 = ATgetArgument(t, 1);
                                                                                      s_10 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm y_20 = t;
                                                                                        int z_20 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,q_45 = NULL;
                                                                                            t = term_a_21;
                                                                                            t = bottomup_1_0(q_0, t);
                                                                                            m_45 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = q_0(t);
                                                                                            q_45 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(q_45), s_10);
                                                                                            t = q_0(t);
                                                                                            o_45 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(o_45), x_11);
                                                                                            t = q_0(t);
                                                                                            n_45 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, m_45, n_45);
                                                                                            t = q_0(t);
                                                                                            l_45 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, w_11, l_45);
                                                                                            t = q_0(t);
                                                                                            LocalPopChoice(z_20);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = y_20;
                                                                                            t = y_11;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          x_11 = ATgetArgument(t, 0);
                                                                                          w_11 = ATgetArgument(t, 1);
                                                                                          s_10 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm b_21 = t;
                                                                                            int c_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, w_11);
                                                                                                t = q_0(t);
                                                                                                w_45 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, s_10);
                                                                                                t = q_0(t);
                                                                                                z_45 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = q_0(t);
                                                                                                a_46 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(a_46), z_45);
                                                                                                t = q_0(t);
                                                                                                y_45 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(y_45), x_11);
                                                                                                t = q_0(t);
                                                                                                x_45 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(x_45), w_45);
                                                                                                t = q_0(t);
                                                                                                v_45 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, v_45);
                                                                                                t = q_0(t);
                                                                                                LocalPopChoice(c_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = b_21;
                                                                                                t = y_11;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              x_11 = ATgetArgument(t, 0);
                                                                                              w_11 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm e_21 = t;
                                                                                                int f_21 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm e_46 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, w_11);
                                                                                                    t = q_0(t);
                                                                                                    e_46 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, e_46);
                                                                                                    t = q_0(t);
                                                                                                    LocalPopChoice(f_21);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = e_21;
                                                                                                    t = y_11;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  x_11 = ATgetArgument(t, 0);
                                                                                                  w_11 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm g_21 = t;
                                                                                                    int h_21 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm i_46 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, x_11);
                                                                                                        t = q_0(t);
                                                                                                        i_46 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, i_46, w_11);
                                                                                                        t = q_0(t);
                                                                                                        LocalPopChoice(h_21);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = g_21;
                                                                                                        t = y_11;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      x_11 = ATgetArgument(t, 0);
                                                                                                      w_11 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm i_21 = t;
                                                                                                        int k_21 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm m_46 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, w_11);
                                                                                                            t = q_0(t);
                                                                                                            m_46 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, m_46, x_11);
                                                                                                            t = q_0(t);
                                                                                                            LocalPopChoice(k_21);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = i_21;
                                                                                                            t = y_11;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          x_11 = ATgetArgument(t, 0);
                                                                                                          w_11 = ATgetArgument(t, 1);
                                                                                                          t = w_11;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              s_11 = ATgetArgument(t, 0);
                                                                                                              t_11 = ATgetArgument(t, 1);
                                                                                                              t = x_11;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = w_11;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm l_21 = t;
                                                                                                                  int m_21 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm y_46 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, x_11, s_11);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      y_46 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, y_46, t_11);
                                                                                                                      t = bottomup_1_0(q_0, t);
                                                                                                                      LocalPopChoice(m_21);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = l_21;
                                                                                                                      t = y_11;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  s_11 = ATgetArgument(t, 0);
                                                                                                                  t_11 = ATgetArgument(t, 1);
                                                                                                                  o_11 = ATgetArgument(t, 2);
                                                                                                                  t = o_11;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = t_11;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = s_11;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              r_11 = ATgetArgument(t, 0);
                                                                                                                              t = x_11;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = w_11;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      u_11 = ATgetFirst((ATermList) t);
                                                                                                                                      v_11 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = v_11;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = u_11;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              q_11 = ATgetArgument(t, 0);
                                                                                                                                              k_11 = ATgetArgument(t, 1);
                                                                                                                                              w_10 = ATgetArgument(t, 2);
                                                                                                                                              f_11 = ATgetArgument(t, 3);
                                                                                                                                              t = w_10;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = k_11;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm n_21 = t;
                                                                                                                                                      int o_21 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = r_11;
                                                                                                                                                          if((q_11 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = f_11;
                                                                                                                                                          {
                                                                                                                                                            ATerm p_21 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm k_1 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm s_21 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(s_21, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((q_11 != ATgetArgument(s_21, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(s_21, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm t_21 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(t_21) != AT_LIST) || !(ATisEmpty(t_21))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm u_21 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(u_21) != AT_LIST) || !(ATisEmpty(u_21))))
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
                                                                                                                                                                t = p_21;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = f_11;
                                                                                                                                                          t = bottomup_1_0(q_0, t);
                                                                                                                                                          LocalPopChoice(o_21);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = n_21;
                                                                                                                                                          t = y_11;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = y_11;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = y_11;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = y_11;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = y_11;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = y_11;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = x_11;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = w_11;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = y_11;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = x_11;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = w_11;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = y_11;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = x_11;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = w_11;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = y_11;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = x_11;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = w_11;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = y_11;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              x_11 = ATgetArgument(t, 0);
                                                                                                              w_11 = ATgetArgument(t, 1);
                                                                                                              t = x_11;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = w_11;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = y_11;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = y_11;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  }
                                              }
                                          }
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
ATerm map_1_0 (ATerm p_121 (ATerm), ATerm t)
{
  static ATerm f_49 (ATerm t)
  {
    ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL;
    c_49 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_49;
      }
    else
      {
        ATerm e_3 = NULL,h_3 = NULL,i_3 = NULL,w_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_49 = ATgetFirst((ATermList) t);
            e_49 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_49);
        e_3 = t;
        t = d_49;
        t = p_121(t);
        h_3 = t;
        t = e_49;
        t = f_49(t);
        i_3 = t;
        t = (ATerm) ATinsert(CheckATermList(i_3), h_3);
        w_0 = t;
        t = SSLsetAnnotations(w_0, e_3);
      }
    return(t);
  }
  t = f_49(t);
  return(t);
}
static ATerm x_10 (ATerm i_43, ATerm j_43, ATerm t)
{
  ATerm h_49 = NULL;
  t = SSL_fputc(i_43, j_43);
  h_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_49);
  return(t);
}
static ATerm y_10 (ATerm n_48, ATerm o_48, ATerm t)
{
  ATerm i_49 = NULL;
  t = SSL_write_term_to_stream_text(n_48, o_48);
  i_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_49);
  return(t);
}
static ATerm a_11 (ATerm q_115 (ATerm), ATerm k_425, ATerm r_48, ATerm t)
{
  ATerm j_49 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_425, term_v_21);
  t = d_11(t);
  j_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_49, r_48);
  t = q_115(t);
  t = fclose_0_0(t);
  t = r_48;
  return(t);
}
static ATerm z_10 (ATerm j_48, ATerm k_48, ATerm t)
{
  ATerm k_49 = NULL;
  t = SSL_write_term_to_stream_baf(j_48, k_48);
  k_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_49);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_21 = ATgetArgument(t, 0);
      if(match_cons(w_21, sym_Stream_1))
        {
          n_49 = ATgetArgument(w_21, 0);
        }
      else
        _fail(t);
      o_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(n_49, o_49, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_21 = ATgetArgument(t, 0);
      if(match_cons(y_21, sym_Stream_1))
        {
          u_49 = ATgetArgument(y_21, 0);
        }
      else
        _fail(t);
      v_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10(u_49, v_49, t);
  p_49 = t;
  t = term_z_21;
  q_49 = t;
  t = p_49;
  if(match_cons(t, sym_Stream_1))
    {
      t_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_21, p_49);
  t = x_10(q_49, t_49, t);
  return(t);
}
ATerm output_1_0 (ATerm z_127 (ATerm), ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL;
  t = z_127(t);
  m_49 = t;
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_22;
        t = get_config_0_0(t);
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        t = term_d_22;
      }
  }
  l_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_49, m_49);
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_22;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, l_49, m_49);
        LocalPopChoice(f_22);
        if(match_cons(t, sym__2))
          {
            ATerm h_22 = ATgetArgument(t, 0);
            ATerm i_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_11(m_1, l_49, m_49, t);
      }
    else
      {
        t = e_22;
        if(match_cons(t, sym__2))
          {
            ATerm k_22 = ATgetArgument(t, 0);
            ATerm l_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_11(n_1, l_49, m_49, t);
      }
  }
  return(t);
}
static ATerm k_50 (ATerm d_50, ATerm t)
{
  t = SSL_fclose(d_50);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL;
  i_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_50 = ATgetArgument(t, 0);
      {
        ATerm m_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_50);
            LocalPopChoice(o_22);
          }
        else
          {
            t = m_22;
            t = k_50(i_50, t);
          }
      }
    }
  else
    {
      t = k_50(i_50, t);
    }
  return(t);
}
static ATerm b_11 (ATerm p_48, ATerm t)
{
  t = SSL_read_term_from_stream(p_48);
  return(t);
}
static ATerm c_11 (ATerm k_43, ATerm l_43, ATerm t)
{
  ATerm l_50 = NULL;
  t = SSL_fopen(k_43, l_43);
  l_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_50);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_50 = NULL;
  t = SSL_stdin_stream();
  m_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_50);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_50 = NULL;
  t = SSL_stdout_stream();
  n_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_50);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_50 = NULL;
  t = SSL_stderr_stream();
  o_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_50);
  return(t);
}
static ATerm x_51 (ATerm u_50, ATerm t)
{
  ATerm v_50 = NULL;
  t = SSL_explode_term(u_50);
  if(match_cons(t, sym__2))
    {
      ATerm p_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_22 = ATgetArgument(t, 1);
        if(((ATgetType(q_22) == AT_LIST) && !(ATisEmpty(q_22))))
          {
            v_50 = ATgetFirst((ATermList) q_22);
            {
              ATerm r_22 = (ATerm) ATgetNext((ATermList) q_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_50;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_50;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_50;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_50;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm y_51 (ATerm z_50, ATerm a_51, ATerm b_51, ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL,h_51 = NULL,a_1 = NULL;
  t = SSLgetAnnotations(b_51);
  e_51 = t;
  t = z_50;
  if(match_cons(t, sym_Path_1))
    {
      h_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_51, a_51);
  a_1 = t;
  t = SSLsetAnnotations(a_1, e_51);
  if(match_cons(t, sym__2))
    {
      c_51 = ATgetArgument(t, 0);
      d_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_11(c_51, d_51, t);
  return(t);
}
static ATerm z_51 (ATerm j_51, ATerm k_51, ATerm l_51, ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL,p_51 = NULL,s_51 = NULL,c_1 = NULL;
  t = SSLgetAnnotations(l_51);
  p_51 = t;
  t = SSL_is_string(j_51);
  s_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_51, k_51);
  c_1 = t;
  t = SSLsetAnnotations(c_1, p_51);
  if(match_cons(t, sym__2))
    {
      m_51 = ATgetArgument(t, 0);
      n_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_11(m_51, n_51, t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL;
  u_51 = t;
  if(match_cons(t, sym__2))
    {
      v_51 = ATgetArgument(t, 0);
      w_51 = ATgetArgument(t, 1);
      {
        ATerm t_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_51(u_51, t);
            LocalPopChoice(u_22);
          }
        else
          {
            t = t_22;
            {
              ATerm v_22 = t;
              int w_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_51(v_51, w_51, u_51, t);
                  LocalPopChoice(w_22);
                }
              else
                {
                  t = v_22;
                  t = z_51(v_51, w_51, u_51, t);
                }
            }
          }
      }
    }
  else
    {
      t = x_51(u_51, t);
    }
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_x_22;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL;
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_52 = NULL;
      d_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_52, term_a_23);
      t = d_11(t);
      LocalPopChoice(z_22);
    }
  else
    {
      t = y_22;
      t = debug_1_0(q_1, t);
      _fail(t);
    }
  b_52 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(c_52, t);
  a_52 = t;
  t = b_52;
  t = fclose_0_0(t);
  t = a_52;
  return(t);
}
ATerm input_1_0 (ATerm a_128 (ATerm), ATerm t)
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_23;
      t = get_config_0_0(t);
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
      t = term_f_23;
    }
  t = ReadFromFile_0_0(t);
  t = a_128(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL,l_52 = NULL,m_52 = NULL;
  f_52 = t;
  t = term_g_23;
  t = whoami_0_0(t);
  g_52 = t;
  t = term_h_23;
  l_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_23), g_52), term_i_23);
  m_52 = t;
  t = SSL_printnl(l_52, m_52);
  t = term_l_23;
  h_52 = t;
  t = SSL_exit(h_52);
  t = f_52;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm o_52 = NULL;
  o_52 = t;
  if(match_string(t, "-k"))
    {
      t = o_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_52;
    }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL;
  p_52 = t;
  t = SSL_string_to_int(p_52);
  q_52 = t;
  t = term_m_23;
  r_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_23, q_52);
  t = l_11(r_52, q_52, t);
  t = p_52;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_n_23;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_1, s_1, t_1, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm t_52 = NULL;
  t_52 = t;
  if(match_string(t, "-S"))
    {
      t = t_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_52;
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL;
  t = term_p_23;
  u_52 = t;
  t = term_q_23;
  v_52 = t;
  t = term_r_23;
  t = l_11(u_52, v_52, t);
  t = term_s_23;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_t_23;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL,z_52 = NULL;
  w_52 = t;
  t = SSL_string_to_int(w_52);
  x_52 = t;
  t = term_p_23;
  z_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_23, x_52);
  t = l_11(z_52, x_52, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_52);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_u_23;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm a_53 = NULL,c_53 = NULL;
  t = term_v_23;
  a_53 = t;
  t = term_g_23;
  c_53 = t;
  t = term_w_23;
  t = l_11(a_53, c_53, t);
  t = term_y_23;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_z_23;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_1, x_1, b_2, t);
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
            t = ArgOption_3_0(c_2, d_2, f_2, t);
            LocalPopChoice(d_24);
          }
        else
          {
            t = c_24;
            t = Option_3_0(p_2, q_2, r_2, t);
          }
      }
    }
  return(t);
}
static ATerm l_11 (ATerm c_47, ATerm d_47, ATerm t)
{
  ATerm d_53 = NULL;
  t = term_f_24;
  d_53 = t;
  t = SSL_table_put(d_53, c_47, d_47);
  t = (ATerm) ATmakeAppl(sym__3, term_f_24, c_47, d_47);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm h_53 = NULL,i_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL;
      t = term_g_23;
      t = i_0(t);
      j_53 = t;
      t = term_g_24;
      k_53 = t;
      t = term_h_24;
      l_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_24, term_h_24, j_53);
      t = j_11(k_53, l_53, j_53, t);
      _fail(t);
    }
  else
    {
      ATerm o_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_53 = ATgetFirst((ATermList) t);
          i_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_53;
      t = d_0(t);
      t = term_g_23;
      t = g_0(t);
      o_53 = t;
      t = (ATerm) ATinsert(CheckATermList(i_53), o_53);
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm q_53 = NULL;
  q_53 = t;
  if(match_string(t, "-o"))
    {
      t = q_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_53;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL;
  r_53 = t;
  t = term_c_22;
  s_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_22, r_53);
  t = l_11(s_53, r_53, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_53);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_i_24;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_2, t_2, u_2, t);
  return(t);
}
static ATerm j_11 (ATerm j_52, ATerm k_52, ATerm i_52, ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL;
  u_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_52, k_52);
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_24 = ATgetArgument(t, 0);
            ATerm m_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_52, k_52);
        t = i_11(j_52, k_52, t);
        LocalPopChoice(k_24);
      }
    else
      {
        t = j_24;
        t = (ATerm) ATempty;
      }
  }
  v_53 = t;
  t = (ATerm) ATinsert(CheckATermList(v_53), i_52);
  w_53 = t;
  t = SSL_table_put(j_52, k_52, w_53);
  t = u_53;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL;
      t = term_g_23;
      t = p_0(t);
      j_54 = t;
      t = term_g_24;
      k_54 = t;
      t = term_h_24;
      l_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_24, term_h_24, j_54);
      t = j_11(k_54, l_54, j_54, t);
      _fail(t);
    }
  else
    {
      ATerm p_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_54 = ATgetFirst((ATermList) t);
          g_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_54;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_54 = ATgetFirst((ATermList) t);
          i_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_54;
      t = n_0(t);
      t = h_54;
      t = o_0(t);
      p_54 = t;
      t = (ATerm) ATinsert(CheckATermList(i_54), p_54);
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm r_54 = NULL;
  r_54 = t;
  if(match_string(t, "-i"))
    {
      t = r_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_54;
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL;
  s_54 = t;
  t = term_e_23;
  t_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_23, s_54);
  t = l_11(t_54, s_54, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_54);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_n_24;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_2, w_2, x_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_23;
  t = whoami_0_0(t);
  u_54 = t;
  t = term_h_23;
  w_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_24), u_54);
  x_54 = t;
  t = SSL_printnl(w_54, x_54);
  t = term_l_23;
  v_54 = t;
  t = SSL_exit(v_54);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_24;
  t = get_config_0_0(t);
  return(t);
}
static ATerm e_11 (ATerm r_49, ATerm s_49, ATerm t)
{
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(r_49, s_49);
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
      t = SSL_addr(r_49, s_49);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_120 (ATerm), ATerm g_120 (ATerm), ATerm t)
{
  ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL;
  z_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_54;
      t = f_120(t);
    }
  else
    {
      ATerm e_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_55 = ATgetFirst((ATermList) t);
          b_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_55;
      t = foldr_2_0(f_120, g_120, t);
      e_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_55, e_55);
      t = g_120(t);
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
  t = term_q_23;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL;
  if(match_cons(t, sym__2))
    {
      x_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(x_3, y_3, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_55 = NULL,t_3 = NULL,u_3 = NULL;
  t = times_0_0(t);
  u_3 = t;
  t = SSL_explode_term(u_3);
  if(match_cons(t, sym__2))
    {
      ATerm s_24 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_3;
  t = foldr_2_0(y_2, z_2, t);
  i_55 = t;
  t = SSL_TicksToSeconds(i_55);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL;
  v_55 = t;
  if(match_cons(t, sym__2))
    {
      w_55 = ATgetArgument(t, 0);
      x_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_55;
        if((w_55 != t))
          {
            _fail(t);
          }
        t = v_55;
        LocalPopChoice(v_24);
      }
    else
      {
        t = t_24;
        t = (ATerm) ATmakeAppl(sym__2, w_55, x_55);
        {
          ATerm w_24 = t;
          int x_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_55, x_55);
              LocalPopChoice(x_24);
            }
          else
            {
              t = w_24;
              t = SSL_gtr(w_55, x_55);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_55, x_55);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_113 (ATerm), ATerm t)
{
  ATerm b_56 = NULL;
  b_56 = t;
  {
    ATerm y_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_56 = NULL;
        t = term_p_23;
        t = get_config_0_0(t);
        d_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_56, term_l_23);
        t = geq_0_0(t);
        t = b_56;
        t = n_113(t);
        LocalPopChoice(z_24);
      }
    else
      {
        t = y_24;
        t = b_56;
      }
  }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL,i_56 = NULL,j_56 = NULL;
  t = run_time_0_0(t);
  f_56 = t;
  t = term_g_23;
  t = whoami_0_0(t);
  g_56 = t;
  t = term_h_23;
  i_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_25), f_56), term_a_25), g_56);
  j_56 = t;
  t = SSL_printnl(i_56, j_56);
  t = (ATerm) ATmakeAppl(sym__2, term_h_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_25), f_56), term_a_25), g_56));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_23;
  k_56 = t;
  t = SSL_exit(k_56);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL;
  t_56 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_56;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_56 = ATgetArgument(t, 0);
          {
            ATerm k_4 = NULL,w_3 = NULL;
            t = SSLgetAnnotations(t_56);
            k_4 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_56);
            w_3 = t;
            t = SSLsetAnnotations(w_3, k_4);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_56;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_127 (ATerm), ATerm t)
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_25;
      t = get_config_0_0(t);
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      t = fetch_1_0(b_3, t);
    }
  t = q_127(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_56 = ATgetFirst((ATermList) t);
      x_56 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_57 = NULL,c_57 = NULL;
        static ATerm c_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_57)), not_null(c_57));
          return(t);
        }
        t = x_56;
        t = l_0(t);
        if(((b_57 != NULL) && (b_57 != t)))
          _fail(t);
        else
          b_57 = t;
        t = w_56;
        t = k_0(t);
        if(((c_57 != NULL) && (c_57 != t)))
          _fail(t);
        else
          c_57 = t;
        t = x_56;
        t = reverse_acc_2_0(k_0, c_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_23;
      t = l_0(t);
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL,t_6 = NULL;
  n_57 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_57);
  l_57 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_57);
  t_6 = t;
  t = SSLsetAnnotations(t_6, l_57);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm p_57 = NULL;
  p_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_57), term_i_25);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL;
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_24;
      t = get_config_0_0(t);
      LocalPopChoice(l_25);
    }
  else
    {
      t = k_25;
      t = fetch_1_0(d_3, t);
    }
  t = term_n_25;
  t = echo_0_0(t);
  t = term_g_24;
  j_57 = t;
  t = term_h_24;
  k_57 = t;
  t = term_p_25;
  t = i_11(j_57, k_57, t);
  t = reverse_acc_2_0(_id, f_3, t);
  t = map_1_0(g_3, t);
  return(t);
}
ATerm fetch_1_0 (ATerm z_121 (ATerm), ATerm t)
{
  static ATerm o_58 (ATerm t)
  {
    ATerm l_58 = NULL,m_58 = NULL,n_58 = NULL;
    l_58 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_58 = ATgetFirst((ATermList) t);
        n_58 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_25 = t;
      int r_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_4 = NULL,v_4 = NULL,v_6 = NULL;
          t = SSLgetAnnotations(l_58);
          s_4 = t;
          t = m_58;
          t = z_121(t);
          v_4 = t;
          t = (ATerm) ATinsert(CheckATermList(n_58), v_4);
          v_6 = t;
          t = SSLsetAnnotations(v_6, s_4);
          LocalPopChoice(r_25);
        }
      else
        {
          t = q_25;
          {
            ATerm d_5 = NULL,g_5 = NULL,w_6 = NULL;
            t = SSLgetAnnotations(l_58);
            d_5 = t;
            t = n_58;
            t = o_58(t);
            g_5 = t;
            t = (ATerm) ATinsert(CheckATermList(g_5), m_58);
            w_6 = t;
            t = SSLsetAnnotations(w_6, d_5);
          }
        }
    }
    return(t);
  }
  t = o_58(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL;
  s_58 = t;
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_58;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_25 = ATgetFirst((ATermList) t);
                ATerm y_25 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_58;
          }
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        t = (ATerm) ATinsert(ATempty, s_58);
      }
  }
  t_58 = t;
  t = term_d_22;
  u_58 = t;
  t = SSL_printnl(u_58, t_58);
  t = s_58;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_24;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm h_11 (ATerm c_42, ATerm d_42, ATerm t)
{
  t = SSL_strcat(c_42, d_42);
  return(t);
}
ATerm debug_1_0 (ATerm o_115 (ATerm), ATerm t)
{
  ATerm y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL;
  y_58 = t;
  t = o_115(t);
  z_58 = t;
  t = term_h_23;
  a_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_58), z_58);
  b_59 = t;
  t = SSL_printnl(a_59, b_59);
  t = y_58;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_59 = NULL;
      i_59 = t;
      t = SSL_is_string(i_59);
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
            t = map_1_0(j_3, t);
            LocalPopChoice(f_26);
          }
        else
          {
            t = e_26;
            {
              ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL;
              o_59 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_59 = ATgetArgument(t, 0);
                  t = p_59;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_59 = ATgetArgument(t, 0);
                      t = p_59;
                      {
                        ATerm g_26 = t;
                        int h_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(h_26);
                          }
                        else
                          {
                            t = g_26;
                            t = debug_1_0(k_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm u_59 = NULL,v_59 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_59 = ATgetArgument(t, 0);
                          q_59 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_59;
                      t = eval_config_0_0(t);
                      u_59 = t;
                      t = q_59;
                      t = eval_config_0_0(t);
                      v_59 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_59, v_59);
                      t = h_11(u_59, v_59, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_11 (ATerm a_54, ATerm b_54, ATerm t)
{
  t = SSL_table_get(a_54, b_54);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm z_59 = NULL,a_60 = NULL;
  z_59 = t;
  t = term_f_24;
  a_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_24, z_59);
  t = i_11(a_60, z_59, t);
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_60 = NULL,c_60 = NULL;
        t = eval_config_0_0(t);
        b_60 = t;
        t = term_f_24;
        c_60 = t;
        t = SSL_table_put(c_60, z_59, b_60);
        t = b_60;
        LocalPopChoice(j_26);
      }
    else
      {
        t = i_26;
      }
  }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm f_60 = NULL,g_60 = NULL;
  t = term_l_26;
  f_60 = t;
  t = term_g_23;
  g_60 = t;
  t = term_m_26;
  t = l_11(f_60, g_60, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_n_26;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL;
  t = term_l_26;
  j_60 = t;
  t = term_g_23;
  k_60 = t;
  t = term_m_26;
  t = l_11(j_60, k_60, t);
  t = term_o_26;
  h_60 = t;
  t = term_g_23;
  i_60 = t;
  t = term_p_26;
  t = l_11(h_60, i_60, t);
  t = term_q_26;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_r_26;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_3, m_3, n_3, t);
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      t = Option_3_0(o_3, p_3, q_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm t)
{
  ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,z_6 = NULL;
  q_60 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_60 = ATgetFirst((ATermList) t);
      n_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_60);
  l_60 = t;
  t = m_60;
  t = q_86(t);
  o_60 = t;
  t = n_60;
  t = r_86(t);
  p_60 = t;
  t = (ATerm) ATinsert(CheckATermList(p_60), o_60);
  z_6 = t;
  t = SSLsetAnnotations(z_6, l_60);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_129 (ATerm), ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,a_61 = NULL,b_61 = NULL,b_7 = NULL;
  v_60 = t;
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_26;
        t = t_129(t);
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
      }
  }
  t = v_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_60 = ATgetFirst((ATermList) t);
      y_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_60);
  w_60 = t;
  t = term_p_24;
  b_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_24, x_60);
  t = l_11(b_61, x_60, t);
  t = y_60;
  {
    static ATerm l_61 (ATerm t)
    {
      ATerm x_26 = t;
      int y_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_26 = t;
          int b_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_61 = NULL;
              e_61 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_61;
              LocalPopChoice(b_27);
            }
          else
            {
              t = z_26;
              t = t_129(t);
              t = Cons_2_0(_id, l_61, t);
            }
          LocalPopChoice(y_26);
        }
      else
        {
          t = x_26;
          {
            ATerm h_61 = NULL,i_61 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_61 = ATgetFirst((ATermList) t);
                i_61 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_61), (ATerm) ATmakeAppl(sym_Undefined_1, h_61));
          }
        }
      return(t);
    }
    t = l_61(t);
  }
  a_61 = t;
  t = (ATerm) ATinsert(CheckATermList(a_61), (ATerm) ATmakeAppl(sym_Program_1, x_60));
  b_7 = t;
  t = SSLsetAnnotations(b_7, w_60);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm x_61 = NULL;
  x_61 = t;
  if(match_string(t, "--help"))
    {
      t = x_61;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_61;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_61;
        }
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm y_61 = NULL,z_61 = NULL;
  t = term_g_25;
  y_61 = t;
  t = term_g_23;
  z_61 = t;
  t = term_c_27;
  t = l_11(y_61, z_61, t);
  t = term_d_27;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_e_27;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_129 (ATerm), ATerm t)
{
  ATerm q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL;
  s_61 = t;
  t = term_g_24;
  u_61 = t;
  t = term_h_24;
  v_61 = t;
  t = (ATerm) ATempty;
  w_61 = t;
  t = SSL_table_put(u_61, v_61, w_61);
  t = s_61;
  {
    static ATerm r_3 (ATerm t)
    {
      ATerm f_27 = t;
      int g_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_129(t);
          LocalPopChoice(g_27);
        }
      else
        {
          t = f_27;
          {
            ATerm h_27 = t;
            int i_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_3, v_3, z_3, t);
                LocalPopChoice(i_27);
              }
            else
              {
                t = h_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_3, t);
  }
  {
    ATerm j_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_62 = NULL;
        g_62 = t;
        {
          ATerm m_27 = t;
          int n_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_5 = NULL;
              t = g_62;
              {
                ATerm o_27 = t;
                int p_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_g_25;
                    t = get_config_0_0(t);
                    LocalPopChoice(p_27);
                  }
                else
                  {
                    t = o_27;
                    t = fetch_1_0(a_4, t);
                  }
              }
              t = g_62;
              t = default_system_usage_0_0(t);
              t = term_q_23;
              v_5 = t;
              t = SSL_exit(v_5);
              LocalPopChoice(n_27);
            }
          else
            {
              t = m_27;
              {
                ATerm z_5 = NULL;
                t = term_l_26;
                t = get_config_0_0(t);
                t = g_62;
                t = default_system_about_0_0(t);
                t = term_q_23;
                z_5 = t;
                t = SSL_exit(z_5);
              }
            }
        }
        LocalPopChoice(k_27);
      }
    else
      {
        t = j_27;
        {
          ATerm q_27 = t;
          int r_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL;
              static ATerm b_4 (ATerm t)
              {
                ATerm k_62 = NULL,l_62 = NULL,m_62 = NULL,d_7 = NULL;
                m_62 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    l_62 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_62);
                k_62 = t;
                t = l_62;
                if(((q_61 != NULL) && (q_61 != t)))
                  _fail(t);
                else
                  q_61 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_62);
                d_7 = t;
                t = SSLsetAnnotations(d_7, k_62);
                return(t);
              }
              t = fetch_1_0(b_4, t);
              t = term_h_23;
              i_62 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_61)), term_s_27);
              j_62 = t;
              t = SSL_printnl(i_62, j_62);
              t = (ATerm) ATmakeAppl(sym__2, term_h_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_61)), term_s_27));
              t = default_system_usage_0_0(t);
              t = term_l_23;
              h_62 = t;
              t = SSL_exit(h_62);
              LocalPopChoice(r_27);
            }
          else
            {
              t = q_27;
            }
        }
      }
  }
  r_61 = t;
  t = term_g_24;
  t_61 = t;
  t = SSL_table_destroy(t_61);
  t = r_61;
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_127 (ATerm), ATerm t_127 (ATerm), ATerm u_127 (ATerm), ATerm v_127 (ATerm), ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL;
  t = parse_options_1_0(s_127, t);
  r_62 = t;
  t = term_t_27;
  u_62 = t;
  t = SSL_table_create(u_62);
  t = term_t_27;
  s_62 = t;
  t = term_u_27;
  t_62 = t;
  t = SSL_table_put(s_62, t_62, r_62);
  t = r_62;
  t = u_127(t);
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_127, t);
        LocalPopChoice(w_27);
      }
    else
      {
        t = v_27;
        {
          ATerm x_27 = t;
          int y_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_127(t);
              t = report_success_0_0(t);
              LocalPopChoice(y_27);
            }
          else
            {
              t = x_27;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm a_28 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(b_28);
    }
  else
    {
      t = a_28;
      {
        ATerm c_28 = t;
        int d_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(d_28);
          }
        else
          {
            t = c_28;
            {
              ATerm f_28 = t;
              int g_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(e_4, f_4, g_4, t);
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
                        t = verbose_option_0_0(t);
                        LocalPopChoice(i_28);
                      }
                    else
                      {
                        t = h_28;
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
static ATerm d_4 (ATerm t)
{
  t = input_1_0(h_4, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm z_62 = NULL,a_63 = NULL;
  t = term_g_22;
  z_62 = t;
  t = term_g_23;
  a_63 = t;
  t = term_j_28;
  t = l_11(z_62, a_63, t);
  t = term_l_28;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_m_28;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = output_1_0(i_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,j_7 = NULL,i_7 = NULL,h_7 = NULL,g_7 = NULL;
  v_63 = t;
  if(match_cons(t, sym_Specification_1))
    {
      d_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_63);
  c_63 = t;
  t = d_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_63 = ATgetFirst((ATermList) t);
      g_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_63);
  e_63 = t;
  t = g_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_63 = ATgetFirst((ATermList) t);
      k_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_63);
  i_63 = t;
  t = j_63;
  if(match_cons(t, sym_Strategies_1))
    {
      s_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_63);
  r_63 = t;
  t = s_63;
  t = map_1_0(j_4, t);
  t_63 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, t_63);
  g_7 = t;
  t = SSLsetAnnotations(g_7, r_63);
  u_63 = t;
  t = k_63;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_63), u_63);
  h_7 = t;
  t = SSLsetAnnotations(h_7, i_63);
  l_63 = t;
  t = (ATerm) ATinsert(CheckATermList(l_63), f_63);
  i_7 = t;
  t = SSLsetAnnotations(i_7, e_63);
  h_63 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, h_63);
  j_7 = t;
  t = SSLsetAnnotations(j_7, c_63);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL;
  n_64 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      j_64 = ATgetArgument(t, 0);
      k_64 = ATgetArgument(t, 1);
      l_64 = ATgetArgument(t, 2);
      m_64 = ATgetArgument(t, 3);
      {
        ATerm n_28 = t;
        int o_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_6 = NULL,l_6 = NULL,f_7 = NULL;
            t = SSLgetAnnotations(n_64);
            g_6 = t;
            t = m_64;
            t = simplify_0_0(t);
            l_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, j_64, k_64, l_64, l_6);
            f_7 = t;
            t = SSLsetAnnotations(f_7, g_6);
            LocalPopChoice(o_28);
          }
        else
          {
            t = n_28;
            t = n_64;
          }
      }
    }
  else
    {
      t = n_64;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(c_4, default_usage_0_0, _id, d_4, t);
  return(t);
}
