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
ATerm term_k_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_n_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_u_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_u_25;
ATerm term_s_25;
ATerm term_q_25;
ATerm term_l_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
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
ATerm term_h_23;
ATerm term_g_23;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_c_22;
ATerm term_y_21;
ATerm term_d_21;
ATerm term_w_5;
ATerm term_o_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__2, term_f_22, term_g_22);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym__2, term_f_22, term_m_22);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym__2, term_f_22, term_l_23);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_w_23, term_x_23);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_23);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym__2, term_d_24, term_p_23);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym__2, term_f_22, term_v_24);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym__2, term_f_22, term_w_23);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym__2, term_f_22, term_q_25);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym__2, term_m_24, term_n_24);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym__2, term_i_26, term_p_23);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym__2, term_l_26, term_p_23);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym__2, term_q_25, term_p_23);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym__2, term_f_22, term_i_26);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym__2, term_m_22, term_p_23);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm bottomup_1_0 (ATerm j_103 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm m_104 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm j_124 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm f_2 (ATerm v_1, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm i_103 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm t);
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
ATerm map_1_0 (ATerm s_123 (ATerm), ATerm t);
static ATerm q_10 (ATerm v_43, ATerm w_43, ATerm t);
static ATerm r_10 (ATerm w_48, ATerm x_48, ATerm t);
static ATerm t_10 (ATerm m_117 (ATerm), ATerm o_428, ATerm c_49, ATerm t);
static ATerm s_10 (ATerm s_48, ATerm t_48, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm output_1_0 (ATerm j_130 (ATerm), ATerm t);
static ATerm z_50 (ATerm t_50, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm u_10 (ATerm y_48, ATerm t);
static ATerm v_10 (ATerm o_42, ATerm p_42, ATerm t);
static ATerm w_10 (ATerm x_43, ATerm y_43, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_52 (ATerm l_51, ATerm t);
static ATerm p_52 (ATerm p_51, ATerm q_51, ATerm r_51, ATerm t);
static ATerm r_52 (ATerm z_51, ATerm a_52, ATerm b_52, ATerm t);
static ATerm x_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm k_130 (ATerm), ATerm t);
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
static ATerm e_11 (ATerm q_47, ATerm r_47, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_11 (ATerm u_52, ATerm v_52, ATerm t_52, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm y_10 (ATerm c_50, ATerm d_50, ATerm t);
ATerm foldr_2_0 (ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm j_115 (ATerm), ATerm t);
static ATerm z_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm need_help_1_0 (ATerm a_130 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_124 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm b_11 (ATerm l_54, ATerm m_54, ATerm t);
static ATerm g_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm d_132 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm parse_options_1_0 (ATerm c_132 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm t);
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
ATerm bottomup_1_0 (ATerm j_103 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = bottomup_1_0(j_103, t);
    return(t);
  }
  t = SRTS_all(a_0, t);
  t = j_103(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm m_104 (ATerm), ATerm t)
{
  static ATerm o_2 (ATerm t)
  {
    ATerm p_0 = t;
    int j_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_104(t);
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
ATerm at_end_1_0 (ATerm j_124 (ATerm), ATerm t)
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
        t = j_124(t);
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
ATerm topdown_1_0 (ATerm i_103 (ATerm), ATerm t)
{
  static ATerm o_0 (ATerm t)
  {
    t = topdown_1_0(i_103, t);
    return(t);
  }
  t = i_103(t);
  t = SRTS_all(o_0, t);
  return(t);
}
ATerm genzip_4_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm t)
{
  static ATerm n_2 (ATerm t)
  {
    ATerm n_4 = t;
    int o_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_107(t);
        LocalPopChoice(o_4);
      }
    else
      {
        t = n_4;
        {
          ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,u_0 = NULL;
          t = v_107(t);
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
          t = x_107(t);
          k_2 = t;
          t = j_2;
          t = n_2(t);
          l_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_2, l_2);
          u_0 = t;
          t = SSLsetAnnotations(u_0, h_2);
          t = w_107(t);
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
  ATerm c_18 = NULL,d_18 = NULL,g_18 = NULL,k_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_4 = ATgetArgument(t, 0);
      if(((ATgetType(s_4) == AT_LIST) && !(ATisEmpty(s_4))))
        {
          c_18 = ATgetFirst((ATermList) s_4);
          d_18 = (ATerm) ATgetNext((ATermList) s_4);
        }
      else
        _fail(t);
      {
        ATerm t_4 = ATgetArgument(t, 1);
        if(((ATgetType(t_4) == AT_LIST) && !(ATisEmpty(t_4))))
          {
            g_18 = ATgetFirst((ATermList) t_4);
            k_18 = (ATerm) ATgetNext((ATermList) t_4);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_18, g_18), (ATerm) ATmakeAppl(sym__2, d_18, k_18));
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm l_18 = NULL,q_18 = NULL;
  if(match_cons(t, sym__2))
    {
      l_18 = ATgetArgument(t, 0);
      q_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_18), l_18);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL;
  if(match_cons(t, sym__2))
    {
      r_18 = ATgetArgument(t, 0);
      s_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, r_18), (ATerm) ATmakeAppl(sym_Match_1, s_18));
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
static ATerm d_1 (ATerm t)
{
  ATerm k_25 = NULL,n_25 = NULL,o_25 = NULL,r_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_4 = ATgetArgument(t, 0);
      if(((ATgetType(w_4) == AT_LIST) && !(ATisEmpty(w_4))))
        {
          k_25 = ATgetFirst((ATermList) w_4);
          n_25 = (ATerm) ATgetNext((ATermList) w_4);
        }
      else
        _fail(t);
      {
        ATerm y_4 = ATgetArgument(t, 1);
        if(((ATgetType(y_4) == AT_LIST) && !(ATisEmpty(y_4))))
          {
            o_25 = ATgetFirst((ATermList) y_4);
            r_25 = (ATerm) ATgetNext((ATermList) y_4);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_25, o_25), (ATerm) ATmakeAppl(sym__2, n_25, r_25));
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm t_25 = NULL,w_25 = NULL;
  if(match_cons(t, sym__2))
    {
      t_25 = ATgetArgument(t, 0);
      w_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_25), t_25);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm y_25 = NULL,c_26 = NULL;
  if(match_cons(t, sym__2))
    {
      y_25 = ATgetArgument(t, 0);
      c_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_25), (ATerm) ATmakeAppl(sym_Match_1, c_26));
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
        ATerm u_36 = NULL,v_36 = NULL;
        u_36 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm d_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        v_36 = t;
        t = SSLgetAnnotations(u_36);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_5 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) e_5) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm f_5 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(f_5) != AT_LIST) || !(ATisEmpty(f_5))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = v_36;
      }
    }
  else
    {
      t = z_4;
      {
        ATerm g_5 = t;
        int h_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm j_5 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) j_5) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm k_5 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(h_5);
            _fail(t);
          }
        else
          {
            t = g_5;
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
    ATerm d_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
    y_11 = t;
    if(match_cons(t, sym_Test_1))
      {
        x_11 = ATgetArgument(t, 0);
        t = x_11;
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
                  int q_5 = stack_ptr;
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
                      LocalPopChoice(q_5);
                    }
                  else
                    {
                      t = p_5;
                      t = y_11;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm r_5 = t;
                int v_5 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_w_5;
                    t = q_0(t);
                    LocalPopChoice(v_5);
                  }
                else
                  {
                    t = r_5;
                    {
                      ATerm x_5 = t;
                      int b_6 = stack_ptr;
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
                          LocalPopChoice(b_6);
                        }
                      else
                        {
                          t = x_5;
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
                      ATerm c_6 = t;
                      int d_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, u_11);
                          t = q_0(t);
                          LocalPopChoice(d_6);
                        }
                      else
                        {
                          t = c_6;
                          {
                            ATerm e_6 = t;
                            int f_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,m_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,i_14 = NULL;
                                t = y_11;
                                t = new_0_0(t);
                                f_13 = t;
                                t = bottomup_1_0(q_0, t);
                                b_14 = t;
                                t = (ATerm) ATempty;
                                t = q_0(t);
                                i_14 = t;
                                t = (ATerm) ATinsert(CheckATermList(i_14), b_14);
                                t = q_0(t);
                                g_13 = t;
                                t = f_13;
                                t = bottomup_1_0(q_0, t);
                                a_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, a_14);
                                t = q_0(t);
                                z_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, z_13);
                                t = q_0(t);
                                i_13 = t;
                                t = x_11;
                                t = bottomup_1_0(q_0, t);
                                p_13 = t;
                                t = f_13;
                                t = bottomup_1_0(q_0, t);
                                s_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, s_13);
                                t = q_0(t);
                                r_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, r_13);
                                t = q_0(t);
                                q_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_13, q_13);
                                t = q_0(t);
                                m_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_13, m_13);
                                t = q_0(t);
                                h_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, g_13, h_13);
                                t = q_0(t);
                                LocalPopChoice(f_6);
                              }
                            else
                              {
                                t = e_6;
                                t = y_11;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm g_6 = t;
                    int i_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_14 = NULL,p_14 = NULL,q_14 = NULL,s_14 = NULL,x_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
                        t = y_11;
                        t = new_0_0(t);
                        l_14 = t;
                        t = bottomup_1_0(q_0, t);
                        f_15 = t;
                        t = (ATerm) ATempty;
                        t = q_0(t);
                        g_15 = t;
                        t = (ATerm) ATinsert(CheckATermList(g_15), f_15);
                        t = q_0(t);
                        p_14 = t;
                        t = l_14;
                        t = bottomup_1_0(q_0, t);
                        e_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, e_15);
                        t = q_0(t);
                        d_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, d_15);
                        t = q_0(t);
                        s_14 = t;
                        t = x_11;
                        t = bottomup_1_0(q_0, t);
                        z_14 = t;
                        t = l_14;
                        t = bottomup_1_0(q_0, t);
                        c_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, c_15);
                        t = q_0(t);
                        b_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, b_15);
                        t = q_0(t);
                        a_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, z_14, a_15);
                        t = q_0(t);
                        x_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, s_14, x_14);
                        t = q_0(t);
                        q_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, p_14, q_14);
                        t = q_0(t);
                        LocalPopChoice(i_6);
                      }
                    else
                      {
                        t = g_6;
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
                ATerm j_6 = t;
                int k_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_w_5;
                    t = q_0(t);
                    LocalPopChoice(k_6);
                  }
                else
                  {
                    t = j_6;
                    t = y_11;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm l_6 = t;
                    int n_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_o_5;
                        t = q_0(t);
                        LocalPopChoice(n_6);
                      }
                    else
                      {
                        t = l_6;
                        t = y_11;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        u_11 = ATgetArgument(t, 0);
                        {
                          ATerm o_6 = t;
                          int p_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, u_11);
                              t = q_0(t);
                              LocalPopChoice(p_6);
                            }
                          else
                            {
                              t = o_6;
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
                                k_11 = ATgetArgument(t, 1);
                                t = x_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = w_11;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm q_6 = t;
                                        int r_6 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_w_5;
                                            t = q_0(t);
                                            LocalPopChoice(r_6);
                                          }
                                        else
                                          {
                                            t = q_6;
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
                                              ATerm s_6 = t;
                                              int t_6 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm n_17 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                  t = q_0(t);
                                                  n_17 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, n_17);
                                                  t = q_0(t);
                                                  LocalPopChoice(t_6);
                                                }
                                              else
                                                {
                                                  t = s_6;
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
                                                    l_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm v_6 = t;
                                                      int y_6 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, q_11, p_11);
                                                          {
                                                            ATerm z_6 = t;
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
                                                                t = z_6;
                                                              }
                                                          }
                                                          t = term_w_5;
                                                          t = bottomup_1_0(q_0, t);
                                                          LocalPopChoice(y_6);
                                                        }
                                                      else
                                                        {
                                                          t = v_6;
                                                          {
                                                            ATerm b_7 = t;
                                                            int d_7 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm b_18 = NULL;
                                                                t = p_11;
                                                                if((q_11 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, l_11, k_11);
                                                                t = genzip_4_0(t_0, v_0, x_0, y_0, t);
                                                                b_18 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, q_11, l_11)), t_11));
                                                                t = bottomup_1_0(q_0, t);
                                                                LocalPopChoice(d_7);
                                                              }
                                                            else
                                                              {
                                                                t = b_7;
                                                                {
                                                                  ATerm f_7 = t;
                                                                  int l_7 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm z_18 = NULL;
                                                                      t = r_11;
                                                                      if((u_11 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                                                                      t = q_0(t);
                                                                      z_18 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_18, t_11);
                                                                      t = q_0(t);
                                                                      LocalPopChoice(l_7);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = f_7;
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
                                                    ATerm m_7 = t;
                                                    int n_7 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm h_19 = NULL;
                                                        t = r_11;
                                                        if((u_11 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                                                        t = q_0(t);
                                                        h_19 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, h_19, t_11);
                                                        t = q_0(t);
                                                        LocalPopChoice(n_7);
                                                      }
                                                    else
                                                      {
                                                        t = m_7;
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
                                                      ATerm o_7 = t;
                                                      int p_7 = stack_ptr;
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
                                                          LocalPopChoice(p_7);
                                                        }
                                                      else
                                                        {
                                                          t = o_7;
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
                                                          ATerm q_7 = t;
                                                          int r_7 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_19 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = q_0(t);
                                                              q_19 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, q_19);
                                                              t = q_0(t);
                                                              LocalPopChoice(r_7);
                                                            }
                                                          else
                                                            {
                                                              t = q_7;
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
                                        ATerm s_7 = t;
                                        int t_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_w_5;
                                            t = q_0(t);
                                            LocalPopChoice(t_7);
                                          }
                                        else
                                          {
                                            t = s_7;
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
                                              ATerm u_7 = t;
                                              int v_7 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm z_19 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                  t = q_0(t);
                                                  z_19 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, z_19);
                                                  t = q_0(t);
                                                  LocalPopChoice(v_7);
                                                }
                                              else
                                                {
                                                  t = u_7;
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
                                                  ATerm w_7 = t;
                                                  int x_7 = stack_ptr;
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
                                                      LocalPopChoice(x_7);
                                                    }
                                                  else
                                                    {
                                                      t = w_7;
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
                                                      ATerm y_7 = t;
                                                      int z_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_20 = NULL;
                                                          t = r_11;
                                                          if((u_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                                                          t = q_0(t);
                                                          j_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_20, t_11);
                                                          t = q_0(t);
                                                          LocalPopChoice(z_7);
                                                        }
                                                      else
                                                        {
                                                          t = y_7;
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
                                                          ATerm a_8 = t;
                                                          int b_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = q_0(t);
                                                              u_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, u_20);
                                                              t = q_0(t);
                                                              LocalPopChoice(b_8);
                                                            }
                                                          else
                                                            {
                                                              t = a_8;
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
                                            ATerm c_8 = t;
                                            int d_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_5;
                                                t = q_0(t);
                                                LocalPopChoice(d_8);
                                              }
                                            else
                                              {
                                                t = c_8;
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
                                                  ATerm e_8 = t;
                                                  int f_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm f_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                      t = q_0(t);
                                                      f_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, f_21);
                                                      t = q_0(t);
                                                      LocalPopChoice(f_8);
                                                    }
                                                  else
                                                    {
                                                      t = e_8;
                                                      t = y_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm g_8 = t;
                                                int h_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm i_8 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(h_8);
                                                    {
                                                      ATerm j_8 = t;
                                                      int k_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm p_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, r_11);
                                                          t = q_0(t);
                                                          p_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_21, t_11);
                                                          t = q_0(t);
                                                          LocalPopChoice(k_8);
                                                        }
                                                      else
                                                        {
                                                          t = j_8;
                                                          t = y_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = g_8;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        t = u_11;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            q_11 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm l_8 = t;
                                                              int m_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm t_21 = NULL,u_21 = NULL;
                                                                  t = p_11;
                                                                  if((q_11 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, q_11);
                                                                  t = q_0(t);
                                                                  u_21 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, u_21);
                                                                  t = q_0(t);
                                                                  t_21 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_21, t_11);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(m_8);
                                                                }
                                                              else
                                                                {
                                                                  t = l_8;
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
                                                              ATerm n_8 = t;
                                                              int o_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm a_22 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                                  t = q_0(t);
                                                                  a_22 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, a_22);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(o_8);
                                                                }
                                                              else
                                                                {
                                                                  t = n_8;
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
                                            ATerm p_8 = t;
                                            int q_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_5;
                                                t = q_0(t);
                                                LocalPopChoice(q_8);
                                              }
                                            else
                                              {
                                                t = p_8;
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
                                                  ATerm r_8 = t;
                                                  int s_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm l_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                      t = q_0(t);
                                                      l_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, l_22);
                                                      t = q_0(t);
                                                      LocalPopChoice(s_8);
                                                    }
                                                  else
                                                    {
                                                      t = r_8;
                                                      t = y_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm t_8 = t;
                                                int u_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm v_8 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(u_8);
                                                    {
                                                      ATerm w_8 = t;
                                                      int x_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm p_22 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, r_11);
                                                          t = q_0(t);
                                                          p_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_22, t_11);
                                                          t = q_0(t);
                                                          LocalPopChoice(x_8);
                                                        }
                                                      else
                                                        {
                                                          t = w_8;
                                                          t = y_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = t_8;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm y_8 = t;
                                                          int z_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_22 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = q_0(t);
                                                              u_22 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, u_22);
                                                              t = q_0(t);
                                                              LocalPopChoice(z_8);
                                                            }
                                                          else
                                                            {
                                                              t = y_8;
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
                                            ATerm a_9 = t;
                                            int b_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_5;
                                                t = q_0(t);
                                                LocalPopChoice(b_9);
                                              }
                                            else
                                              {
                                                t = a_9;
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
                                                  ATerm c_9 = t;
                                                  int d_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm d_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                      t = q_0(t);
                                                      d_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, d_23);
                                                      t = q_0(t);
                                                      LocalPopChoice(d_9);
                                                    }
                                                  else
                                                    {
                                                      t = c_9;
                                                      t = y_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm e_9 = t;
                                                int f_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm g_9 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(f_9);
                                                    {
                                                      ATerm h_9 = t;
                                                      int i_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, r_11, m_11, n_11);
                                                          t = q_0(t);
                                                          j_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_23, t_11);
                                                          t = q_0(t);
                                                          LocalPopChoice(i_9);
                                                        }
                                                      else
                                                        {
                                                          t = h_9;
                                                          t = y_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = e_9;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_9 = t;
                                                          int k_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm o_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = q_0(t);
                                                              o_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, o_23);
                                                              t = q_0(t);
                                                              LocalPopChoice(k_9);
                                                            }
                                                          else
                                                            {
                                                              t = j_9;
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
                                            ATerm l_9 = t;
                                            int m_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_5;
                                                t = q_0(t);
                                                LocalPopChoice(m_9);
                                              }
                                            else
                                              {
                                                t = l_9;
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
                                                  ATerm n_9 = t;
                                                  int o_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm b_24 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                      t = q_0(t);
                                                      b_24 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, b_24);
                                                      t = q_0(t);
                                                      LocalPopChoice(o_9);
                                                    }
                                                  else
                                                    {
                                                      t = n_9;
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
                                                      ATerm p_9 = t;
                                                      int q_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm i_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                          t = q_0(t);
                                                          i_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, i_24);
                                                          t = q_0(t);
                                                          LocalPopChoice(q_9);
                                                        }
                                                      else
                                                        {
                                                          t = p_9;
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
                                        ATerm r_9 = t;
                                        int s_9 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_w_5;
                                            t = q_0(t);
                                            LocalPopChoice(s_9);
                                          }
                                        else
                                          {
                                            t = r_9;
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
                                              ATerm t_9 = t;
                                              int u_9 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm y_24 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                  t = q_0(t);
                                                  y_24 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, y_24);
                                                  t = q_0(t);
                                                  LocalPopChoice(u_9);
                                                }
                                              else
                                                {
                                                  t = t_9;
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
                                                    l_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm v_9 = t;
                                                      int w_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, q_11, r_11);
                                                          {
                                                            ATerm x_9 = t;
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
                                                                t = x_9;
                                                              }
                                                          }
                                                          t = term_w_5;
                                                          t = bottomup_1_0(q_0, t);
                                                          LocalPopChoice(w_9);
                                                        }
                                                      else
                                                        {
                                                          t = v_9;
                                                          {
                                                            ATerm y_9 = t;
                                                            int z_9 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm g_25 = NULL;
                                                                t = r_11;
                                                                if((q_11 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, l_11, m_11);
                                                                t = genzip_4_0(z_0, d_1, e_1, h_1, t);
                                                                g_25 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_25), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, q_11, l_11)));
                                                                t = bottomup_1_0(q_0, t);
                                                                LocalPopChoice(z_9);
                                                              }
                                                            else
                                                              {
                                                                t = y_9;
                                                                {
                                                                  ATerm a_10 = t;
                                                                  int b_10 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = s_11;
                                                                      if((u_11 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                                                                      t = q_0(t);
                                                                      LocalPopChoice(b_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = a_10;
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
                                                    ATerm c_10 = t;
                                                    int d_10 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = s_11;
                                                        if((u_11 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                                                        t = q_0(t);
                                                        LocalPopChoice(d_10);
                                                      }
                                                    else
                                                      {
                                                        t = c_10;
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
                                                      ATerm e_10 = t;
                                                      int f_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = s_11;
                                                          if((u_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, u_11);
                                                          t = q_0(t);
                                                          LocalPopChoice(f_10);
                                                        }
                                                      else
                                                        {
                                                          t = e_10;
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
                                                          ATerm g_10 = t;
                                                          int h_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = q_0(t);
                                                              q_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, q_26);
                                                              t = q_0(t);
                                                              LocalPopChoice(h_10);
                                                            }
                                                          else
                                                            {
                                                              t = g_10;
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
                                        ATerm i_10 = t;
                                        int j_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_w_5;
                                            t = q_0(t);
                                            LocalPopChoice(j_10);
                                          }
                                        else
                                          {
                                            t = i_10;
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
                                              ATerm k_10 = t;
                                              int l_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm e_27 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                  t = q_0(t);
                                                  e_27 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, e_27);
                                                  t = q_0(t);
                                                  LocalPopChoice(l_10);
                                                }
                                              else
                                                {
                                                  t = k_10;
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
                                                  ATerm m_10 = t;
                                                  int n_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = s_11;
                                                      if((u_11 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, u_11);
                                                      t = q_0(t);
                                                      LocalPopChoice(n_10);
                                                    }
                                                  else
                                                    {
                                                      t = m_10;
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
                                                      ATerm o_10 = t;
                                                      int p_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = s_11;
                                                          if((u_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                                                          t = q_0(t);
                                                          LocalPopChoice(p_10);
                                                        }
                                                      else
                                                        {
                                                          t = o_10;
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
                                                          ATerm z_10 = t;
                                                          int a_11 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = q_0(t);
                                                              v_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, v_27);
                                                              t = q_0(t);
                                                              LocalPopChoice(a_11);
                                                            }
                                                          else
                                                            {
                                                              t = z_10;
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
                                            ATerm z_11 = t;
                                            int n_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_5;
                                                t = q_0(t);
                                                LocalPopChoice(n_12);
                                              }
                                            else
                                              {
                                                t = z_11;
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
                                                  ATerm o_12 = t;
                                                  int c_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                      t = q_0(t);
                                                      e_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, e_28);
                                                      t = q_0(t);
                                                      LocalPopChoice(c_13);
                                                    }
                                                  else
                                                    {
                                                      t = o_12;
                                                      t = y_11;
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
                                                        ATerm j_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(e_13);
                                                    {
                                                      ATerm k_13 = t;
                                                      int l_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_11);
                                                          t = q_0(t);
                                                          LocalPopChoice(l_13);
                                                        }
                                                      else
                                                        {
                                                          t = k_13;
                                                          t = y_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = d_13;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        t = u_11;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            q_11 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm n_13 = t;
                                                              int o_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm j_28 = NULL;
                                                                  t = r_11;
                                                                  if((q_11 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, q_11);
                                                                  t = q_0(t);
                                                                  j_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, j_28);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(o_13);
                                                                }
                                                              else
                                                                {
                                                                  t = n_13;
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
                                                              ATerm t_13 = t;
                                                              int u_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm r_28 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                                  t = q_0(t);
                                                                  r_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, r_28);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(u_13);
                                                                }
                                                              else
                                                                {
                                                                  t = t_13;
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
                                            ATerm v_13 = t;
                                            int w_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_5;
                                                t = q_0(t);
                                                LocalPopChoice(w_13);
                                              }
                                            else
                                              {
                                                t = v_13;
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
                                                  ATerm x_13 = t;
                                                  int y_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm d_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                      t = q_0(t);
                                                      d_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, d_29);
                                                      t = q_0(t);
                                                      LocalPopChoice(y_13);
                                                    }
                                                  else
                                                    {
                                                      t = x_13;
                                                      t = y_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm c_14 = t;
                                                int d_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm e_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(d_14);
                                                    {
                                                      ATerm f_14 = t;
                                                      int g_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_11);
                                                          t = q_0(t);
                                                          LocalPopChoice(g_14);
                                                        }
                                                      else
                                                        {
                                                          t = f_14;
                                                          t = y_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = c_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_14 = t;
                                                          int j_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm m_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = q_0(t);
                                                              m_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, m_29);
                                                              t = q_0(t);
                                                              LocalPopChoice(j_14);
                                                            }
                                                          else
                                                            {
                                                              t = h_14;
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
                                            int m_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_5;
                                                t = q_0(t);
                                                LocalPopChoice(m_14);
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
                                                  ATerm n_14 = t;
                                                  int o_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                      t = q_0(t);
                                                      x_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, x_29);
                                                      t = q_0(t);
                                                      LocalPopChoice(o_14);
                                                    }
                                                  else
                                                    {
                                                      t = n_14;
                                                      t = y_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm r_14 = t;
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
                                                      ATerm v_14 = t;
                                                      int w_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, s_11, t_11, o_11);
                                                          t = q_0(t);
                                                          LocalPopChoice(w_14);
                                                        }
                                                      else
                                                        {
                                                          t = v_14;
                                                          t = y_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = r_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm y_14 = t;
                                                          int h_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm k_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = q_0(t);
                                                              k_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, k_30);
                                                              t = q_0(t);
                                                              LocalPopChoice(h_15);
                                                            }
                                                          else
                                                            {
                                                              t = y_14;
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
                                                ATerm i_15 = t;
                                                int j_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_w_5;
                                                    t = q_0(t);
                                                    LocalPopChoice(j_15);
                                                  }
                                                else
                                                  {
                                                    t = i_15;
                                                    {
                                                      ATerm k_15 = t;
                                                      int l_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_30 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                          t = q_0(t);
                                                          x_30 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, s_11, x_30);
                                                          t = q_0(t);
                                                          LocalPopChoice(l_15);
                                                        }
                                                      else
                                                        {
                                                          t = k_15;
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
                                                      ATerm m_15 = t;
                                                      int n_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm d_31 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                          t = q_0(t);
                                                          d_31 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, d_31);
                                                          t = q_0(t);
                                                          LocalPopChoice(n_15);
                                                        }
                                                      else
                                                        {
                                                          t = m_15;
                                                          {
                                                            ATerm o_15 = t;
                                                            int p_15 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm j_31 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                                t = q_0(t);
                                                                j_31 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, s_11, j_31);
                                                                t = q_0(t);
                                                                LocalPopChoice(p_15);
                                                              }
                                                            else
                                                              {
                                                                t = o_15;
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
                                                          ATerm q_15 = t;
                                                          int r_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                              t = q_0(t);
                                                              u_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, s_11, u_31);
                                                              t = q_0(t);
                                                              LocalPopChoice(r_15);
                                                            }
                                                          else
                                                            {
                                                              t = q_15;
                                                              {
                                                                ATerm s_15 = t;
                                                                int t_15 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm z_31 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                                    t = q_0(t);
                                                                    z_31 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, z_31);
                                                                    t = q_0(t);
                                                                    LocalPopChoice(t_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = s_15;
                                                                    t = y_11;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm u_15 = t;
                                                        int v_15 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm h_32 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                            t = q_0(t);
                                                            h_32 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, s_11, h_32);
                                                            t = q_0(t);
                                                            LocalPopChoice(v_15);
                                                          }
                                                        else
                                                          {
                                                            t = u_15;
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
                                                    ATerm w_15 = t;
                                                    int x_15 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_w_5;
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
                                                              ATerm u_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                              t = q_0(t);
                                                              u_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, s_11, u_32);
                                                              t = q_0(t);
                                                              LocalPopChoice(z_15);
                                                            }
                                                          else
                                                            {
                                                              t = y_15;
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
                                                          ATerm a_16 = t;
                                                          int b_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = q_0(t);
                                                              z_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, z_32);
                                                              t = q_0(t);
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
                                                                    ATerm d_33 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                                    t = q_0(t);
                                                                    d_33 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, s_11, d_33);
                                                                    t = q_0(t);
                                                                    LocalPopChoice(d_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = c_16;
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
                                                              ATerm e_16 = t;
                                                              int f_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm m_33 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                                  t = q_0(t);
                                                                  m_33 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, s_11, m_33);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(f_16);
                                                                }
                                                              else
                                                                {
                                                                  t = e_16;
                                                                  {
                                                                    ATerm g_16 = t;
                                                                    int h_16 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm x_33 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                                        t = q_0(t);
                                                                        x_33 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, x_33);
                                                                        t = q_0(t);
                                                                        LocalPopChoice(h_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = g_16;
                                                                        t = y_11;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm i_16 = t;
                                                            int j_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm i_34 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                                t = q_0(t);
                                                                i_34 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, s_11, i_34);
                                                                t = q_0(t);
                                                                LocalPopChoice(j_16);
                                                              }
                                                            else
                                                              {
                                                                t = i_16;
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
                                                    ATerm k_16 = t;
                                                    int l_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_w_5;
                                                        t = q_0(t);
                                                        LocalPopChoice(l_16);
                                                      }
                                                    else
                                                      {
                                                        t = k_16;
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
                                                          ATerm m_16 = t;
                                                          int n_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = q_0(t);
                                                              v_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_34);
                                                              t = q_0(t);
                                                              LocalPopChoice(n_16);
                                                            }
                                                          else
                                                            {
                                                              t = m_16;
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
                                                              ATerm o_16 = t;
                                                              int p_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm e_35 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                                  t = q_0(t);
                                                                  e_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, e_35);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(p_16);
                                                                }
                                                              else
                                                                {
                                                                  t = o_16;
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
                            ATerm q_16 = t;
                            int r_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_o_5;
                                t = q_0(t);
                                LocalPopChoice(r_16);
                              }
                            else
                              {
                                t = q_16;
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
                            ATerm s_16 = t;
                            int t_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_o_5;
                                t = q_0(t);
                                LocalPopChoice(t_16);
                              }
                            else
                              {
                                t = s_16;
                                {
                                  ATerm u_16 = t;
                                  int v_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = w_11;
                                      if((x_11 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(v_16);
                                    }
                                  else
                                    {
                                      t = u_16;
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
                                      ATerm w_16 = t;
                                      int x_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm p_36 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, v_11, w_11);
                                          t = q_0(t);
                                          p_36 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, u_11, p_36);
                                          t = q_0(t);
                                          LocalPopChoice(x_16);
                                        }
                                      else
                                        {
                                          t = w_16;
                                          {
                                            ATerm y_16 = t;
                                            int z_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = w_11;
                                                if((x_11 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(z_16);
                                              }
                                            else
                                              {
                                                t = y_16;
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
                                          ATerm a_17 = t;
                                          int b_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = w_11;
                                              if((x_11 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(b_17);
                                            }
                                          else
                                            {
                                              t = a_17;
                                              {
                                                ATerm c_17 = t;
                                                int d_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = u_11;
                                                    t = topdown_1_0(i_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                                                    t = bottomup_1_0(q_0, t);
                                                    LocalPopChoice(d_17);
                                                  }
                                                else
                                                  {
                                                    t = c_17;
                                                    t = y_11;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm e_17 = t;
                                        int f_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = w_11;
                                            if((x_11 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(f_17);
                                          }
                                        else
                                          {
                                            t = e_17;
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
                                ATerm g_17 = t;
                                int h_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_o_5;
                                    t = q_0(t);
                                    LocalPopChoice(h_17);
                                  }
                                else
                                  {
                                    t = g_17;
                                    t = w_11;
                                  }
                              }
                            else
                              {
                                ATerm i_17 = t;
                                int j_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_o_5;
                                    t = q_0(t);
                                    LocalPopChoice(j_17);
                                  }
                                else
                                  {
                                    t = i_17;
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
                                    ATerm k_17 = t;
                                    int l_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_w_5;
                                        t = q_0(t);
                                        LocalPopChoice(l_17);
                                      }
                                    else
                                      {
                                        t = k_17;
                                        t = w_11;
                                      }
                                  }
                                else
                                  {
                                    ATerm m_17 = t;
                                    int o_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_w_5;
                                        t = q_0(t);
                                        LocalPopChoice(o_17);
                                      }
                                    else
                                      {
                                        t = m_17;
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
                                        ATerm p_17 = t;
                                        int q_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm t_37 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, x_11, s_11);
                                            t = conc_0_0(t);
                                            t_37 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, t_37, t_11);
                                            t = bottomup_1_0(q_0, t);
                                            LocalPopChoice(q_17);
                                          }
                                        else
                                          {
                                            t = p_17;
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
                        ATerm r_17 = t;
                        int s_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm t_17 = ATgetArgument(t, 0);
                                w_11 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(s_17);
                            t = w_11;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm u_17 = t;
                                int v_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_o_5;
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
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm w_17 = t;
                                    int x_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_w_5;
                                        t = q_0(t);
                                        LocalPopChoice(x_17);
                                      }
                                    else
                                      {
                                        t = w_17;
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
                            t = r_17;
                            if(match_cons(t, sym_All_1))
                              {
                                x_11 = ATgetArgument(t, 0);
                                t = x_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm y_17 = t;
                                    int z_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_o_5;
                                        t = q_0(t);
                                        LocalPopChoice(z_17);
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
                                        ATerm a_18 = t;
                                        int e_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_o_5;
                                            t = q_0(t);
                                            LocalPopChoice(e_18);
                                          }
                                        else
                                          {
                                            t = a_18;
                                            {
                                              ATerm f_18 = t;
                                              int h_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL;
                                                  t = y_11;
                                                  t = new_0_0(t);
                                                  f_38 = t;
                                                  t = bottomup_1_0(q_0, t);
                                                  q_38 = t;
                                                  t = (ATerm) ATempty;
                                                  t = q_0(t);
                                                  r_38 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(r_38), q_38);
                                                  t = q_0(t);
                                                  g_38 = t;
                                                  t = f_38;
                                                  t = bottomup_1_0(q_0, t);
                                                  p_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, p_38);
                                                  t = q_0(t);
                                                  o_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, o_38);
                                                  t = q_0(t);
                                                  i_38 = t;
                                                  t = x_11;
                                                  t = bottomup_1_0(q_0, t);
                                                  k_38 = t;
                                                  t = f_38;
                                                  t = bottomup_1_0(q_0, t);
                                                  n_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, n_38);
                                                  t = q_0(t);
                                                  m_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, m_38);
                                                  t = q_0(t);
                                                  l_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, k_38, l_38);
                                                  t = q_0(t);
                                                  j_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_38, j_38);
                                                  t = q_0(t);
                                                  h_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, g_38, h_38);
                                                  t = q_0(t);
                                                  LocalPopChoice(h_18);
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
                                            ATerm i_18 = t;
                                            int j_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_5;
                                                t = q_0(t);
                                                LocalPopChoice(j_18);
                                              }
                                            else
                                              {
                                                t = i_18;
                                                {
                                                  ATerm m_18 = t;
                                                  int n_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
                                                      t = y_11;
                                                      t = new_0_0(t);
                                                      u_38 = t;
                                                      t = bottomup_1_0(q_0, t);
                                                      f_39 = t;
                                                      t = (ATerm) ATempty;
                                                      t = q_0(t);
                                                      g_39 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(g_39), f_39);
                                                      t = q_0(t);
                                                      v_38 = t;
                                                      t = u_38;
                                                      t = bottomup_1_0(q_0, t);
                                                      e_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, e_39);
                                                      t = q_0(t);
                                                      d_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, d_39);
                                                      t = q_0(t);
                                                      x_38 = t;
                                                      t = x_11;
                                                      t = bottomup_1_0(q_0, t);
                                                      z_38 = t;
                                                      t = u_38;
                                                      t = bottomup_1_0(q_0, t);
                                                      c_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, c_39);
                                                      t = q_0(t);
                                                      b_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, b_39);
                                                      t = q_0(t);
                                                      a_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_38, a_39);
                                                      t = q_0(t);
                                                      y_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_38, y_38);
                                                      t = q_0(t);
                                                      w_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, v_38, w_38);
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
                                                    f_11 = ATgetArgument(t, 0);
                                                    h_11 = ATgetArgument(t, 1);
                                                    t = f_11;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        g_11 = ATgetArgument(t, 0);
                                                        t = u_11;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            q_11 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm o_18 = t;
                                                              int p_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, g_11);
                                                                  t = q_0(t);
                                                                  n_39 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_39, h_11);
                                                                  t = q_0(t);
                                                                  m_39 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_11, m_39);
                                                                  t = q_0(t);
                                                                  l_39 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, l_39);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(p_18);
                                                                }
                                                              else
                                                                {
                                                                  t = o_18;
                                                                  {
                                                                    ATerm t_18 = t;
                                                                    int u_18 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL;
                                                                        t = y_11;
                                                                        t = new_0_0(t);
                                                                        p_39 = t;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        a_40 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = q_0(t);
                                                                        b_40 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(b_40), a_40);
                                                                        t = q_0(t);
                                                                        q_39 = t;
                                                                        t = p_39;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        z_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, z_39);
                                                                        t = q_0(t);
                                                                        y_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, y_39);
                                                                        t = q_0(t);
                                                                        s_39 = t;
                                                                        t = x_11;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        u_39 = t;
                                                                        t = p_39;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        x_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, x_39);
                                                                        t = q_0(t);
                                                                        w_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, w_39);
                                                                        t = q_0(t);
                                                                        v_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, u_39, v_39);
                                                                        t = q_0(t);
                                                                        t_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, s_39, t_39);
                                                                        t = q_0(t);
                                                                        r_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, q_39, r_39);
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
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm v_18 = t;
                                                            int w_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm f_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,t_40 = NULL;
                                                                t = y_11;
                                                                t = new_0_0(t);
                                                                f_40 = t;
                                                                t = bottomup_1_0(q_0, t);
                                                                r_40 = t;
                                                                t = (ATerm) ATempty;
                                                                t = q_0(t);
                                                                t_40 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(t_40), r_40);
                                                                t = q_0(t);
                                                                h_40 = t;
                                                                t = f_40;
                                                                t = bottomup_1_0(q_0, t);
                                                                q_40 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, q_40);
                                                                t = q_0(t);
                                                                p_40 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, p_40);
                                                                t = q_0(t);
                                                                j_40 = t;
                                                                t = x_11;
                                                                t = bottomup_1_0(q_0, t);
                                                                l_40 = t;
                                                                t = f_40;
                                                                t = bottomup_1_0(q_0, t);
                                                                o_40 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, o_40);
                                                                t = q_0(t);
                                                                n_40 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, n_40);
                                                                t = q_0(t);
                                                                m_40 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, l_40, m_40);
                                                                t = q_0(t);
                                                                k_40 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, j_40, k_40);
                                                                t = q_0(t);
                                                                i_40 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, h_40, i_40);
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
                                                    else
                                                      {
                                                        t = u_11;
                                                        {
                                                          ATerm x_18 = t;
                                                          int y_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm x_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,l_41 = NULL;
                                                              t = y_11;
                                                              t = new_0_0(t);
                                                              x_40 = t;
                                                              t = bottomup_1_0(q_0, t);
                                                              j_41 = t;
                                                              t = (ATerm) ATempty;
                                                              t = q_0(t);
                                                              l_41 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(l_41), j_41);
                                                              t = q_0(t);
                                                              z_40 = t;
                                                              t = x_40;
                                                              t = bottomup_1_0(q_0, t);
                                                              i_41 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, i_41);
                                                              t = q_0(t);
                                                              h_41 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, h_41);
                                                              t = q_0(t);
                                                              b_41 = t;
                                                              t = x_11;
                                                              t = bottomup_1_0(q_0, t);
                                                              d_41 = t;
                                                              t = x_40;
                                                              t = bottomup_1_0(q_0, t);
                                                              g_41 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, g_41);
                                                              t = q_0(t);
                                                              f_41 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, f_41);
                                                              t = q_0(t);
                                                              e_41 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_41, e_41);
                                                              t = q_0(t);
                                                              c_41 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_41, c_41);
                                                              t = q_0(t);
                                                              a_41 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, z_40, a_41);
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
                                                    t = u_11;
                                                    {
                                                      ATerm a_19 = t;
                                                      int b_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL;
                                                          t = y_11;
                                                          t = new_0_0(t);
                                                          o_41 = t;
                                                          t = bottomup_1_0(q_0, t);
                                                          z_41 = t;
                                                          t = (ATerm) ATempty;
                                                          t = q_0(t);
                                                          a_42 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(a_42), z_41);
                                                          t = q_0(t);
                                                          p_41 = t;
                                                          t = o_41;
                                                          t = bottomup_1_0(q_0, t);
                                                          y_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, y_41);
                                                          t = q_0(t);
                                                          x_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, x_41);
                                                          t = q_0(t);
                                                          r_41 = t;
                                                          t = x_11;
                                                          t = bottomup_1_0(q_0, t);
                                                          t_41 = t;
                                                          t = o_41;
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
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, r_41, s_41);
                                                          t = q_0(t);
                                                          q_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, p_41, q_41);
                                                          t = q_0(t);
                                                          LocalPopChoice(b_19);
                                                        }
                                                      else
                                                        {
                                                          t = a_19;
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
                                                      ATerm c_19 = t;
                                                      int d_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, u_11);
                                                          t = q_0(t);
                                                          LocalPopChoice(d_19);
                                                        }
                                                      else
                                                        {
                                                          t = c_19;
                                                          {
                                                            ATerm e_19 = t;
                                                            int f_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL;
                                                                t = y_11;
                                                                t = new_0_0(t);
                                                                e_42 = t;
                                                                t = bottomup_1_0(q_0, t);
                                                                r_42 = t;
                                                                t = (ATerm) ATempty;
                                                                t = q_0(t);
                                                                s_42 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(s_42), r_42);
                                                                t = q_0(t);
                                                                f_42 = t;
                                                                t = e_42;
                                                                t = bottomup_1_0(q_0, t);
                                                                q_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, q_42);
                                                                t = q_0(t);
                                                                n_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, n_42);
                                                                t = q_0(t);
                                                                h_42 = t;
                                                                t = x_11;
                                                                t = bottomup_1_0(q_0, t);
                                                                j_42 = t;
                                                                t = e_42;
                                                                t = bottomup_1_0(q_0, t);
                                                                m_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, m_42);
                                                                t = q_0(t);
                                                                l_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, l_42);
                                                                t = q_0(t);
                                                                k_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, j_42, k_42);
                                                                t = q_0(t);
                                                                i_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, h_42, i_42);
                                                                t = q_0(t);
                                                                g_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, f_42, g_42);
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
                                                else
                                                  {
                                                    ATerm g_19 = t;
                                                    int i_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL;
                                                        t = y_11;
                                                        t = new_0_0(t);
                                                        v_42 = t;
                                                        t = bottomup_1_0(q_0, t);
                                                        g_43 = t;
                                                        t = (ATerm) ATempty;
                                                        t = q_0(t);
                                                        h_43 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(h_43), g_43);
                                                        t = q_0(t);
                                                        w_42 = t;
                                                        t = v_42;
                                                        t = bottomup_1_0(q_0, t);
                                                        f_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, f_43);
                                                        t = q_0(t);
                                                        e_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, e_43);
                                                        t = q_0(t);
                                                        y_42 = t;
                                                        t = x_11;
                                                        t = bottomup_1_0(q_0, t);
                                                        a_43 = t;
                                                        t = v_42;
                                                        t = bottomup_1_0(q_0, t);
                                                        d_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, d_43);
                                                        t = q_0(t);
                                                        c_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, c_43);
                                                        t = q_0(t);
                                                        b_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, a_43, b_43);
                                                        t = q_0(t);
                                                        z_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, y_42, z_42);
                                                        t = q_0(t);
                                                        x_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, w_42, x_42);
                                                        t = q_0(t);
                                                        LocalPopChoice(i_19);
                                                      }
                                                    else
                                                      {
                                                        t = g_19;
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
                                            ATerm j_19 = t;
                                            int k_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_5;
                                                t = q_0(t);
                                                LocalPopChoice(k_19);
                                              }
                                            else
                                              {
                                                t = j_19;
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
                                                ATerm m_19 = t;
                                                int n_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_w_5;
                                                    t = q_0(t);
                                                    LocalPopChoice(n_19);
                                                  }
                                                else
                                                  {
                                                    t = m_19;
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
                                                    ATerm o_19 = t;
                                                    int p_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_w_5;
                                                        t = q_0(t);
                                                        LocalPopChoice(p_19);
                                                      }
                                                    else
                                                      {
                                                        t = o_19;
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
                                                ATerm r_19 = t;
                                                int s_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm t_19 = ATgetArgument(t, 0);
                                                        w_11 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(s_19);
                                                    t = w_11;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm u_19 = t;
                                                        int v_19 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_w_5;
                                                            t = q_0(t);
                                                            LocalPopChoice(v_19);
                                                          }
                                                        else
                                                          {
                                                            t = u_19;
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
                                                    t = r_19;
                                                    {
                                                      ATerm w_19 = t;
                                                      int x_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm y_19 = ATgetArgument(t, 0);
                                                              w_11 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(x_19);
                                                          {
                                                            ATerm a_20 = t;
                                                            int b_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = w_11;
                                                                t = fetch_1_0(j_1, t);
                                                                t = term_w_5;
                                                                t = bottomup_1_0(q_0, t);
                                                                LocalPopChoice(b_20);
                                                              }
                                                            else
                                                              {
                                                                t = a_20;
                                                                t = y_11;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = w_19;
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
                                                                            ATerm c_20 = t;
                                                                            int e_20 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm u_44 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, v_11, w_11);
                                                                                t = q_0(t);
                                                                                u_44 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, u_11, u_44);
                                                                                t = q_0(t);
                                                                                LocalPopChoice(e_20);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = c_20;
                                                                                {
                                                                                  ATerm f_20 = t;
                                                                                  int g_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = w_11;
                                                                                      if((x_11 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(g_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = f_20;
                                                                                      t = y_11;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm h_20 = t;
                                                                          int i_20 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = w_11;
                                                                              if((x_11 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(i_20);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_20;
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
                                                                  d_11 = ATgetArgument(t, 2);
                                                                  t = d_11;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm k_20 = t;
                                                                      int l_20 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, w_11);
                                                                          t = q_0(t);
                                                                          LocalPopChoice(l_20);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = k_20;
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
                                                                        ATerm m_20 = t;
                                                                        int n_20 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, x_11, w_11);
                                                                            t = q_0(t);
                                                                            LocalPopChoice(n_20);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = m_20;
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
                                                                                ATerm o_20 = t;
                                                                                int p_20 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm i_45 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, v_11);
                                                                                    t = q_0(t);
                                                                                    i_45 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, u_11, i_45);
                                                                                    t = q_0(t);
                                                                                    LocalPopChoice(p_20);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = o_20;
                                                                                    t = y_11;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm q_20 = t;
                                                                                  int r_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_w_5;
                                                                                      t = q_0(t);
                                                                                      LocalPopChoice(r_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = q_20;
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
                                                                                    ATerm s_20 = t;
                                                                                    int t_20 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm p_45 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, v_11);
                                                                                        t = q_0(t);
                                                                                        p_45 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, u_11, p_45);
                                                                                        t = q_0(t);
                                                                                        LocalPopChoice(t_20);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = s_20;
                                                                                        t = y_11;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm v_20 = t;
                                                                                      int w_20 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_w_5;
                                                                                          t = q_0(t);
                                                                                          LocalPopChoice(w_20);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = v_20;
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
                                                                                        ATerm x_20 = t;
                                                                                        int y_20 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm v_45 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, v_11);
                                                                                            t = q_0(t);
                                                                                            v_45 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_45);
                                                                                            t = q_0(t);
                                                                                            LocalPopChoice(y_20);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = x_20;
                                                                                            t = y_11;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm z_20 = t;
                                                                                          int a_21 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_o_5;
                                                                                              t = q_0(t);
                                                                                              LocalPopChoice(a_21);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = z_20;
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
                                                                                      d_11 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm b_21 = t;
                                                                                        int c_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL;
                                                                                            t = term_d_21;
                                                                                            t = bottomup_1_0(q_0, t);
                                                                                            d_46 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = q_0(t);
                                                                                            g_46 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(g_46), d_11);
                                                                                            t = q_0(t);
                                                                                            f_46 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(f_46), x_11);
                                                                                            t = q_0(t);
                                                                                            e_46 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, d_46, e_46);
                                                                                            t = q_0(t);
                                                                                            c_46 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, w_11, c_46);
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
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          x_11 = ATgetArgument(t, 0);
                                                                                          w_11 = ATgetArgument(t, 1);
                                                                                          d_11 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm e_21 = t;
                                                                                            int g_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,r_46 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, w_11);
                                                                                                t = q_0(t);
                                                                                                m_46 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, d_11);
                                                                                                t = q_0(t);
                                                                                                p_46 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = q_0(t);
                                                                                                r_46 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(r_46), p_46);
                                                                                                t = q_0(t);
                                                                                                o_46 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(o_46), x_11);
                                                                                                t = q_0(t);
                                                                                                n_46 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(n_46), m_46);
                                                                                                t = q_0(t);
                                                                                                l_46 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, l_46);
                                                                                                t = q_0(t);
                                                                                                LocalPopChoice(g_21);
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
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              x_11 = ATgetArgument(t, 0);
                                                                                              w_11 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm h_21 = t;
                                                                                                int i_21 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm v_46 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, w_11);
                                                                                                    t = q_0(t);
                                                                                                    v_46 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, v_46);
                                                                                                    t = q_0(t);
                                                                                                    LocalPopChoice(i_21);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = h_21;
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
                                                                                                    ATerm j_21 = t;
                                                                                                    int k_21 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm z_46 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, x_11);
                                                                                                        t = q_0(t);
                                                                                                        z_46 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, z_46, w_11);
                                                                                                        t = q_0(t);
                                                                                                        LocalPopChoice(k_21);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = j_21;
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
                                                                                                        ATerm l_21 = t;
                                                                                                        int m_21 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm d_47 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, w_11);
                                                                                                            t = q_0(t);
                                                                                                            d_47 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, d_47, x_11);
                                                                                                            t = q_0(t);
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
                                                                                                                  ATerm n_21 = t;
                                                                                                                  int o_21 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm o_47 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, x_11, s_11);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      o_47 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, o_47, t_11);
                                                                                                                      t = bottomup_1_0(q_0, t);
                                                                                                                      LocalPopChoice(o_21);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = n_21;
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
                                                                                                                                              l_11 = ATgetArgument(t, 1);
                                                                                                                                              i_11 = ATgetArgument(t, 2);
                                                                                                                                              j_11 = ATgetArgument(t, 3);
                                                                                                                                              t = i_11;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = l_11;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm q_21 = t;
                                                                                                                                                      int r_21 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = r_11;
                                                                                                                                                          if((q_11 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = j_11;
                                                                                                                                                          {
                                                                                                                                                            ATerm s_21 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm k_1 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm v_21 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(v_21, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((q_11 != ATgetArgument(v_21, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(v_21, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm w_21 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(w_21) != AT_LIST) || !(ATisEmpty(w_21))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm x_21 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(x_21) != AT_LIST) || !(ATisEmpty(x_21))))
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
                                                                                                                                                                t = s_21;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = j_11;
                                                                                                                                                          t = bottomup_1_0(q_0, t);
                                                                                                                                                          LocalPopChoice(r_21);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = q_21;
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
ATerm map_1_0 (ATerm s_123 (ATerm), ATerm t)
{
  static ATerm r_49 (ATerm t)
  {
    ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL;
    n_49 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_49;
      }
    else
      {
        ATerm e_3 = NULL,h_3 = NULL,i_3 = NULL,w_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_49 = ATgetFirst((ATermList) t);
            p_49 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_49);
        e_3 = t;
        t = o_49;
        t = s_123(t);
        h_3 = t;
        t = p_49;
        t = r_49(t);
        i_3 = t;
        t = (ATerm) ATinsert(CheckATermList(i_3), h_3);
        w_0 = t;
        t = SSLsetAnnotations(w_0, e_3);
      }
    return(t);
  }
  t = r_49(t);
  return(t);
}
static ATerm q_10 (ATerm v_43, ATerm w_43, ATerm t)
{
  ATerm t_49 = NULL;
  t = SSL_fputc(v_43, w_43);
  t_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_49);
  return(t);
}
static ATerm r_10 (ATerm w_48, ATerm x_48, ATerm t)
{
  ATerm u_49 = NULL;
  t = SSL_write_term_to_stream_text(w_48, x_48);
  u_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_49);
  return(t);
}
static ATerm t_10 (ATerm m_117 (ATerm), ATerm o_428, ATerm c_49, ATerm t)
{
  ATerm v_49 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_428, term_y_21);
  t = x_10(t);
  v_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_49, c_49);
  t = m_117(t);
  t = fclose_0_0(t);
  t = c_49;
  return(t);
}
static ATerm s_10 (ATerm s_48, ATerm t_48, ATerm t)
{
  ATerm w_49 = NULL;
  t = SSL_write_term_to_stream_baf(s_48, t_48);
  w_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_49);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_21 = ATgetArgument(t, 0);
      if(match_cons(z_21, sym_Stream_1))
        {
          f_50 = ATgetArgument(z_21, 0);
        }
      else
        _fail(t);
      g_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_10(f_50, g_50, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_22 = ATgetArgument(t, 0);
      if(match_cons(b_22, sym_Stream_1))
        {
          k_50 = ATgetArgument(b_22, 0);
        }
      else
        _fail(t);
      l_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(k_50, l_50, t);
  h_50 = t;
  t = term_c_22;
  i_50 = t;
  t = h_50;
  if(match_cons(t, sym_Stream_1))
    {
      j_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_c_22, h_50);
  t = q_10(i_50, j_50, t);
  return(t);
}
ATerm output_1_0 (ATerm j_130 (ATerm), ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL;
  t = j_130(t);
  y_49 = t;
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_49 = NULL,a_50 = NULL;
        t = term_f_22;
        z_49 = t;
        t = term_g_22;
        a_50 = t;
        t = term_h_22;
        t = b_11(z_49, a_50, t);
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        t = term_i_22;
      }
  }
  x_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_49, y_49);
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_50 = NULL,e_50 = NULL;
        t = term_f_22;
        b_50 = t;
        t = term_m_22;
        e_50 = t;
        t = term_n_22;
        t = b_11(b_50, e_50, t);
        t = (ATerm) ATmakeAppl(sym__2, x_49, y_49);
        LocalPopChoice(k_22);
        if(match_cons(t, sym__2))
          {
            ATerm o_22 = ATgetArgument(t, 0);
            ATerm q_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_10(m_1, x_49, y_49, t);
      }
    else
      {
        t = j_22;
        if(match_cons(t, sym__2))
          {
            ATerm r_22 = ATgetArgument(t, 0);
            ATerm s_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_10(n_1, x_49, y_49, t);
      }
  }
  return(t);
}
static ATerm z_50 (ATerm t_50, ATerm t)
{
  t = SSL_fclose(t_50);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL;
  x_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_50 = ATgetArgument(t, 0);
      {
        ATerm t_22 = t;
        int v_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_50);
            LocalPopChoice(v_22);
          }
        else
          {
            t = t_22;
            t = z_50(x_50, t);
          }
      }
    }
  else
    {
      t = z_50(x_50, t);
    }
  return(t);
}
static ATerm u_10 (ATerm y_48, ATerm t)
{
  t = SSL_read_term_from_stream(y_48);
  return(t);
}
static ATerm v_10 (ATerm o_42, ATerm p_42, ATerm t)
{
  t = SSL_strcat(o_42, p_42);
  return(t);
}
static ATerm w_10 (ATerm x_43, ATerm y_43, ATerm t)
{
  ATerm b_51 = NULL;
  t = SSL_fopen(x_43, y_43);
  b_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_51);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_51 = NULL;
  t = SSL_stdin_stream();
  c_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_51);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_51 = NULL;
  t = SSL_stdout_stream();
  d_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_51);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_51 = NULL;
  t = SSL_stderr_stream();
  e_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_51);
  return(t);
}
static ATerm o_52 (ATerm l_51, ATerm t)
{
  ATerm m_51 = NULL;
  t = SSL_explode_term(l_51);
  if(match_cons(t, sym__2))
    {
      ATerm w_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_22 = ATgetArgument(t, 1);
        if(((ATgetType(x_22) == AT_LIST) && !(ATisEmpty(x_22))))
          {
            m_51 = ATgetFirst((ATermList) x_22);
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
  t = m_51;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_51;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_51;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_51;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm p_52 (ATerm p_51, ATerm q_51, ATerm r_51, ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL,x_51 = NULL,a_1 = NULL;
  t = SSLgetAnnotations(r_51);
  u_51 = t;
  t = p_51;
  if(match_cons(t, sym_Path_1))
    {
      x_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_51, q_51);
  a_1 = t;
  t = SSLsetAnnotations(a_1, u_51);
  if(match_cons(t, sym__2))
    {
      s_51 = ATgetArgument(t, 0);
      t_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_10(s_51, t_51, t);
  return(t);
}
static ATerm r_52 (ATerm z_51, ATerm a_52, ATerm b_52, ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL,h_52 = NULL,c_1 = NULL;
  t = SSLgetAnnotations(b_52);
  e_52 = t;
  t = SSL_is_string(z_51);
  h_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_52, a_52);
  c_1 = t;
  t = SSLsetAnnotations(c_1, e_52);
  if(match_cons(t, sym__2))
    {
      c_52 = ATgetArgument(t, 0);
      d_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_10(c_52, d_52, t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm j_52 = NULL,l_52 = NULL,m_52 = NULL;
  j_52 = t;
  if(match_cons(t, sym__2))
    {
      l_52 = ATgetArgument(t, 0);
      m_52 = ATgetArgument(t, 1);
      {
        ATerm z_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_52(j_52, t);
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
                  t = p_52(l_52, m_52, j_52, t);
                  LocalPopChoice(c_23);
                }
              else
                {
                  t = b_23;
                  t = r_52(l_52, m_52, j_52, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_52(j_52, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL,d_53 = NULL;
  d_53 = t;
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_53, term_g_23);
        t = x_10(t);
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
        {
          ATerm v_3 = NULL,w_3 = NULL;
          t = term_h_23;
          w_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_23, d_53);
          t = v_10(w_3, d_53, t);
          v_3 = t;
          t = SSL_perror(v_3);
          _fail(t);
        }
      }
  }
  x_52 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(y_52, t);
  w_52 = t;
  t = x_52;
  t = fclose_0_0(t);
  t = w_52;
  return(t);
}
ATerm input_1_0 (ATerm k_130 (ATerm), ATerm t)
{
  ATerm i_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_53 = NULL,h_53 = NULL;
      t = term_f_22;
      g_53 = t;
      t = term_l_23;
      h_53 = t;
      t = term_m_23;
      t = b_11(g_53, h_53, t);
      LocalPopChoice(k_23);
    }
  else
    {
      t = i_23;
      t = term_n_23;
    }
  t = ReadFromFile_0_0(t);
  t = k_130(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL;
  i_53 = t;
  t = term_p_23;
  t = whoami_0_0(t);
  j_53 = t;
  t = term_q_23;
  l_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_23), j_53), term_r_23);
  m_53 = t;
  t = SSL_printnl(l_53, m_53);
  t = term_t_23;
  k_53 = t;
  t = SSL_exit(k_53);
  t = i_53;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm o_53 = NULL;
  o_53 = t;
  if(match_string(t, "-k"))
    {
      t = o_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_53;
    }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL;
  p_53 = t;
  t = SSL_string_to_int(p_53);
  q_53 = t;
  t = term_u_23;
  r_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_23, q_53);
  t = e_11(r_53, q_53, t);
  t = p_53;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_v_23;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_1, r_1, s_1, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm t_53 = NULL;
  t_53 = t;
  if(match_string(t, "-S"))
    {
      t = t_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_53;
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL;
  t = term_w_23;
  u_53 = t;
  t = term_x_23;
  v_53 = t;
  t = term_y_23;
  t = e_11(u_53, v_53, t);
  t = term_z_23;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_a_24;
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
  ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL;
  w_53 = t;
  t = SSL_string_to_int(w_53);
  x_53 = t;
  t = term_w_23;
  y_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_23, x_53);
  t = e_11(y_53, x_53, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_53);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_c_24;
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
  ATerm z_53 = NULL,a_54 = NULL;
  t = term_d_24;
  z_53 = t;
  t = term_p_23;
  a_54 = t;
  t = term_e_24;
  t = e_11(z_53, a_54, t);
  t = term_f_24;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_g_24;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_1, u_1, x_1, t);
      LocalPopChoice(j_24);
    }
  else
    {
      t = h_24;
      {
        ATerm k_24 = t;
        int l_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_1, c_2, d_2, t);
            LocalPopChoice(l_24);
          }
        else
          {
            t = k_24;
            t = Option_3_0(e_2, p_2, q_2, t);
          }
      }
    }
  return(t);
}
static ATerm e_11 (ATerm q_47, ATerm r_47, ATerm t)
{
  ATerm b_54 = NULL;
  t = term_f_22;
  b_54 = t;
  t = SSL_table_put(b_54, q_47, r_47);
  t = (ATerm) ATmakeAppl(sym__3, term_f_22, q_47, r_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL;
      t = term_p_23;
      t = e_0(t);
      g_54 = t;
      t = term_m_24;
      h_54 = t;
      t = term_n_24;
      i_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_24, term_n_24, g_54);
      t = c_11(h_54, i_54, g_54, t);
      _fail(t);
    }
  else
    {
      ATerm n_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_54 = ATgetFirst((ATermList) t);
          f_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_54;
      t = c_0(t);
      t = term_p_23;
      t = d_0(t);
      n_54 = t;
      t = (ATerm) ATinsert(CheckATermList(f_54), n_54);
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm p_54 = NULL;
  p_54 = t;
  if(match_string(t, "-o"))
    {
      t = p_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_54;
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL;
  q_54 = t;
  t = term_g_22;
  r_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_22, q_54);
  t = e_11(r_54, q_54, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_54);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_o_24;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_2, s_2, t_2, t);
  return(t);
}
static ATerm c_11 (ATerm u_52, ATerm v_52, ATerm t_52, ATerm t)
{
  ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL;
  t_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_52, v_52);
  {
    ATerm p_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_24 = ATgetArgument(t, 0);
            ATerm s_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_52, v_52);
        t = b_11(u_52, v_52, t);
        LocalPopChoice(q_24);
      }
    else
      {
        t = p_24;
        t = (ATerm) ATempty;
      }
  }
  u_54 = t;
  t = (ATerm) ATinsert(CheckATermList(u_54), t_52);
  v_54 = t;
  t = SSL_table_put(u_52, v_52, v_54);
  t = t_54;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL;
      t = term_p_23;
      t = n_0(t);
      g_55 = t;
      t = term_m_24;
      h_55 = t;
      t = term_n_24;
      i_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_24, term_n_24, g_55);
      t = c_11(h_55, i_55, g_55, t);
      _fail(t);
    }
  else
    {
      ATerm m_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_55 = ATgetFirst((ATermList) t);
          d_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_55 = ATgetFirst((ATermList) t);
          f_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_55;
      t = k_0(t);
      t = e_55;
      t = l_0(t);
      m_55 = t;
      t = (ATerm) ATinsert(CheckATermList(f_55), m_55);
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm o_55 = NULL;
  o_55 = t;
  if(match_string(t, "-i"))
    {
      t = o_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_55;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL;
  p_55 = t;
  t = term_l_23;
  q_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_23, p_55);
  t = e_11(q_55, p_55, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_55);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_t_24;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_2, v_2, w_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_23;
  t = whoami_0_0(t);
  r_55 = t;
  t = term_q_23;
  t_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_24), r_55);
  u_55 = t;
  t = SSL_printnl(t_55, u_55);
  t = term_t_23;
  s_55 = t;
  t = SSL_exit(s_55);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL;
  t = term_f_22;
  v_55 = t;
  t = term_v_24;
  w_55 = t;
  t = term_w_24;
  t = b_11(v_55, w_55, t);
  return(t);
}
static ATerm y_10 (ATerm c_50, ATerm d_50, ATerm t)
{
  ATerm x_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_50, d_50);
      LocalPopChoice(z_24);
    }
  else
    {
      t = x_24;
      t = SSL_addr(c_50, d_50);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm t)
{
  ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL;
  y_55 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_55;
      t = i_122(t);
    }
  else
    {
      ATerm e_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_55 = ATgetFirst((ATermList) t);
          a_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_56;
      t = foldr_2_0(i_122, j_122, t);
      e_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_55, e_56);
      t = j_122(t);
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
  t = term_x_23;
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
  t = y_10(c_4, d_4, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_56 = NULL,y_3 = NULL,z_3 = NULL;
  t = times_0_0(t);
  z_3 = t;
  t = SSL_explode_term(z_3);
  if(match_cons(t, sym__2))
    {
      ATerm a_25 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3;
  t = foldr_2_0(x_2, y_2, t);
  h_56 = t;
  t = SSL_TicksToSeconds(h_56);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL;
  u_56 = t;
  if(match_cons(t, sym__2))
    {
      v_56 = ATgetArgument(t, 0);
      w_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_56;
        if((v_56 != t))
          {
            _fail(t);
          }
        t = u_56;
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        t = (ATerm) ATmakeAppl(sym__2, v_56, w_56);
        {
          ATerm d_25 = t;
          int e_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_56, w_56);
              LocalPopChoice(e_25);
            }
          else
            {
              t = d_25;
              t = SSL_gtr(v_56, w_56);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_56, w_56);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_115 (ATerm), ATerm t)
{
  ATerm a_57 = NULL;
  a_57 = t;
  {
    ATerm f_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL;
        t = term_f_22;
        d_57 = t;
        t = term_w_23;
        e_57 = t;
        t = term_i_25;
        t = b_11(d_57, e_57, t);
        c_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_57, term_t_23);
        t = geq_0_0(t);
        t = a_57;
        t = j_115(t);
        LocalPopChoice(h_25);
      }
    else
      {
        t = f_25;
        t = a_57;
      }
  }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL,j_57 = NULL,k_57 = NULL;
  t = run_time_0_0(t);
  g_57 = t;
  t = term_p_23;
  t = whoami_0_0(t);
  h_57 = t;
  t = term_q_23;
  j_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_25), g_57), term_j_25), h_57);
  k_57 = t;
  t = SSL_printnl(j_57, k_57);
  t = (ATerm) ATmakeAppl(sym__2, term_q_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_25), g_57), term_j_25), h_57));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_23;
  l_57 = t;
  t = SSL_exit(l_57);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL;
  w_57 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_57;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_57 = ATgetArgument(t, 0);
          {
            ATerm p_4 = NULL,b_4 = NULL;
            t = SSLgetAnnotations(w_57);
            p_4 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_57);
            b_4 = t;
            t = SSLsetAnnotations(b_4, p_4);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_57;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_130 (ATerm), ATerm t)
{
  ATerm m_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_57 = NULL,p_57 = NULL;
      t = term_f_22;
      o_57 = t;
      t = term_q_25;
      p_57 = t;
      t = term_s_25;
      t = b_11(o_57, p_57, t);
      LocalPopChoice(p_25);
    }
  else
    {
      t = m_25;
      t = fetch_1_0(a_3, t);
    }
  t = a_130(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm z_57 = NULL,f_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_57 = ATgetFirst((ATermList) t);
      f_58 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_58 = NULL,k_58 = NULL;
        static ATerm b_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_58)), not_null(k_58));
          return(t);
        }
        t = f_58;
        t = i_0(t);
        if(((j_58 != NULL) && (j_58 != t)))
          _fail(t);
        else
          j_58 = t;
        t = z_57;
        t = g_0(t);
        if(((k_58 != NULL) && (k_58 != t)))
          _fail(t);
        else
          k_58 = t;
        t = f_58;
        t = reverse_acc_2_0(g_0, b_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_23;
      t = i_0(t);
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL,u_6 = NULL;
  s_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_58);
  q_58 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_58);
  u_6 = t;
  t = SSLsetAnnotations(u_6, q_58);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm u_58 = NULL;
  u_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_58), term_u_25);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_58 = NULL,n_58 = NULL;
  ATerm v_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_58 = NULL,p_58 = NULL;
      t = term_f_22;
      o_58 = t;
      t = term_v_24;
      p_58 = t;
      t = term_w_24;
      t = b_11(o_58, p_58, t);
      LocalPopChoice(x_25);
    }
  else
    {
      t = v_25;
      t = fetch_1_0(c_3, t);
    }
  t = term_z_25;
  t = echo_0_0(t);
  t = term_m_24;
  m_58 = t;
  t = term_n_24;
  n_58 = t;
  t = term_a_26;
  t = b_11(m_58, n_58, t);
  t = reverse_acc_2_0(_id, d_3, t);
  t = map_1_0(f_3, t);
  return(t);
}
ATerm fetch_1_0 (ATerm c_124 (ATerm), ATerm t)
{
  static ATerm t_59 (ATerm t)
  {
    ATerm q_59 = NULL,r_59 = NULL,s_59 = NULL;
    q_59 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_59 = ATgetFirst((ATermList) t);
        s_59 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_26 = t;
      int d_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_4 = NULL,a_5 = NULL,w_6 = NULL;
          t = SSLgetAnnotations(q_59);
          x_4 = t;
          t = r_59;
          t = c_124(t);
          a_5 = t;
          t = (ATerm) ATinsert(CheckATermList(s_59), a_5);
          w_6 = t;
          t = SSLsetAnnotations(w_6, x_4);
          LocalPopChoice(d_26);
        }
      else
        {
          t = b_26;
          {
            ATerm i_5 = NULL,l_5 = NULL,x_6 = NULL;
            t = SSLgetAnnotations(q_59);
            i_5 = t;
            t = s_59;
            t = t_59(t);
            l_5 = t;
            t = (ATerm) ATinsert(CheckATermList(l_5), r_59);
            x_6 = t;
            t = SSLsetAnnotations(x_6, i_5);
          }
        }
    }
    return(t);
  }
  t = t_59(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL;
  x_59 = t;
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_59;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_26 = ATgetFirst((ATermList) t);
                ATerm h_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_59;
          }
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        t = (ATerm) ATinsert(ATempty, x_59);
      }
  }
  y_59 = t;
  t = term_i_22;
  z_59 = t;
  t = SSL_printnl(z_59, y_59);
  t = x_59;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm d_60 = NULL,e_60 = NULL;
  t = term_f_22;
  d_60 = t;
  t = term_v_24;
  e_60 = t;
  t = term_w_24;
  t = b_11(d_60, e_60, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm b_11 (ATerm l_54, ATerm m_54, ATerm t)
{
  t = SSL_table_get(l_54, m_54);
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
  ATerm f_60 = NULL,g_60 = NULL;
  t = term_i_26;
  f_60 = t;
  t = term_p_23;
  g_60 = t;
  t = term_j_26;
  t = e_11(f_60, g_60, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_k_26;
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
  ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL;
  t = term_i_26;
  j_60 = t;
  t = term_p_23;
  k_60 = t;
  t = term_j_26;
  t = e_11(j_60, k_60, t);
  t = term_l_26;
  h_60 = t;
  t = term_p_23;
  i_60 = t;
  t = term_m_26;
  t = e_11(h_60, i_60, t);
  t = term_n_26;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_o_26;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_3, j_3, k_3, t);
      LocalPopChoice(r_26);
    }
  else
    {
      t = p_26;
      t = Option_3_0(l_3, m_3, n_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm t)
{
  ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,a_7 = NULL;
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
  t = l_88(t);
  o_60 = t;
  t = n_60;
  t = m_88(t);
  p_60 = t;
  t = (ATerm) ATinsert(CheckATermList(p_60), o_60);
  a_7 = t;
  t = SSLsetAnnotations(a_7, l_60);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_132 (ATerm), ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,a_61 = NULL,b_61 = NULL,c_7 = NULL;
  v_60 = t;
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_26;
        t = d_132(t);
        LocalPopChoice(t_26);
      }
    else
      {
        t = s_26;
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
  t = term_v_24;
  b_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_24, x_60);
  t = e_11(b_61, x_60, t);
  t = y_60;
  {
    static ATerm l_61 (ATerm t)
    {
      ATerm v_26 = t;
      int w_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_26 = t;
          int y_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_61 = NULL;
              e_61 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_61;
              LocalPopChoice(y_26);
            }
          else
            {
              t = x_26;
              t = d_132(t);
              t = Cons_2_0(_id, l_61, t);
            }
          LocalPopChoice(w_26);
        }
      else
        {
          t = v_26;
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
  c_7 = t;
  t = SSLsetAnnotations(c_7, w_60);
  return(t);
}
static ATerm p_3 (ATerm t)
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
static ATerm q_3 (ATerm t)
{
  ATerm y_61 = NULL,z_61 = NULL;
  t = term_q_25;
  y_61 = t;
  t = term_p_23;
  z_61 = t;
  t = term_z_26;
  t = e_11(y_61, z_61, t);
  t = term_a_27;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_b_27;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_132 (ATerm), ATerm t)
{
  ATerm q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL;
  s_61 = t;
  t = term_m_24;
  u_61 = t;
  t = term_n_24;
  v_61 = t;
  t = (ATerm) ATempty;
  w_61 = t;
  t = SSL_table_put(u_61, v_61, w_61);
  t = s_61;
  {
    static ATerm o_3 (ATerm t)
    {
      ATerm c_27 = t;
      int d_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_132(t);
          LocalPopChoice(d_27);
        }
      else
        {
          t = c_27;
          {
            ATerm f_27 = t;
            int g_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_3, q_3, r_3, t);
                LocalPopChoice(g_27);
              }
            else
              {
                t = f_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_3, t);
  }
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_62 = NULL;
        k_62 = t;
        {
          ATerm j_27 = t;
          int k_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_5 = NULL;
              t = k_62;
              {
                ATerm l_27 = t;
                int m_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_5 = NULL,u_5 = NULL;
                    t = term_f_22;
                    t_5 = t;
                    t = term_q_25;
                    u_5 = t;
                    t = term_s_25;
                    t = b_11(t_5, u_5, t);
                    LocalPopChoice(m_27);
                  }
                else
                  {
                    t = l_27;
                    t = fetch_1_0(s_3, t);
                  }
              }
              t = k_62;
              t = default_system_usage_0_0(t);
              t = term_x_23;
              s_5 = t;
              t = SSL_exit(s_5);
              LocalPopChoice(k_27);
            }
          else
            {
              t = j_27;
              {
                ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
                t = term_f_22;
                z_5 = t;
                t = term_i_26;
                a_6 = t;
                t = term_n_27;
                t = b_11(z_5, a_6, t);
                t = k_62;
                t = default_system_about_0_0(t);
                t = term_x_23;
                y_5 = t;
                t = SSL_exit(y_5);
              }
            }
        }
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        {
          ATerm o_27 = t;
          int p_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL;
              static ATerm t_3 (ATerm t)
              {
                ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL,e_7 = NULL;
                q_62 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_62 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_62);
                o_62 = t;
                t = p_62;
                if(((q_61 != NULL) && (q_61 != t)))
                  _fail(t);
                else
                  q_61 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_62);
                e_7 = t;
                t = SSLsetAnnotations(e_7, o_62);
                return(t);
              }
              t = fetch_1_0(t_3, t);
              t = term_q_23;
              m_62 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_61)), term_q_27);
              n_62 = t;
              t = SSL_printnl(m_62, n_62);
              t = (ATerm) ATmakeAppl(sym__2, term_q_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_61)), term_q_27));
              t = default_system_usage_0_0(t);
              t = term_t_23;
              l_62 = t;
              t = SSL_exit(l_62);
              LocalPopChoice(p_27);
            }
          else
            {
              t = o_27;
            }
        }
      }
  }
  r_61 = t;
  t = term_m_24;
  t_61 = t;
  t = SSL_table_destroy(t_61);
  t = r_61;
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm t)
{
  ATerm v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL;
  t = parse_options_1_0(c_130, t);
  v_62 = t;
  t = term_r_27;
  y_62 = t;
  t = SSL_table_create(y_62);
  t = term_r_27;
  w_62 = t;
  t = term_s_27;
  x_62 = t;
  t = SSL_table_put(w_62, x_62, v_62);
  t = v_62;
  t = e_130(t);
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_130, t);
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        {
          ATerm w_27 = t;
          int x_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_130(t);
              t = report_success_0_0(t);
              LocalPopChoice(x_27);
            }
          else
            {
              t = w_27;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm y_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(z_27);
    }
  else
    {
      t = y_27;
      {
        ATerm a_28 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = Option_3_0(a_4, e_4, f_4, t);
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
                        t = verbose_option_0_0(t);
                        LocalPopChoice(g_28);
                      }
                    else
                      {
                        t = f_28;
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
  ATerm d_63 = NULL,e_63 = NULL;
  t = term_m_22;
  d_63 = t;
  t = term_p_23;
  e_63 = t;
  t = term_h_28;
  t = e_11(d_63, e_63, t);
  t = term_i_28;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_k_28;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = output_1_0(h_4, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,k_7 = NULL,j_7 = NULL,i_7 = NULL,h_7 = NULL;
  u_63 = t;
  if(match_cons(t, sym_Specification_1))
    {
      h_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_63);
  g_63 = t;
  t = h_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_63 = ATgetFirst((ATermList) t);
      k_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_63);
  i_63 = t;
  t = k_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_63 = ATgetFirst((ATermList) t);
      o_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_63);
  m_63 = t;
  t = n_63;
  if(match_cons(t, sym_Strategies_1))
    {
      r_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_63);
  q_63 = t;
  t = r_63;
  t = map_1_0(i_4, t);
  s_63 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, s_63);
  h_7 = t;
  t = SSLsetAnnotations(h_7, q_63);
  t_63 = t;
  t = o_63;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_63), t_63);
  i_7 = t;
  t = SSLsetAnnotations(i_7, m_63);
  p_63 = t;
  t = (ATerm) ATinsert(CheckATermList(p_63), j_63);
  j_7 = t;
  t = SSLsetAnnotations(j_7, i_63);
  l_63 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, l_63);
  k_7 = t;
  t = SSLsetAnnotations(k_7, g_63);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL;
  l_64 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      h_64 = ATgetArgument(t, 0);
      i_64 = ATgetArgument(t, 1);
      j_64 = ATgetArgument(t, 2);
      k_64 = ATgetArgument(t, 3);
      {
        ATerm l_28 = t;
        int m_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_6 = NULL,m_6 = NULL,g_7 = NULL;
            t = SSLgetAnnotations(l_64);
            h_6 = t;
            t = k_64;
            t = simplify_0_0(t);
            m_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, h_64, i_64, j_64, m_6);
            g_7 = t;
            t = SSLsetAnnotations(g_7, h_6);
            LocalPopChoice(m_28);
          }
        else
          {
            t = l_28;
            t = l_64;
          }
      }
    }
  else
    {
      t = l_64;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(u_3, default_usage_0_0, _id, x_3, t);
  return(t);
}
