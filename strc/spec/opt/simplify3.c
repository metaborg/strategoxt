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
ATerm term_r_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_t_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_a_27;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
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
ATerm term_o_23;
ATerm term_n_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_l_22;
ATerm term_i_22;
ATerm term_f_22;
ATerm term_k_21;
ATerm term_d_6;
ATerm term_s_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_n_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_t_22);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_s_23);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__2, term_d_24, term_e_24);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_24);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym__2, term_k_24, term_v_23);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_c_25);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_d_24);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_b_26);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym__2, term_t_24, term_u_24);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__2, term_o_26, term_v_23);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym__2, term_s_26, term_v_23);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym__2, term_b_26, term_v_23);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_o_26);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym__2, term_t_22, term_v_23);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm alltd_1_0 (ATerm b_105 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm k_103 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm n_104 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm k_124 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm g_2 (ATerm w_1, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm j_103 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm t);
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
ATerm map_1_0 (ATerm t_123 (ATerm), ATerm t);
static ATerm r_10 (ATerm w_43, ATerm x_43, ATerm t);
static ATerm s_10 (ATerm x_48, ATerm y_48, ATerm t);
static ATerm u_10 (ATerm n_117 (ATerm), ATerm e_429, ATerm d_49, ATerm t);
static ATerm t_10 (ATerm t_48, ATerm u_48, ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm output_1_0 (ATerm k_130 (ATerm), ATerm t);
static ATerm c_51 (ATerm w_50, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm v_10 (ATerm z_48, ATerm t);
static ATerm w_10 (ATerm p_42, ATerm q_42, ATerm t);
static ATerm x_10 (ATerm y_43, ATerm z_43, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_52 (ATerm o_51, ATerm t);
static ATerm s_52 (ATerm s_51, ATerm t_51, ATerm u_51, ATerm t);
static ATerm x_52 (ATerm c_52, ATerm d_52, ATerm e_52, ATerm t);
static ATerm y_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm l_130 (ATerm), ATerm t);
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
static ATerm f_11 (ATerm r_47, ATerm s_47, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_11 (ATerm v_52, ATerm w_52, ATerm u_52, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm z_10 (ATerm d_50, ATerm e_50, ATerm t);
ATerm foldr_2_0 (ATerm j_122 (ATerm), ATerm k_122 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm k_115 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm need_help_1_0 (ATerm b_130 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm d_124 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_11 (ATerm m_54, ATerm n_54, ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm m_88 (ATerm), ATerm n_88 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm e_132 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm parse_options_1_0 (ATerm d_132 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm d_130 (ATerm), ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm g_130 (ATerm), ATerm t);
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
ATerm alltd_1_0 (ATerm b_105 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    ATerm q_0 = t;
    int l_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_105(t);
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
ATerm bottomup_1_0 (ATerm k_103 (ATerm), ATerm t)
{
  static ATerm b_0 (ATerm t)
  {
    t = bottomup_1_0(k_103, t);
    return(t);
  }
  t = SRTS_all(b_0, t);
  t = k_103(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm n_104 (ATerm), ATerm t)
{
  static ATerm p_2 (ATerm t)
  {
    ATerm m_4 = t;
    int n_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_104(t);
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
ATerm at_end_1_0 (ATerm k_124 (ATerm), ATerm t)
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
        t = k_124(t);
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
ATerm topdown_1_0 (ATerm j_103 (ATerm), ATerm t)
{
  static ATerm p_0 (ATerm t)
  {
    t = topdown_1_0(j_103, t);
    return(t);
  }
  t = j_103(t);
  t = SRTS_all(p_0, t);
  return(t);
}
ATerm genzip_4_0 (ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm t)
{
  static ATerm o_2 (ATerm t)
  {
    ATerm s_4 = t;
    int t_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_107(t);
        LocalPopChoice(t_4);
      }
    else
      {
        t = s_4;
        {
          ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,v_0 = NULL;
          t = w_107(t);
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
          t = y_107(t);
          l_2 = t;
          t = k_2;
          t = o_2(t);
          m_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_2, m_2);
          v_0 = t;
          t = SSLsetAnnotations(v_0, i_2);
          t = x_107(t);
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
  ATerm d_18 = NULL,g_18 = NULL,k_18 = NULL,n_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_4 = ATgetArgument(t, 0);
      if(((ATgetType(w_4) == AT_LIST) && !(ATisEmpty(w_4))))
        {
          d_18 = ATgetFirst((ATermList) w_4);
          g_18 = (ATerm) ATgetNext((ATermList) w_4);
        }
      else
        _fail(t);
      {
        ATerm x_4 = ATgetArgument(t, 1);
        if(((ATgetType(x_4) == AT_LIST) && !(ATisEmpty(x_4))))
          {
            k_18 = ATgetFirst((ATermList) x_4);
            n_18 = (ATerm) ATgetNext((ATermList) x_4);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_18, k_18), (ATerm) ATmakeAppl(sym__2, g_18, n_18));
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL;
  if(match_cons(t, sym__2))
    {
      q_18 = ATgetArgument(t, 0);
      r_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_18), q_18);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm s_18 = NULL,x_18 = NULL;
  if(match_cons(t, sym__2))
    {
      s_18 = ATgetArgument(t, 0);
      x_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_18), (ATerm) ATmakeAppl(sym_Match_1, x_18));
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
  ATerm f_25 = NULL,g_25 = NULL,k_25 = NULL,l_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_5 = ATgetArgument(t, 0);
      if(((ATgetType(c_5) == AT_LIST) && !(ATisEmpty(c_5))))
        {
          f_25 = ATgetFirst((ATermList) c_5);
          g_25 = (ATerm) ATgetNext((ATermList) c_5);
        }
      else
        _fail(t);
      {
        ATerm d_5 = ATgetArgument(t, 1);
        if(((ATgetType(d_5) == AT_LIST) && !(ATisEmpty(d_5))))
          {
            k_25 = ATgetFirst((ATermList) d_5);
            l_25 = (ATerm) ATgetNext((ATermList) d_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_25, k_25), (ATerm) ATmakeAppl(sym__2, g_25, l_25));
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm m_25 = NULL,q_25 = NULL;
  if(match_cons(t, sym__2))
    {
      m_25 = ATgetArgument(t, 0);
      q_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_25), m_25);
  return(t);
}
static ATerm i_1 (ATerm t)
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
static ATerm j_1 (ATerm t)
{
  ATerm e_5 = t;
  int f_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm g_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(f_5);
      {
        ATerm t_36 = NULL,u_36 = NULL;
        t_36 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm h_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        u_36 = t;
        t = SSLgetAnnotations(t_36);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_5 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) i_5) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_5 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(k_5) != AT_LIST) || !(ATisEmpty(k_5))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = u_36;
      }
    }
  else
    {
      t = e_5;
      {
        ATerm l_5 = t;
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
            t = l_5;
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
    ATerm e_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
    z_11 = t;
    if(match_cons(t, sym_Test_1))
      {
        y_11 = ATgetArgument(t, 0);
        t = y_11;
        if(match_cons(t, sym_Id_0))
          {
            ATerm q_5 = t;
            int r_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_s_5;
                t = r_0(t);
                LocalPopChoice(r_5);
              }
            else
              {
                t = q_5;
                {
                  ATerm w_5 = t;
                  int x_5 = stack_ptr;
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
                      LocalPopChoice(x_5);
                    }
                  else
                    {
                      t = w_5;
                      t = z_11;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm y_5 = t;
                int c_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_d_6;
                    t = r_0(t);
                    LocalPopChoice(c_6);
                  }
                else
                  {
                    t = y_5;
                    {
                      ATerm e_6 = t;
                      int f_6 = stack_ptr;
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
                          LocalPopChoice(f_6);
                        }
                      else
                        {
                          t = e_6;
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
                      ATerm g_6 = t;
                      int h_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, v_11);
                          t = r_0(t);
                          LocalPopChoice(h_6);
                        }
                      else
                        {
                          t = g_6;
                          {
                            ATerm j_6 = t;
                            int k_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,m_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,i_14 = NULL,j_14 = NULL;
                                t = z_11;
                                t = new_0_0(t);
                                g_13 = t;
                                t = bottomup_1_0(r_0, t);
                                i_14 = t;
                                t = (ATerm) ATempty;
                                t = r_0(t);
                                j_14 = t;
                                t = (ATerm) ATinsert(CheckATermList(j_14), i_14);
                                t = r_0(t);
                                h_13 = t;
                                t = g_13;
                                t = bottomup_1_0(r_0, t);
                                b_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, b_14);
                                t = r_0(t);
                                a_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, a_14);
                                t = r_0(t);
                                m_13 = t;
                                t = y_11;
                                t = bottomup_1_0(r_0, t);
                                q_13 = t;
                                t = g_13;
                                t = bottomup_1_0(r_0, t);
                                z_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, z_13);
                                t = r_0(t);
                                s_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, s_13);
                                t = r_0(t);
                                r_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, q_13, r_13);
                                t = r_0(t);
                                p_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, m_13, p_13);
                                t = r_0(t);
                                i_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, h_13, i_13);
                                t = r_0(t);
                                LocalPopChoice(k_6);
                              }
                            else
                              {
                                t = j_6;
                                t = z_11;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm l_6 = t;
                    int m_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_14 = NULL,q_14 = NULL,s_14 = NULL,x_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
                        t = z_11;
                        t = new_0_0(t);
                        p_14 = t;
                        t = bottomup_1_0(r_0, t);
                        g_15 = t;
                        t = (ATerm) ATempty;
                        t = r_0(t);
                        h_15 = t;
                        t = (ATerm) ATinsert(CheckATermList(h_15), g_15);
                        t = r_0(t);
                        q_14 = t;
                        t = p_14;
                        t = bottomup_1_0(r_0, t);
                        f_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, f_15);
                        t = r_0(t);
                        e_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, e_15);
                        t = r_0(t);
                        x_14 = t;
                        t = y_11;
                        t = bottomup_1_0(r_0, t);
                        a_15 = t;
                        t = p_14;
                        t = bottomup_1_0(r_0, t);
                        d_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, d_15);
                        t = r_0(t);
                        c_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, c_15);
                        t = r_0(t);
                        b_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, a_15, b_15);
                        t = r_0(t);
                        z_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, x_14, z_14);
                        t = r_0(t);
                        s_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, q_14, s_14);
                        t = r_0(t);
                        LocalPopChoice(m_6);
                      }
                    else
                      {
                        t = l_6;
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
                ATerm o_6 = t;
                int r_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_d_6;
                    t = r_0(t);
                    LocalPopChoice(r_6);
                  }
                else
                  {
                    t = o_6;
                    t = z_11;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm s_6 = t;
                    int t_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_s_5;
                        t = r_0(t);
                        LocalPopChoice(t_6);
                      }
                    else
                      {
                        t = s_6;
                        t = z_11;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        v_11 = ATgetArgument(t, 0);
                        {
                          ATerm u_6 = t;
                          int v_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, v_11);
                              t = r_0(t);
                              LocalPopChoice(v_6);
                            }
                          else
                            {
                              t = u_6;
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
                                l_11 = ATgetArgument(t, 1);
                                t = y_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = x_11;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm w_6 = t;
                                        int y_6 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_d_6;
                                            t = r_0(t);
                                            LocalPopChoice(y_6);
                                          }
                                        else
                                          {
                                            t = w_6;
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
                                              ATerm b_7 = t;
                                              int c_7 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm q_17 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                  t = r_0(t);
                                                  q_17 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, q_17);
                                                  t = r_0(t);
                                                  LocalPopChoice(c_7);
                                                }
                                              else
                                                {
                                                  t = b_7;
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
                                                    m_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm e_7 = t;
                                                      int g_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, r_11, q_11);
                                                          {
                                                            ATerm i_7 = t;
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
                                                                t = i_7;
                                                              }
                                                          }
                                                          t = term_d_6;
                                                          t = bottomup_1_0(r_0, t);
                                                          LocalPopChoice(g_7);
                                                        }
                                                      else
                                                        {
                                                          t = e_7;
                                                          {
                                                            ATerm o_7 = t;
                                                            int p_7 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm c_18 = NULL;
                                                                t = q_11;
                                                                if((r_11 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, m_11, l_11);
                                                                t = genzip_4_0(u_0, w_0, y_0, z_0, t);
                                                                c_18 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, r_11, m_11)), u_11));
                                                                t = bottomup_1_0(r_0, t);
                                                                LocalPopChoice(p_7);
                                                              }
                                                            else
                                                              {
                                                                t = o_7;
                                                                {
                                                                  ATerm q_7 = t;
                                                                  int r_7 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm d_19 = NULL;
                                                                      t = s_11;
                                                                      if((v_11 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, v_11);
                                                                      t = r_0(t);
                                                                      d_19 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_19, u_11);
                                                                      t = r_0(t);
                                                                      LocalPopChoice(r_7);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = q_7;
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
                                                    ATerm s_7 = t;
                                                    int t_7 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm i_19 = NULL;
                                                        t = s_11;
                                                        if((v_11 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, v_11);
                                                        t = r_0(t);
                                                        i_19 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, i_19, u_11);
                                                        t = r_0(t);
                                                        LocalPopChoice(t_7);
                                                      }
                                                    else
                                                      {
                                                        t = s_7;
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
                                                      ATerm u_7 = t;
                                                      int v_7 = stack_ptr;
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
                                                          LocalPopChoice(v_7);
                                                        }
                                                      else
                                                        {
                                                          t = u_7;
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
                                                          ATerm w_7 = t;
                                                          int x_7 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_19 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                              t = r_0(t);
                                                              r_19 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, r_19);
                                                              t = r_0(t);
                                                              LocalPopChoice(x_7);
                                                            }
                                                          else
                                                            {
                                                              t = w_7;
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
                                        ATerm y_7 = t;
                                        int z_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_d_6;
                                            t = r_0(t);
                                            LocalPopChoice(z_7);
                                          }
                                        else
                                          {
                                            t = y_7;
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
                                              ATerm a_8 = t;
                                              int b_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm a_20 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                  t = r_0(t);
                                                  a_20 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, a_20);
                                                  t = r_0(t);
                                                  LocalPopChoice(b_8);
                                                }
                                              else
                                                {
                                                  t = a_8;
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
                                                  ATerm c_8 = t;
                                                  int d_8 = stack_ptr;
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
                                                      LocalPopChoice(d_8);
                                                    }
                                                  else
                                                    {
                                                      t = c_8;
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
                                                      ATerm e_8 = t;
                                                      int f_8 = stack_ptr;
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
                                                          LocalPopChoice(f_8);
                                                        }
                                                      else
                                                        {
                                                          t = e_8;
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
                                                          ATerm g_8 = t;
                                                          int h_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                              t = r_0(t);
                                                              v_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, v_20);
                                                              t = r_0(t);
                                                              LocalPopChoice(h_8);
                                                            }
                                                          else
                                                            {
                                                              t = g_8;
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
                                            ATerm i_8 = t;
                                            int j_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_d_6;
                                                t = r_0(t);
                                                LocalPopChoice(j_8);
                                              }
                                            else
                                              {
                                                t = i_8;
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
                                                  ATerm k_8 = t;
                                                  int l_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm g_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                      t = r_0(t);
                                                      g_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, g_21);
                                                      t = r_0(t);
                                                      LocalPopChoice(l_8);
                                                    }
                                                  else
                                                    {
                                                      t = k_8;
                                                      t = z_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm m_8 = t;
                                                int n_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm o_8 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(n_8);
                                                    {
                                                      ATerm p_8 = t;
                                                      int q_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm q_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_11);
                                                          t = r_0(t);
                                                          q_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, q_21, u_11);
                                                          t = r_0(t);
                                                          LocalPopChoice(q_8);
                                                        }
                                                      else
                                                        {
                                                          t = p_8;
                                                          t = z_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = m_8;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        v_11 = ATgetArgument(t, 0);
                                                        t = v_11;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            r_11 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm r_8 = t;
                                                              int s_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm u_21 = NULL,v_21 = NULL;
                                                                  t = q_11;
                                                                  if((r_11 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, r_11);
                                                                  t = r_0(t);
                                                                  v_21 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, v_21);
                                                                  t = r_0(t);
                                                                  u_21 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_21, u_11);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(s_8);
                                                                }
                                                              else
                                                                {
                                                                  t = r_8;
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
                                                              ATerm t_8 = t;
                                                              int u_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm b_22 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                                  t = r_0(t);
                                                                  b_22 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, b_22);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(u_8);
                                                                }
                                                              else
                                                                {
                                                                  t = t_8;
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
                                            ATerm v_8 = t;
                                            int w_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_d_6;
                                                t = r_0(t);
                                                LocalPopChoice(w_8);
                                              }
                                            else
                                              {
                                                t = v_8;
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
                                                  ATerm x_8 = t;
                                                  int y_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm m_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                      t = r_0(t);
                                                      m_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, m_22);
                                                      t = r_0(t);
                                                      LocalPopChoice(y_8);
                                                    }
                                                  else
                                                    {
                                                      t = x_8;
                                                      t = z_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm z_8 = t;
                                                int a_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm b_9 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(a_9);
                                                    {
                                                      ATerm c_9 = t;
                                                      int d_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm q_22 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_11);
                                                          t = r_0(t);
                                                          q_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, u_11);
                                                          t = r_0(t);
                                                          LocalPopChoice(d_9);
                                                        }
                                                      else
                                                        {
                                                          t = c_9;
                                                          t = z_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = z_8;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        v_11 = ATgetArgument(t, 0);
                                                        w_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm e_9 = t;
                                                          int f_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_22 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                              t = r_0(t);
                                                              v_22 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, v_22);
                                                              t = r_0(t);
                                                              LocalPopChoice(f_9);
                                                            }
                                                          else
                                                            {
                                                              t = e_9;
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
                                            ATerm g_9 = t;
                                            int h_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_d_6;
                                                t = r_0(t);
                                                LocalPopChoice(h_9);
                                              }
                                            else
                                              {
                                                t = g_9;
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
                                                  ATerm i_9 = t;
                                                  int j_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                      t = r_0(t);
                                                      e_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, e_23);
                                                      t = r_0(t);
                                                      LocalPopChoice(j_9);
                                                    }
                                                  else
                                                    {
                                                      t = i_9;
                                                      t = z_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm k_9 = t;
                                                int l_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm m_9 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(l_9);
                                                    {
                                                      ATerm n_9 = t;
                                                      int o_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm k_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, s_11, n_11, o_11);
                                                          t = r_0(t);
                                                          k_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, k_23, u_11);
                                                          t = r_0(t);
                                                          LocalPopChoice(o_9);
                                                        }
                                                      else
                                                        {
                                                          t = n_9;
                                                          t = z_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = k_9;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        v_11 = ATgetArgument(t, 0);
                                                        w_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm p_9 = t;
                                                          int q_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                              t = r_0(t);
                                                              p_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, p_23);
                                                              t = r_0(t);
                                                              LocalPopChoice(q_9);
                                                            }
                                                          else
                                                            {
                                                              t = p_9;
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
                                            ATerm r_9 = t;
                                            int s_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_d_6;
                                                t = r_0(t);
                                                LocalPopChoice(s_9);
                                              }
                                            else
                                              {
                                                t = r_9;
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
                                                  ATerm t_9 = t;
                                                  int u_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm y_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                      t = r_0(t);
                                                      y_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, y_23);
                                                      t = r_0(t);
                                                      LocalPopChoice(u_9);
                                                    }
                                                  else
                                                    {
                                                      t = t_9;
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
                                                      ATerm v_9 = t;
                                                      int w_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm g_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                          t = r_0(t);
                                                          g_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, g_24);
                                                          t = r_0(t);
                                                          LocalPopChoice(w_9);
                                                        }
                                                      else
                                                        {
                                                          t = v_9;
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
                                        ATerm x_9 = t;
                                        int y_9 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_d_6;
                                            t = r_0(t);
                                            LocalPopChoice(y_9);
                                          }
                                        else
                                          {
                                            t = x_9;
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
                                              ATerm z_9 = t;
                                              int a_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm s_24 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                  t = r_0(t);
                                                  s_24 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, s_24);
                                                  t = r_0(t);
                                                  LocalPopChoice(a_10);
                                                }
                                              else
                                                {
                                                  t = z_9;
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
                                                    m_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm b_10 = t;
                                                      int c_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, r_11, s_11);
                                                          {
                                                            ATerm d_10 = t;
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
                                                                t = d_10;
                                                              }
                                                          }
                                                          t = term_d_6;
                                                          t = bottomup_1_0(r_0, t);
                                                          LocalPopChoice(c_10);
                                                        }
                                                      else
                                                        {
                                                          t = b_10;
                                                          {
                                                            ATerm e_10 = t;
                                                            int f_10 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm e_25 = NULL;
                                                                t = s_11;
                                                                if((r_11 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, m_11, n_11);
                                                                t = genzip_4_0(a_1, e_1, f_1, i_1, t);
                                                                e_25 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, e_25), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, r_11, m_11)));
                                                                t = bottomup_1_0(r_0, t);
                                                                LocalPopChoice(f_10);
                                                              }
                                                            else
                                                              {
                                                                t = e_10;
                                                                {
                                                                  ATerm g_10 = t;
                                                                  int h_10 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = t_11;
                                                                      if((v_11 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, v_11);
                                                                      t = r_0(t);
                                                                      LocalPopChoice(h_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = g_10;
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
                                                    ATerm i_10 = t;
                                                    int j_10 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = t_11;
                                                        if((v_11 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, v_11);
                                                        t = r_0(t);
                                                        LocalPopChoice(j_10);
                                                      }
                                                    else
                                                      {
                                                        t = i_10;
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
                                                      ATerm k_10 = t;
                                                      int l_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = t_11;
                                                          if((v_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, v_11);
                                                          t = r_0(t);
                                                          LocalPopChoice(l_10);
                                                        }
                                                      else
                                                        {
                                                          t = k_10;
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
                                                          ATerm m_10 = t;
                                                          int n_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                              t = r_0(t);
                                                              q_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, q_26);
                                                              t = r_0(t);
                                                              LocalPopChoice(n_10);
                                                            }
                                                          else
                                                            {
                                                              t = m_10;
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
                                        ATerm o_10 = t;
                                        int p_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_d_6;
                                            t = r_0(t);
                                            LocalPopChoice(p_10);
                                          }
                                        else
                                          {
                                            t = o_10;
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
                                              ATerm q_10 = t;
                                              int a_11 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm c_27 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                  t = r_0(t);
                                                  c_27 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, c_27);
                                                  t = r_0(t);
                                                  LocalPopChoice(a_11);
                                                }
                                              else
                                                {
                                                  t = q_10;
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
                                                  ATerm b_11 = t;
                                                  int a_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = t_11;
                                                      if((v_11 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, v_11);
                                                      t = r_0(t);
                                                      LocalPopChoice(a_12);
                                                    }
                                                  else
                                                    {
                                                      t = b_11;
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
                                                      ATerm o_12 = t;
                                                      int p_12 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = t_11;
                                                          if((v_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, v_11);
                                                          t = r_0(t);
                                                          LocalPopChoice(p_12);
                                                        }
                                                      else
                                                        {
                                                          t = o_12;
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
                                                          ATerm d_13 = t;
                                                          int e_13 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                              t = r_0(t);
                                                              u_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, u_27);
                                                              t = r_0(t);
                                                              LocalPopChoice(e_13);
                                                            }
                                                          else
                                                            {
                                                              t = d_13;
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
                                            ATerm f_13 = t;
                                            int j_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_d_6;
                                                t = r_0(t);
                                                LocalPopChoice(j_13);
                                              }
                                            else
                                              {
                                                t = f_13;
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
                                                  ATerm k_13 = t;
                                                  int l_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                      t = r_0(t);
                                                      e_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, e_28);
                                                      t = r_0(t);
                                                      LocalPopChoice(l_13);
                                                    }
                                                  else
                                                    {
                                                      t = k_13;
                                                      t = z_11;
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
                                                        ATerm t_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(o_13);
                                                    {
                                                      ATerm u_13 = t;
                                                      int v_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, t_11);
                                                          t = r_0(t);
                                                          LocalPopChoice(v_13);
                                                        }
                                                      else
                                                        {
                                                          t = u_13;
                                                          t = z_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = n_13;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        v_11 = ATgetArgument(t, 0);
                                                        t = v_11;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            r_11 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm w_13 = t;
                                                              int x_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm j_28 = NULL;
                                                                  t = s_11;
                                                                  if((r_11 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, r_11);
                                                                  t = r_0(t);
                                                                  j_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, j_28);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(x_13);
                                                                }
                                                              else
                                                                {
                                                                  t = w_13;
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
                                                              ATerm y_13 = t;
                                                              int c_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm q_28 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                                  t = r_0(t);
                                                                  q_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, q_28);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(c_14);
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
                                            ATerm d_14 = t;
                                            int e_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_d_6;
                                                t = r_0(t);
                                                LocalPopChoice(e_14);
                                              }
                                            else
                                              {
                                                t = d_14;
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
                                                  ATerm f_14 = t;
                                                  int g_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm b_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                      t = r_0(t);
                                                      b_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, b_29);
                                                      t = r_0(t);
                                                      LocalPopChoice(g_14);
                                                    }
                                                  else
                                                    {
                                                      t = f_14;
                                                      t = z_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm h_14 = t;
                                                int k_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm l_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(k_14);
                                                    {
                                                      ATerm m_14 = t;
                                                      int n_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, t_11);
                                                          t = r_0(t);
                                                          LocalPopChoice(n_14);
                                                        }
                                                      else
                                                        {
                                                          t = m_14;
                                                          t = z_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = h_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        v_11 = ATgetArgument(t, 0);
                                                        w_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm o_14 = t;
                                                          int r_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm k_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                              t = r_0(t);
                                                              k_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, k_29);
                                                              t = r_0(t);
                                                              LocalPopChoice(r_14);
                                                            }
                                                          else
                                                            {
                                                              t = o_14;
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
                                                t = term_d_6;
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
                                                  ATerm v_14 = t;
                                                  int w_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm y_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                      t = r_0(t);
                                                      y_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, y_29);
                                                      t = r_0(t);
                                                      LocalPopChoice(w_14);
                                                    }
                                                  else
                                                    {
                                                      t = v_14;
                                                      t = z_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm y_14 = t;
                                                int i_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm j_15 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(i_15);
                                                    {
                                                      ATerm k_15 = t;
                                                      int l_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, t_11, u_11, p_11);
                                                          t = r_0(t);
                                                          LocalPopChoice(l_15);
                                                        }
                                                      else
                                                        {
                                                          t = k_15;
                                                          t = z_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = y_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        v_11 = ATgetArgument(t, 0);
                                                        w_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm m_15 = t;
                                                          int n_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm j_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                              t = r_0(t);
                                                              j_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, j_30);
                                                              t = r_0(t);
                                                              LocalPopChoice(n_15);
                                                            }
                                                          else
                                                            {
                                                              t = m_15;
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
                                                ATerm o_15 = t;
                                                int p_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_d_6;
                                                    t = r_0(t);
                                                    LocalPopChoice(p_15);
                                                  }
                                                else
                                                  {
                                                    t = o_15;
                                                    {
                                                      ATerm q_15 = t;
                                                      int r_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm y_30 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, u_11);
                                                          t = r_0(t);
                                                          y_30 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, t_11, y_30);
                                                          t = r_0(t);
                                                          LocalPopChoice(r_15);
                                                        }
                                                      else
                                                        {
                                                          t = q_15;
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
                                                      ATerm s_15 = t;
                                                      int t_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm d_31 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                          t = r_0(t);
                                                          d_31 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, d_31);
                                                          t = r_0(t);
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
                                                                ATerm i_31 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, u_11);
                                                                t = r_0(t);
                                                                i_31 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, t_11, i_31);
                                                                t = r_0(t);
                                                                LocalPopChoice(v_15);
                                                              }
                                                            else
                                                              {
                                                                t = u_15;
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
                                                          ATerm w_15 = t;
                                                          int x_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, u_11);
                                                              t = r_0(t);
                                                              p_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, t_11, p_31);
                                                              t = r_0(t);
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
                                                                    ATerm z_31 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                                    t = r_0(t);
                                                                    z_31 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, z_31);
                                                                    t = r_0(t);
                                                                    LocalPopChoice(z_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = y_15;
                                                                    t = z_11;
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
                                                            ATerm f_32 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, u_11);
                                                            t = r_0(t);
                                                            f_32 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, t_11, f_32);
                                                            t = r_0(t);
                                                            LocalPopChoice(b_16);
                                                          }
                                                        else
                                                          {
                                                            t = a_16;
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
                                                    ATerm c_16 = t;
                                                    int d_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_d_6;
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
                                                              ATerm u_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, u_11);
                                                              t = r_0(t);
                                                              u_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, u_32);
                                                              t = r_0(t);
                                                              LocalPopChoice(f_16);
                                                            }
                                                          else
                                                            {
                                                              t = e_16;
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
                                                          ATerm g_16 = t;
                                                          int h_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                              t = r_0(t);
                                                              a_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, a_33);
                                                              t = r_0(t);
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
                                                                    ATerm e_33 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, u_11);
                                                                    t = r_0(t);
                                                                    e_33 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, e_33);
                                                                    t = r_0(t);
                                                                    LocalPopChoice(j_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = i_16;
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
                                                              ATerm k_16 = t;
                                                              int l_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm j_33 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, u_11);
                                                                  t = r_0(t);
                                                                  j_33 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, j_33);
                                                                  t = r_0(t);
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
                                                                        ATerm r_33 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                                        t = r_0(t);
                                                                        r_33 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, r_33);
                                                                        t = r_0(t);
                                                                        LocalPopChoice(n_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = m_16;
                                                                        t = z_11;
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
                                                                ATerm d_34 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, u_11);
                                                                t = r_0(t);
                                                                d_34 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, d_34);
                                                                t = r_0(t);
                                                                LocalPopChoice(p_16);
                                                              }
                                                            else
                                                              {
                                                                t = o_16;
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
                                                    ATerm q_16 = t;
                                                    int r_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_d_6;
                                                        t = r_0(t);
                                                        LocalPopChoice(r_16);
                                                      }
                                                    else
                                                      {
                                                        t = q_16;
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
                                                          ATerm s_16 = t;
                                                          int t_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                              t = r_0(t);
                                                              r_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, r_34);
                                                              t = r_0(t);
                                                              LocalPopChoice(t_16);
                                                            }
                                                          else
                                                            {
                                                              t = s_16;
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
                                                              ATerm u_16 = t;
                                                              int v_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm z_34 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                                                  t = r_0(t);
                                                                  z_34 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, z_34);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(v_16);
                                                                }
                                                              else
                                                                {
                                                                  t = u_16;
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
                            ATerm w_16 = t;
                            int x_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_s_5;
                                t = r_0(t);
                                LocalPopChoice(x_16);
                              }
                            else
                              {
                                t = w_16;
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
                            ATerm y_16 = t;
                            int z_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_s_5;
                                t = r_0(t);
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
                                      t = x_11;
                                      if((y_11 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(b_17);
                                    }
                                  else
                                    {
                                      t = a_17;
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
                                      ATerm c_17 = t;
                                      int d_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm o_36 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, w_11, x_11);
                                          t = r_0(t);
                                          o_36 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, v_11, o_36);
                                          t = r_0(t);
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
                                                t = x_11;
                                                if((y_11 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(f_17);
                                              }
                                            else
                                              {
                                                t = e_17;
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
                                          ATerm g_17 = t;
                                          int h_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = x_11;
                                              if((y_11 != t))
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
                                                    t = v_11;
                                                    t = topdown_1_0(j_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, v_11);
                                                    t = bottomup_1_0(r_0, t);
                                                    LocalPopChoice(j_17);
                                                  }
                                                else
                                                  {
                                                    t = i_17;
                                                    t = z_11;
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
                                            t = x_11;
                                            if((y_11 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(l_17);
                                          }
                                        else
                                          {
                                            t = k_17;
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
                                ATerm m_17 = t;
                                int n_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_s_5;
                                    t = r_0(t);
                                    LocalPopChoice(n_17);
                                  }
                                else
                                  {
                                    t = m_17;
                                    t = x_11;
                                  }
                              }
                            else
                              {
                                ATerm o_17 = t;
                                int p_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_s_5;
                                    t = r_0(t);
                                    LocalPopChoice(p_17);
                                  }
                                else
                                  {
                                    t = o_17;
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
                                    ATerm r_17 = t;
                                    int s_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_d_6;
                                        t = r_0(t);
                                        LocalPopChoice(s_17);
                                      }
                                    else
                                      {
                                        t = r_17;
                                        t = x_11;
                                      }
                                  }
                                else
                                  {
                                    ATerm t_17 = t;
                                    int u_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_d_6;
                                        t = r_0(t);
                                        LocalPopChoice(u_17);
                                      }
                                    else
                                      {
                                        t = t_17;
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
                                        ATerm v_17 = t;
                                        int w_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm w_37 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, y_11, t_11);
                                            t = conc_0_0(t);
                                            w_37 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, w_37, u_11);
                                            t = bottomup_1_0(r_0, t);
                                            LocalPopChoice(w_17);
                                          }
                                        else
                                          {
                                            t = v_17;
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
                        ATerm x_17 = t;
                        int y_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm z_17 = ATgetArgument(t, 0);
                                x_11 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(y_17);
                            t = x_11;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm a_18 = t;
                                int b_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_s_5;
                                    t = r_0(t);
                                    LocalPopChoice(b_18);
                                  }
                                else
                                  {
                                    t = a_18;
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
                                        t = term_d_6;
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
                            t = x_17;
                            if(match_cons(t, sym_All_1))
                              {
                                y_11 = ATgetArgument(t, 0);
                                t = y_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm h_18 = t;
                                    int i_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_s_5;
                                        t = r_0(t);
                                        LocalPopChoice(i_18);
                                      }
                                    else
                                      {
                                        t = h_18;
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
                                        ATerm j_18 = t;
                                        int l_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_s_5;
                                            t = r_0(t);
                                            LocalPopChoice(l_18);
                                          }
                                        else
                                          {
                                            t = j_18;
                                            {
                                              ATerm m_18 = t;
                                              int o_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL;
                                                  t = z_11;
                                                  t = new_0_0(t);
                                                  i_38 = t;
                                                  t = bottomup_1_0(r_0, t);
                                                  t_38 = t;
                                                  t = (ATerm) ATempty;
                                                  t = r_0(t);
                                                  u_38 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(u_38), t_38);
                                                  t = r_0(t);
                                                  j_38 = t;
                                                  t = i_38;
                                                  t = bottomup_1_0(r_0, t);
                                                  s_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, s_38);
                                                  t = r_0(t);
                                                  r_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, r_38);
                                                  t = r_0(t);
                                                  l_38 = t;
                                                  t = y_11;
                                                  t = bottomup_1_0(r_0, t);
                                                  n_38 = t;
                                                  t = i_38;
                                                  t = bottomup_1_0(r_0, t);
                                                  q_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, q_38);
                                                  t = r_0(t);
                                                  p_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, p_38);
                                                  t = r_0(t);
                                                  o_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_38, o_38);
                                                  t = r_0(t);
                                                  m_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, l_38, m_38);
                                                  t = r_0(t);
                                                  k_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, j_38, k_38);
                                                  t = r_0(t);
                                                  LocalPopChoice(o_18);
                                                }
                                              else
                                                {
                                                  t = m_18;
                                                  t = z_11;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm p_18 = t;
                                            int t_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_d_6;
                                                t = r_0(t);
                                                LocalPopChoice(t_18);
                                              }
                                            else
                                              {
                                                t = p_18;
                                                {
                                                  ATerm u_18 = t;
                                                  int v_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL;
                                                      t = z_11;
                                                      t = new_0_0(t);
                                                      x_38 = t;
                                                      t = bottomup_1_0(r_0, t);
                                                      i_39 = t;
                                                      t = (ATerm) ATempty;
                                                      t = r_0(t);
                                                      j_39 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(j_39), i_39);
                                                      t = r_0(t);
                                                      y_38 = t;
                                                      t = x_38;
                                                      t = bottomup_1_0(r_0, t);
                                                      h_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, h_39);
                                                      t = r_0(t);
                                                      g_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, g_39);
                                                      t = r_0(t);
                                                      a_39 = t;
                                                      t = y_11;
                                                      t = bottomup_1_0(r_0, t);
                                                      c_39 = t;
                                                      t = x_38;
                                                      t = bottomup_1_0(r_0, t);
                                                      f_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, f_39);
                                                      t = r_0(t);
                                                      e_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, e_39);
                                                      t = r_0(t);
                                                      d_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_39, d_39);
                                                      t = r_0(t);
                                                      b_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_39, b_39);
                                                      t = r_0(t);
                                                      z_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, y_38, z_38);
                                                      t = r_0(t);
                                                      LocalPopChoice(v_18);
                                                    }
                                                  else
                                                    {
                                                      t = u_18;
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
                                                    g_11 = ATgetArgument(t, 0);
                                                    i_11 = ATgetArgument(t, 1);
                                                    t = g_11;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        h_11 = ATgetArgument(t, 0);
                                                        t = v_11;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            r_11 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm w_18 = t;
                                                              int y_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, h_11);
                                                                  t = r_0(t);
                                                                  q_39 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_39, i_11);
                                                                  t = r_0(t);
                                                                  p_39 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, r_11, p_39);
                                                                  t = r_0(t);
                                                                  o_39 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, o_39);
                                                                  t = r_0(t);
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
                                                                        ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL;
                                                                        t = z_11;
                                                                        t = new_0_0(t);
                                                                        s_39 = t;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        d_40 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = r_0(t);
                                                                        e_40 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(e_40), d_40);
                                                                        t = r_0(t);
                                                                        t_39 = t;
                                                                        t = s_39;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        c_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, c_40);
                                                                        t = r_0(t);
                                                                        b_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, b_40);
                                                                        t = r_0(t);
                                                                        v_39 = t;
                                                                        t = y_11;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        x_39 = t;
                                                                        t = s_39;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        a_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, a_40);
                                                                        t = r_0(t);
                                                                        z_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, z_39);
                                                                        t = r_0(t);
                                                                        y_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, x_39, y_39);
                                                                        t = r_0(t);
                                                                        w_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, v_39, w_39);
                                                                        t = r_0(t);
                                                                        u_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, t_39, u_39);
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
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm b_19 = t;
                                                            int c_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm i_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,w_40 = NULL;
                                                                t = z_11;
                                                                t = new_0_0(t);
                                                                i_40 = t;
                                                                t = bottomup_1_0(r_0, t);
                                                                u_40 = t;
                                                                t = (ATerm) ATempty;
                                                                t = r_0(t);
                                                                w_40 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(w_40), u_40);
                                                                t = r_0(t);
                                                                k_40 = t;
                                                                t = i_40;
                                                                t = bottomup_1_0(r_0, t);
                                                                t_40 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, t_40);
                                                                t = r_0(t);
                                                                s_40 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, s_40);
                                                                t = r_0(t);
                                                                m_40 = t;
                                                                t = y_11;
                                                                t = bottomup_1_0(r_0, t);
                                                                o_40 = t;
                                                                t = i_40;
                                                                t = bottomup_1_0(r_0, t);
                                                                r_40 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, r_40);
                                                                t = r_0(t);
                                                                q_40 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, q_40);
                                                                t = r_0(t);
                                                                p_40 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, o_40, p_40);
                                                                t = r_0(t);
                                                                n_40 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, m_40, n_40);
                                                                t = r_0(t);
                                                                l_40 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, k_40, l_40);
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
                                                    else
                                                      {
                                                        t = v_11;
                                                        {
                                                          ATerm e_19 = t;
                                                          int f_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,o_41 = NULL;
                                                              t = z_11;
                                                              t = new_0_0(t);
                                                              a_41 = t;
                                                              t = bottomup_1_0(r_0, t);
                                                              m_41 = t;
                                                              t = (ATerm) ATempty;
                                                              t = r_0(t);
                                                              o_41 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(o_41), m_41);
                                                              t = r_0(t);
                                                              c_41 = t;
                                                              t = a_41;
                                                              t = bottomup_1_0(r_0, t);
                                                              l_41 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, l_41);
                                                              t = r_0(t);
                                                              k_41 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, k_41);
                                                              t = r_0(t);
                                                              e_41 = t;
                                                              t = y_11;
                                                              t = bottomup_1_0(r_0, t);
                                                              g_41 = t;
                                                              t = a_41;
                                                              t = bottomup_1_0(r_0, t);
                                                              j_41 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, j_41);
                                                              t = r_0(t);
                                                              i_41 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, i_41);
                                                              t = r_0(t);
                                                              h_41 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_41, h_41);
                                                              t = r_0(t);
                                                              f_41 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, e_41, f_41);
                                                              t = r_0(t);
                                                              d_41 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, c_41, d_41);
                                                              t = r_0(t);
                                                              LocalPopChoice(f_19);
                                                            }
                                                          else
                                                            {
                                                              t = e_19;
                                                              t = z_11;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = v_11;
                                                    {
                                                      ATerm g_19 = t;
                                                      int h_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL;
                                                          t = z_11;
                                                          t = new_0_0(t);
                                                          r_41 = t;
                                                          t = bottomup_1_0(r_0, t);
                                                          c_42 = t;
                                                          t = (ATerm) ATempty;
                                                          t = r_0(t);
                                                          d_42 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(d_42), c_42);
                                                          t = r_0(t);
                                                          s_41 = t;
                                                          t = r_41;
                                                          t = bottomup_1_0(r_0, t);
                                                          b_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, b_42);
                                                          t = r_0(t);
                                                          a_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, a_42);
                                                          t = r_0(t);
                                                          u_41 = t;
                                                          t = y_11;
                                                          t = bottomup_1_0(r_0, t);
                                                          w_41 = t;
                                                          t = r_41;
                                                          t = bottomup_1_0(r_0, t);
                                                          z_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, z_41);
                                                          t = r_0(t);
                                                          y_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, y_41);
                                                          t = r_0(t);
                                                          x_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_41, x_41);
                                                          t = r_0(t);
                                                          v_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_41, v_41);
                                                          t = r_0(t);
                                                          t_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, s_41, t_41);
                                                          t = r_0(t);
                                                          LocalPopChoice(h_19);
                                                        }
                                                      else
                                                        {
                                                          t = g_19;
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
                                                      ATerm j_19 = t;
                                                      int k_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, v_11);
                                                          t = r_0(t);
                                                          LocalPopChoice(k_19);
                                                        }
                                                      else
                                                        {
                                                          t = j_19;
                                                          {
                                                            ATerm l_19 = t;
                                                            int n_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL;
                                                                t = z_11;
                                                                t = new_0_0(t);
                                                                h_42 = t;
                                                                t = bottomup_1_0(r_0, t);
                                                                u_42 = t;
                                                                t = (ATerm) ATempty;
                                                                t = r_0(t);
                                                                v_42 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(v_42), u_42);
                                                                t = r_0(t);
                                                                i_42 = t;
                                                                t = h_42;
                                                                t = bottomup_1_0(r_0, t);
                                                                t_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, t_42);
                                                                t = r_0(t);
                                                                s_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, s_42);
                                                                t = r_0(t);
                                                                k_42 = t;
                                                                t = y_11;
                                                                t = bottomup_1_0(r_0, t);
                                                                m_42 = t;
                                                                t = h_42;
                                                                t = bottomup_1_0(r_0, t);
                                                                r_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, r_42);
                                                                t = r_0(t);
                                                                o_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, o_42);
                                                                t = r_0(t);
                                                                n_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, m_42, n_42);
                                                                t = r_0(t);
                                                                l_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, k_42, l_42);
                                                                t = r_0(t);
                                                                j_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, i_42, j_42);
                                                                t = r_0(t);
                                                                LocalPopChoice(n_19);
                                                              }
                                                            else
                                                              {
                                                                t = l_19;
                                                                t = z_11;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm o_19 = t;
                                                    int p_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL;
                                                        t = z_11;
                                                        t = new_0_0(t);
                                                        y_42 = t;
                                                        t = bottomup_1_0(r_0, t);
                                                        j_43 = t;
                                                        t = (ATerm) ATempty;
                                                        t = r_0(t);
                                                        k_43 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(k_43), j_43);
                                                        t = r_0(t);
                                                        z_42 = t;
                                                        t = y_42;
                                                        t = bottomup_1_0(r_0, t);
                                                        i_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, i_43);
                                                        t = r_0(t);
                                                        h_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, h_43);
                                                        t = r_0(t);
                                                        b_43 = t;
                                                        t = y_11;
                                                        t = bottomup_1_0(r_0, t);
                                                        d_43 = t;
                                                        t = y_42;
                                                        t = bottomup_1_0(r_0, t);
                                                        g_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, g_43);
                                                        t = r_0(t);
                                                        f_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, f_43);
                                                        t = r_0(t);
                                                        e_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, d_43, e_43);
                                                        t = r_0(t);
                                                        c_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, b_43, c_43);
                                                        t = r_0(t);
                                                        a_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, z_42, a_43);
                                                        t = r_0(t);
                                                        LocalPopChoice(p_19);
                                                      }
                                                    else
                                                      {
                                                        t = o_19;
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
                                            ATerm q_19 = t;
                                            int s_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_s_5;
                                                t = r_0(t);
                                                LocalPopChoice(s_19);
                                              }
                                            else
                                              {
                                                t = q_19;
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
                                                ATerm t_19 = t;
                                                int u_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_d_6;
                                                    t = r_0(t);
                                                    LocalPopChoice(u_19);
                                                  }
                                                else
                                                  {
                                                    t = t_19;
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
                                                    ATerm v_19 = t;
                                                    int w_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_d_6;
                                                        t = r_0(t);
                                                        LocalPopChoice(w_19);
                                                      }
                                                    else
                                                      {
                                                        t = v_19;
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
                                                ATerm x_19 = t;
                                                int y_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm z_19 = ATgetArgument(t, 0);
                                                        x_11 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(y_19);
                                                    t = x_11;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm b_20 = t;
                                                        int c_20 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_d_6;
                                                            t = r_0(t);
                                                            LocalPopChoice(c_20);
                                                          }
                                                        else
                                                          {
                                                            t = b_20;
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
                                                    t = x_19;
                                                    {
                                                      ATerm d_20 = t;
                                                      int f_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm g_20 = ATgetArgument(t, 0);
                                                              x_11 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(f_20);
                                                          {
                                                            ATerm h_20 = t;
                                                            int j_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = x_11;
                                                                t = fetch_1_0(k_1, t);
                                                                t = term_d_6;
                                                                t = bottomup_1_0(r_0, t);
                                                                LocalPopChoice(j_20);
                                                              }
                                                            else
                                                              {
                                                                t = h_20;
                                                                t = z_11;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = d_20;
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
                                                                            ATerm k_20 = t;
                                                                            int l_20 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm x_44 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, w_11, x_11);
                                                                                t = r_0(t);
                                                                                x_44 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, v_11, x_44);
                                                                                t = r_0(t);
                                                                                LocalPopChoice(l_20);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = k_20;
                                                                                {
                                                                                  ATerm m_20 = t;
                                                                                  int n_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = x_11;
                                                                                      if((y_11 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(n_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = m_20;
                                                                                      t = z_11;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm o_20 = t;
                                                                          int p_20 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = x_11;
                                                                              if((y_11 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(p_20);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = o_20;
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
                                                                  e_11 = ATgetArgument(t, 2);
                                                                  t = e_11;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm q_20 = t;
                                                                      int r_20 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, x_11);
                                                                          t = r_0(t);
                                                                          LocalPopChoice(r_20);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = q_20;
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
                                                                        ATerm s_20 = t;
                                                                        int t_20 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, y_11, x_11);
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
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          y_11 = ATgetArgument(t, 0);
                                                                          t = y_11;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              v_11 = ATgetFirst((ATermList) t);
                                                                              w_11 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm u_20 = t;
                                                                                int w_20 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm l_45 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, w_11);
                                                                                    t = r_0(t);
                                                                                    l_45 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, v_11, l_45);
                                                                                    t = r_0(t);
                                                                                    LocalPopChoice(w_20);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = u_20;
                                                                                    t = z_11;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm x_20 = t;
                                                                                  int y_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_d_6;
                                                                                      t = r_0(t);
                                                                                      LocalPopChoice(y_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = x_20;
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
                                                                                    ATerm z_20 = t;
                                                                                    int a_21 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm s_45 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, w_11);
                                                                                        t = r_0(t);
                                                                                        s_45 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, v_11, s_45);
                                                                                        t = r_0(t);
                                                                                        LocalPopChoice(a_21);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = z_20;
                                                                                        t = z_11;
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
                                                                                          t = term_d_6;
                                                                                          t = r_0(t);
                                                                                          LocalPopChoice(c_21);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = b_21;
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
                                                                                        ATerm d_21 = t;
                                                                                        int e_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm y_45 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, w_11);
                                                                                            t = r_0(t);
                                                                                            y_45 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, y_45);
                                                                                            t = r_0(t);
                                                                                            LocalPopChoice(e_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = d_21;
                                                                                            t = z_11;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm f_21 = t;
                                                                                          int h_21 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_s_5;
                                                                                              t = r_0(t);
                                                                                              LocalPopChoice(h_21);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = f_21;
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
                                                                                      e_11 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm i_21 = t;
                                                                                        int j_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL;
                                                                                            t = term_k_21;
                                                                                            t = bottomup_1_0(r_0, t);
                                                                                            g_46 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = r_0(t);
                                                                                            j_46 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(j_46), e_11);
                                                                                            t = r_0(t);
                                                                                            i_46 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(i_46), y_11);
                                                                                            t = r_0(t);
                                                                                            h_46 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, g_46, h_46);
                                                                                            t = r_0(t);
                                                                                            f_46 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, x_11, f_46);
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
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          y_11 = ATgetArgument(t, 0);
                                                                                          x_11 = ATgetArgument(t, 1);
                                                                                          e_11 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm l_21 = t;
                                                                                            int m_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,u_46 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, x_11);
                                                                                                t = r_0(t);
                                                                                                p_46 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, e_11);
                                                                                                t = r_0(t);
                                                                                                s_46 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = r_0(t);
                                                                                                u_46 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(u_46), s_46);
                                                                                                t = r_0(t);
                                                                                                r_46 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(r_46), y_11);
                                                                                                t = r_0(t);
                                                                                                q_46 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(q_46), p_46);
                                                                                                t = r_0(t);
                                                                                                o_46 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, o_46);
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
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              y_11 = ATgetArgument(t, 0);
                                                                                              x_11 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm n_21 = t;
                                                                                                int o_21 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm y_46 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, x_11);
                                                                                                    t = r_0(t);
                                                                                                    y_46 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, y_46);
                                                                                                    t = r_0(t);
                                                                                                    LocalPopChoice(o_21);
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
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  y_11 = ATgetArgument(t, 0);
                                                                                                  x_11 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm p_21 = t;
                                                                                                    int r_21 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm c_47 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, y_11);
                                                                                                        t = r_0(t);
                                                                                                        c_47 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, c_47, x_11);
                                                                                                        t = r_0(t);
                                                                                                        LocalPopChoice(r_21);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = p_21;
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
                                                                                                        ATerm s_21 = t;
                                                                                                        int t_21 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm g_47 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, x_11);
                                                                                                            t = r_0(t);
                                                                                                            g_47 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, g_47, y_11);
                                                                                                            t = r_0(t);
                                                                                                            LocalPopChoice(t_21);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = s_21;
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
                                                                                                                  ATerm w_21 = t;
                                                                                                                  int x_21 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm t_47 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, y_11, t_11);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      t_47 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, t_47, u_11);
                                                                                                                      t = bottomup_1_0(r_0, t);
                                                                                                                      LocalPopChoice(x_21);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = w_21;
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
                                                                                                                                              m_11 = ATgetArgument(t, 1);
                                                                                                                                              j_11 = ATgetArgument(t, 2);
                                                                                                                                              k_11 = ATgetArgument(t, 3);
                                                                                                                                              t = j_11;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = m_11;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm y_21 = t;
                                                                                                                                                      int z_21 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = s_11;
                                                                                                                                                          if((r_11 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = k_11;
                                                                                                                                                          {
                                                                                                                                                            ATerm a_22 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm l_1 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm c_22 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(c_22, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((r_11 != ATgetArgument(c_22, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(c_22, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm d_22 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(d_22) != AT_LIST) || !(ATisEmpty(d_22))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm e_22 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(e_22) != AT_LIST) || !(ATisEmpty(e_22))))
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
                                                                                                                                                                t = a_22;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = k_11;
                                                                                                                                                          t = bottomup_1_0(r_0, t);
                                                                                                                                                          LocalPopChoice(z_21);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = y_21;
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
ATerm map_1_0 (ATerm t_123 (ATerm), ATerm t)
{
  static ATerm u_49 (ATerm t)
  {
    ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL;
    q_49 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_49;
      }
    else
      {
        ATerm f_3 = NULL,i_3 = NULL,j_3 = NULL,x_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_49 = ATgetFirst((ATermList) t);
            s_49 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_49);
        f_3 = t;
        t = r_49;
        t = t_123(t);
        i_3 = t;
        t = s_49;
        t = u_49(t);
        j_3 = t;
        t = (ATerm) ATinsert(CheckATermList(j_3), i_3);
        x_0 = t;
        t = SSLsetAnnotations(x_0, f_3);
      }
    return(t);
  }
  t = u_49(t);
  return(t);
}
static ATerm r_10 (ATerm w_43, ATerm x_43, ATerm t)
{
  ATerm w_49 = NULL;
  t = SSL_fputc(w_43, x_43);
  w_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_49);
  return(t);
}
static ATerm s_10 (ATerm x_48, ATerm y_48, ATerm t)
{
  ATerm x_49 = NULL;
  t = SSL_write_term_to_stream_text(x_48, y_48);
  x_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_49);
  return(t);
}
static ATerm u_10 (ATerm n_117 (ATerm), ATerm e_429, ATerm d_49, ATerm t)
{
  ATerm y_49 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_429, term_f_22);
  t = y_10(t);
  y_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_49, d_49);
  t = n_117(t);
  t = fclose_0_0(t);
  t = d_49;
  return(t);
}
static ATerm t_10 (ATerm t_48, ATerm u_48, ATerm t)
{
  ATerm z_49 = NULL;
  t = SSL_write_term_to_stream_baf(t_48, u_48);
  z_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_49);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_22 = ATgetArgument(t, 0);
      if(match_cons(g_22, sym_Stream_1))
        {
          i_50 = ATgetArgument(g_22, 0);
        }
      else
        _fail(t);
      j_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_10(i_50, j_50, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_22 = ATgetArgument(t, 0);
      if(match_cons(h_22, sym_Stream_1))
        {
          n_50 = ATgetArgument(h_22, 0);
        }
      else
        _fail(t);
      o_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_10(n_50, o_50, t);
  k_50 = t;
  t = term_i_22;
  l_50 = t;
  t = k_50;
  if(match_cons(t, sym_Stream_1))
    {
      m_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_i_22, k_50);
  t = r_10(l_50, m_50, t);
  return(t);
}
ATerm output_1_0 (ATerm k_130 (ATerm), ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL;
  t = k_130(t);
  b_50 = t;
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_50 = NULL,f_50 = NULL;
        t = term_l_22;
        c_50 = t;
        t = term_n_22;
        f_50 = t;
        t = term_o_22;
        t = c_11(c_50, f_50, t);
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        t = term_p_22;
      }
  }
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_50, b_50);
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_50 = NULL,h_50 = NULL;
        t = term_l_22;
        g_50 = t;
        t = term_t_22;
        h_50 = t;
        t = term_u_22;
        t = c_11(g_50, h_50, t);
        t = (ATerm) ATmakeAppl(sym__2, a_50, b_50);
        LocalPopChoice(s_22);
        if(match_cons(t, sym__2))
          {
            ATerm w_22 = ATgetArgument(t, 0);
            ATerm x_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_10(n_1, a_50, b_50, t);
      }
    else
      {
        t = r_22;
        if(match_cons(t, sym__2))
          {
            ATerm y_22 = ATgetArgument(t, 0);
            ATerm z_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_10(o_1, a_50, b_50, t);
      }
  }
  return(t);
}
static ATerm c_51 (ATerm w_50, ATerm t)
{
  t = SSL_fclose(w_50);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL;
  a_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_50 = ATgetArgument(t, 0);
      {
        ATerm a_23 = t;
        int b_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_50);
            LocalPopChoice(b_23);
          }
        else
          {
            t = a_23;
            t = c_51(a_51, t);
          }
      }
    }
  else
    {
      t = c_51(a_51, t);
    }
  return(t);
}
static ATerm v_10 (ATerm z_48, ATerm t)
{
  t = SSL_read_term_from_stream(z_48);
  return(t);
}
static ATerm w_10 (ATerm p_42, ATerm q_42, ATerm t)
{
  t = SSL_strcat(p_42, q_42);
  return(t);
}
static ATerm x_10 (ATerm y_43, ATerm z_43, ATerm t)
{
  ATerm d_51 = NULL;
  t = SSL_fopen(y_43, z_43);
  d_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_51);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_51 = NULL;
  t = SSL_stdin_stream();
  e_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_51);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_51 = NULL;
  t = SSL_stdout_stream();
  g_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_51);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_51 = NULL;
  t = SSL_stderr_stream();
  h_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_51);
  return(t);
}
static ATerm r_52 (ATerm o_51, ATerm t)
{
  ATerm p_51 = NULL;
  t = SSL_explode_term(o_51);
  if(match_cons(t, sym__2))
    {
      ATerm c_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_23 = ATgetArgument(t, 1);
        if(((ATgetType(d_23) == AT_LIST) && !(ATisEmpty(d_23))))
          {
            p_51 = ATgetFirst((ATermList) d_23);
            {
              ATerm f_23 = (ATerm) ATgetNext((ATermList) d_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_51;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_51;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_51;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_51;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm s_52 (ATerm s_51, ATerm t_51, ATerm u_51, ATerm t)
{
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL,a_52 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(u_51);
  x_51 = t;
  t = s_51;
  if(match_cons(t, sym_Path_1))
    {
      a_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_52, t_51);
  b_1 = t;
  t = SSLsetAnnotations(b_1, x_51);
  if(match_cons(t, sym__2))
    {
      v_51 = ATgetArgument(t, 0);
      w_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_10(v_51, w_51, t);
  return(t);
}
static ATerm x_52 (ATerm c_52, ATerm d_52, ATerm e_52, ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL,k_52 = NULL,d_1 = NULL;
  t = SSLgetAnnotations(e_52);
  h_52 = t;
  t = SSL_is_string(c_52);
  k_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_52, d_52);
  d_1 = t;
  t = SSLsetAnnotations(d_1, h_52);
  if(match_cons(t, sym__2))
    {
      f_52 = ATgetArgument(t, 0);
      g_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_10(f_52, g_52, t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm m_52 = NULL,o_52 = NULL,p_52 = NULL;
  m_52 = t;
  if(match_cons(t, sym__2))
    {
      o_52 = ATgetArgument(t, 0);
      p_52 = ATgetArgument(t, 1);
      {
        ATerm g_23 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_52(m_52, t);
            LocalPopChoice(h_23);
          }
        else
          {
            t = g_23;
            {
              ATerm i_23 = t;
              int j_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_52(o_52, p_52, m_52, t);
                  LocalPopChoice(j_23);
                }
              else
                {
                  t = i_23;
                  t = x_52(o_52, p_52, m_52, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_52(m_52, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL,g_53 = NULL;
  g_53 = t;
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_53, term_n_23);
        t = y_10(t);
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        {
          ATerm w_3 = NULL,x_3 = NULL;
          t = term_o_23;
          x_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_23, g_53);
          t = w_10(x_3, g_53, t);
          w_3 = t;
          t = SSL_perror(w_3);
          _fail(t);
        }
      }
  }
  a_53 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_10(b_53, t);
  z_52 = t;
  t = a_53;
  t = fclose_0_0(t);
  t = z_52;
  return(t);
}
ATerm input_1_0 (ATerm l_130 (ATerm), ATerm t)
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_53 = NULL,k_53 = NULL;
      t = term_l_22;
      j_53 = t;
      t = term_s_23;
      k_53 = t;
      t = term_t_23;
      t = c_11(j_53, k_53, t);
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      t = term_u_23;
    }
  t = ReadFromFile_0_0(t);
  t = l_130(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL;
  l_53 = t;
  t = term_v_23;
  t = whoami_0_0(t);
  m_53 = t;
  t = term_w_23;
  o_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_23), m_53), term_x_23);
  p_53 = t;
  t = SSL_printnl(o_53, p_53);
  t = term_a_24;
  n_53 = t;
  t = SSL_exit(n_53);
  t = l_53;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm r_53 = NULL;
  r_53 = t;
  if(match_string(t, "-k"))
    {
      t = r_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_53;
    }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL;
  s_53 = t;
  t = SSL_string_to_int(s_53);
  t_53 = t;
  t = term_b_24;
  u_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_24, t_53);
  t = f_11(u_53, t_53, t);
  t = s_53;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_c_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_1, s_1, t_1, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm w_53 = NULL;
  w_53 = t;
  if(match_string(t, "-S"))
    {
      t = w_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_53;
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm x_53 = NULL,y_53 = NULL;
  t = term_d_24;
  x_53 = t;
  t = term_e_24;
  y_53 = t;
  t = term_f_24;
  t = f_11(x_53, y_53, t);
  t = term_h_24;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_i_24;
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
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
  z_53 = t;
  t = SSL_string_to_int(z_53);
  a_54 = t;
  t = term_d_24;
  b_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_24, a_54);
  t = f_11(b_54, a_54, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_53);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_j_24;
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
  ATerm c_54 = NULL,d_54 = NULL;
  t = term_k_24;
  c_54 = t;
  t = term_v_23;
  d_54 = t;
  t = term_l_24;
  t = f_11(c_54, d_54, t);
  t = term_m_24;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_n_24;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_24 = t;
  int p_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_1, v_1, y_1, t);
      LocalPopChoice(p_24);
    }
  else
    {
      t = o_24;
      {
        ATerm q_24 = t;
        int r_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_1, d_2, e_2, t);
            LocalPopChoice(r_24);
          }
        else
          {
            t = q_24;
            t = Option_3_0(f_2, q_2, r_2, t);
          }
      }
    }
  return(t);
}
static ATerm f_11 (ATerm r_47, ATerm s_47, ATerm t)
{
  ATerm e_54 = NULL;
  t = term_l_22;
  e_54 = t;
  t = SSL_table_put(e_54, r_47, s_47);
  t = (ATerm) ATmakeAppl(sym__3, term_l_22, r_47, s_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL;
      t = term_v_23;
      t = e_0(t);
      j_54 = t;
      t = term_t_24;
      k_54 = t;
      t = term_u_24;
      l_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_24, term_u_24, j_54);
      t = d_11(k_54, l_54, j_54, t);
      _fail(t);
    }
  else
    {
      ATerm q_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_54 = ATgetFirst((ATermList) t);
          i_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_54;
      t = c_0(t);
      t = term_v_23;
      t = d_0(t);
      q_54 = t;
      t = (ATerm) ATinsert(CheckATermList(i_54), q_54);
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm s_54 = NULL;
  s_54 = t;
  if(match_string(t, "-o"))
    {
      t = s_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_54;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm t_54 = NULL,u_54 = NULL;
  t_54 = t;
  t = term_n_22;
  u_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_22, t_54);
  t = f_11(u_54, t_54, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_54);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_v_24;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_2, t_2, u_2, t);
  return(t);
}
static ATerm d_11 (ATerm v_52, ATerm w_52, ATerm u_52, ATerm t)
{
  ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL;
  w_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_52, w_52);
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_24 = ATgetArgument(t, 0);
            ATerm z_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_52, w_52);
        t = c_11(v_52, w_52, t);
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        t = (ATerm) ATempty;
      }
  }
  x_54 = t;
  t = (ATerm) ATinsert(CheckATermList(x_54), u_52);
  y_54 = t;
  t = SSL_table_put(v_52, w_52, y_54);
  t = w_54;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL;
      t = term_v_23;
      t = n_0(t);
      j_55 = t;
      t = term_t_24;
      k_55 = t;
      t = term_u_24;
      l_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_24, term_u_24, j_55);
      t = d_11(k_55, l_55, j_55, t);
      _fail(t);
    }
  else
    {
      ATerm p_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_55 = ATgetFirst((ATermList) t);
          g_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_55 = ATgetFirst((ATermList) t);
          i_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_55;
      t = k_0(t);
      t = h_55;
      t = l_0(t);
      p_55 = t;
      t = (ATerm) ATinsert(CheckATermList(i_55), p_55);
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm r_55 = NULL;
  r_55 = t;
  if(match_string(t, "-i"))
    {
      t = r_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_55;
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL;
  s_55 = t;
  t = term_s_23;
  t_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_23, s_55);
  t = f_11(t_55, s_55, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_55);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_2, w_2, x_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_23;
  t = whoami_0_0(t);
  u_55 = t;
  t = term_w_23;
  w_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_25), u_55);
  x_55 = t;
  t = SSL_printnl(w_55, x_55);
  t = term_a_24;
  v_55 = t;
  t = SSL_exit(v_55);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm y_55 = NULL,z_55 = NULL;
  t = term_l_22;
  y_55 = t;
  t = term_c_25;
  z_55 = t;
  t = term_d_25;
  t = c_11(y_55, z_55, t);
  return(t);
}
static ATerm z_10 (ATerm d_50, ATerm e_50, ATerm t)
{
  ATerm h_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_50, e_50);
      LocalPopChoice(i_25);
    }
  else
    {
      t = h_25;
      t = SSL_addr(d_50, e_50);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_122 (ATerm), ATerm k_122 (ATerm), ATerm t)
{
  ATerm b_56 = NULL,c_56 = NULL,e_56 = NULL;
  b_56 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_56;
      t = j_122(t);
    }
  else
    {
      ATerm h_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_56 = ATgetFirst((ATermList) t);
          e_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_56;
      t = foldr_2_0(j_122, k_122, t);
      h_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_56, h_56);
      t = k_122(t);
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
  t = term_e_24;
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
  t = z_10(d_4, e_4, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_56 = NULL,z_3 = NULL,a_4 = NULL;
  t = times_0_0(t);
  a_4 = t;
  t = SSL_explode_term(a_4);
  if(match_cons(t, sym__2))
    {
      ATerm j_25 = ATgetArgument(t, 0);
      z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3;
  t = foldr_2_0(y_2, z_2, t);
  k_56 = t;
  t = SSL_TicksToSeconds(k_56);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL;
  x_56 = t;
  if(match_cons(t, sym__2))
    {
      y_56 = ATgetArgument(t, 0);
      z_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_56;
        if((y_56 != t))
          {
            _fail(t);
          }
        t = x_56;
        LocalPopChoice(o_25);
      }
    else
      {
        t = n_25;
        t = (ATerm) ATmakeAppl(sym__2, y_56, z_56);
        {
          ATerm p_25 = t;
          int r_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_56, z_56);
              LocalPopChoice(r_25);
            }
          else
            {
              t = p_25;
              t = SSL_gtr(y_56, z_56);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, y_56, z_56);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_115 (ATerm), ATerm t)
{
  ATerm d_57 = NULL;
  d_57 = t;
  {
    ATerm s_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL;
        t = term_l_22;
        g_57 = t;
        t = term_d_24;
        h_57 = t;
        t = term_w_25;
        t = c_11(g_57, h_57, t);
        f_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_57, term_a_24);
        t = geq_0_0(t);
        t = d_57;
        t = k_115(t);
        LocalPopChoice(v_25);
      }
    else
      {
        t = s_25;
        t = d_57;
      }
  }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL,m_57 = NULL,n_57 = NULL;
  t = run_time_0_0(t);
  j_57 = t;
  t = term_v_23;
  t = whoami_0_0(t);
  k_57 = t;
  t = term_w_23;
  m_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_25), j_57), term_x_25), k_57);
  n_57 = t;
  t = SSL_printnl(m_57, n_57);
  t = (ATerm) ATmakeAppl(sym__2, term_w_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_25), j_57), term_x_25), k_57));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_24;
  o_57 = t;
  t = SSL_exit(o_57);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL;
  z_57 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_57;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_57 = ATgetArgument(t, 0);
          {
            ATerm q_4 = NULL,c_4 = NULL;
            t = SSLgetAnnotations(z_57);
            q_4 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_57);
            c_4 = t;
            t = SSLsetAnnotations(c_4, q_4);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_57;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_130 (ATerm), ATerm t)
{
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_57 = NULL,s_57 = NULL;
      t = term_l_22;
      r_57 = t;
      t = term_b_26;
      s_57 = t;
      t = term_c_26;
      t = c_11(r_57, s_57, t);
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
      t = fetch_1_0(b_3, t);
    }
  t = b_130(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_58 = ATgetFirst((ATermList) t);
      i_58 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_58 = NULL,n_58 = NULL;
        static ATerm c_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_58)), not_null(n_58));
          return(t);
        }
        t = i_58;
        t = i_0(t);
        if(((m_58 != NULL) && (m_58 != t)))
          _fail(t);
        else
          m_58 = t;
        t = h_58;
        t = g_0(t);
        if(((n_58 != NULL) && (n_58 != t)))
          _fail(t);
        else
          n_58 = t;
        t = i_58;
        t = reverse_acc_2_0(g_0, c_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_23;
      t = i_0(t);
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL,x_6 = NULL;
  v_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_58);
  t_58 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_58);
  x_6 = t;
  t = SSLsetAnnotations(x_6, t_58);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm z_58 = NULL;
  z_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_58), term_d_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL;
  ATerm e_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_58 = NULL,s_58 = NULL;
      t = term_l_22;
      r_58 = t;
      t = term_c_25;
      s_58 = t;
      t = term_d_25;
      t = c_11(r_58, s_58, t);
      LocalPopChoice(f_26);
    }
  else
    {
      t = e_26;
      t = fetch_1_0(d_3, t);
    }
  t = term_g_26;
  t = echo_0_0(t);
  t = term_t_24;
  p_58 = t;
  t = term_u_24;
  q_58 = t;
  t = term_h_26;
  t = c_11(p_58, q_58, t);
  t = reverse_acc_2_0(_id, e_3, t);
  t = map_1_0(g_3, t);
  return(t);
}
ATerm fetch_1_0 (ATerm d_124 (ATerm), ATerm t)
{
  static ATerm w_59 (ATerm t)
  {
    ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL;
    t_59 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_59 = ATgetFirst((ATermList) t);
        v_59 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_26 = t;
      int j_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_4 = NULL,b_5 = NULL,z_6 = NULL;
          t = SSLgetAnnotations(t_59);
          y_4 = t;
          t = u_59;
          t = d_124(t);
          b_5 = t;
          t = (ATerm) ATinsert(CheckATermList(v_59), b_5);
          z_6 = t;
          t = SSLsetAnnotations(z_6, y_4);
          LocalPopChoice(j_26);
        }
      else
        {
          t = i_26;
          {
            ATerm j_5 = NULL,m_5 = NULL,a_7 = NULL;
            t = SSLgetAnnotations(t_59);
            j_5 = t;
            t = v_59;
            t = w_59(t);
            m_5 = t;
            t = (ATerm) ATinsert(CheckATermList(m_5), u_59);
            a_7 = t;
            t = SSLsetAnnotations(a_7, j_5);
          }
        }
    }
    return(t);
  }
  t = w_59(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_60 = NULL,b_60 = NULL,c_60 = NULL;
  a_60 = t;
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_60;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_26 = ATgetFirst((ATermList) t);
                ATerm n_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_60;
          }
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = (ATerm) ATinsert(ATempty, a_60);
      }
  }
  b_60 = t;
  t = term_p_22;
  c_60 = t;
  t = SSL_printnl(c_60, b_60);
  t = a_60;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm g_60 = NULL,h_60 = NULL;
  t = term_l_22;
  g_60 = t;
  t = term_c_25;
  h_60 = t;
  t = term_d_25;
  t = c_11(g_60, h_60, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_11 (ATerm m_54, ATerm n_54, ATerm t)
{
  t = SSL_table_get(m_54, n_54);
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
  ATerm i_60 = NULL,j_60 = NULL;
  t = term_o_26;
  i_60 = t;
  t = term_v_23;
  j_60 = t;
  t = term_p_26;
  t = f_11(i_60, j_60, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_r_26;
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
  ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL;
  t = term_o_26;
  m_60 = t;
  t = term_v_23;
  n_60 = t;
  t = term_p_26;
  t = f_11(m_60, n_60, t);
  t = term_s_26;
  k_60 = t;
  t = term_v_23;
  l_60 = t;
  t = term_t_26;
  t = f_11(k_60, l_60, t);
  t = term_u_26;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_v_26;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_3, k_3, l_3, t);
      LocalPopChoice(x_26);
    }
  else
    {
      t = w_26;
      t = Option_3_0(m_3, n_3, o_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_88 (ATerm), ATerm n_88 (ATerm), ATerm t)
{
  ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,d_7 = NULL;
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
  t = m_88(t);
  r_60 = t;
  t = q_60;
  t = n_88(t);
  s_60 = t;
  t = (ATerm) ATinsert(CheckATermList(s_60), r_60);
  d_7 = t;
  t = SSLsetAnnotations(d_7, o_60);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_132 (ATerm), ATerm t)
{
  ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,d_61 = NULL,e_61 = NULL,f_7 = NULL;
  y_60 = t;
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_27;
        t = e_132(t);
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
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
  t = term_c_25;
  e_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_25, a_61);
  t = f_11(e_61, a_61, t);
  t = b_61;
  {
    static ATerm o_61 (ATerm t)
    {
      ATerm b_27 = t;
      int d_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_27 = t;
          int f_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_61 = NULL;
              h_61 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_61;
              LocalPopChoice(f_27);
            }
          else
            {
              t = e_27;
              t = e_132(t);
              t = Cons_2_0(_id, o_61, t);
            }
          LocalPopChoice(d_27);
        }
      else
        {
          t = b_27;
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
  f_7 = t;
  t = SSLsetAnnotations(f_7, z_60);
  return(t);
}
static ATerm q_3 (ATerm t)
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
static ATerm r_3 (ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL;
  t = term_b_26;
  b_62 = t;
  t = term_v_23;
  c_62 = t;
  t = term_g_27;
  t = f_11(b_62, c_62, t);
  t = term_h_27;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_i_27;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm d_132 (ATerm), ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL;
  v_61 = t;
  t = term_t_24;
  x_61 = t;
  t = term_u_24;
  y_61 = t;
  t = (ATerm) ATempty;
  z_61 = t;
  t = SSL_table_put(x_61, y_61, z_61);
  t = v_61;
  {
    static ATerm p_3 (ATerm t)
    {
      ATerm j_27 = t;
      int k_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_132(t);
          LocalPopChoice(k_27);
        }
      else
        {
          t = j_27;
          {
            ATerm l_27 = t;
            int m_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_3, r_3, s_3, t);
                LocalPopChoice(m_27);
              }
            else
              {
                t = l_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_3, t);
  }
  {
    ATerm n_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_62 = NULL;
        n_62 = t;
        {
          ATerm p_27 = t;
          int q_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_5 = NULL;
              t = n_62;
              {
                ATerm r_27 = t;
                int s_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_5 = NULL,v_5 = NULL;
                    t = term_l_22;
                    u_5 = t;
                    t = term_b_26;
                    v_5 = t;
                    t = term_c_26;
                    t = c_11(u_5, v_5, t);
                    LocalPopChoice(s_27);
                  }
                else
                  {
                    t = r_27;
                    t = fetch_1_0(t_3, t);
                  }
              }
              t = n_62;
              t = default_system_usage_0_0(t);
              t = term_e_24;
              t_5 = t;
              t = SSL_exit(t_5);
              LocalPopChoice(q_27);
            }
          else
            {
              t = p_27;
              {
                ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL;
                t = term_l_22;
                a_6 = t;
                t = term_o_26;
                b_6 = t;
                t = term_t_27;
                t = c_11(a_6, b_6, t);
                t = n_62;
                t = default_system_about_0_0(t);
                t = term_e_24;
                z_5 = t;
                t = SSL_exit(z_5);
              }
            }
        }
        LocalPopChoice(o_27);
      }
    else
      {
        t = n_27;
        {
          ATerm v_27 = t;
          int w_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL;
              static ATerm u_3 (ATerm t)
              {
                ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL,h_7 = NULL;
                t_62 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    s_62 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(t_62);
                r_62 = t;
                t = s_62;
                if(((t_61 != NULL) && (t_61 != t)))
                  _fail(t);
                else
                  t_61 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, s_62);
                h_7 = t;
                t = SSLsetAnnotations(h_7, r_62);
                return(t);
              }
              t = fetch_1_0(u_3, t);
              t = term_w_23;
              p_62 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_61)), term_x_27);
              q_62 = t;
              t = SSL_printnl(p_62, q_62);
              t = (ATerm) ATmakeAppl(sym__2, term_w_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_61)), term_x_27));
              t = default_system_usage_0_0(t);
              t = term_a_24;
              o_62 = t;
              t = SSL_exit(o_62);
              LocalPopChoice(w_27);
            }
          else
            {
              t = v_27;
            }
        }
      }
  }
  u_61 = t;
  t = term_t_24;
  w_61 = t;
  t = SSL_table_destroy(w_61);
  t = u_61;
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_130 (ATerm), ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm g_130 (ATerm), ATerm t)
{
  ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL;
  t = parse_options_1_0(d_130, t);
  y_62 = t;
  t = term_y_27;
  b_63 = t;
  t = SSL_table_create(b_63);
  t = term_y_27;
  z_62 = t;
  t = term_z_27;
  a_63 = t;
  t = SSL_table_put(z_62, a_63, y_62);
  t = y_62;
  t = f_130(t);
  {
    ATerm a_28 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_130, t);
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
              t = g_130(t);
              t = report_success_0_0(t);
              LocalPopChoice(d_28);
            }
          else
            {
              t = c_28;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
            LocalPopChoice(i_28);
          }
        else
          {
            t = h_28;
            {
              ATerm k_28 = t;
              int l_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(b_4, f_4, g_4, t);
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
                        t = verbose_option_0_0(t);
                        LocalPopChoice(n_28);
                      }
                    else
                      {
                        t = m_28;
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
  ATerm g_63 = NULL,h_63 = NULL;
  t = term_t_22;
  g_63 = t;
  t = term_v_23;
  h_63 = t;
  t = term_o_28;
  t = f_11(g_63, h_63, t);
  t = term_p_28;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_r_28;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = output_1_0(i_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,n_7 = NULL,m_7 = NULL,l_7 = NULL,k_7 = NULL;
  x_63 = t;
  if(match_cons(t, sym_Specification_1))
    {
      k_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_63);
  j_63 = t;
  t = k_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_63 = ATgetFirst((ATermList) t);
      n_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_63);
  l_63 = t;
  t = n_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_63 = ATgetFirst((ATermList) t);
      r_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_63);
  p_63 = t;
  t = q_63;
  if(match_cons(t, sym_Strategies_1))
    {
      u_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_63);
  t_63 = t;
  t = u_63;
  t = map_1_0(j_4, t);
  v_63 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, v_63);
  k_7 = t;
  t = SSLsetAnnotations(k_7, t_63);
  w_63 = t;
  t = r_63;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_63), w_63);
  l_7 = t;
  t = SSLsetAnnotations(l_7, p_63);
  s_63 = t;
  t = (ATerm) ATinsert(CheckATermList(s_63), m_63);
  m_7 = t;
  t = SSLsetAnnotations(m_7, l_63);
  o_63 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, o_63);
  n_7 = t;
  t = SSLsetAnnotations(n_7, j_63);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL;
  q_64 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      m_64 = ATgetArgument(t, 0);
      n_64 = ATgetArgument(t, 1);
      o_64 = ATgetArgument(t, 2);
      p_64 = ATgetArgument(t, 3);
      {
        ATerm s_28 = t;
        int t_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_6 = NULL,n_6 = NULL,j_7 = NULL;
            t = SSLgetAnnotations(q_64);
            i_6 = t;
            t = p_64;
            t = simplify_0_0(t);
            t = alltd_1_0(k_4, t);
            n_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, m_64, n_64, o_64, n_6);
            j_7 = t;
            t = SSLsetAnnotations(j_7, i_6);
            LocalPopChoice(t_28);
          }
        else
          {
            t = s_28;
            t = q_64;
          }
      }
    }
  else
    {
      t = q_64;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL;
  q_6 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_6);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_28 = ATgetFirst((ATermList) t);
      ATerm v_28 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(v_28) != AT_LIST) || !(ATisEmpty(v_28))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, p_6);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(v_3, default_usage_0_0, _id, y_3, t);
  return(t);
}
