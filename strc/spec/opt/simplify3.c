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
ATerm term_t_28;
ATerm term_s_28;
ATerm term_q_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_d_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_h_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_q_25;
ATerm term_o_25;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_p_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_h_23;
ATerm term_d_23;
ATerm term_n_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_f_22;
ATerm term_c_22;
ATerm term_h_21;
ATerm term_z_5;
ATerm term_t_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym__2, term_v_23, term_w_23);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_23);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym__2, term_c_24, term_n_23);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym__2, term_m_24, term_n_24);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym__2, term_r_26, term_n_23);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym__2, term_u_26, term_n_23);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym__2, term_t_25, term_n_23);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym__2, term_n_22, term_n_23);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm alltd_1_0 (ATerm o_98 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm x_96 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm a_98 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm k_117 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm f_2 (ATerm v_1, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm w_96 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm t);
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
ATerm map_1_0 (ATerm u_116 (ATerm), ATerm t);
static ATerm y_10 (ATerm e_43, ATerm f_43, ATerm t);
static ATerm z_10 (ATerm j_48, ATerm k_48, ATerm t);
static ATerm b_11 (ATerm a_111 (ATerm), ATerm r_419, ATerm n_48, ATerm t);
static ATerm a_11 (ATerm f_48, ATerm g_48, ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm output_1_0 (ATerm e_123 (ATerm), ATerm t);
static ATerm n_50 (ATerm g_50, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm c_11 (ATerm l_48, ATerm t);
static ATerm d_11 (ATerm g_43, ATerm h_43, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm d_52 (ATerm y_50, ATerm t);
static ATerm e_52 (ATerm c_51, ATerm d_51, ATerm e_51, ATerm t);
static ATerm f_52 (ATerm p_51, ATerm q_51, ATerm r_51, ATerm t);
static ATerm e_11 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm f_123 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm m_11 (ATerm y_46, ATerm z_46, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm k_11 (ATerm j_51, ATerm k_51, ATerm i_51, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm f_11 (ATerm n_49, ATerm o_49, ATerm t);
ATerm foldr_2_0 (ATerm k_115 (ATerm), ATerm l_115 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_108 (ATerm), ATerm t);
static ATerm b_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm need_help_1_0 (ATerm v_122 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm e_117 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm i_11 (ATerm x_41, ATerm y_41, ATerm t);
ATerm debug_1_0 (ATerm y_110 (ATerm), ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm j_11 (ATerm a_53, ATerm b_53, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm b_82 (ATerm), ATerm c_82 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm y_124 (ATerm), ATerm t);
static ATerm t_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm parse_options_1_0 (ATerm x_124 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm x_122 (ATerm), ATerm y_122 (ATerm), ATerm z_122 (ATerm), ATerm a_123 (ATerm), ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm alltd_1_0 (ATerm o_98 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    ATerm q_0 = t;
    int n_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_98(t);
        LocalPopChoice(n_4);
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
ATerm bottomup_1_0 (ATerm x_96 (ATerm), ATerm t)
{
  static ATerm b_0 (ATerm t)
  {
    t = bottomup_1_0(x_96, t);
    return(t);
  }
  t = SRTS_all(b_0, t);
  t = x_96(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm a_98 (ATerm), ATerm t)
{
  static ATerm o_2 (ATerm t)
  {
    ATerm o_4 = t;
    int p_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_98(t);
        LocalPopChoice(p_4);
      }
    else
      {
        t = o_4;
        t = SRTS_one(o_2, t);
      }
    return(t);
  }
  t = o_2(t);
  return(t);
}
ATerm at_end_1_0 (ATerm k_117 (ATerm), ATerm t)
{
  static ATerm p_1 (ATerm t)
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
          t = p_1(t);
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
        t = k_117(t);
      }
    return(t);
  }
  t = p_1(t);
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
static ATerm f_2 (ATerm v_1, ATerm t)
{
  ATerm w_1 = NULL;
  t = SSL_explode_term(v_1);
  if(match_cons(t, sym__2))
    {
      ATerm q_4 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_4) != ATmakeSymbol("", 0, ATtrue)))
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
        ATerm r_4 = t;
        int s_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_0 (ATerm t)
            {
              t = a_2;
              return(t);
            }
            t = z_1;
            t = at_end_1_0(o_0, t);
            LocalPopChoice(s_4);
          }
        else
          {
            t = r_4;
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
ATerm topdown_1_0 (ATerm w_96 (ATerm), ATerm t)
{
  static ATerm p_0 (ATerm t)
  {
    t = topdown_1_0(w_96, t);
    return(t);
  }
  t = w_96(t);
  t = SRTS_all(p_0, t);
  return(t);
}
ATerm genzip_4_0 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm t)
{
  static ATerm n_2 (ATerm t)
  {
    ATerm u_4 = t;
    int v_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_101(t);
        LocalPopChoice(v_4);
      }
    else
      {
        t = u_4;
        {
          ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,v_0 = NULL;
          t = j_101(t);
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
          t = l_101(t);
          k_2 = t;
          t = j_2;
          t = n_2(t);
          l_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_2, l_2);
          v_0 = t;
          t = SSLsetAnnotations(v_0, h_2);
          t = k_101(t);
        }
      }
    return(t);
  }
  t = n_2(t);
  return(t);
}
static ATerm u_0 (ATerm t)
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
static ATerm w_0 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_4 = ATgetArgument(t, 0);
      if(((ATgetType(z_4) == AT_LIST) && !(ATisEmpty(z_4))))
        {
          y_17 = ATgetFirst((ATermList) z_4);
          z_17 = (ATerm) ATgetNext((ATermList) z_4);
        }
      else
        _fail(t);
      {
        ATerm a_5 = ATgetArgument(t, 1);
        if(((ATgetType(a_5) == AT_LIST) && !(ATisEmpty(a_5))))
          {
            a_18 = ATgetFirst((ATermList) a_5);
            b_18 = (ATerm) ATgetNext((ATermList) a_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_17, a_18), (ATerm) ATmakeAppl(sym__2, z_17, b_18));
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL;
  if(match_cons(t, sym__2))
    {
      h_18 = ATgetArgument(t, 0);
      i_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_18), h_18);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm j_18 = NULL,m_18 = NULL;
  if(match_cons(t, sym__2))
    {
      j_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_18), (ATerm) ATmakeAppl(sym_Match_1, m_18));
  return(t);
}
static ATerm a_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_5 = ATgetArgument(t, 0);
      if(((ATgetType(b_5) != AT_LIST) || !(ATisEmpty(b_5))))
        _fail(t);
      {
        ATerm c_5 = ATgetArgument(t, 1);
        if(((ATgetType(c_5) != AT_LIST) || !(ATisEmpty(c_5))))
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
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,h_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_5 = ATgetArgument(t, 0);
      if(((ATgetType(d_5) == AT_LIST) && !(ATisEmpty(d_5))))
        {
          b_25 = ATgetFirst((ATermList) d_5);
          c_25 = (ATerm) ATgetNext((ATermList) d_5);
        }
      else
        _fail(t);
      {
        ATerm f_5 = ATgetArgument(t, 1);
        if(((ATgetType(f_5) == AT_LIST) && !(ATisEmpty(f_5))))
          {
            d_25 = ATgetFirst((ATermList) f_5);
            h_25 = (ATerm) ATgetNext((ATermList) f_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_25, d_25), (ATerm) ATmakeAppl(sym__2, c_25, h_25));
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL;
  if(match_cons(t, sym__2))
    {
      i_25 = ATgetArgument(t, 0);
      j_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_25), i_25);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm n_25 = NULL,p_25 = NULL;
  if(match_cons(t, sym__2))
    {
      n_25 = ATgetArgument(t, 0);
      p_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_25), (ATerm) ATmakeAppl(sym_Match_1, p_25));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm g_5 = t;
  int i_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm j_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(i_5);
      {
        ATerm d_36 = NULL,e_36 = NULL;
        d_36 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm k_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        e_36 = t;
        t = SSLgetAnnotations(d_36);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm l_5 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) l_5) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm m_5 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(m_5) != AT_LIST) || !(ATisEmpty(m_5))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = e_36;
      }
    }
  else
    {
      t = g_5;
      {
        ATerm n_5 = t;
        int o_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm p_5 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) p_5) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm q_5 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(o_5);
            _fail(t);
          }
        else
          {
            t = n_5;
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
    ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,g_11 = NULL,h_11 = NULL,l_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
    z_11 = t;
    if(match_cons(t, sym_Test_1))
      {
        y_11 = ATgetArgument(t, 0);
        t = y_11;
        if(match_cons(t, sym_Id_0))
          {
            ATerm r_5 = t;
            int s_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_t_5;
                t = r_0(t);
                LocalPopChoice(s_5);
              }
            else
              {
                t = r_5;
                {
                  ATerm u_5 = t;
                  int v_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL;
                      t = z_11;
                      t = new_0_0(t);
                      b_12 = t;
                      t = bottomup_1_0(r_0, t);
                      m_12 = t;
                      t = (ATerm) ATempty;
                      t = r_0(t);
                      n_12 = t;
                      t = (ATerm) ATinsert(CheckATermList(n_12), m_12);
                      t = r_0(t);
                      c_12 = t;
                      t = b_12;
                      t = bottomup_1_0(r_0, t);
                      l_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, l_12);
                      t = r_0(t);
                      k_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, k_12);
                      t = r_0(t);
                      e_12 = t;
                      t = y_11;
                      t = bottomup_1_0(r_0, t);
                      g_12 = t;
                      t = b_12;
                      t = bottomup_1_0(r_0, t);
                      j_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, j_12);
                      t = r_0(t);
                      i_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, i_12);
                      t = r_0(t);
                      h_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                      t = r_0(t);
                      f_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, f_12);
                      t = r_0(t);
                      d_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, d_12);
                      t = r_0(t);
                      LocalPopChoice(v_5);
                    }
                  else
                    {
                      t = u_5;
                      t = z_11;
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
                      ATerm b_6 = t;
                      int c_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
                          t = z_11;
                          t = new_0_0(t);
                          q_12 = t;
                          t = bottomup_1_0(r_0, t);
                          b_13 = t;
                          t = (ATerm) ATempty;
                          t = r_0(t);
                          c_13 = t;
                          t = (ATerm) ATinsert(CheckATermList(c_13), b_13);
                          t = r_0(t);
                          r_12 = t;
                          t = q_12;
                          t = bottomup_1_0(r_0, t);
                          a_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, a_13);
                          t = r_0(t);
                          z_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, z_12);
                          t = r_0(t);
                          t_12 = t;
                          t = y_11;
                          t = bottomup_1_0(r_0, t);
                          v_12 = t;
                          t = q_12;
                          t = bottomup_1_0(r_0, t);
                          y_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, y_12);
                          t = r_0(t);
                          x_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, x_12);
                          t = r_0(t);
                          w_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_12, w_12);
                          t = r_0(t);
                          u_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_12, u_12);
                          t = r_0(t);
                          s_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, r_12, s_12);
                          t = r_0(t);
                          LocalPopChoice(c_6);
                        }
                      else
                        {
                          t = b_6;
                          t = z_11;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    v_11 = ATgetArgument(t, 0);
                    {
                      ATerm d_6 = t;
                      int e_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, v_11);
                          t = r_0(t);
                          LocalPopChoice(e_6);
                        }
                      else
                        {
                          t = d_6;
                          {
                            ATerm f_6 = t;
                            int g_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,s_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL;
                                t = z_11;
                                t = new_0_0(t);
                                g_13 = t;
                                t = bottomup_1_0(r_0, t);
                                w_13 = t;
                                t = (ATerm) ATempty;
                                t = r_0(t);
                                x_13 = t;
                                t = (ATerm) ATinsert(CheckATermList(x_13), w_13);
                                t = r_0(t);
                                h_13 = t;
                                t = g_13;
                                t = bottomup_1_0(r_0, t);
                                v_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, v_13);
                                t = r_0(t);
                                s_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, s_13);
                                t = r_0(t);
                                j_13 = t;
                                t = y_11;
                                t = bottomup_1_0(r_0, t);
                                l_13 = t;
                                t = g_13;
                                t = bottomup_1_0(r_0, t);
                                o_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, o_13);
                                t = r_0(t);
                                n_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, n_13);
                                t = r_0(t);
                                m_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, l_13, m_13);
                                t = r_0(t);
                                k_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, j_13, k_13);
                                t = r_0(t);
                                i_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, h_13, i_13);
                                t = r_0(t);
                                LocalPopChoice(g_6);
                              }
                            else
                              {
                                t = f_6;
                                t = z_11;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm i_6 = t;
                    int j_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_14 = NULL,h_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,s_14 = NULL,v_14 = NULL,w_14 = NULL,y_14 = NULL,d_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
                        t = z_11;
                        t = new_0_0(t);
                        g_14 = t;
                        t = bottomup_1_0(r_0, t);
                        g_15 = t;
                        t = (ATerm) ATempty;
                        t = r_0(t);
                        h_15 = t;
                        t = (ATerm) ATinsert(CheckATermList(h_15), g_15);
                        t = r_0(t);
                        h_14 = t;
                        t = g_14;
                        t = bottomup_1_0(r_0, t);
                        f_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, f_15);
                        t = r_0(t);
                        d_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, d_15);
                        t = r_0(t);
                        p_14 = t;
                        t = y_11;
                        t = bottomup_1_0(r_0, t);
                        s_14 = t;
                        t = g_14;
                        t = bottomup_1_0(r_0, t);
                        y_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, y_14);
                        t = r_0(t);
                        w_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, w_14);
                        t = r_0(t);
                        v_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, s_14, v_14);
                        t = r_0(t);
                        q_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, p_14, q_14);
                        t = r_0(t);
                        o_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, h_14, o_14);
                        t = r_0(t);
                        LocalPopChoice(j_6);
                      }
                    else
                      {
                        t = i_6;
                        t = z_11;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            y_11 = ATgetArgument(t, 0);
            t = y_11;
            if(match_cons(t, sym_Id_0))
              {
                ATerm k_6 = t;
                int l_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_z_5;
                    t = r_0(t);
                    LocalPopChoice(l_6);
                  }
                else
                  {
                    t = k_6;
                    t = z_11;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm n_6 = t;
                    int q_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_t_5;
                        t = r_0(t);
                        LocalPopChoice(q_6);
                      }
                    else
                      {
                        t = n_6;
                        t = z_11;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        v_11 = ATgetArgument(t, 0);
                        {
                          ATerm r_6 = t;
                          int s_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, v_11);
                              t = r_0(t);
                              LocalPopChoice(s_6);
                            }
                          else
                            {
                              t = r_6;
                              t = z_11;
                            }
                        }
                      }
                    else
                      {
                        t = z_11;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                y_11 = ATgetArgument(t, 0);
                x_11 = ATgetArgument(t, 1);
                t = x_11;
                if(match_cons(t, sym_Id_0))
                  {
                    t = y_11;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = x_11;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = y_11;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                v_11 = ATgetArgument(t, 0);
                                w_11 = ATgetArgument(t, 1);
                                t = y_11;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    v_11 = ATgetArgument(t, 0);
                                    w_11 = ATgetArgument(t, 1);
                                    t = y_11;
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
                    if(match_cons(t, sym_Seq_2))
                      {
                        t_11 = ATgetArgument(t, 0);
                        u_11 = ATgetArgument(t, 1);
                        t = t_11;
                        if(match_cons(t, sym_Match_1))
                          {
                            s_11 = ATgetArgument(t, 0);
                            t = s_11;
                            if(match_cons(t, sym_Op_2))
                              {
                                q_11 = ATgetArgument(t, 0);
                                h_11 = ATgetArgument(t, 1);
                                t = y_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = x_11;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm t_6 = t;
                                        int u_6 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_z_5;
                                            t = r_0(t);
                                            LocalPopChoice(u_6);
                                          }
                                        else
                                          {
                                            t = t_6;
                                            t = z_11;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            v_11 = ATgetArgument(t, 0);
                                            w_11 = ATgetArgument(t, 1);
                                            {
                                              ATerm v_6 = t;
                                              int x_6 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm o_17 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                  t = r_0(t);
                                                  o_17 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, o_17);
                                                  t = r_0(t);
                                                  LocalPopChoice(x_6);
                                                }
                                              else
                                                {
                                                  t = v_6;
                                                  t = z_11;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                v_11 = ATgetArgument(t, 0);
                                                t = v_11;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    r_11 = ATgetArgument(t, 0);
                                                    l_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm a_7 = t;
                                                      int b_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, r_11, q_11);
                                                          {
                                                            ATerm d_7 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm q_1 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    q_1 = ATgetArgument(t, 0);
                                                                    if((q_1 != ATgetArgument(t, 1)))
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
                                                                t = d_7;
                                                              }
                                                          }
                                                          t = term_z_5;
                                                          t = bottomup_1_0(r_0, t);
                                                          LocalPopChoice(b_7);
                                                        }
                                                      else
                                                        {
                                                          t = a_7;
                                                          {
                                                            ATerm f_7 = t;
                                                            int h_7 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm w_17 = NULL;
                                                                t = q_11;
                                                                if((r_11 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, l_11, h_11);
                                                                t = genzip_4_0(u_0, w_0, y_0, z_0, t);
                                                                w_17 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_17), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, r_11, l_11)), u_11));
                                                                t = bottomup_1_0(r_0, t);
                                                                LocalPopChoice(h_7);
                                                              }
                                                            else
                                                              {
                                                                t = f_7;
                                                                {
                                                                  ATerm n_7 = t;
                                                                  int o_7 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm w_18 = NULL;
                                                                      t = s_11;
                                                                      if((v_11 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, v_11);
                                                                      t = r_0(t);
                                                                      w_18 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_18, u_11);
                                                                      t = r_0(t);
                                                                      LocalPopChoice(o_7);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = n_7;
                                                                      t = z_11;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm p_7 = t;
                                                    int q_7 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm e_19 = NULL;
                                                        t = s_11;
                                                        if((v_11 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, v_11);
                                                        t = r_0(t);
                                                        e_19 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, e_19, u_11);
                                                        t = r_0(t);
                                                        LocalPopChoice(q_7);
                                                      }
                                                    else
                                                      {
                                                        t = p_7;
                                                        t = z_11;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    v_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm r_7 = t;
                                                      int s_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm m_19 = NULL;
                                                          t = s_11;
                                                          if((v_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, v_11);
                                                          t = r_0(t);
                                                          m_19 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_19, u_11);
                                                          t = r_0(t);
                                                          LocalPopChoice(s_7);
                                                        }
                                                      else
                                                        {
                                                          t = r_7;
                                                          t = z_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        v_11 = ATgetArgument(t, 0);
                                                        w_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_7 = t;
                                                          int u_7 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_19 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                              t = r_0(t);
                                                              r_19 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, r_19);
                                                              t = r_0(t);
                                                              LocalPopChoice(u_7);
                                                            }
                                                          else
                                                            {
                                                              t = t_7;
                                                              t = z_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = z_11;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = y_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = x_11;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm v_7 = t;
                                        int w_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_z_5;
                                            t = r_0(t);
                                            LocalPopChoice(w_7);
                                          }
                                        else
                                          {
                                            t = v_7;
                                            t = z_11;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            v_11 = ATgetArgument(t, 0);
                                            w_11 = ATgetArgument(t, 1);
                                            {
                                              ATerm x_7 = t;
                                              int y_7 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm a_20 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                  t = r_0(t);
                                                  a_20 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, a_20);
                                                  t = r_0(t);
                                                  LocalPopChoice(y_7);
                                                }
                                              else
                                                {
                                                  t = x_7;
                                                  t = z_11;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                v_11 = ATgetArgument(t, 0);
                                                {
                                                  ATerm z_7 = t;
                                                  int a_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_20 = NULL;
                                                      t = s_11;
                                                      if((v_11 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, v_11);
                                                      t = r_0(t);
                                                      e_20 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_20, u_11);
                                                      t = r_0(t);
                                                      LocalPopChoice(a_8);
                                                    }
                                                  else
                                                    {
                                                      t = z_7;
                                                      t = z_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    v_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm b_8 = t;
                                                      int c_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm i_20 = NULL;
                                                          t = s_11;
                                                          if((v_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, v_11);
                                                          t = r_0(t);
                                                          i_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_20, u_11);
                                                          t = r_0(t);
                                                          LocalPopChoice(c_8);
                                                        }
                                                      else
                                                        {
                                                          t = b_8;
                                                          t = z_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        v_11 = ATgetArgument(t, 0);
                                                        w_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm d_8 = t;
                                                          int e_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                              t = r_0(t);
                                                              n_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, n_20);
                                                              t = r_0(t);
                                                              LocalPopChoice(e_8);
                                                            }
                                                          else
                                                            {
                                                              t = d_8;
                                                              t = z_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = z_11;
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
                                    q_11 = ATgetArgument(t, 0);
                                    t = y_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = x_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm f_8 = t;
                                            int g_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_5;
                                                t = r_0(t);
                                                LocalPopChoice(g_8);
                                              }
                                            else
                                              {
                                                t = f_8;
                                                t = z_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                v_11 = ATgetArgument(t, 0);
                                                w_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm h_8 = t;
                                                  int i_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                      t = r_0(t);
                                                      e_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, e_21);
                                                      t = r_0(t);
                                                      LocalPopChoice(i_8);
                                                    }
                                                  else
                                                    {
                                                      t = h_8;
                                                      t = z_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm j_8 = t;
                                                int k_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm l_8 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(k_8);
                                                    {
                                                      ATerm m_8 = t;
                                                      int n_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm k_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_11);
                                                          t = r_0(t);
                                                          k_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, k_21, u_11);
                                                          t = r_0(t);
                                                          LocalPopChoice(n_8);
                                                        }
                                                      else
                                                        {
                                                          t = m_8;
                                                          t = z_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = j_8;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        v_11 = ATgetArgument(t, 0);
                                                        t = v_11;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            r_11 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm o_8 = t;
                                                              int p_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm o_21 = NULL,p_21 = NULL;
                                                                  t = q_11;
                                                                  if((r_11 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, r_11);
                                                                  t = r_0(t);
                                                                  p_21 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, p_21);
                                                                  t = r_0(t);
                                                                  o_21 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_21, u_11);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(p_8);
                                                                }
                                                              else
                                                                {
                                                                  t = o_8;
                                                                  t = z_11;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = z_11;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            v_11 = ATgetArgument(t, 0);
                                                            w_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm q_8 = t;
                                                              int r_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm v_21 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                                  t = r_0(t);
                                                                  v_21 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, v_21);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(r_8);
                                                                }
                                                              else
                                                                {
                                                                  t = q_8;
                                                                  t = z_11;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = z_11;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = y_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = x_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm s_8 = t;
                                            int t_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_5;
                                                t = r_0(t);
                                                LocalPopChoice(t_8);
                                              }
                                            else
                                              {
                                                t = s_8;
                                                t = z_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                v_11 = ATgetArgument(t, 0);
                                                w_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm u_8 = t;
                                                  int v_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm k_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                      t = r_0(t);
                                                      k_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, k_22);
                                                      t = r_0(t);
                                                      LocalPopChoice(v_8);
                                                    }
                                                  else
                                                    {
                                                      t = u_8;
                                                      t = z_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm w_8 = t;
                                                int x_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm y_8 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(x_8);
                                                    {
                                                      ATerm z_8 = t;
                                                      int a_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm o_22 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_11);
                                                          t = r_0(t);
                                                          o_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, u_11);
                                                          t = r_0(t);
                                                          LocalPopChoice(a_9);
                                                        }
                                                      else
                                                        {
                                                          t = z_8;
                                                          t = z_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = w_8;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        v_11 = ATgetArgument(t, 0);
                                                        w_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_9 = t;
                                                          int c_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm t_22 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                              t = r_0(t);
                                                              t_22 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, t_22);
                                                              t = r_0(t);
                                                              LocalPopChoice(c_9);
                                                            }
                                                          else
                                                            {
                                                              t = b_9;
                                                              t = z_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = z_11;
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
                                    n_11 = ATgetArgument(t, 1);
                                    o_11 = ATgetArgument(t, 2);
                                    t = y_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = x_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm d_9 = t;
                                            int e_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_5;
                                                t = r_0(t);
                                                LocalPopChoice(e_9);
                                              }
                                            else
                                              {
                                                t = d_9;
                                                t = z_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                v_11 = ATgetArgument(t, 0);
                                                w_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm f_9 = t;
                                                  int g_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                      t = r_0(t);
                                                      e_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, e_23);
                                                      t = r_0(t);
                                                      LocalPopChoice(g_9);
                                                    }
                                                  else
                                                    {
                                                      t = f_9;
                                                      t = z_11;
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
                                                          ATerm k_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, s_11, n_11, o_11);
                                                          t = r_0(t);
                                                          k_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, k_23, u_11);
                                                          t = r_0(t);
                                                          LocalPopChoice(l_9);
                                                        }
                                                      else
                                                        {
                                                          t = k_9;
                                                          t = z_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = h_9;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        v_11 = ATgetArgument(t, 0);
                                                        w_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm m_9 = t;
                                                          int n_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                              t = r_0(t);
                                                              p_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, p_23);
                                                              t = r_0(t);
                                                              LocalPopChoice(n_9);
                                                            }
                                                          else
                                                            {
                                                              t = m_9;
                                                              t = z_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = z_11;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = y_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = x_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm o_9 = t;
                                            int p_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_5;
                                                t = r_0(t);
                                                LocalPopChoice(p_9);
                                              }
                                            else
                                              {
                                                t = o_9;
                                                t = z_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                v_11 = ATgetArgument(t, 0);
                                                w_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm q_9 = t;
                                                  int r_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm y_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                      t = r_0(t);
                                                      y_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, y_23);
                                                      t = r_0(t);
                                                      LocalPopChoice(r_9);
                                                    }
                                                  else
                                                    {
                                                      t = q_9;
                                                      t = z_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    v_11 = ATgetArgument(t, 0);
                                                    w_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm s_9 = t;
                                                      int t_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm d_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                          t = r_0(t);
                                                          d_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, d_24);
                                                          t = r_0(t);
                                                          LocalPopChoice(t_9);
                                                        }
                                                      else
                                                        {
                                                          t = s_9;
                                                          t = z_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = z_11;
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
                            t_11 = ATgetArgument(t, 0);
                            t = t_11;
                            if(match_cons(t, sym_Op_2))
                              {
                                s_11 = ATgetArgument(t, 0);
                                n_11 = ATgetArgument(t, 1);
                                t = y_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = x_11;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm u_9 = t;
                                        int v_9 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_z_5;
                                            t = r_0(t);
                                            LocalPopChoice(v_9);
                                          }
                                        else
                                          {
                                            t = u_9;
                                            t = z_11;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            v_11 = ATgetArgument(t, 0);
                                            w_11 = ATgetArgument(t, 1);
                                            {
                                              ATerm w_9 = t;
                                              int x_9 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm o_24 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                  t = r_0(t);
                                                  o_24 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, o_24);
                                                  t = r_0(t);
                                                  LocalPopChoice(x_9);
                                                }
                                              else
                                                {
                                                  t = w_9;
                                                  t = z_11;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                v_11 = ATgetArgument(t, 0);
                                                t = v_11;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    r_11 = ATgetArgument(t, 0);
                                                    l_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm y_9 = t;
                                                      int z_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, r_11, s_11);
                                                          {
                                                            ATerm a_10 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm p_2 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    p_2 = ATgetArgument(t, 0);
                                                                    if((p_2 != ATgetArgument(t, 1)))
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
                                                                t = a_10;
                                                              }
                                                          }
                                                          t = term_z_5;
                                                          t = bottomup_1_0(r_0, t);
                                                          LocalPopChoice(z_9);
                                                        }
                                                      else
                                                        {
                                                          t = y_9;
                                                          {
                                                            ATerm b_10 = t;
                                                            int c_10 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm a_25 = NULL;
                                                                t = s_11;
                                                                if((r_11 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, l_11, n_11);
                                                                t = genzip_4_0(a_1, e_1, f_1, i_1, t);
                                                                a_25 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, a_25), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, r_11, l_11)));
                                                                t = bottomup_1_0(r_0, t);
                                                                LocalPopChoice(c_10);
                                                              }
                                                            else
                                                              {
                                                                t = b_10;
                                                                {
                                                                  ATerm d_10 = t;
                                                                  int e_10 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = t_11;
                                                                      if((v_11 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, v_11);
                                                                      t = r_0(t);
                                                                      LocalPopChoice(e_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = d_10;
                                                                      t = z_11;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm f_10 = t;
                                                    int g_10 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = t_11;
                                                        if((v_11 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, v_11);
                                                        t = r_0(t);
                                                        LocalPopChoice(g_10);
                                                      }
                                                    else
                                                      {
                                                        t = f_10;
                                                        t = z_11;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    v_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm h_10 = t;
                                                      int i_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = t_11;
                                                          if((v_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, v_11);
                                                          t = r_0(t);
                                                          LocalPopChoice(i_10);
                                                        }
                                                      else
                                                        {
                                                          t = h_10;
                                                          t = z_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        v_11 = ATgetArgument(t, 0);
                                                        w_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_10 = t;
                                                          int k_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm j_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                              t = r_0(t);
                                                              j_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, j_26);
                                                              t = r_0(t);
                                                              LocalPopChoice(k_10);
                                                            }
                                                          else
                                                            {
                                                              t = j_10;
                                                              t = z_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = z_11;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = y_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = x_11;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm l_10 = t;
                                        int m_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_z_5;
                                            t = r_0(t);
                                            LocalPopChoice(m_10);
                                          }
                                        else
                                          {
                                            t = l_10;
                                            t = z_11;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            v_11 = ATgetArgument(t, 0);
                                            w_11 = ATgetArgument(t, 1);
                                            {
                                              ATerm n_10 = t;
                                              int o_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm v_26 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                  t = r_0(t);
                                                  v_26 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, v_26);
                                                  t = r_0(t);
                                                  LocalPopChoice(o_10);
                                                }
                                              else
                                                {
                                                  t = n_10;
                                                  t = z_11;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                v_11 = ATgetArgument(t, 0);
                                                {
                                                  ATerm p_10 = t;
                                                  int q_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = t_11;
                                                      if((v_11 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, v_11);
                                                      t = r_0(t);
                                                      LocalPopChoice(q_10);
                                                    }
                                                  else
                                                    {
                                                      t = p_10;
                                                      t = z_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    v_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm r_10 = t;
                                                      int s_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = t_11;
                                                          if((v_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, v_11);
                                                          t = r_0(t);
                                                          LocalPopChoice(s_10);
                                                        }
                                                      else
                                                        {
                                                          t = r_10;
                                                          t = z_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        v_11 = ATgetArgument(t, 0);
                                                        w_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_12 = t;
                                                          int o_12 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm m_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                              t = r_0(t);
                                                              m_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, m_27);
                                                              t = r_0(t);
                                                              LocalPopChoice(o_12);
                                                            }
                                                          else
                                                            {
                                                              t = a_12;
                                                              t = z_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = z_11;
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
                                t_11 = ATgetArgument(t, 0);
                                t = t_11;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    s_11 = ATgetArgument(t, 0);
                                    t = y_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = x_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm p_12 = t;
                                            int d_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_5;
                                                t = r_0(t);
                                                LocalPopChoice(d_13);
                                              }
                                            else
                                              {
                                                t = p_12;
                                                t = z_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                v_11 = ATgetArgument(t, 0);
                                                w_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm e_13 = t;
                                                  int f_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_27 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                      t = r_0(t);
                                                      x_27 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, x_27);
                                                      t = r_0(t);
                                                      LocalPopChoice(f_13);
                                                    }
                                                  else
                                                    {
                                                      t = e_13;
                                                      t = z_11;
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
                                                        ATerm r_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(q_13);
                                                    {
                                                      ATerm t_13 = t;
                                                      int u_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, t_11);
                                                          t = r_0(t);
                                                          LocalPopChoice(u_13);
                                                        }
                                                      else
                                                        {
                                                          t = t_13;
                                                          t = z_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = p_13;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        v_11 = ATgetArgument(t, 0);
                                                        t = v_11;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            r_11 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm y_13 = t;
                                                              int z_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm c_28 = NULL;
                                                                  t = s_11;
                                                                  if((r_11 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, r_11);
                                                                  t = r_0(t);
                                                                  c_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, c_28);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(z_13);
                                                                }
                                                              else
                                                                {
                                                                  t = y_13;
                                                                  t = z_11;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = z_11;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            v_11 = ATgetArgument(t, 0);
                                                            w_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm a_14 = t;
                                                              int b_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm i_28 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                                  t = r_0(t);
                                                                  i_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, i_28);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(b_14);
                                                                }
                                                              else
                                                                {
                                                                  t = a_14;
                                                                  t = z_11;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = z_11;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = y_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = x_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm c_14 = t;
                                            int d_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_5;
                                                t = r_0(t);
                                                LocalPopChoice(d_14);
                                              }
                                            else
                                              {
                                                t = c_14;
                                                t = z_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                v_11 = ATgetArgument(t, 0);
                                                w_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm e_14 = t;
                                                  int f_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm r_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                      t = r_0(t);
                                                      r_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, r_28);
                                                      t = r_0(t);
                                                      LocalPopChoice(f_14);
                                                    }
                                                  else
                                                    {
                                                      t = e_14;
                                                      t = z_11;
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
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, t_11);
                                                          t = r_0(t);
                                                          LocalPopChoice(m_14);
                                                        }
                                                      else
                                                        {
                                                          t = l_14;
                                                          t = z_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = i_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        v_11 = ATgetArgument(t, 0);
                                                        w_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm n_14 = t;
                                                          int r_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                              t = r_0(t);
                                                              b_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, b_29);
                                                              t = r_0(t);
                                                              LocalPopChoice(r_14);
                                                            }
                                                          else
                                                            {
                                                              t = n_14;
                                                              t = z_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = z_11;
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
                                    t_11 = ATgetArgument(t, 0);
                                    u_11 = ATgetArgument(t, 1);
                                    p_11 = ATgetArgument(t, 2);
                                    t = y_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = x_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm t_14 = t;
                                            int u_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_5;
                                                t = r_0(t);
                                                LocalPopChoice(u_14);
                                              }
                                            else
                                              {
                                                t = t_14;
                                                t = z_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                v_11 = ATgetArgument(t, 0);
                                                w_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm x_14 = t;
                                                  int z_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm m_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                      t = r_0(t);
                                                      m_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, m_29);
                                                      t = r_0(t);
                                                      LocalPopChoice(z_14);
                                                    }
                                                  else
                                                    {
                                                      t = x_14;
                                                      t = z_11;
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
                                                        ATerm c_15 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(b_15);
                                                    {
                                                      ATerm e_15 = t;
                                                      int i_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, t_11, u_11, p_11);
                                                          t = r_0(t);
                                                          LocalPopChoice(i_15);
                                                        }
                                                      else
                                                        {
                                                          t = e_15;
                                                          t = z_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = a_15;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        v_11 = ATgetArgument(t, 0);
                                                        w_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_15 = t;
                                                          int k_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                              t = r_0(t);
                                                              v_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, v_29);
                                                              t = r_0(t);
                                                              LocalPopChoice(k_15);
                                                            }
                                                          else
                                                            {
                                                              t = j_15;
                                                              t = z_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = z_11;
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
                                        t_11 = ATgetArgument(t, 0);
                                        u_11 = ATgetArgument(t, 1);
                                        t = y_11;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = x_11;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm l_15 = t;
                                                int m_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_z_5;
                                                    t = r_0(t);
                                                    LocalPopChoice(m_15);
                                                  }
                                                else
                                                  {
                                                    t = l_15;
                                                    {
                                                      ATerm n_15 = t;
                                                      int o_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm i_30 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, u_11);
                                                          t = r_0(t);
                                                          i_30 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, t_11, i_30);
                                                          t = r_0(t);
                                                          LocalPopChoice(o_15);
                                                        }
                                                      else
                                                        {
                                                          t = n_15;
                                                          t = z_11;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    v_11 = ATgetArgument(t, 0);
                                                    w_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm p_15 = t;
                                                      int q_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm p_30 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                          t = r_0(t);
                                                          p_30 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, p_30);
                                                          t = r_0(t);
                                                          LocalPopChoice(q_15);
                                                        }
                                                      else
                                                        {
                                                          t = p_15;
                                                          {
                                                            ATerm r_15 = t;
                                                            int s_15 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm u_30 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, u_11);
                                                                t = r_0(t);
                                                                u_30 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, t_11, u_30);
                                                                t = r_0(t);
                                                                LocalPopChoice(s_15);
                                                              }
                                                            else
                                                              {
                                                                t = r_15;
                                                                t = z_11;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        v_11 = ATgetArgument(t, 0);
                                                        w_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_15 = t;
                                                          int u_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm c_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, u_11);
                                                              t = r_0(t);
                                                              c_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, t_11, c_31);
                                                              t = r_0(t);
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
                                                                    ATerm h_31 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                                    t = r_0(t);
                                                                    h_31 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, h_31);
                                                                    t = r_0(t);
                                                                    LocalPopChoice(w_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = v_15;
                                                                    t = z_11;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm x_15 = t;
                                                        int y_15 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm s_31 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, u_11);
                                                            t = r_0(t);
                                                            s_31 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, t_11, s_31);
                                                            t = r_0(t);
                                                            LocalPopChoice(y_15);
                                                          }
                                                        else
                                                          {
                                                            t = x_15;
                                                            t = z_11;
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
                                            t_11 = ATgetArgument(t, 0);
                                            u_11 = ATgetArgument(t, 1);
                                            t = y_11;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = x_11;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm z_15 = t;
                                                    int a_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_z_5;
                                                        t = r_0(t);
                                                        LocalPopChoice(a_16);
                                                      }
                                                    else
                                                      {
                                                        t = z_15;
                                                        {
                                                          ATerm b_16 = t;
                                                          int c_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, u_11);
                                                              t = r_0(t);
                                                              h_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, h_32);
                                                              t = r_0(t);
                                                              LocalPopChoice(c_16);
                                                            }
                                                          else
                                                            {
                                                              t = b_16;
                                                              t = z_11;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        v_11 = ATgetArgument(t, 0);
                                                        w_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm d_16 = t;
                                                          int e_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm m_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                              t = r_0(t);
                                                              m_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, m_32);
                                                              t = r_0(t);
                                                              LocalPopChoice(e_16);
                                                            }
                                                          else
                                                            {
                                                              t = d_16;
                                                              {
                                                                ATerm f_16 = t;
                                                                int g_16 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm r_32 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, u_11);
                                                                    t = r_0(t);
                                                                    r_32 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, r_32);
                                                                    t = r_0(t);
                                                                    LocalPopChoice(g_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = f_16;
                                                                    t = z_11;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            v_11 = ATgetArgument(t, 0);
                                                            w_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm h_16 = t;
                                                              int i_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm w_32 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, u_11);
                                                                  t = r_0(t);
                                                                  w_32 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, w_32);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(i_16);
                                                                }
                                                              else
                                                                {
                                                                  t = h_16;
                                                                  {
                                                                    ATerm j_16 = t;
                                                                    int k_16 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm d_33 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                                        t = r_0(t);
                                                                        d_33 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, d_33);
                                                                        t = r_0(t);
                                                                        LocalPopChoice(k_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = j_16;
                                                                        t = z_11;
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
                                                                ATerm n_33 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, u_11);
                                                                t = r_0(t);
                                                                n_33 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, n_33);
                                                                t = r_0(t);
                                                                LocalPopChoice(m_16);
                                                              }
                                                            else
                                                              {
                                                                t = l_16;
                                                                t = z_11;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = y_11;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = x_11;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm n_16 = t;
                                                    int o_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_z_5;
                                                        t = r_0(t);
                                                        LocalPopChoice(o_16);
                                                      }
                                                    else
                                                      {
                                                        t = n_16;
                                                        t = z_11;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        v_11 = ATgetArgument(t, 0);
                                                        w_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm p_16 = t;
                                                          int q_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm d_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                              t = r_0(t);
                                                              d_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, d_34);
                                                              t = r_0(t);
                                                              LocalPopChoice(q_16);
                                                            }
                                                          else
                                                            {
                                                              t = p_16;
                                                              t = z_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            v_11 = ATgetArgument(t, 0);
                                                            w_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm r_16 = t;
                                                              int s_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm i_34 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                                  t = r_0(t);
                                                                  i_34 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, i_34);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(s_16);
                                                                }
                                                              else
                                                                {
                                                                  t = r_16;
                                                                  t = z_11;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = z_11;
                                                          }
                                                      }
                                                  }
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
                    y_11 = ATgetArgument(t, 0);
                    x_11 = ATgetArgument(t, 1);
                    t = x_11;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = y_11;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm t_16 = t;
                            int u_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_t_5;
                                t = r_0(t);
                                LocalPopChoice(u_16);
                              }
                            else
                              {
                                t = t_16;
                                t = y_11;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = x_11;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    v_11 = ATgetArgument(t, 0);
                                    w_11 = ATgetArgument(t, 1);
                                    t = y_11;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        v_11 = ATgetArgument(t, 0);
                                        t = y_11;
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
                        t = y_11;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm v_16 = t;
                            int w_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_t_5;
                                t = r_0(t);
                                LocalPopChoice(w_16);
                              }
                            else
                              {
                                t = v_16;
                                {
                                  ATerm x_16 = t;
                                  int y_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = x_11;
                                      if((y_11 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(y_16);
                                    }
                                  else
                                    {
                                      t = x_16;
                                      t = z_11;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = x_11;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    v_11 = ATgetArgument(t, 0);
                                    w_11 = ATgetArgument(t, 1);
                                    {
                                      ATerm z_16 = t;
                                      int a_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm y_35 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, w_11, x_11);
                                          t = r_0(t);
                                          y_35 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, v_11, y_35);
                                          t = r_0(t);
                                          LocalPopChoice(a_17);
                                        }
                                      else
                                        {
                                          t = z_16;
                                          {
                                            ATerm b_17 = t;
                                            int c_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = x_11;
                                                if((y_11 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(c_17);
                                              }
                                            else
                                              {
                                                t = b_17;
                                                t = z_11;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        v_11 = ATgetArgument(t, 0);
                                        {
                                          ATerm d_17 = t;
                                          int e_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = x_11;
                                              if((y_11 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(e_17);
                                            }
                                          else
                                            {
                                              t = d_17;
                                              {
                                                ATerm f_17 = t;
                                                int g_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = v_11;
                                                    t = topdown_1_0(j_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, v_11);
                                                    t = bottomup_1_0(r_0, t);
                                                    LocalPopChoice(g_17);
                                                  }
                                                else
                                                  {
                                                    t = f_17;
                                                    t = z_11;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm h_17 = t;
                                        int i_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = x_11;
                                            if((y_11 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(i_17);
                                          }
                                        else
                                          {
                                            t = h_17;
                                            t = z_11;
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
                        y_11 = ATgetArgument(t, 0);
                        x_11 = ATgetArgument(t, 1);
                        t = x_11;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = y_11;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm j_17 = t;
                                int k_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_t_5;
                                    t = r_0(t);
                                    LocalPopChoice(k_17);
                                  }
                                else
                                  {
                                    t = j_17;
                                    t = x_11;
                                  }
                              }
                            else
                              {
                                ATerm l_17 = t;
                                int m_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_t_5;
                                    t = r_0(t);
                                    LocalPopChoice(m_17);
                                  }
                                else
                                  {
                                    t = l_17;
                                    t = z_11;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = y_11;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm n_17 = t;
                                    int p_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_z_5;
                                        t = r_0(t);
                                        LocalPopChoice(p_17);
                                      }
                                    else
                                      {
                                        t = n_17;
                                        t = x_11;
                                      }
                                  }
                                else
                                  {
                                    ATerm q_17 = t;
                                    int r_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_z_5;
                                        t = r_0(t);
                                        LocalPopChoice(r_17);
                                      }
                                    else
                                      {
                                        t = q_17;
                                        t = z_11;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    t_11 = ATgetArgument(t, 0);
                                    u_11 = ATgetArgument(t, 1);
                                    t = y_11;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = x_11;
                                      }
                                    else
                                      {
                                        ATerm s_17 = t;
                                        int t_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm c_37 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, y_11, t_11);
                                            t = conc_0_0(t);
                                            c_37 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, c_37, u_11);
                                            t = bottomup_1_0(r_0, t);
                                            LocalPopChoice(t_17);
                                          }
                                        else
                                          {
                                            t = s_17;
                                            t = z_11;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = y_11;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = x_11;
                                      }
                                    else
                                      {
                                        t = z_11;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm u_17 = t;
                        int v_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm x_17 = ATgetArgument(t, 0);
                                x_11 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(v_17);
                            t = x_11;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm c_18 = t;
                                int d_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_t_5;
                                    t = r_0(t);
                                    LocalPopChoice(d_18);
                                  }
                                else
                                  {
                                    t = c_18;
                                    t = z_11;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm e_18 = t;
                                    int f_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_z_5;
                                        t = r_0(t);
                                        LocalPopChoice(f_18);
                                      }
                                    else
                                      {
                                        t = e_18;
                                        t = z_11;
                                      }
                                  }
                                else
                                  {
                                    t = z_11;
                                  }
                              }
                          }
                        else
                          {
                            t = u_17;
                            if(match_cons(t, sym_All_1))
                              {
                                y_11 = ATgetArgument(t, 0);
                                t = y_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm g_18 = t;
                                    int k_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_t_5;
                                        t = r_0(t);
                                        LocalPopChoice(k_18);
                                      }
                                    else
                                      {
                                        t = g_18;
                                        t = z_11;
                                      }
                                  }
                                else
                                  {
                                    t = z_11;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    y_11 = ATgetArgument(t, 0);
                                    t = y_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm l_18 = t;
                                        int n_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_t_5;
                                            t = r_0(t);
                                            LocalPopChoice(n_18);
                                          }
                                        else
                                          {
                                            t = l_18;
                                            {
                                              ATerm o_18 = t;
                                              int p_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,a_38 = NULL,b_38 = NULL,d_38 = NULL;
                                                  t = z_11;
                                                  t = new_0_0(t);
                                                  p_37 = t;
                                                  t = bottomup_1_0(r_0, t);
                                                  b_38 = t;
                                                  t = (ATerm) ATempty;
                                                  t = r_0(t);
                                                  d_38 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(d_38), b_38);
                                                  t = r_0(t);
                                                  q_37 = t;
                                                  t = p_37;
                                                  t = bottomup_1_0(r_0, t);
                                                  a_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, a_38);
                                                  t = r_0(t);
                                                  y_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, y_37);
                                                  t = r_0(t);
                                                  s_37 = t;
                                                  t = y_11;
                                                  t = bottomup_1_0(r_0, t);
                                                  u_37 = t;
                                                  t = p_37;
                                                  t = bottomup_1_0(r_0, t);
                                                  x_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, x_37);
                                                  t = r_0(t);
                                                  w_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, w_37);
                                                  t = r_0(t);
                                                  v_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_37, v_37);
                                                  t = r_0(t);
                                                  t_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, s_37, t_37);
                                                  t = r_0(t);
                                                  r_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, q_37, r_37);
                                                  t = r_0(t);
                                                  LocalPopChoice(p_18);
                                                }
                                              else
                                                {
                                                  t = o_18;
                                                  t = z_11;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm q_18 = t;
                                            int r_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_5;
                                                t = r_0(t);
                                                LocalPopChoice(r_18);
                                              }
                                            else
                                              {
                                                t = q_18;
                                                {
                                                  ATerm s_18 = t;
                                                  int t_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL;
                                                      t = z_11;
                                                      t = new_0_0(t);
                                                      h_38 = t;
                                                      t = bottomup_1_0(r_0, t);
                                                      s_38 = t;
                                                      t = (ATerm) ATempty;
                                                      t = r_0(t);
                                                      t_38 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(t_38), s_38);
                                                      t = r_0(t);
                                                      i_38 = t;
                                                      t = h_38;
                                                      t = bottomup_1_0(r_0, t);
                                                      r_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, r_38);
                                                      t = r_0(t);
                                                      q_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, q_38);
                                                      t = r_0(t);
                                                      k_38 = t;
                                                      t = y_11;
                                                      t = bottomup_1_0(r_0, t);
                                                      m_38 = t;
                                                      t = h_38;
                                                      t = bottomup_1_0(r_0, t);
                                                      p_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, p_38);
                                                      t = r_0(t);
                                                      o_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, o_38);
                                                      t = r_0(t);
                                                      n_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_38, n_38);
                                                      t = r_0(t);
                                                      l_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, k_38, l_38);
                                                      t = r_0(t);
                                                      j_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, i_38, j_38);
                                                      t = r_0(t);
                                                      LocalPopChoice(t_18);
                                                    }
                                                  else
                                                    {
                                                      t = s_18;
                                                      t = z_11;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                v_11 = ATgetArgument(t, 0);
                                                w_11 = ATgetArgument(t, 1);
                                                t = w_11;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    u_10 = ATgetArgument(t, 0);
                                                    w_10 = ATgetArgument(t, 1);
                                                    t = u_10;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        v_10 = ATgetArgument(t, 0);
                                                        t = v_11;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            r_11 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm u_18 = t;
                                                              int v_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, v_10);
                                                                  t = r_0(t);
                                                                  a_39 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_39, w_10);
                                                                  t = r_0(t);
                                                                  z_38 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, r_11, z_38);
                                                                  t = r_0(t);
                                                                  y_38 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, y_38);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(v_18);
                                                                }
                                                              else
                                                                {
                                                                  t = u_18;
                                                                  {
                                                                    ATerm x_18 = t;
                                                                    int y_18 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL;
                                                                        t = z_11;
                                                                        t = new_0_0(t);
                                                                        c_39 = t;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        n_39 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = r_0(t);
                                                                        o_39 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(o_39), n_39);
                                                                        t = r_0(t);
                                                                        d_39 = t;
                                                                        t = c_39;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        m_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, m_39);
                                                                        t = r_0(t);
                                                                        l_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, l_39);
                                                                        t = r_0(t);
                                                                        f_39 = t;
                                                                        t = y_11;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        h_39 = t;
                                                                        t = c_39;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        k_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, k_39);
                                                                        t = r_0(t);
                                                                        j_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, j_39);
                                                                        t = r_0(t);
                                                                        i_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, h_39, i_39);
                                                                        t = r_0(t);
                                                                        g_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, f_39, g_39);
                                                                        t = r_0(t);
                                                                        e_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, d_39, e_39);
                                                                        t = r_0(t);
                                                                        LocalPopChoice(y_18);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = x_18;
                                                                        t = z_11;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm z_18 = t;
                                                            int a_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL;
                                                                t = z_11;
                                                                t = new_0_0(t);
                                                                r_39 = t;
                                                                t = bottomup_1_0(r_0, t);
                                                                c_40 = t;
                                                                t = (ATerm) ATempty;
                                                                t = r_0(t);
                                                                d_40 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(d_40), c_40);
                                                                t = r_0(t);
                                                                s_39 = t;
                                                                t = r_39;
                                                                t = bottomup_1_0(r_0, t);
                                                                b_40 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, b_40);
                                                                t = r_0(t);
                                                                a_40 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, a_40);
                                                                t = r_0(t);
                                                                u_39 = t;
                                                                t = y_11;
                                                                t = bottomup_1_0(r_0, t);
                                                                w_39 = t;
                                                                t = r_39;
                                                                t = bottomup_1_0(r_0, t);
                                                                z_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, z_39);
                                                                t = r_0(t);
                                                                y_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, y_39);
                                                                t = r_0(t);
                                                                x_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, w_39, x_39);
                                                                t = r_0(t);
                                                                v_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, u_39, v_39);
                                                                t = r_0(t);
                                                                t_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, s_39, t_39);
                                                                t = r_0(t);
                                                                LocalPopChoice(a_19);
                                                              }
                                                            else
                                                              {
                                                                t = z_18;
                                                                t = z_11;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = v_11;
                                                        {
                                                          ATerm b_19 = t;
                                                          int c_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,o_40 = NULL,p_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL;
                                                              t = z_11;
                                                              t = new_0_0(t);
                                                              g_40 = t;
                                                              t = bottomup_1_0(r_0, t);
                                                              t_40 = t;
                                                              t = (ATerm) ATempty;
                                                              t = r_0(t);
                                                              u_40 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(u_40), t_40);
                                                              t = r_0(t);
                                                              h_40 = t;
                                                              t = g_40;
                                                              t = bottomup_1_0(r_0, t);
                                                              s_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, s_40);
                                                              t = r_0(t);
                                                              r_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, r_40);
                                                              t = r_0(t);
                                                              j_40 = t;
                                                              t = y_11;
                                                              t = bottomup_1_0(r_0, t);
                                                              l_40 = t;
                                                              t = g_40;
                                                              t = bottomup_1_0(r_0, t);
                                                              p_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, p_40);
                                                              t = r_0(t);
                                                              o_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, o_40);
                                                              t = r_0(t);
                                                              m_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, l_40, m_40);
                                                              t = r_0(t);
                                                              k_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, j_40, k_40);
                                                              t = r_0(t);
                                                              i_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, h_40, i_40);
                                                              t = r_0(t);
                                                              LocalPopChoice(c_19);
                                                            }
                                                          else
                                                            {
                                                              t = b_19;
                                                              t = z_11;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = v_11;
                                                    {
                                                      ATerm d_19 = t;
                                                      int f_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,d_41 = NULL,e_41 = NULL,g_41 = NULL,h_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL;
                                                          t = z_11;
                                                          t = new_0_0(t);
                                                          x_40 = t;
                                                          t = bottomup_1_0(r_0, t);
                                                          l_41 = t;
                                                          t = (ATerm) ATempty;
                                                          t = r_0(t);
                                                          m_41 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(m_41), l_41);
                                                          t = r_0(t);
                                                          y_40 = t;
                                                          t = x_40;
                                                          t = bottomup_1_0(r_0, t);
                                                          k_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, k_41);
                                                          t = r_0(t);
                                                          j_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, j_41);
                                                          t = r_0(t);
                                                          a_41 = t;
                                                          t = y_11;
                                                          t = bottomup_1_0(r_0, t);
                                                          d_41 = t;
                                                          t = x_40;
                                                          t = bottomup_1_0(r_0, t);
                                                          h_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, h_41);
                                                          t = r_0(t);
                                                          g_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, g_41);
                                                          t = r_0(t);
                                                          e_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_41, e_41);
                                                          t = r_0(t);
                                                          b_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_41, b_41);
                                                          t = r_0(t);
                                                          z_40 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, y_40, z_40);
                                                          t = r_0(t);
                                                          LocalPopChoice(f_19);
                                                        }
                                                      else
                                                        {
                                                          t = d_19;
                                                          t = z_11;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    v_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm g_19 = t;
                                                      int h_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, v_11);
                                                          t = r_0(t);
                                                          LocalPopChoice(h_19);
                                                        }
                                                      else
                                                        {
                                                          t = g_19;
                                                          {
                                                            ATerm i_19 = t;
                                                            int j_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,v_41 = NULL,w_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL;
                                                                t = z_11;
                                                                t = new_0_0(t);
                                                                q_41 = t;
                                                                t = bottomup_1_0(r_0, t);
                                                                e_42 = t;
                                                                t = (ATerm) ATempty;
                                                                t = r_0(t);
                                                                f_42 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(f_42), e_42);
                                                                t = r_0(t);
                                                                r_41 = t;
                                                                t = q_41;
                                                                t = bottomup_1_0(r_0, t);
                                                                d_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, d_42);
                                                                t = r_0(t);
                                                                c_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, c_42);
                                                                t = r_0(t);
                                                                t_41 = t;
                                                                t = y_11;
                                                                t = bottomup_1_0(r_0, t);
                                                                w_41 = t;
                                                                t = q_41;
                                                                t = bottomup_1_0(r_0, t);
                                                                b_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, b_42);
                                                                t = r_0(t);
                                                                a_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, a_42);
                                                                t = r_0(t);
                                                                z_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, w_41, z_41);
                                                                t = r_0(t);
                                                                v_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, t_41, v_41);
                                                                t = r_0(t);
                                                                s_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, r_41, s_41);
                                                                t = r_0(t);
                                                                LocalPopChoice(j_19);
                                                              }
                                                            else
                                                              {
                                                                t = i_19;
                                                                t = z_11;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm k_19 = t;
                                                    int l_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL;
                                                        t = z_11;
                                                        t = new_0_0(t);
                                                        i_42 = t;
                                                        t = bottomup_1_0(r_0, t);
                                                        t_42 = t;
                                                        t = (ATerm) ATempty;
                                                        t = r_0(t);
                                                        u_42 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(u_42), t_42);
                                                        t = r_0(t);
                                                        j_42 = t;
                                                        t = i_42;
                                                        t = bottomup_1_0(r_0, t);
                                                        s_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, s_42);
                                                        t = r_0(t);
                                                        r_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, r_42);
                                                        t = r_0(t);
                                                        l_42 = t;
                                                        t = y_11;
                                                        t = bottomup_1_0(r_0, t);
                                                        n_42 = t;
                                                        t = i_42;
                                                        t = bottomup_1_0(r_0, t);
                                                        q_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, q_42);
                                                        t = r_0(t);
                                                        p_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, p_42);
                                                        t = r_0(t);
                                                        o_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, n_42, o_42);
                                                        t = r_0(t);
                                                        m_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, l_42, m_42);
                                                        t = r_0(t);
                                                        k_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, j_42, k_42);
                                                        t = r_0(t);
                                                        LocalPopChoice(l_19);
                                                      }
                                                    else
                                                      {
                                                        t = k_19;
                                                        t = z_11;
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
                                        y_11 = ATgetArgument(t, 0);
                                        t = y_11;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm n_19 = t;
                                            int o_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_t_5;
                                                t = r_0(t);
                                                LocalPopChoice(o_19);
                                              }
                                            else
                                              {
                                                t = n_19;
                                                t = z_11;
                                              }
                                          }
                                        else
                                          {
                                            t = z_11;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            y_11 = ATgetArgument(t, 0);
                                            t = y_11;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm p_19 = t;
                                                int q_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_z_5;
                                                    t = r_0(t);
                                                    LocalPopChoice(q_19);
                                                  }
                                                else
                                                  {
                                                    t = p_19;
                                                    t = z_11;
                                                  }
                                              }
                                            else
                                              {
                                                t = z_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                y_11 = ATgetArgument(t, 0);
                                                t = y_11;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm s_19 = t;
                                                    int t_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_z_5;
                                                        t = r_0(t);
                                                        LocalPopChoice(t_19);
                                                      }
                                                    else
                                                      {
                                                        t = s_19;
                                                        t = z_11;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = z_11;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm u_19 = t;
                                                int v_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm w_19 = ATgetArgument(t, 0);
                                                        x_11 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(v_19);
                                                    t = x_11;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm x_19 = t;
                                                        int y_19 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_z_5;
                                                            t = r_0(t);
                                                            LocalPopChoice(y_19);
                                                          }
                                                        else
                                                          {
                                                            t = x_19;
                                                            t = z_11;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = z_11;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = u_19;
                                                    {
                                                      ATerm z_19 = t;
                                                      int b_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm c_20 = ATgetArgument(t, 0);
                                                              x_11 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(b_20);
                                                          {
                                                            ATerm d_20 = t;
                                                            int f_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = x_11;
                                                                t = fetch_1_0(k_1, t);
                                                                t = term_z_5;
                                                                t = bottomup_1_0(r_0, t);
                                                                LocalPopChoice(f_20);
                                                              }
                                                            else
                                                              {
                                                                t = d_20;
                                                                t = z_11;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = z_19;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              y_11 = ATgetArgument(t, 0);
                                                              x_11 = ATgetArgument(t, 1);
                                                              t = x_11;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = y_11;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = x_11;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          v_11 = ATgetArgument(t, 0);
                                                                          w_11 = ATgetArgument(t, 1);
                                                                          t = y_11;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = y_11;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = y_11;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = x_11;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          v_11 = ATgetArgument(t, 0);
                                                                          w_11 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm g_20 = t;
                                                                            int h_20 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm g_44 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, w_11, x_11);
                                                                                t = r_0(t);
                                                                                g_44 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, v_11, g_44);
                                                                                t = r_0(t);
                                                                                LocalPopChoice(h_20);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = g_20;
                                                                                {
                                                                                  ATerm j_20 = t;
                                                                                  int k_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = x_11;
                                                                                      if((y_11 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(k_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = j_20;
                                                                                      t = z_11;
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
                                                                              t = x_11;
                                                                              if((y_11 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(m_20);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = l_20;
                                                                              t = z_11;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  y_11 = ATgetArgument(t, 0);
                                                                  x_11 = ATgetArgument(t, 1);
                                                                  t_10 = ATgetArgument(t, 2);
                                                                  t = t_10;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm o_20 = t;
                                                                      int p_20 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, x_11);
                                                                          t = r_0(t);
                                                                          LocalPopChoice(p_20);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = o_20;
                                                                          t = z_11;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = z_11;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      y_11 = ATgetArgument(t, 0);
                                                                      x_11 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm q_20 = t;
                                                                        int r_20 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, y_11, x_11);
                                                                            t = r_0(t);
                                                                            LocalPopChoice(r_20);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = q_20;
                                                                            t = z_11;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          y_11 = ATgetArgument(t, 0);
                                                                          t = y_11;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              v_11 = ATgetFirst((ATermList) t);
                                                                              w_11 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm s_20 = t;
                                                                                int t_20 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm v_44 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, w_11);
                                                                                    t = r_0(t);
                                                                                    v_44 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, v_11, v_44);
                                                                                    t = r_0(t);
                                                                                    LocalPopChoice(t_20);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = s_20;
                                                                                    t = z_11;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm u_20 = t;
                                                                                  int v_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_z_5;
                                                                                      t = r_0(t);
                                                                                      LocalPopChoice(v_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = u_20;
                                                                                      t = z_11;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = z_11;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              y_11 = ATgetArgument(t, 0);
                                                                              t = y_11;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  v_11 = ATgetFirst((ATermList) t);
                                                                                  w_11 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm w_20 = t;
                                                                                    int x_20 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm b_45 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, w_11);
                                                                                        t = r_0(t);
                                                                                        b_45 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, v_11, b_45);
                                                                                        t = r_0(t);
                                                                                        LocalPopChoice(x_20);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = w_20;
                                                                                        t = z_11;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm y_20 = t;
                                                                                      int z_20 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_z_5;
                                                                                          t = r_0(t);
                                                                                          LocalPopChoice(z_20);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = y_20;
                                                                                          t = z_11;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = z_11;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  y_11 = ATgetArgument(t, 0);
                                                                                  t = y_11;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      v_11 = ATgetFirst((ATermList) t);
                                                                                      w_11 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm a_21 = t;
                                                                                        int b_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm h_45 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, w_11);
                                                                                            t = r_0(t);
                                                                                            h_45 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, h_45);
                                                                                            t = r_0(t);
                                                                                            LocalPopChoice(b_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = a_21;
                                                                                            t = z_11;
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
                                                                                              t = term_t_5;
                                                                                              t = r_0(t);
                                                                                              LocalPopChoice(d_21);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = c_21;
                                                                                              t = z_11;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = z_11;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      y_11 = ATgetArgument(t, 0);
                                                                                      x_11 = ATgetArgument(t, 1);
                                                                                      t_10 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm f_21 = t;
                                                                                        int g_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,t_45 = NULL;
                                                                                            t = term_h_21;
                                                                                            t = bottomup_1_0(r_0, t);
                                                                                            p_45 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = r_0(t);
                                                                                            t_45 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(t_45), t_10);
                                                                                            t = r_0(t);
                                                                                            r_45 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(r_45), y_11);
                                                                                            t = r_0(t);
                                                                                            q_45 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, p_45, q_45);
                                                                                            t = r_0(t);
                                                                                            o_45 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, x_11, o_45);
                                                                                            t = r_0(t);
                                                                                            LocalPopChoice(g_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = f_21;
                                                                                            t = z_11;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          y_11 = ATgetArgument(t, 0);
                                                                                          x_11 = ATgetArgument(t, 1);
                                                                                          t_10 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm i_21 = t;
                                                                                            int j_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, x_11);
                                                                                                t = r_0(t);
                                                                                                z_45 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, t_10);
                                                                                                t = r_0(t);
                                                                                                c_46 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = r_0(t);
                                                                                                d_46 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(d_46), c_46);
                                                                                                t = r_0(t);
                                                                                                b_46 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(b_46), y_11);
                                                                                                t = r_0(t);
                                                                                                a_46 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(a_46), z_45);
                                                                                                t = r_0(t);
                                                                                                y_45 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, y_45);
                                                                                                t = r_0(t);
                                                                                                LocalPopChoice(j_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = i_21;
                                                                                                t = z_11;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              y_11 = ATgetArgument(t, 0);
                                                                                              x_11 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm l_21 = t;
                                                                                                int m_21 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm h_46 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, x_11);
                                                                                                    t = r_0(t);
                                                                                                    h_46 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, h_46);
                                                                                                    t = r_0(t);
                                                                                                    LocalPopChoice(m_21);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = l_21;
                                                                                                    t = z_11;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  y_11 = ATgetArgument(t, 0);
                                                                                                  x_11 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm n_21 = t;
                                                                                                    int q_21 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm l_46 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, y_11);
                                                                                                        t = r_0(t);
                                                                                                        l_46 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, l_46, x_11);
                                                                                                        t = r_0(t);
                                                                                                        LocalPopChoice(q_21);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = n_21;
                                                                                                        t = z_11;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      y_11 = ATgetArgument(t, 0);
                                                                                                      x_11 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm r_21 = t;
                                                                                                        int s_21 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm p_46 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, x_11);
                                                                                                            t = r_0(t);
                                                                                                            p_46 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, p_46, y_11);
                                                                                                            t = r_0(t);
                                                                                                            LocalPopChoice(s_21);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = r_21;
                                                                                                            t = z_11;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          y_11 = ATgetArgument(t, 0);
                                                                                                          x_11 = ATgetArgument(t, 1);
                                                                                                          t = x_11;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              t_11 = ATgetArgument(t, 0);
                                                                                                              u_11 = ATgetArgument(t, 1);
                                                                                                              t = y_11;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = x_11;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm t_21 = t;
                                                                                                                  int u_21 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm d_47 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, y_11, t_11);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      d_47 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, d_47, u_11);
                                                                                                                      t = bottomup_1_0(r_0, t);
                                                                                                                      LocalPopChoice(u_21);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = t_21;
                                                                                                                      t = z_11;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  t_11 = ATgetArgument(t, 0);
                                                                                                                  u_11 = ATgetArgument(t, 1);
                                                                                                                  p_11 = ATgetArgument(t, 2);
                                                                                                                  t = p_11;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = u_11;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = t_11;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              s_11 = ATgetArgument(t, 0);
                                                                                                                              t = y_11;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = x_11;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      v_11 = ATgetFirst((ATermList) t);
                                                                                                                                      w_11 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = w_11;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = v_11;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              r_11 = ATgetArgument(t, 0);
                                                                                                                                              l_11 = ATgetArgument(t, 1);
                                                                                                                                              x_10 = ATgetArgument(t, 2);
                                                                                                                                              g_11 = ATgetArgument(t, 3);
                                                                                                                                              t = x_10;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = l_11;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm w_21 = t;
                                                                                                                                                      int x_21 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = s_11;
                                                                                                                                                          if((r_11 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = g_11;
                                                                                                                                                          {
                                                                                                                                                            ATerm y_21 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm l_1 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm z_21 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(z_21, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((r_11 != ATgetArgument(z_21, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(z_21, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm a_22 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(a_22) != AT_LIST) || !(ATisEmpty(a_22))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm b_22 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(b_22) != AT_LIST) || !(ATisEmpty(b_22))))
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
                                                                                                                                                                t = y_21;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = g_11;
                                                                                                                                                          t = bottomup_1_0(r_0, t);
                                                                                                                                                          LocalPopChoice(x_21);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = w_21;
                                                                                                                                                          t = z_11;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = z_11;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = z_11;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = z_11;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = z_11;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = z_11;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = y_11;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = x_11;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = z_11;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = y_11;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = x_11;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = z_11;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = y_11;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = x_11;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = z_11;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = y_11;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = x_11;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = z_11;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              y_11 = ATgetArgument(t, 0);
                                                                                                              x_11 = ATgetArgument(t, 1);
                                                                                                              t = y_11;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = x_11;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = z_11;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = z_11;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  }
                                              }
                                          }
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
ATerm map_1_0 (ATerm u_116 (ATerm), ATerm t)
{
  static ATerm i_49 (ATerm t)
  {
    ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL;
    f_49 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_49;
      }
    else
      {
        ATerm f_3 = NULL,i_3 = NULL,j_3 = NULL,x_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_49 = ATgetFirst((ATermList) t);
            h_49 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_49);
        f_3 = t;
        t = g_49;
        t = u_116(t);
        i_3 = t;
        t = h_49;
        t = i_49(t);
        j_3 = t;
        t = (ATerm) ATinsert(CheckATermList(j_3), i_3);
        x_0 = t;
        t = SSLsetAnnotations(x_0, f_3);
      }
    return(t);
  }
  t = i_49(t);
  return(t);
}
static ATerm y_10 (ATerm e_43, ATerm f_43, ATerm t)
{
  ATerm k_49 = NULL;
  t = SSL_fputc(e_43, f_43);
  k_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_49);
  return(t);
}
static ATerm z_10 (ATerm j_48, ATerm k_48, ATerm t)
{
  ATerm l_49 = NULL;
  t = SSL_write_term_to_stream_text(j_48, k_48);
  l_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_49);
  return(t);
}
static ATerm b_11 (ATerm a_111 (ATerm), ATerm r_419, ATerm n_48, ATerm t)
{
  ATerm m_49 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_419, term_c_22);
  t = e_11(t);
  m_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_49, n_48);
  t = a_111(t);
  t = fclose_0_0(t);
  t = n_48;
  return(t);
}
static ATerm a_11 (ATerm f_48, ATerm g_48, ATerm t)
{
  ATerm p_49 = NULL;
  t = SSL_write_term_to_stream_baf(f_48, g_48);
  p_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_49);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_22 = ATgetArgument(t, 0);
      if(match_cons(d_22, sym_Stream_1))
        {
          s_49 = ATgetArgument(d_22, 0);
        }
      else
        _fail(t);
      t_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(s_49, t_49, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_22 = ATgetArgument(t, 0);
      if(match_cons(e_22, sym_Stream_1))
        {
          x_49 = ATgetArgument(e_22, 0);
        }
      else
        _fail(t);
      y_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(x_49, y_49, t);
  u_49 = t;
  t = term_f_22;
  v_49 = t;
  t = u_49;
  if(match_cons(t, sym_Stream_1))
    {
      w_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_f_22, u_49);
  t = y_10(v_49, w_49, t);
  return(t);
}
ATerm output_1_0 (ATerm e_123 (ATerm), ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL;
  t = e_123(t);
  r_49 = t;
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_22;
        t = get_config_0_0(t);
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        t = term_j_22;
      }
  }
  q_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_49, r_49);
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_22;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, q_49, r_49);
        LocalPopChoice(m_22);
        if(match_cons(t, sym__2))
          {
            ATerm p_22 = ATgetArgument(t, 0);
            ATerm q_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_11(n_1, q_49, r_49, t);
      }
    else
      {
        t = l_22;
        if(match_cons(t, sym__2))
          {
            ATerm r_22 = ATgetArgument(t, 0);
            ATerm s_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_11(o_1, q_49, r_49, t);
      }
  }
  return(t);
}
static ATerm n_50 (ATerm g_50, ATerm t)
{
  t = SSL_fclose(g_50);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL;
  l_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_50 = ATgetArgument(t, 0);
      {
        ATerm u_22 = t;
        int v_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_50);
            LocalPopChoice(v_22);
          }
        else
          {
            t = u_22;
            t = n_50(l_50, t);
          }
      }
    }
  else
    {
      t = n_50(l_50, t);
    }
  return(t);
}
static ATerm c_11 (ATerm l_48, ATerm t)
{
  t = SSL_read_term_from_stream(l_48);
  return(t);
}
static ATerm d_11 (ATerm g_43, ATerm h_43, ATerm t)
{
  ATerm o_50 = NULL;
  t = SSL_fopen(g_43, h_43);
  o_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_50);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_50 = NULL;
  t = SSL_stdin_stream();
  p_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_50);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_50 = NULL;
  t = SSL_stdout_stream();
  q_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_50);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_50 = NULL;
  t = SSL_stderr_stream();
  r_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_50);
  return(t);
}
static ATerm d_52 (ATerm y_50, ATerm t)
{
  ATerm z_50 = NULL;
  t = SSL_explode_term(y_50);
  if(match_cons(t, sym__2))
    {
      ATerm w_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_22 = ATgetArgument(t, 1);
        if(((ATgetType(x_22) == AT_LIST) && !(ATisEmpty(x_22))))
          {
            z_50 = ATgetFirst((ATermList) x_22);
            {
              ATerm y_22 = (ATerm) ATgetNext((ATermList) x_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_50;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_50;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_50;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_50;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm e_52 (ATerm c_51, ATerm d_51, ATerm e_51, ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,n_51 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(e_51);
  h_51 = t;
  t = c_51;
  if(match_cons(t, sym_Path_1))
    {
      n_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_51, d_51);
  b_1 = t;
  t = SSLsetAnnotations(b_1, h_51);
  if(match_cons(t, sym__2))
    {
      f_51 = ATgetArgument(t, 0);
      g_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11(f_51, g_51, t);
  return(t);
}
static ATerm f_52 (ATerm p_51, ATerm q_51, ATerm r_51, ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL,v_51 = NULL,y_51 = NULL,d_1 = NULL;
  t = SSLgetAnnotations(r_51);
  v_51 = t;
  t = SSL_is_string(p_51);
  y_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_51, q_51);
  d_1 = t;
  t = SSLsetAnnotations(d_1, v_51);
  if(match_cons(t, sym__2))
    {
      s_51 = ATgetArgument(t, 0);
      t_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11(s_51, t_51, t);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL;
  a_52 = t;
  if(match_cons(t, sym__2))
    {
      b_52 = ATgetArgument(t, 0);
      c_52 = ATgetArgument(t, 1);
      {
        ATerm z_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_52(a_52, t);
            LocalPopChoice(a_23);
          }
        else
          {
            t = z_22;
            {
              ATerm b_23 = t;
              int c_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_52(b_52, c_52, a_52, t);
                  LocalPopChoice(c_23);
                }
              else
                {
                  t = b_23;
                  t = f_52(b_52, c_52, a_52, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_52(a_52, t);
    }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_d_23;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL;
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_52 = NULL;
      j_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_52, term_h_23);
      t = e_11(t);
      LocalPopChoice(g_23);
    }
  else
    {
      t = f_23;
      t = debug_1_0(r_1, t);
      _fail(t);
    }
  h_52 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(i_52, t);
  g_52 = t;
  t = h_52;
  t = fclose_0_0(t);
  t = g_52;
  return(t);
}
ATerm input_1_0 (ATerm f_123 (ATerm), ATerm t)
{
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_23;
      t = get_config_0_0(t);
      LocalPopChoice(j_23);
    }
  else
    {
      t = i_23;
      t = term_m_23;
    }
  t = ReadFromFile_0_0(t);
  t = f_123(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL;
  l_52 = t;
  t = term_n_23;
  t = whoami_0_0(t);
  m_52 = t;
  t = term_o_23;
  o_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_23), m_52), term_q_23);
  p_52 = t;
  t = SSL_printnl(o_52, p_52);
  t = term_s_23;
  n_52 = t;
  t = SSL_exit(n_52);
  t = l_52;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm r_52 = NULL;
  r_52 = t;
  if(match_string(t, "-k"))
    {
      t = r_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_52;
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL;
  s_52 = t;
  t = SSL_string_to_int(s_52);
  t_52 = t;
  t = term_t_23;
  u_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_23, t_52);
  t = m_11(u_52, t_52, t);
  t = s_52;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_u_23;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_1, t_1, u_1, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm w_52 = NULL;
  w_52 = t;
  if(match_string(t, "-S"))
    {
      t = w_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_52;
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL;
  t = term_v_23;
  x_52 = t;
  t = term_w_23;
  y_52 = t;
  t = term_x_23;
  t = m_11(x_52, y_52, t);
  t = term_z_23;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_a_24;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm z_52 = NULL,c_53 = NULL,d_53 = NULL;
  z_52 = t;
  t = SSL_string_to_int(z_52);
  c_53 = t;
  t = term_v_23;
  d_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_23, c_53);
  t = m_11(d_53, c_53, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_52);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_b_24;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL;
  t = term_c_24;
  e_53 = t;
  t = term_n_23;
  f_53 = t;
  t = term_e_24;
  t = m_11(e_53, f_53, t);
  t = term_f_24;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_g_24;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_1, y_1, c_2, t);
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
      {
        ATerm j_24 = t;
        int k_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_2, e_2, g_2, t);
            LocalPopChoice(k_24);
          }
        else
          {
            t = j_24;
            t = Option_3_0(q_2, r_2, s_2, t);
          }
      }
    }
  return(t);
}
static ATerm m_11 (ATerm y_46, ATerm z_46, ATerm t)
{
  ATerm g_53 = NULL;
  t = term_l_24;
  g_53 = t;
  t = SSL_table_put(g_53, y_46, z_46);
  t = (ATerm) ATmakeAppl(sym__3, term_l_24, y_46, z_46);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm k_53 = NULL,m_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_53 = NULL,p_53 = NULL,q_53 = NULL;
      t = term_n_23;
      t = e_0(t);
      n_53 = t;
      t = term_m_24;
      p_53 = t;
      t = term_n_24;
      q_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_24, term_n_24, n_53);
      t = k_11(p_53, q_53, n_53, t);
      _fail(t);
    }
  else
    {
      ATerm t_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_53 = ATgetFirst((ATermList) t);
          m_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_53;
      t = c_0(t);
      t = term_n_23;
      t = d_0(t);
      t_53 = t;
      t = (ATerm) ATinsert(CheckATermList(m_53), t_53);
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm v_53 = NULL;
  v_53 = t;
  if(match_string(t, "-o"))
    {
      t = v_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_53;
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL;
  w_53 = t;
  t = term_i_22;
  x_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_22, w_53);
  t = m_11(x_53, w_53, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_53);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_p_24;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_2, u_2, v_2, t);
  return(t);
}
static ATerm k_11 (ATerm j_51, ATerm k_51, ATerm i_51, ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
  z_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_51, k_51);
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_24 = ATgetArgument(t, 0);
            ATerm t_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_51, k_51);
        t = j_11(j_51, k_51, t);
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        t = (ATerm) ATempty;
      }
  }
  a_54 = t;
  t = (ATerm) ATinsert(CheckATermList(a_54), i_51);
  b_54 = t;
  t = SSL_table_put(j_51, k_51, b_54);
  t = z_53;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_54 = NULL,q_54 = NULL,r_54 = NULL;
      t = term_n_23;
      t = n_0(t);
      n_54 = t;
      t = term_m_24;
      q_54 = t;
      t = term_n_24;
      r_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_24, term_n_24, n_54);
      t = k_11(q_54, r_54, n_54, t);
      _fail(t);
    }
  else
    {
      ATerm v_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_54 = ATgetFirst((ATermList) t);
          k_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_54;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_54 = ATgetFirst((ATermList) t);
          m_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_54;
      t = k_0(t);
      t = l_54;
      t = l_0(t);
      v_54 = t;
      t = (ATerm) ATinsert(CheckATermList(m_54), v_54);
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm x_54 = NULL;
  x_54 = t;
  if(match_string(t, "-i"))
    {
      t = x_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_54;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL;
  y_54 = t;
  t = term_l_23;
  z_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_23, y_54);
  t = m_11(z_54, y_54, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_54);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_2, x_2, y_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_23;
  t = whoami_0_0(t);
  a_55 = t;
  t = term_o_23;
  c_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_24), a_55);
  d_55 = t;
  t = SSL_printnl(c_55, d_55);
  t = term_s_23;
  b_55 = t;
  t = SSL_exit(b_55);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_w_24;
  t = get_config_0_0(t);
  return(t);
}
static ATerm f_11 (ATerm n_49, ATerm o_49, ATerm t)
{
  ATerm x_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_49, o_49);
      LocalPopChoice(y_24);
    }
  else
    {
      t = x_24;
      t = SSL_addr(n_49, o_49);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_115 (ATerm), ATerm l_115 (ATerm), ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL;
  f_55 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_55;
      t = k_115(t);
    }
  else
    {
      ATerm k_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_55 = ATgetFirst((ATermList) t);
          h_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_55;
      t = foldr_2_0(k_115, l_115, t);
      k_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_55, k_55);
      t = l_115(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_w_23;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL;
  if(match_cons(t, sym__2))
    {
      y_3 = ATgetArgument(t, 0);
      z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11(y_3, z_3, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_55 = NULL,u_3 = NULL,v_3 = NULL;
  t = times_0_0(t);
  v_3 = t;
  t = SSL_explode_term(v_3);
  if(match_cons(t, sym__2))
    {
      ATerm z_24 = ATgetArgument(t, 0);
      u_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3;
  t = foldr_2_0(z_2, a_3, t);
  n_55 = t;
  t = SSL_TicksToSeconds(n_55);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL;
  y_55 = t;
  if(match_cons(t, sym__2))
    {
      z_55 = ATgetArgument(t, 0);
      a_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_56;
        if((z_55 != t))
          {
            _fail(t);
          }
        t = y_55;
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
        t = (ATerm) ATmakeAppl(sym__2, z_55, a_56);
        {
          ATerm g_25 = t;
          int k_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_55, a_56);
              LocalPopChoice(k_25);
            }
          else
            {
              t = g_25;
              t = SSL_gtr(z_55, a_56);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, z_55, a_56);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_108 (ATerm), ATerm t)
{
  ATerm j_56 = NULL;
  j_56 = t;
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_56 = NULL;
        t = term_v_23;
        t = get_config_0_0(t);
        l_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_56, term_s_23);
        t = geq_0_0(t);
        t = j_56;
        t = x_108(t);
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        t = j_56;
      }
  }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL,q_56 = NULL,r_56 = NULL;
  t = run_time_0_0(t);
  n_56 = t;
  t = term_n_23;
  t = whoami_0_0(t);
  o_56 = t;
  t = term_o_23;
  q_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_25), n_56), term_o_25), o_56);
  r_56 = t;
  t = SSL_printnl(q_56, r_56);
  t = (ATerm) ATmakeAppl(sym__2, term_o_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_25), n_56), term_o_25), o_56));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_23;
  s_56 = t;
  t = SSL_exit(s_56);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL;
  d_57 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = d_57;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          c_57 = ATgetArgument(t, 0);
          {
            ATerm l_4 = NULL,x_3 = NULL;
            t = SSLgetAnnotations(d_57);
            l_4 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, c_57);
            x_3 = t;
            t = SSLsetAnnotations(x_3, l_4);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = d_57;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_122 (ATerm), ATerm t)
{
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_25;
      t = get_config_0_0(t);
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      t = fetch_1_0(c_3, t);
    }
  t = v_122(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_57 = ATgetFirst((ATermList) t);
      h_57 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_57 = NULL,m_57 = NULL;
        static ATerm d_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(l_57)), not_null(m_57));
          return(t);
        }
        t = h_57;
        t = i_0(t);
        if(((l_57 != NULL) && (l_57 != t)))
          _fail(t);
        else
          l_57 = t;
        t = g_57;
        t = g_0(t);
        if(((m_57 != NULL) && (m_57 != t)))
          _fail(t);
        else
          m_57 = t;
        t = h_57;
        t = reverse_acc_2_0(g_0, d_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_23;
      t = i_0(t);
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL,w_6 = NULL;
  s_57 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_57);
  q_57 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_57);
  w_6 = t;
  t = SSLsetAnnotations(w_6, q_57);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm u_57 = NULL;
  u_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_57), term_u_25);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL;
  ATerm v_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_24;
      t = get_config_0_0(t);
      LocalPopChoice(w_25);
    }
  else
    {
      t = v_25;
      t = fetch_1_0(e_3, t);
    }
  t = term_x_25;
  t = echo_0_0(t);
  t = term_m_24;
  o_57 = t;
  t = term_n_24;
  p_57 = t;
  t = term_y_25;
  t = j_11(o_57, p_57, t);
  t = reverse_acc_2_0(_id, g_3, t);
  t = map_1_0(h_3, t);
  return(t);
}
ATerm fetch_1_0 (ATerm e_117 (ATerm), ATerm t)
{
  static ATerm r_58 (ATerm t)
  {
    ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL;
    o_58 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_58 = ATgetFirst((ATermList) t);
        q_58 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_25 = t;
      int a_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_4 = NULL,w_4 = NULL,y_6 = NULL;
          t = SSLgetAnnotations(o_58);
          t_4 = t;
          t = p_58;
          t = e_117(t);
          w_4 = t;
          t = (ATerm) ATinsert(CheckATermList(q_58), w_4);
          y_6 = t;
          t = SSLsetAnnotations(y_6, t_4);
          LocalPopChoice(a_26);
        }
      else
        {
          t = z_25;
          {
            ATerm e_5 = NULL,h_5 = NULL,z_6 = NULL;
            t = SSLgetAnnotations(o_58);
            e_5 = t;
            t = q_58;
            t = r_58(t);
            h_5 = t;
            t = (ATerm) ATinsert(CheckATermList(h_5), p_58);
            z_6 = t;
            t = SSLsetAnnotations(z_6, e_5);
          }
        }
    }
    return(t);
  }
  t = r_58(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL;
  v_58 = t;
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_58;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_26 = ATgetFirst((ATermList) t);
                ATerm e_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_58;
          }
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        t = (ATerm) ATinsert(ATempty, v_58);
      }
  }
  w_58 = t;
  t = term_j_22;
  x_58 = t;
  t = SSL_printnl(x_58, w_58);
  t = v_58;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_w_24;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm i_11 (ATerm x_41, ATerm y_41, ATerm t)
{
  t = SSL_strcat(x_41, y_41);
  return(t);
}
ATerm debug_1_0 (ATerm y_110 (ATerm), ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL;
  b_59 = t;
  t = y_110(t);
  c_59 = t;
  t = term_o_23;
  d_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_59), c_59);
  e_59 = t;
  t = SSL_printnl(d_59, e_59);
  t = b_59;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_h_26;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_59 = NULL;
      l_59 = t;
      t = SSL_is_string(l_59);
      LocalPopChoice(k_26);
    }
  else
    {
      t = i_26;
      {
        ATerm l_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_3, t);
            LocalPopChoice(m_26);
          }
        else
          {
            t = l_26;
            {
              ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL;
              r_59 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_59 = ATgetArgument(t, 0);
                  t = s_59;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_59 = ATgetArgument(t, 0);
                      t = s_59;
                      {
                        ATerm n_26 = t;
                        int o_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(o_26);
                          }
                        else
                          {
                            t = n_26;
                            t = debug_1_0(l_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm x_59 = NULL,y_59 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_59 = ATgetArgument(t, 0);
                          t_59 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_59;
                      t = eval_config_0_0(t);
                      x_59 = t;
                      t = t_59;
                      t = eval_config_0_0(t);
                      y_59 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_59, y_59);
                      t = i_11(x_59, y_59, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_11 (ATerm a_53, ATerm b_53, ATerm t)
{
  t = SSL_table_get(a_53, b_53);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL;
  c_60 = t;
  t = term_l_24;
  d_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_24, c_60);
  t = j_11(d_60, c_60, t);
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_60 = NULL,f_60 = NULL;
        t = eval_config_0_0(t);
        e_60 = t;
        t = term_l_24;
        f_60 = t;
        t = SSL_table_put(f_60, c_60, e_60);
        t = e_60;
        LocalPopChoice(q_26);
      }
    else
      {
        t = p_26;
      }
  }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm i_60 = NULL,j_60 = NULL;
  t = term_r_26;
  i_60 = t;
  t = term_n_23;
  j_60 = t;
  t = term_s_26;
  t = m_11(i_60, j_60, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_t_26;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL;
  t = term_r_26;
  m_60 = t;
  t = term_n_23;
  n_60 = t;
  t = term_s_26;
  t = m_11(m_60, n_60, t);
  t = term_u_26;
  k_60 = t;
  t = term_n_23;
  l_60 = t;
  t = term_w_26;
  t = m_11(k_60, l_60, t);
  t = term_x_26;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_y_26;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_3, n_3, o_3, t);
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      t = Option_3_0(p_3, q_3, r_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_82 (ATerm), ATerm c_82 (ATerm), ATerm t)
{
  ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,c_7 = NULL;
  t_60 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_60 = ATgetFirst((ATermList) t);
      q_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_60);
  o_60 = t;
  t = p_60;
  t = b_82(t);
  r_60 = t;
  t = q_60;
  t = c_82(t);
  s_60 = t;
  t = (ATerm) ATinsert(CheckATermList(s_60), r_60);
  c_7 = t;
  t = SSLsetAnnotations(c_7, o_60);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_124 (ATerm), ATerm t)
{
  ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,d_61 = NULL,e_61 = NULL,e_7 = NULL;
  y_60 = t;
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_27;
        t = y_124(t);
        LocalPopChoice(c_27);
      }
    else
      {
        t = b_27;
      }
  }
  t = y_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_61 = ATgetFirst((ATermList) t);
      b_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_60);
  z_60 = t;
  t = term_w_24;
  e_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_24, a_61);
  t = m_11(e_61, a_61, t);
  t = b_61;
  {
    static ATerm o_61 (ATerm t)
    {
      ATerm e_27 = t;
      int f_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_27 = t;
          int h_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_61 = NULL;
              h_61 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_61;
              LocalPopChoice(h_27);
            }
          else
            {
              t = g_27;
              t = y_124(t);
              t = Cons_2_0(_id, o_61, t);
            }
          LocalPopChoice(f_27);
        }
      else
        {
          t = e_27;
          {
            ATerm k_61 = NULL,l_61 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_61 = ATgetFirst((ATermList) t);
                l_61 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_61), (ATerm) ATmakeAppl(sym_Undefined_1, k_61));
          }
        }
      return(t);
    }
    t = o_61(t);
  }
  d_61 = t;
  t = (ATerm) ATinsert(CheckATermList(d_61), (ATerm) ATmakeAppl(sym_Program_1, a_61));
  e_7 = t;
  t = SSLsetAnnotations(e_7, z_60);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm a_62 = NULL;
  a_62 = t;
  if(match_string(t, "--help"))
    {
      t = a_62;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_62;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_62;
        }
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL;
  t = term_t_25;
  b_62 = t;
  t = term_n_23;
  c_62 = t;
  t = term_i_27;
  t = m_11(b_62, c_62, t);
  t = term_j_27;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_k_27;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm x_124 (ATerm), ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL;
  v_61 = t;
  t = term_m_24;
  x_61 = t;
  t = term_n_24;
  y_61 = t;
  t = (ATerm) ATempty;
  z_61 = t;
  t = SSL_table_put(x_61, y_61, z_61);
  t = v_61;
  {
    static ATerm s_3 (ATerm t)
    {
      ATerm l_27 = t;
      int n_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_124(t);
          LocalPopChoice(n_27);
        }
      else
        {
          t = l_27;
          {
            ATerm o_27 = t;
            int p_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_3, w_3, a_4, t);
                LocalPopChoice(p_27);
              }
            else
              {
                t = o_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_3, t);
  }
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_62 = NULL;
        j_62 = t;
        {
          ATerm s_27 = t;
          int t_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_5 = NULL;
              t = j_62;
              {
                ATerm u_27 = t;
                int v_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_t_25;
                    t = get_config_0_0(t);
                    LocalPopChoice(v_27);
                  }
                else
                  {
                    t = u_27;
                    t = fetch_1_0(b_4, t);
                  }
              }
              t = j_62;
              t = default_system_usage_0_0(t);
              t = term_w_23;
              w_5 = t;
              t = SSL_exit(w_5);
              LocalPopChoice(t_27);
            }
          else
            {
              t = s_27;
              {
                ATerm a_6 = NULL;
                t = term_r_26;
                t = get_config_0_0(t);
                t = j_62;
                t = default_system_about_0_0(t);
                t = term_w_23;
                a_6 = t;
                t = SSL_exit(a_6);
              }
            }
        }
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
        {
          ATerm w_27 = t;
          int y_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_62 = NULL,q_62 = NULL,r_62 = NULL;
              static ATerm c_4 (ATerm t)
              {
                ATerm s_62 = NULL,t_62 = NULL,u_62 = NULL,g_7 = NULL;
                u_62 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    t_62 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_62);
                s_62 = t;
                t = t_62;
                if(((t_61 != NULL) && (t_61 != t)))
                  _fail(t);
                else
                  t_61 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, t_62);
                g_7 = t;
                t = SSLsetAnnotations(g_7, s_62);
                return(t);
              }
              t = fetch_1_0(c_4, t);
              t = term_o_23;
              q_62 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_61)), term_z_27);
              r_62 = t;
              t = SSL_printnl(q_62, r_62);
              t = (ATerm) ATmakeAppl(sym__2, term_o_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_61)), term_z_27));
              t = default_system_usage_0_0(t);
              t = term_s_23;
              p_62 = t;
              t = SSL_exit(p_62);
              LocalPopChoice(y_27);
            }
          else
            {
              t = w_27;
            }
        }
      }
  }
  u_61 = t;
  t = term_m_24;
  w_61 = t;
  t = SSL_table_destroy(w_61);
  t = u_61;
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_122 (ATerm), ATerm y_122 (ATerm), ATerm z_122 (ATerm), ATerm a_123 (ATerm), ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL;
  t = parse_options_1_0(x_122, t);
  a_63 = t;
  t = term_a_28;
  d_63 = t;
  t = SSL_table_create(d_63);
  t = term_a_28;
  b_63 = t;
  t = term_b_28;
  c_63 = t;
  t = SSL_table_put(b_63, c_63, a_63);
  t = a_63;
  t = z_122(t);
  {
    ATerm d_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_122, t);
        LocalPopChoice(e_28);
      }
    else
      {
        t = d_28;
        {
          ATerm f_28 = t;
          int g_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_123(t);
              t = report_success_0_0(t);
              LocalPopChoice(g_28);
            }
          else
            {
              t = f_28;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm h_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(j_28);
    }
  else
    {
      t = h_28;
      {
        ATerm k_28 = t;
        int l_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = Option_3_0(f_4, g_4, h_4, t);
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
                        t = verbose_option_0_0(t);
                        LocalPopChoice(p_28);
                      }
                    else
                      {
                        t = o_28;
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
static ATerm e_4 (ATerm t)
{
  t = input_1_0(i_4, t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm i_63 = NULL,j_63 = NULL;
  t = term_n_22;
  i_63 = t;
  t = term_n_23;
  j_63 = t;
  t = term_q_28;
  t = m_11(i_63, j_63, t);
  t = term_s_28;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_t_28;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = output_1_0(j_4, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,m_7 = NULL,l_7 = NULL,k_7 = NULL,j_7 = NULL;
  z_63 = t;
  if(match_cons(t, sym_Specification_1))
    {
      m_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_63);
  l_63 = t;
  t = m_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_63 = ATgetFirst((ATermList) t);
      p_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_63);
  n_63 = t;
  t = p_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_63 = ATgetFirst((ATermList) t);
      t_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_63);
  r_63 = t;
  t = s_63;
  if(match_cons(t, sym_Strategies_1))
    {
      w_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_63);
  v_63 = t;
  t = w_63;
  t = map_1_0(k_4, t);
  x_63 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, x_63);
  j_7 = t;
  t = SSLsetAnnotations(j_7, v_63);
  y_63 = t;
  t = t_63;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_63), y_63);
  k_7 = t;
  t = SSLsetAnnotations(k_7, r_63);
  u_63 = t;
  t = (ATerm) ATinsert(CheckATermList(u_63), o_63);
  l_7 = t;
  t = SSLsetAnnotations(l_7, n_63);
  q_63 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, q_63);
  m_7 = t;
  t = SSLsetAnnotations(m_7, l_63);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL;
  s_64 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      o_64 = ATgetArgument(t, 0);
      p_64 = ATgetArgument(t, 1);
      q_64 = ATgetArgument(t, 2);
      r_64 = ATgetArgument(t, 3);
      {
        ATerm u_28 = t;
        int v_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_6 = NULL,m_6 = NULL,i_7 = NULL;
            t = SSLgetAnnotations(s_64);
            h_6 = t;
            t = r_64;
            t = simplify_0_0(t);
            t = alltd_1_0(m_4, t);
            m_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, o_64, p_64, q_64, m_6);
            i_7 = t;
            t = SSLsetAnnotations(i_7, h_6);
            LocalPopChoice(v_28);
          }
        else
          {
            t = u_28;
            t = s_64;
          }
      }
    }
  else
    {
      t = s_64;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL;
  p_6 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_6);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_28 = ATgetFirst((ATermList) t);
      ATerm x_28 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(x_28) != AT_LIST) || !(ATisEmpty(x_28))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, o_6);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(d_4, default_usage_0_0, _id, e_4, t);
  return(t);
}
