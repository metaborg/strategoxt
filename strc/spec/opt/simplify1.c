#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_Undefined_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
void init_constructors (void)
{
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  init_constant_terms();
}
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_x_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_y_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_m_26;
ATerm term_c_26;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_b_23;
ATerm term_y_22;
ATerm term_i_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_a_22;
ATerm term_x_21;
ATerm term_f_21;
ATerm term_w_5;
ATerm term_q_5;
void init_constant_terms (void)
{
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym__2, term_q_23, term_r_23);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_23);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_x_23, term_h_23);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym__2, term_h_24, term_i_24);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym__2, term_m_26, term_h_23);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym__2, term_q_26, term_h_23);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_h_23);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym__2, term_i_22, term_h_23);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm bottomup_1_0 (ATerm e_92 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm h_93 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm o_107 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm d_2 (ATerm t_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm topdown_1_0 (ATerm d_92 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm);
ATerm s_0 (ATerm);
ATerm u_0 (ATerm);
ATerm w_0 (ATerm);
ATerm z_0 (ATerm);
ATerm b_1 (ATerm);
ATerm e_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm simplify_0_0 (ATerm);
ATerm map_1_0 (ATerm y_106 (ATerm), ATerm);
ATerm x_10 (ATerm y_48, ATerm z_48, ATerm);
ATerm y_10 (ATerm m_52, ATerm n_52, ATerm);
ATerm a_11 (ATerm z_112 (ATerm), ATerm h_474, ATerm q_52, ATerm);
ATerm z_10 (ATerm i_52, ATerm j_52, ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm output_1_0 (ATerm i_117 (ATerm), ATerm);
ATerm g_50 (ATerm z_49, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm b_11 (ATerm o_52, ATerm);
ATerm c_11 (ATerm a_49, ATerm b_49, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm s_51 (ATerm q_50, ATerm);
ATerm t_51 (ATerm u_50, ATerm v_50, ATerm w_50, ATerm);
ATerm u_51 (ATerm e_51, ATerm f_51, ATerm g_51, ATerm);
ATerm d_11 (ATerm);
ATerm p_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm j_117 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm v_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm f_2 (ATerm);
ATerm n_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm l_11 (ATerm p_53, ATerm q_53, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm j_11 (ATerm n_58, ATerm o_58, ATerm m_58, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm e_11 (ATerm y_45, ATerm z_45, ATerm);
ATerm foldr_2_0 (ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm j_114 (ATerm), ATerm);
ATerm a_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm b_3 (ATerm);
ATerm need_help_1_0 (ATerm z_116 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm d_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm i_107 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm h_11 (ATerm y_39, ATerm z_39, ATerm);
ATerm debug_1_0 (ATerm x_112 (ATerm), ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm i_11 (ATerm e_60, ATerm f_60, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm c_119 (ATerm), ATerm);
ATerm s_3 (ATerm);
ATerm v_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm parse_options_1_0 (ATerm b_119 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm e_92 (ATerm), ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    t = bottomup_1_0(e_92, t);
    return(t);
  }
  t = SRTS_all(a_0, t);
  t = e_92(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm h_93 (ATerm), ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm l_4 = t;
    int m_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_93(t);
        ;
        LocalPopChoice(m_4);
      }
    else
      {
        t = l_4;
        t = SRTS_one(m_2, t);
      }
    return(t);
  }
  t = m_2(t);
  return(t);
}
ATerm at_end_1_0 (ATerm o_107 (ATerm), ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm c_1 = NULL,f_1 = NULL,g_1 = NULL;
    g_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_1 = ATgetFirst((ATermList) t);
        f_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_0 = NULL,d_1 = NULL,r_0 = NULL;
          t = SSLgetAnnotations(g_1);
          y_0 = t;
          t = f_1;
          t = l_1(t);
          d_1 = t;
          t = (ATerm) ATinsert(CheckATermList(d_1), c_1);
          r_0 = t;
          t = SSLsetAnnotations(r_0, y_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_1;
        t = o_107(t);
      }
    return(t);
  }
  t = l_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,l_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
    }
  else
    {
      ATerm m_0 (ATerm t)
      {
        t = not_null(l_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_0 = ATgetFirst((ATermList) t);
          if(((l_0 != NULL) && (l_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_0;
      t = at_end_1_0(m_0, t);
    }
  return(t);
}
ATerm d_2 (ATerm t_1, ATerm t)
{
  ATerm u_1 = NULL;
  t = SSL_explode_term(t_1);
  if(match_cons(t, sym__2))
    {
      ATerm n_4 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_4) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL,z_1 = NULL;
  z_1 = t;
  if(match_cons(t, sym__2))
    {
      x_1 = ATgetArgument(t, 0);
      y_1 = ATgetArgument(t, 1);
      {
        ATerm o_4 = t;
        int p_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_0 (ATerm t)
            {
              t = y_1;
              return(t);
            }
            t = x_1;
            t = at_end_1_0(n_0, t);
            ;
            LocalPopChoice(p_4);
          }
        else
          {
            t = o_4;
            t = d_2(z_1, t);
          }
      }
    }
  else
    {
      t = d_2(z_1, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm topdown_1_0 (ATerm d_92 (ATerm), ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    t = topdown_1_0(d_92, t);
    return(t);
  }
  t = d_92(t);
  t = SRTS_all(p_0, t);
  return(t);
}
ATerm genzip_4_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm q_4 = t;
    int r_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_96(t);
        ;
        LocalPopChoice(r_4);
      }
    else
      {
        t = q_4;
        {
          ATerm e_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,t_0 = NULL;
          t = q_96(t);
          k_2 = t;
          if(match_cons(t, sym__2))
            {
              g_2 = ATgetArgument(t, 0);
              h_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_2);
          e_2 = t;
          t = g_2;
          t = s_96(t);
          i_2 = t;
          t = h_2;
          t = l_2(t);
          j_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_2, j_2);
          t_0 = t;
          t = SSLsetAnnotations(t_0, e_2);
          t = r_96(t);
        }
      }
    return(t);
  }
  t = l_2(t);
  return(t);
}
ATerm s_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_4 = ATgetArgument(t, 0);
      if(((ATgetType(t_4) != AT_LIST) || !(ATisEmpty(t_4))))
        _fail(t);
      {
        ATerm u_4 = ATgetArgument(t, 1);
        if(((ATgetType(u_4) != AT_LIST) || !(ATisEmpty(u_4))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm t_17 = NULL,w_17 = NULL,x_17 = NULL,z_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_4 = ATgetArgument(t, 0);
      if(((ATgetType(w_4) == AT_LIST) && !(ATisEmpty(w_4))))
        {
          t_17 = ATgetFirst((ATermList) w_4);
          w_17 = (ATerm) ATgetNext((ATermList) w_4);
        }
      else
        _fail(t);
      {
        ATerm x_4 = ATgetArgument(t, 1);
        if(((ATgetType(x_4) == AT_LIST) && !(ATisEmpty(x_4))))
          {
            x_17 = ATgetFirst((ATermList) x_4);
            z_17 = (ATerm) ATgetNext((ATermList) x_4);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_17, x_17), (ATerm) ATmakeAppl(sym__2, w_17, z_17));
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL;
  if(match_cons(t, sym__2))
    {
      a_18 = ATgetArgument(t, 0);
      b_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_18), a_18);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL;
  if(match_cons(t, sym__2))
    {
      h_18 = ATgetArgument(t, 0);
      i_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_18), (ATerm) ATmakeAppl(sym_Match_1, i_18));
  return(t);
}
ATerm b_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_4 = ATgetArgument(t, 0);
      if(((ATgetType(y_4) != AT_LIST) || !(ATisEmpty(y_4))))
        _fail(t);
      {
        ATerm z_4 = ATgetArgument(t, 1);
        if(((ATgetType(z_4) != AT_LIST) || !(ATisEmpty(z_4))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,h_25 = NULL,j_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_5 = ATgetArgument(t, 0);
      if(((ATgetType(a_5) == AT_LIST) && !(ATisEmpty(a_5))))
        {
          c_25 = ATgetFirst((ATermList) a_5);
          d_25 = (ATerm) ATgetNext((ATermList) a_5);
        }
      else
        _fail(t);
      {
        ATerm b_5 = ATgetArgument(t, 1);
        if(((ATgetType(b_5) == AT_LIST) && !(ATisEmpty(b_5))))
          {
            h_25 = ATgetFirst((ATermList) b_5);
            j_25 = (ATerm) ATgetNext((ATermList) b_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_25, h_25), (ATerm) ATmakeAppl(sym__2, d_25, j_25));
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm m_25 = NULL,o_25 = NULL;
  if(match_cons(t, sym__2))
    {
      m_25 = ATgetArgument(t, 0);
      o_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_25), m_25);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL;
  if(match_cons(t, sym__2))
    {
      s_25 = ATgetArgument(t, 0);
      t_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_25), (ATerm) ATmakeAppl(sym_Match_1, t_25));
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm c_5 = t;
  int e_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm f_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(e_5);
      {
        ATerm d_36 = NULL,e_36 = NULL;
        d_36 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm h_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        e_36 = t;
        t = SSLgetAnnotations(d_36);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_5 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) i_5) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm j_5 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(j_5) != AT_LIST) || !(ATisEmpty(j_5))))
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
      t = c_5;
      {
        ATerm k_5 = t;
        int l_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm m_5 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) m_5) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm n_5 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(l_5);
            _fail(t);
          }
        else
          {
            t = k_5;
          }
      }
    }
  return(t);
}
ATerm k_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,f_11 = NULL,g_11 = NULL,k_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
    x_11 = t;
    if(match_cons(t, sym_Test_1))
      {
        w_11 = ATgetArgument(t, 0);
        t = w_11;
        if(match_cons(t, sym_Id_0))
          {
            ATerm o_5 = t;
            int p_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_q_5;
                t = q_0(t);
                ;
                LocalPopChoice(p_5);
              }
            else
              {
                t = o_5;
                {
                  ATerm r_5 = t;
                  int s_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL;
                      t = x_11;
                      t = new_0_0(t);
                      z_11 = t;
                      t = bottomup_1_0(q_0, t);
                      k_12 = t;
                      t = (ATerm) ATempty;
                      t = q_0(t);
                      l_12 = t;
                      t = (ATerm) ATinsert(CheckATermList(l_12), k_12);
                      t = q_0(t);
                      a_12 = t;
                      t = z_11;
                      t = bottomup_1_0(q_0, t);
                      j_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, j_12);
                      t = q_0(t);
                      i_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, i_12);
                      t = q_0(t);
                      c_12 = t;
                      t = w_11;
                      t = bottomup_1_0(q_0, t);
                      e_12 = t;
                      t = z_11;
                      t = bottomup_1_0(q_0, t);
                      h_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, h_12);
                      t = q_0(t);
                      g_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, g_12);
                      t = q_0(t);
                      f_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, f_12);
                      t = q_0(t);
                      d_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_12, d_12);
                      t = q_0(t);
                      b_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, a_12, b_12);
                      t = q_0(t);
                      ;
                      LocalPopChoice(s_5);
                    }
                  else
                    {
                      t = r_5;
                      t = x_11;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm t_5 = t;
                int u_5 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_w_5;
                    t = q_0(t);
                    ;
                    LocalPopChoice(u_5);
                  }
                else
                  {
                    t = t_5;
                    {
                      ATerm x_5 = t;
                      int y_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
                          t = x_11;
                          t = new_0_0(t);
                          o_12 = t;
                          t = bottomup_1_0(q_0, t);
                          z_12 = t;
                          t = (ATerm) ATempty;
                          t = q_0(t);
                          a_13 = t;
                          t = (ATerm) ATinsert(CheckATermList(a_13), z_12);
                          t = q_0(t);
                          p_12 = t;
                          t = o_12;
                          t = bottomup_1_0(q_0, t);
                          y_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, y_12);
                          t = q_0(t);
                          x_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, x_12);
                          t = q_0(t);
                          r_12 = t;
                          t = w_11;
                          t = bottomup_1_0(q_0, t);
                          t_12 = t;
                          t = o_12;
                          t = bottomup_1_0(q_0, t);
                          w_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, w_12);
                          t = q_0(t);
                          v_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, v_12);
                          t = q_0(t);
                          u_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_12, u_12);
                          t = q_0(t);
                          s_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, r_12, s_12);
                          t = q_0(t);
                          q_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, p_12, q_12);
                          t = q_0(t);
                          ;
                          LocalPopChoice(y_5);
                        }
                      else
                        {
                          t = x_5;
                          t = x_11;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    t_11 = ATgetArgument(t, 0);
                    {
                      ATerm a_6 = t;
                      int b_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, t_11);
                          t = q_0(t);
                          ;
                          LocalPopChoice(b_6);
                        }
                      else
                        {
                          t = a_6;
                          {
                            ATerm c_6 = t;
                            int d_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,s_13 = NULL,v_13 = NULL;
                                t = x_11;
                                t = new_0_0(t);
                                e_13 = t;
                                t = bottomup_1_0(q_0, t);
                                s_13 = t;
                                t = (ATerm) ATempty;
                                t = q_0(t);
                                v_13 = t;
                                t = (ATerm) ATinsert(CheckATermList(v_13), s_13);
                                t = q_0(t);
                                f_13 = t;
                                t = e_13;
                                t = bottomup_1_0(q_0, t);
                                o_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, o_13);
                                t = q_0(t);
                                n_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, n_13);
                                t = q_0(t);
                                h_13 = t;
                                t = w_11;
                                t = bottomup_1_0(q_0, t);
                                j_13 = t;
                                t = e_13;
                                t = bottomup_1_0(q_0, t);
                                m_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, m_13);
                                t = q_0(t);
                                l_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, l_13);
                                t = q_0(t);
                                k_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, j_13, k_13);
                                t = q_0(t);
                                i_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, h_13, i_13);
                                t = q_0(t);
                                g_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, f_13, g_13);
                                t = q_0(t);
                                ;
                                LocalPopChoice(d_6);
                              }
                            else
                              {
                                t = c_6;
                                t = x_11;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm e_6 = t;
                    int f_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_13 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,v_14 = NULL,w_14 = NULL,y_14 = NULL,d_15 = NULL,f_15 = NULL;
                        t = x_11;
                        t = new_0_0(t);
                        y_13 = t;
                        t = bottomup_1_0(q_0, t);
                        d_15 = t;
                        t = (ATerm) ATempty;
                        t = q_0(t);
                        f_15 = t;
                        t = (ATerm) ATinsert(CheckATermList(f_15), d_15);
                        t = q_0(t);
                        f_14 = t;
                        t = y_13;
                        t = bottomup_1_0(q_0, t);
                        y_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, y_14);
                        t = q_0(t);
                        w_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, w_14);
                        t = q_0(t);
                        h_14 = t;
                        t = w_11;
                        t = bottomup_1_0(q_0, t);
                        p_14 = t;
                        t = y_13;
                        t = bottomup_1_0(q_0, t);
                        v_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, v_14);
                        t = q_0(t);
                        r_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, r_14);
                        t = q_0(t);
                        q_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, p_14, q_14);
                        t = q_0(t);
                        o_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, h_14, o_14);
                        t = q_0(t);
                        g_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, f_14, g_14);
                        t = q_0(t);
                        ;
                        LocalPopChoice(f_6);
                      }
                    else
                      {
                        t = e_6;
                        t = x_11;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            w_11 = ATgetArgument(t, 0);
            t = w_11;
            if(match_cons(t, sym_Id_0))
              {
                ATerm h_6 = t;
                int i_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_w_5;
                    t = q_0(t);
                    ;
                    LocalPopChoice(i_6);
                  }
                else
                  {
                    t = h_6;
                    t = x_11;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm j_6 = t;
                    int k_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_q_5;
                        t = q_0(t);
                        ;
                        LocalPopChoice(k_6);
                      }
                    else
                      {
                        t = j_6;
                        t = x_11;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        t_11 = ATgetArgument(t, 0);
                        {
                          ATerm m_6 = t;
                          int n_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, t_11);
                              t = q_0(t);
                              ;
                              LocalPopChoice(n_6);
                            }
                          else
                            {
                              t = m_6;
                              t = x_11;
                            }
                        }
                      }
                    else
                      {
                        t = x_11;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                w_11 = ATgetArgument(t, 0);
                v_11 = ATgetArgument(t, 1);
                t = v_11;
                if(match_cons(t, sym_Id_0))
                  {
                    t = w_11;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = v_11;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = w_11;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                t_11 = ATgetArgument(t, 0);
                                u_11 = ATgetArgument(t, 1);
                                t = w_11;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    t_11 = ATgetArgument(t, 0);
                                    u_11 = ATgetArgument(t, 1);
                                    t = w_11;
                                  }
                                else
                                  {
                                    t = w_11;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        r_11 = ATgetArgument(t, 0);
                        s_11 = ATgetArgument(t, 1);
                        t = r_11;
                        if(match_cons(t, sym_Match_1))
                          {
                            q_11 = ATgetArgument(t, 0);
                            t = q_11;
                            if(match_cons(t, sym_Op_2))
                              {
                                o_11 = ATgetArgument(t, 0);
                                f_11 = ATgetArgument(t, 1);
                                t = w_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = v_11;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm o_6 = t;
                                        int p_6 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_w_5;
                                            t = q_0(t);
                                            ;
                                            LocalPopChoice(p_6);
                                          }
                                        else
                                          {
                                            t = o_6;
                                            t = x_11;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            t_11 = ATgetArgument(t, 0);
                                            u_11 = ATgetArgument(t, 1);
                                            {
                                              ATerm q_6 = t;
                                              int r_6 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm h_17 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                  t = q_0(t);
                                                  h_17 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_11, h_17);
                                                  t = q_0(t);
                                                  ;
                                                  LocalPopChoice(r_6);
                                                }
                                              else
                                                {
                                                  t = q_6;
                                                  t = x_11;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                t_11 = ATgetArgument(t, 0);
                                                t = t_11;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    p_11 = ATgetArgument(t, 0);
                                                    g_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm s_6 = t;
                                                      int u_6 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, p_11, o_11);
                                                          {
                                                            ATerm x_6 = t;
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
                                                                t = x_6;
                                                              }
                                                            t = term_w_5;
                                                            t = bottomup_1_0(q_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(u_6);
                                                        }
                                                      else
                                                        {
                                                          t = s_6;
                                                          {
                                                            ATerm y_6 = t;
                                                            int a_7 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm s_17 = NULL;
                                                                t = o_11;
                                                                if((p_11 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, g_11, f_11);
                                                                t = genzip_4_0(s_0, u_0, w_0, z_0, t);
                                                                s_17 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_17), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, p_11, g_11)), s_11));
                                                                t = bottomup_1_0(q_0, t);
                                                                ;
                                                                LocalPopChoice(a_7);
                                                              }
                                                            else
                                                              {
                                                                t = y_6;
                                                                {
                                                                  ATerm c_7 = t;
                                                                  int e_7 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm q_18 = NULL;
                                                                      t = q_11;
                                                                      if((t_11 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, t_11);
                                                                      t = q_0(t);
                                                                      q_18 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_18, s_11);
                                                                      t = q_0(t);
                                                                      ;
                                                                      LocalPopChoice(e_7);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = c_7;
                                                                      t = x_11;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm k_7 = t;
                                                    int l_7 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm y_18 = NULL;
                                                        t = q_11;
                                                        if((t_11 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, t_11);
                                                        t = q_0(t);
                                                        y_18 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, y_18, s_11);
                                                        t = q_0(t);
                                                        ;
                                                        LocalPopChoice(l_7);
                                                      }
                                                    else
                                                      {
                                                        t = k_7;
                                                        t = x_11;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    t_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm m_7 = t;
                                                      int n_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_19 = NULL;
                                                          t = q_11;
                                                          if((t_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, t_11);
                                                          t = q_0(t);
                                                          j_19 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_19, s_11);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(n_7);
                                                        }
                                                      else
                                                        {
                                                          t = m_7;
                                                          t = x_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_11 = ATgetArgument(t, 0);
                                                        u_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm o_7 = t;
                                                          int p_7 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_19 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                              t = q_0(t);
                                                              p_19 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, p_19);
                                                              t = q_0(t);
                                                              ;
                                                              LocalPopChoice(p_7);
                                                            }
                                                          else
                                                            {
                                                              t = o_7;
                                                              t = x_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = x_11;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = w_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = v_11;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm q_7 = t;
                                        int r_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_w_5;
                                            t = q_0(t);
                                            ;
                                            LocalPopChoice(r_7);
                                          }
                                        else
                                          {
                                            t = q_7;
                                            t = x_11;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            t_11 = ATgetArgument(t, 0);
                                            u_11 = ATgetArgument(t, 1);
                                            {
                                              ATerm s_7 = t;
                                              int t_7 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm y_19 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                  t = q_0(t);
                                                  y_19 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_11, y_19);
                                                  t = q_0(t);
                                                  ;
                                                  LocalPopChoice(t_7);
                                                }
                                              else
                                                {
                                                  t = s_7;
                                                  t = x_11;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                t_11 = ATgetArgument(t, 0);
                                                {
                                                  ATerm u_7 = t;
                                                  int v_7 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm c_20 = NULL;
                                                      t = q_11;
                                                      if((t_11 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, t_11);
                                                      t = q_0(t);
                                                      c_20 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_20, s_11);
                                                      t = q_0(t);
                                                      ;
                                                      LocalPopChoice(v_7);
                                                    }
                                                  else
                                                    {
                                                      t = u_7;
                                                      t = x_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    t_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm w_7 = t;
                                                      int x_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm g_20 = NULL;
                                                          t = q_11;
                                                          if((t_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, t_11);
                                                          t = q_0(t);
                                                          g_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_20, s_11);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(x_7);
                                                        }
                                                      else
                                                        {
                                                          t = w_7;
                                                          t = x_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_11 = ATgetArgument(t, 0);
                                                        u_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm y_7 = t;
                                                          int z_7 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm l_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                              t = q_0(t);
                                                              l_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, l_20);
                                                              t = q_0(t);
                                                              ;
                                                              LocalPopChoice(z_7);
                                                            }
                                                          else
                                                            {
                                                              t = y_7;
                                                              t = x_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = x_11;
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
                                q_11 = ATgetArgument(t, 0);
                                t = q_11;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    o_11 = ATgetArgument(t, 0);
                                    t = w_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = v_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm a_8 = t;
                                            int b_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_5;
                                                t = q_0(t);
                                                ;
                                                LocalPopChoice(b_8);
                                              }
                                            else
                                              {
                                                t = a_8;
                                                t = x_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_11 = ATgetArgument(t, 0);
                                                u_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm c_8 = t;
                                                  int d_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm u_20 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                      t = q_0(t);
                                                      u_20 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_11, u_20);
                                                      t = q_0(t);
                                                      ;
                                                      LocalPopChoice(d_8);
                                                    }
                                                  else
                                                    {
                                                      t = c_8;
                                                      t = x_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm e_8 = t;
                                                int f_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm g_8 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(f_8);
                                                    {
                                                      ATerm h_8 = t;
                                                      int i_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm y_20 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, q_11);
                                                          t = q_0(t);
                                                          y_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_20, s_11);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(i_8);
                                                        }
                                                      else
                                                        {
                                                          t = h_8;
                                                          t = x_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = e_8;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        t_11 = ATgetArgument(t, 0);
                                                        t = t_11;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            p_11 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm j_8 = t;
                                                              int k_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm c_21 = NULL,d_21 = NULL;
                                                                  t = o_11;
                                                                  if((p_11 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, p_11);
                                                                  t = q_0(t);
                                                                  d_21 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, d_21);
                                                                  t = q_0(t);
                                                                  c_21 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, c_21, s_11);
                                                                  t = q_0(t);
                                                                  ;
                                                                  LocalPopChoice(k_8);
                                                                }
                                                              else
                                                                {
                                                                  t = j_8;
                                                                  t = x_11;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = x_11;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            t_11 = ATgetArgument(t, 0);
                                                            u_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm l_8 = t;
                                                              int m_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm r_21 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                                  t = q_0(t);
                                                                  r_21 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, r_21);
                                                                  t = q_0(t);
                                                                  ;
                                                                  LocalPopChoice(m_8);
                                                                }
                                                              else
                                                                {
                                                                  t = l_8;
                                                                  t = x_11;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = x_11;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = w_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = v_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm n_8 = t;
                                            int o_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_5;
                                                t = q_0(t);
                                                ;
                                                LocalPopChoice(o_8);
                                              }
                                            else
                                              {
                                                t = n_8;
                                                t = x_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_11 = ATgetArgument(t, 0);
                                                u_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm p_8 = t;
                                                  int q_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm c_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                      t = q_0(t);
                                                      c_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_11, c_22);
                                                      t = q_0(t);
                                                      ;
                                                      LocalPopChoice(q_8);
                                                    }
                                                  else
                                                    {
                                                      t = p_8;
                                                      t = x_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm r_8 = t;
                                                int s_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm t_8 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(s_8);
                                                    {
                                                      ATerm u_8 = t;
                                                      int v_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm m_22 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, q_11);
                                                          t = q_0(t);
                                                          m_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, s_11);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(v_8);
                                                        }
                                                      else
                                                        {
                                                          t = u_8;
                                                          t = x_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = r_8;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_11 = ATgetArgument(t, 0);
                                                        u_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm w_8 = t;
                                                          int x_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_22 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                              t = q_0(t);
                                                              r_22 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, r_22);
                                                              t = q_0(t);
                                                              ;
                                                              LocalPopChoice(x_8);
                                                            }
                                                          else
                                                            {
                                                              t = w_8;
                                                              t = x_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = x_11;
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
                                    q_11 = ATgetArgument(t, 0);
                                    k_11 = ATgetArgument(t, 1);
                                    m_11 = ATgetArgument(t, 2);
                                    t = w_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = v_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm y_8 = t;
                                            int z_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_5;
                                                t = q_0(t);
                                                ;
                                                LocalPopChoice(z_8);
                                              }
                                            else
                                              {
                                                t = y_8;
                                                t = x_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_11 = ATgetArgument(t, 0);
                                                u_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm a_9 = t;
                                                  int b_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm c_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                      t = q_0(t);
                                                      c_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_11, c_23);
                                                      t = q_0(t);
                                                      ;
                                                      LocalPopChoice(b_9);
                                                    }
                                                  else
                                                    {
                                                      t = a_9;
                                                      t = x_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm c_9 = t;
                                                int d_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm e_9 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(d_9);
                                                    {
                                                      ATerm f_9 = t;
                                                      int g_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm i_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, q_11, k_11, m_11);
                                                          t = q_0(t);
                                                          i_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_23, s_11);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(g_9);
                                                        }
                                                      else
                                                        {
                                                          t = f_9;
                                                          t = x_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = c_9;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_11 = ATgetArgument(t, 0);
                                                        u_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_9 = t;
                                                          int i_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                              t = q_0(t);
                                                              n_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, n_23);
                                                              t = q_0(t);
                                                              ;
                                                              LocalPopChoice(i_9);
                                                            }
                                                          else
                                                            {
                                                              t = h_9;
                                                              t = x_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = x_11;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = w_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = v_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm j_9 = t;
                                            int k_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_5;
                                                t = q_0(t);
                                                ;
                                                LocalPopChoice(k_9);
                                              }
                                            else
                                              {
                                                t = j_9;
                                                t = x_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_11 = ATgetArgument(t, 0);
                                                u_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm l_9 = t;
                                                  int m_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm w_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                      t = q_0(t);
                                                      w_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_11, w_23);
                                                      t = q_0(t);
                                                      ;
                                                      LocalPopChoice(m_9);
                                                    }
                                                  else
                                                    {
                                                      t = l_9;
                                                      t = x_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    t_11 = ATgetArgument(t, 0);
                                                    u_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm n_9 = t;
                                                      int o_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm b_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                          t = q_0(t);
                                                          b_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, b_24);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(o_9);
                                                        }
                                                      else
                                                        {
                                                          t = n_9;
                                                          t = x_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = x_11;
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
                            r_11 = ATgetArgument(t, 0);
                            t = r_11;
                            if(match_cons(t, sym_Op_2))
                              {
                                q_11 = ATgetArgument(t, 0);
                                k_11 = ATgetArgument(t, 1);
                                t = w_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = v_11;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm p_9 = t;
                                        int q_9 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_w_5;
                                            t = q_0(t);
                                            ;
                                            LocalPopChoice(q_9);
                                          }
                                        else
                                          {
                                            t = p_9;
                                            t = x_11;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            t_11 = ATgetArgument(t, 0);
                                            u_11 = ATgetArgument(t, 1);
                                            {
                                              ATerm r_9 = t;
                                              int s_9 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm r_24 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                  t = q_0(t);
                                                  r_24 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_11, r_24);
                                                  t = q_0(t);
                                                  ;
                                                  LocalPopChoice(s_9);
                                                }
                                              else
                                                {
                                                  t = r_9;
                                                  t = x_11;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                t_11 = ATgetArgument(t, 0);
                                                t = t_11;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    p_11 = ATgetArgument(t, 0);
                                                    g_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm t_9 = t;
                                                      int u_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, p_11, q_11);
                                                          {
                                                            ATerm v_9 = t;
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
                                                                t = v_9;
                                                              }
                                                            t = term_w_5;
                                                            t = bottomup_1_0(q_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(u_9);
                                                        }
                                                      else
                                                        {
                                                          t = t_9;
                                                          {
                                                            ATerm w_9 = t;
                                                            int x_9 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm b_25 = NULL;
                                                                t = q_11;
                                                                if((p_11 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, g_11, k_11);
                                                                t = genzip_4_0(b_1, e_1, h_1, i_1, t);
                                                                b_25 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_25), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, p_11, g_11)));
                                                                t = bottomup_1_0(q_0, t);
                                                                ;
                                                                LocalPopChoice(x_9);
                                                              }
                                                            else
                                                              {
                                                                t = w_9;
                                                                {
                                                                  ATerm y_9 = t;
                                                                  int z_9 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = r_11;
                                                                      if((t_11 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, t_11);
                                                                      t = q_0(t);
                                                                      ;
                                                                      LocalPopChoice(z_9);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = y_9;
                                                                      t = x_11;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm a_10 = t;
                                                    int b_10 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = r_11;
                                                        if((t_11 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, t_11);
                                                        t = q_0(t);
                                                        ;
                                                        LocalPopChoice(b_10);
                                                      }
                                                    else
                                                      {
                                                        t = a_10;
                                                        t = x_11;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    t_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm c_10 = t;
                                                      int d_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = r_11;
                                                          if((t_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, t_11);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(d_10);
                                                        }
                                                      else
                                                        {
                                                          t = c_10;
                                                          t = x_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_11 = ATgetArgument(t, 0);
                                                        u_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm e_10 = t;
                                                          int f_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm e_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                              t = q_0(t);
                                                              e_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, e_26);
                                                              t = q_0(t);
                                                              ;
                                                              LocalPopChoice(f_10);
                                                            }
                                                          else
                                                            {
                                                              t = e_10;
                                                              t = x_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = x_11;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = w_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = v_11;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm g_10 = t;
                                        int h_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_w_5;
                                            t = q_0(t);
                                            ;
                                            LocalPopChoice(h_10);
                                          }
                                        else
                                          {
                                            t = g_10;
                                            t = x_11;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            t_11 = ATgetArgument(t, 0);
                                            u_11 = ATgetArgument(t, 1);
                                            {
                                              ATerm i_10 = t;
                                              int j_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm n_26 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                  t = q_0(t);
                                                  n_26 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_11, n_26);
                                                  t = q_0(t);
                                                  ;
                                                  LocalPopChoice(j_10);
                                                }
                                              else
                                                {
                                                  t = i_10;
                                                  t = x_11;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                t_11 = ATgetArgument(t, 0);
                                                {
                                                  ATerm k_10 = t;
                                                  int l_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = r_11;
                                                      if((t_11 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, t_11);
                                                      t = q_0(t);
                                                      ;
                                                      LocalPopChoice(l_10);
                                                    }
                                                  else
                                                    {
                                                      t = k_10;
                                                      t = x_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    t_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm m_10 = t;
                                                      int n_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = r_11;
                                                          if((t_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, t_11);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(n_10);
                                                        }
                                                      else
                                                        {
                                                          t = m_10;
                                                          t = x_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_11 = ATgetArgument(t, 0);
                                                        u_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm o_10 = t;
                                                          int p_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                              t = q_0(t);
                                                              z_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, z_26);
                                                              t = q_0(t);
                                                              ;
                                                              LocalPopChoice(p_10);
                                                            }
                                                          else
                                                            {
                                                              t = o_10;
                                                              t = x_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = x_11;
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
                                    q_11 = ATgetArgument(t, 0);
                                    t = w_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = v_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm q_10 = t;
                                            int y_11 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_5;
                                                t = q_0(t);
                                                ;
                                                LocalPopChoice(y_11);
                                              }
                                            else
                                              {
                                                t = q_10;
                                                t = x_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_11 = ATgetArgument(t, 0);
                                                u_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm m_12 = t;
                                                  int n_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm n_27 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                      t = q_0(t);
                                                      n_27 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_11, n_27);
                                                      t = q_0(t);
                                                      ;
                                                      LocalPopChoice(n_12);
                                                    }
                                                  else
                                                    {
                                                      t = m_12;
                                                      t = x_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm b_13 = t;
                                                int c_13 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm d_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(c_13);
                                                    {
                                                      ATerm p_13 = t;
                                                      int q_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, r_11);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(q_13);
                                                        }
                                                      else
                                                        {
                                                          t = p_13;
                                                          t = x_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = b_13;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        t_11 = ATgetArgument(t, 0);
                                                        t = t_11;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            p_11 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm r_13 = t;
                                                              int t_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm w_27 = NULL;
                                                                  t = q_11;
                                                                  if((p_11 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, p_11);
                                                                  t = q_0(t);
                                                                  w_27 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, w_27);
                                                                  t = q_0(t);
                                                                  ;
                                                                  LocalPopChoice(t_13);
                                                                }
                                                              else
                                                                {
                                                                  t = r_13;
                                                                  t = x_11;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = x_11;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            t_11 = ATgetArgument(t, 0);
                                                            u_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm u_13 = t;
                                                              int w_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm e_28 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                                  t = q_0(t);
                                                                  e_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, e_28);
                                                                  t = q_0(t);
                                                                  ;
                                                                  LocalPopChoice(w_13);
                                                                }
                                                              else
                                                                {
                                                                  t = u_13;
                                                                  t = x_11;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = x_11;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = w_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = v_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm x_13 = t;
                                            int z_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_5;
                                                t = q_0(t);
                                                ;
                                                LocalPopChoice(z_13);
                                              }
                                            else
                                              {
                                                t = x_13;
                                                t = x_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_11 = ATgetArgument(t, 0);
                                                u_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm a_14 = t;
                                                  int b_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm s_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                      t = q_0(t);
                                                      s_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_11, s_28);
                                                      t = q_0(t);
                                                      ;
                                                      LocalPopChoice(b_14);
                                                    }
                                                  else
                                                    {
                                                      t = a_14;
                                                      t = x_11;
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
                                                      ATerm i_14 = t;
                                                      int j_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, r_11);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(j_14);
                                                        }
                                                      else
                                                        {
                                                          t = i_14;
                                                          t = x_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = c_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_11 = ATgetArgument(t, 0);
                                                        u_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm k_14 = t;
                                                          int l_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_28 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                              t = q_0(t);
                                                              z_28 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, z_28);
                                                              t = q_0(t);
                                                              ;
                                                              LocalPopChoice(l_14);
                                                            }
                                                          else
                                                            {
                                                              t = k_14;
                                                              t = x_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = x_11;
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
                                    s_11 = ATgetArgument(t, 1);
                                    n_11 = ATgetArgument(t, 2);
                                    t = w_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = v_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm m_14 = t;
                                            int n_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_5;
                                                t = q_0(t);
                                                ;
                                                LocalPopChoice(n_14);
                                              }
                                            else
                                              {
                                                t = m_14;
                                                t = x_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_11 = ATgetArgument(t, 0);
                                                u_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm s_14 = t;
                                                  int t_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm k_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                      t = q_0(t);
                                                      k_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_11, k_29);
                                                      t = q_0(t);
                                                      ;
                                                      LocalPopChoice(t_14);
                                                    }
                                                  else
                                                    {
                                                      t = s_14;
                                                      t = x_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm u_14 = t;
                                                int x_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm z_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(x_14);
                                                    {
                                                      ATerm a_15 = t;
                                                      int b_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, r_11, s_11, n_11);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(b_15);
                                                        }
                                                      else
                                                        {
                                                          t = a_15;
                                                          t = x_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = u_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_11 = ATgetArgument(t, 0);
                                                        u_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm c_15 = t;
                                                          int e_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm t_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                              t = q_0(t);
                                                              t_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, t_29);
                                                              t = q_0(t);
                                                              ;
                                                              LocalPopChoice(e_15);
                                                            }
                                                          else
                                                            {
                                                              t = c_15;
                                                              t = x_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = x_11;
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
                                        r_11 = ATgetArgument(t, 0);
                                        s_11 = ATgetArgument(t, 1);
                                        t = w_11;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = v_11;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm g_15 = t;
                                                int h_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_w_5;
                                                    t = q_0(t);
                                                    ;
                                                    LocalPopChoice(h_15);
                                                  }
                                                else
                                                  {
                                                    t = g_15;
                                                    {
                                                      ATerm i_15 = t;
                                                      int j_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm g_30 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, s_11);
                                                          t = q_0(t);
                                                          g_30 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, r_11, g_30);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(j_15);
                                                        }
                                                      else
                                                        {
                                                          t = i_15;
                                                          t = x_11;
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
                                                    {
                                                      ATerm k_15 = t;
                                                      int l_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm n_30 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                          t = q_0(t);
                                                          n_30 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_11, n_30);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(l_15);
                                                        }
                                                      else
                                                        {
                                                          t = k_15;
                                                          {
                                                            ATerm m_15 = t;
                                                            int n_15 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm s_30 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, s_11);
                                                                t = q_0(t);
                                                                s_30 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, r_11, s_30);
                                                                t = q_0(t);
                                                                ;
                                                                LocalPopChoice(n_15);
                                                              }
                                                            else
                                                              {
                                                                t = m_15;
                                                                t = x_11;
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
                                                        {
                                                          ATerm o_15 = t;
                                                          int p_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, s_11);
                                                              t = q_0(t);
                                                              a_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, r_11, a_31);
                                                              t = q_0(t);
                                                              ;
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
                                                                    ATerm l_31 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                                    t = q_0(t);
                                                                    l_31 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, l_31);
                                                                    t = q_0(t);
                                                                    ;
                                                                    LocalPopChoice(r_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = q_15;
                                                                    t = x_11;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm s_15 = t;
                                                        int t_15 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm r_31 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, s_11);
                                                            t = q_0(t);
                                                            r_31 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, r_11, r_31);
                                                            t = q_0(t);
                                                            ;
                                                            LocalPopChoice(t_15);
                                                          }
                                                        else
                                                          {
                                                            t = s_15;
                                                            t = x_11;
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
                                            r_11 = ATgetArgument(t, 0);
                                            s_11 = ATgetArgument(t, 1);
                                            t = w_11;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = v_11;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm u_15 = t;
                                                    int v_15 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_w_5;
                                                        t = q_0(t);
                                                        ;
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
                                                              ATerm f_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, s_11);
                                                              t = q_0(t);
                                                              f_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, r_11, f_32);
                                                              t = q_0(t);
                                                              ;
                                                              LocalPopChoice(x_15);
                                                            }
                                                          else
                                                            {
                                                              t = w_15;
                                                              t = x_11;
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
                                                        {
                                                          ATerm y_15 = t;
                                                          int z_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm k_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                              t = q_0(t);
                                                              k_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_11, k_32);
                                                              t = q_0(t);
                                                              ;
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
                                                                    ATerm p_32 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, s_11);
                                                                    t = q_0(t);
                                                                    p_32 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, r_11, p_32);
                                                                    t = q_0(t);
                                                                    ;
                                                                    LocalPopChoice(b_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = a_16;
                                                                    t = x_11;
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
                                                            {
                                                              ATerm c_16 = t;
                                                              int d_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm u_32 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, s_11);
                                                                  t = q_0(t);
                                                                  u_32 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, r_11, u_32);
                                                                  t = q_0(t);
                                                                  ;
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
                                                                        ATerm y_32 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                                        t = q_0(t);
                                                                        y_32 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, y_32);
                                                                        t = q_0(t);
                                                                        ;
                                                                        LocalPopChoice(f_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_16;
                                                                        t = x_11;
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
                                                                ATerm i_33 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, s_11);
                                                                t = q_0(t);
                                                                i_33 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, r_11, i_33);
                                                                t = q_0(t);
                                                                ;
                                                                LocalPopChoice(h_16);
                                                              }
                                                            else
                                                              {
                                                                t = g_16;
                                                                t = x_11;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = w_11;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = v_11;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm i_16 = t;
                                                    int j_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_w_5;
                                                        t = q_0(t);
                                                        ;
                                                        LocalPopChoice(j_16);
                                                      }
                                                    else
                                                      {
                                                        t = i_16;
                                                        t = x_11;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        t_11 = ATgetArgument(t, 0);
                                                        u_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm k_16 = t;
                                                          int l_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                              t = q_0(t);
                                                              z_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_11, z_33);
                                                              t = q_0(t);
                                                              ;
                                                              LocalPopChoice(l_16);
                                                            }
                                                          else
                                                            {
                                                              t = k_16;
                                                              t = x_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            t_11 = ATgetArgument(t, 0);
                                                            u_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm m_16 = t;
                                                              int n_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm j_34 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_11);
                                                                  t = q_0(t);
                                                                  j_34 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, j_34);
                                                                  t = q_0(t);
                                                                  ;
                                                                  LocalPopChoice(n_16);
                                                                }
                                                              else
                                                                {
                                                                  t = m_16;
                                                                  t = x_11;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = x_11;
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
                    w_11 = ATgetArgument(t, 0);
                    v_11 = ATgetArgument(t, 1);
                    t = v_11;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = w_11;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm o_16 = t;
                            int p_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_q_5;
                                t = q_0(t);
                                ;
                                LocalPopChoice(p_16);
                              }
                            else
                              {
                                t = o_16;
                                t = w_11;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = v_11;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    t_11 = ATgetArgument(t, 0);
                                    u_11 = ATgetArgument(t, 1);
                                    t = w_11;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        t_11 = ATgetArgument(t, 0);
                                        t = w_11;
                                      }
                                    else
                                      {
                                        t = w_11;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = w_11;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm q_16 = t;
                            int r_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_q_5;
                                t = q_0(t);
                                ;
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
                                      t = v_11;
                                      if((w_11 != t))
                                        {
                                          _fail(t);
                                        }
                                      ;
                                      LocalPopChoice(t_16);
                                    }
                                  else
                                    {
                                      t = s_16;
                                      t = x_11;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = v_11;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    t_11 = ATgetArgument(t, 0);
                                    u_11 = ATgetArgument(t, 1);
                                    {
                                      ATerm u_16 = t;
                                      int v_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm y_35 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, u_11, v_11);
                                          t = q_0(t);
                                          y_35 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, t_11, y_35);
                                          t = q_0(t);
                                          ;
                                          LocalPopChoice(v_16);
                                        }
                                      else
                                        {
                                          t = u_16;
                                          {
                                            ATerm w_16 = t;
                                            int x_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = v_11;
                                                if((w_11 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                ;
                                                LocalPopChoice(x_16);
                                              }
                                            else
                                              {
                                                t = w_16;
                                                t = x_11;
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
                                        {
                                          ATerm y_16 = t;
                                          int z_16 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = v_11;
                                              if((w_11 != t))
                                                {
                                                  _fail(t);
                                                }
                                              ;
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
                                                    t = t_11;
                                                    t = topdown_1_0(j_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, t_11);
                                                    t = bottomup_1_0(q_0, t);
                                                    ;
                                                    LocalPopChoice(b_17);
                                                  }
                                                else
                                                  {
                                                    t = a_17;
                                                    t = x_11;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm c_17 = t;
                                        int d_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = v_11;
                                            if((w_11 != t))
                                              {
                                                _fail(t);
                                              }
                                            ;
                                            LocalPopChoice(d_17);
                                          }
                                        else
                                          {
                                            t = c_17;
                                            t = x_11;
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
                        w_11 = ATgetArgument(t, 0);
                        v_11 = ATgetArgument(t, 1);
                        t = v_11;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = w_11;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm e_17 = t;
                                int f_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_q_5;
                                    t = q_0(t);
                                    ;
                                    LocalPopChoice(f_17);
                                  }
                                else
                                  {
                                    t = e_17;
                                    t = v_11;
                                  }
                              }
                            else
                              {
                                ATerm g_17 = t;
                                int i_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_q_5;
                                    t = q_0(t);
                                    ;
                                    LocalPopChoice(i_17);
                                  }
                                else
                                  {
                                    t = g_17;
                                    t = x_11;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = w_11;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm j_17 = t;
                                    int k_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_w_5;
                                        t = q_0(t);
                                        ;
                                        LocalPopChoice(k_17);
                                      }
                                    else
                                      {
                                        t = j_17;
                                        t = v_11;
                                      }
                                  }
                                else
                                  {
                                    ATerm l_17 = t;
                                    int m_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_w_5;
                                        t = q_0(t);
                                        ;
                                        LocalPopChoice(m_17);
                                      }
                                    else
                                      {
                                        t = l_17;
                                        t = x_11;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    r_11 = ATgetArgument(t, 0);
                                    s_11 = ATgetArgument(t, 1);
                                    t = w_11;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = v_11;
                                      }
                                    else
                                      {
                                        ATerm n_17 = t;
                                        int o_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm y_36 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, w_11, r_11);
                                            t = conc_0_0(t);
                                            y_36 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, y_36, s_11);
                                            t = bottomup_1_0(q_0, t);
                                            ;
                                            LocalPopChoice(o_17);
                                          }
                                        else
                                          {
                                            t = n_17;
                                            t = x_11;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = w_11;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = v_11;
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
                        ATerm p_17 = t;
                        int q_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm r_17 = ATgetArgument(t, 0);
                                v_11 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(q_17);
                            t = v_11;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm u_17 = t;
                                int v_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_q_5;
                                    t = q_0(t);
                                    ;
                                    LocalPopChoice(v_17);
                                  }
                                else
                                  {
                                    t = u_17;
                                    t = x_11;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm y_17 = t;
                                    int c_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_w_5;
                                        t = q_0(t);
                                        ;
                                        LocalPopChoice(c_18);
                                      }
                                    else
                                      {
                                        t = y_17;
                                        t = x_11;
                                      }
                                  }
                                else
                                  {
                                    t = x_11;
                                  }
                              }
                          }
                        else
                          {
                            t = p_17;
                            if(match_cons(t, sym_All_1))
                              {
                                w_11 = ATgetArgument(t, 0);
                                t = w_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm d_18 = t;
                                    int e_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_q_5;
                                        t = q_0(t);
                                        ;
                                        LocalPopChoice(e_18);
                                      }
                                    else
                                      {
                                        t = d_18;
                                        t = x_11;
                                      }
                                  }
                                else
                                  {
                                    t = x_11;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    w_11 = ATgetArgument(t, 0);
                                    t = w_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm f_18 = t;
                                        int g_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_q_5;
                                            t = q_0(t);
                                            ;
                                            LocalPopChoice(g_18);
                                          }
                                        else
                                          {
                                            t = f_18;
                                            {
                                              ATerm j_18 = t;
                                              int k_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,x_37 = NULL,y_37 = NULL;
                                                  t = x_11;
                                                  t = new_0_0(t);
                                                  l_37 = t;
                                                  t = bottomup_1_0(q_0, t);
                                                  x_37 = t;
                                                  t = (ATerm) ATempty;
                                                  t = q_0(t);
                                                  y_37 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(y_37), x_37);
                                                  t = q_0(t);
                                                  m_37 = t;
                                                  t = l_37;
                                                  t = bottomup_1_0(q_0, t);
                                                  v_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, v_37);
                                                  t = q_0(t);
                                                  u_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, u_37);
                                                  t = q_0(t);
                                                  o_37 = t;
                                                  t = w_11;
                                                  t = bottomup_1_0(q_0, t);
                                                  q_37 = t;
                                                  t = l_37;
                                                  t = bottomup_1_0(q_0, t);
                                                  t_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, t_37);
                                                  t = q_0(t);
                                                  s_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, s_37);
                                                  t = q_0(t);
                                                  r_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_37, r_37);
                                                  t = q_0(t);
                                                  p_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_37, p_37);
                                                  t = q_0(t);
                                                  n_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, m_37, n_37);
                                                  t = q_0(t);
                                                  ;
                                                  LocalPopChoice(k_18);
                                                }
                                              else
                                                {
                                                  t = j_18;
                                                  t = x_11;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm l_18 = t;
                                            int m_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_5;
                                                t = q_0(t);
                                                ;
                                                LocalPopChoice(m_18);
                                              }
                                            else
                                              {
                                                t = l_18;
                                                {
                                                  ATerm n_18 = t;
                                                  int o_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL;
                                                      t = x_11;
                                                      t = new_0_0(t);
                                                      d_38 = t;
                                                      t = bottomup_1_0(q_0, t);
                                                      o_38 = t;
                                                      t = (ATerm) ATempty;
                                                      t = q_0(t);
                                                      p_38 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(p_38), o_38);
                                                      t = q_0(t);
                                                      e_38 = t;
                                                      t = d_38;
                                                      t = bottomup_1_0(q_0, t);
                                                      n_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, n_38);
                                                      t = q_0(t);
                                                      m_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, m_38);
                                                      t = q_0(t);
                                                      g_38 = t;
                                                      t = w_11;
                                                      t = bottomup_1_0(q_0, t);
                                                      i_38 = t;
                                                      t = d_38;
                                                      t = bottomup_1_0(q_0, t);
                                                      l_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, l_38);
                                                      t = q_0(t);
                                                      k_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, k_38);
                                                      t = q_0(t);
                                                      j_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_38, j_38);
                                                      t = q_0(t);
                                                      h_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_38, h_38);
                                                      t = q_0(t);
                                                      f_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, e_38, f_38);
                                                      t = q_0(t);
                                                      ;
                                                      LocalPopChoice(o_18);
                                                    }
                                                  else
                                                    {
                                                      t = n_18;
                                                      t = x_11;
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
                                                t = u_11;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    s_10 = ATgetArgument(t, 0);
                                                    u_10 = ATgetArgument(t, 1);
                                                    t = s_10;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        t_10 = ATgetArgument(t, 0);
                                                        t = t_11;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            p_11 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm p_18 = t;
                                                              int r_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, t_10);
                                                                  t = q_0(t);
                                                                  w_38 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_38, u_10);
                                                                  t = q_0(t);
                                                                  v_38 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_11, v_38);
                                                                  t = q_0(t);
                                                                  u_38 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, u_38);
                                                                  t = q_0(t);
                                                                  ;
                                                                  LocalPopChoice(r_18);
                                                                }
                                                              else
                                                                {
                                                                  t = p_18;
                                                                  {
                                                                    ATerm s_18 = t;
                                                                    int t_18 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL;
                                                                        t = x_11;
                                                                        t = new_0_0(t);
                                                                        y_38 = t;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        j_39 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = q_0(t);
                                                                        k_39 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(k_39), j_39);
                                                                        t = q_0(t);
                                                                        z_38 = t;
                                                                        t = y_38;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        i_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, i_39);
                                                                        t = q_0(t);
                                                                        h_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, h_39);
                                                                        t = q_0(t);
                                                                        b_39 = t;
                                                                        t = w_11;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        d_39 = t;
                                                                        t = y_38;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        g_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, g_39);
                                                                        t = q_0(t);
                                                                        f_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, f_39);
                                                                        t = q_0(t);
                                                                        e_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, d_39, e_39);
                                                                        t = q_0(t);
                                                                        c_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, b_39, c_39);
                                                                        t = q_0(t);
                                                                        a_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, z_38, a_39);
                                                                        t = q_0(t);
                                                                        ;
                                                                        LocalPopChoice(t_18);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = s_18;
                                                                        t = x_11;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm u_18 = t;
                                                            int v_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,a_40 = NULL,b_40 = NULL;
                                                                t = x_11;
                                                                t = new_0_0(t);
                                                                n_39 = t;
                                                                t = bottomup_1_0(q_0, t);
                                                                a_40 = t;
                                                                t = (ATerm) ATempty;
                                                                t = q_0(t);
                                                                b_40 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(b_40), a_40);
                                                                t = q_0(t);
                                                                o_39 = t;
                                                                t = n_39;
                                                                t = bottomup_1_0(q_0, t);
                                                                x_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, x_39);
                                                                t = q_0(t);
                                                                w_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, w_39);
                                                                t = q_0(t);
                                                                q_39 = t;
                                                                t = w_11;
                                                                t = bottomup_1_0(q_0, t);
                                                                s_39 = t;
                                                                t = n_39;
                                                                t = bottomup_1_0(q_0, t);
                                                                v_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, v_39);
                                                                t = q_0(t);
                                                                u_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, u_39);
                                                                t = q_0(t);
                                                                t_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, s_39, t_39);
                                                                t = q_0(t);
                                                                r_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, q_39, r_39);
                                                                t = q_0(t);
                                                                p_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, o_39, p_39);
                                                                t = q_0(t);
                                                                ;
                                                                LocalPopChoice(v_18);
                                                              }
                                                            else
                                                              {
                                                                t = u_18;
                                                                t = x_11;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = t_11;
                                                        {
                                                          ATerm w_18 = t;
                                                          int x_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,r_40 = NULL,s_40 = NULL,u_40 = NULL,v_40 = NULL;
                                                              t = x_11;
                                                              t = new_0_0(t);
                                                              e_40 = t;
                                                              t = bottomup_1_0(q_0, t);
                                                              u_40 = t;
                                                              t = (ATerm) ATempty;
                                                              t = q_0(t);
                                                              v_40 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(v_40), u_40);
                                                              t = q_0(t);
                                                              f_40 = t;
                                                              t = e_40;
                                                              t = bottomup_1_0(q_0, t);
                                                              s_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, s_40);
                                                              t = q_0(t);
                                                              r_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, r_40);
                                                              t = q_0(t);
                                                              i_40 = t;
                                                              t = w_11;
                                                              t = bottomup_1_0(q_0, t);
                                                              k_40 = t;
                                                              t = e_40;
                                                              t = bottomup_1_0(q_0, t);
                                                              n_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, n_40);
                                                              t = q_0(t);
                                                              m_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, m_40);
                                                              t = q_0(t);
                                                              l_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, k_40, l_40);
                                                              t = q_0(t);
                                                              j_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_40, j_40);
                                                              t = q_0(t);
                                                              g_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_40, g_40);
                                                              t = q_0(t);
                                                              ;
                                                              LocalPopChoice(x_18);
                                                            }
                                                          else
                                                            {
                                                              t = w_18;
                                                              t = x_11;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = t_11;
                                                    {
                                                      ATerm z_18 = t;
                                                      int a_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,g_41 = NULL,h_41 = NULL,j_41 = NULL,k_41 = NULL,m_41 = NULL,n_41 = NULL;
                                                          t = x_11;
                                                          t = new_0_0(t);
                                                          y_40 = t;
                                                          t = bottomup_1_0(q_0, t);
                                                          m_41 = t;
                                                          t = (ATerm) ATempty;
                                                          t = q_0(t);
                                                          n_41 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(n_41), m_41);
                                                          t = q_0(t);
                                                          z_40 = t;
                                                          t = y_40;
                                                          t = bottomup_1_0(q_0, t);
                                                          k_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, k_41);
                                                          t = q_0(t);
                                                          j_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, j_41);
                                                          t = q_0(t);
                                                          b_41 = t;
                                                          t = w_11;
                                                          t = bottomup_1_0(q_0, t);
                                                          d_41 = t;
                                                          t = y_40;
                                                          t = bottomup_1_0(q_0, t);
                                                          h_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, h_41);
                                                          t = q_0(t);
                                                          g_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, g_41);
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
                                                          ;
                                                          LocalPopChoice(a_19);
                                                        }
                                                      else
                                                        {
                                                          t = z_18;
                                                          t = x_11;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    t_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm b_19 = t;
                                                      int c_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, t_11);
                                                          t = q_0(t);
                                                          ;
                                                          LocalPopChoice(c_19);
                                                        }
                                                      else
                                                        {
                                                          t = b_19;
                                                          {
                                                            ATerm d_19 = t;
                                                            int e_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,i_42 = NULL,j_42 = NULL;
                                                                t = x_11;
                                                                t = new_0_0(t);
                                                                r_41 = t;
                                                                t = bottomup_1_0(q_0, t);
                                                                i_42 = t;
                                                                t = (ATerm) ATempty;
                                                                t = q_0(t);
                                                                j_42 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(j_42), i_42);
                                                                t = q_0(t);
                                                                s_41 = t;
                                                                t = r_41;
                                                                t = bottomup_1_0(q_0, t);
                                                                c_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, c_42);
                                                                t = q_0(t);
                                                                b_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, b_42);
                                                                t = q_0(t);
                                                                u_41 = t;
                                                                t = w_11;
                                                                t = bottomup_1_0(q_0, t);
                                                                w_41 = t;
                                                                t = r_41;
                                                                t = bottomup_1_0(q_0, t);
                                                                a_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, a_42);
                                                                t = q_0(t);
                                                                z_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, z_41);
                                                                t = q_0(t);
                                                                y_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, w_41, y_41);
                                                                t = q_0(t);
                                                                v_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, u_41, v_41);
                                                                t = q_0(t);
                                                                t_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, s_41, t_41);
                                                                t = q_0(t);
                                                                ;
                                                                LocalPopChoice(e_19);
                                                              }
                                                            else
                                                              {
                                                                t = d_19;
                                                                t = x_11;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm f_19 = t;
                                                    int g_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL;
                                                        t = x_11;
                                                        t = new_0_0(t);
                                                        m_42 = t;
                                                        t = bottomup_1_0(q_0, t);
                                                        z_42 = t;
                                                        t = (ATerm) ATempty;
                                                        t = q_0(t);
                                                        a_43 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(a_43), z_42);
                                                        t = q_0(t);
                                                        n_42 = t;
                                                        t = m_42;
                                                        t = bottomup_1_0(q_0, t);
                                                        y_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, y_42);
                                                        t = q_0(t);
                                                        v_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, v_42);
                                                        t = q_0(t);
                                                        p_42 = t;
                                                        t = w_11;
                                                        t = bottomup_1_0(q_0, t);
                                                        r_42 = t;
                                                        t = m_42;
                                                        t = bottomup_1_0(q_0, t);
                                                        u_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, u_42);
                                                        t = q_0(t);
                                                        t_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, t_42);
                                                        t = q_0(t);
                                                        s_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, r_42, s_42);
                                                        t = q_0(t);
                                                        q_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, p_42, q_42);
                                                        t = q_0(t);
                                                        o_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, n_42, o_42);
                                                        t = q_0(t);
                                                        ;
                                                        LocalPopChoice(g_19);
                                                      }
                                                    else
                                                      {
                                                        t = f_19;
                                                        t = x_11;
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
                                        w_11 = ATgetArgument(t, 0);
                                        t = w_11;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm h_19 = t;
                                            int i_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_5;
                                                t = q_0(t);
                                                ;
                                                LocalPopChoice(i_19);
                                              }
                                            else
                                              {
                                                t = h_19;
                                                t = x_11;
                                              }
                                          }
                                        else
                                          {
                                            t = x_11;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            w_11 = ATgetArgument(t, 0);
                                            t = w_11;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm k_19 = t;
                                                int l_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_w_5;
                                                    t = q_0(t);
                                                    ;
                                                    LocalPopChoice(l_19);
                                                  }
                                                else
                                                  {
                                                    t = k_19;
                                                    t = x_11;
                                                  }
                                              }
                                            else
                                              {
                                                t = x_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                w_11 = ATgetArgument(t, 0);
                                                t = w_11;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm m_19 = t;
                                                    int n_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_w_5;
                                                        t = q_0(t);
                                                        ;
                                                        LocalPopChoice(n_19);
                                                      }
                                                    else
                                                      {
                                                        t = m_19;
                                                        t = x_11;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = x_11;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm o_19 = t;
                                                int q_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm r_19 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(q_19);
                                                    t = v_11;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm s_19 = t;
                                                        int t_19 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_w_5;
                                                            t = q_0(t);
                                                            ;
                                                            LocalPopChoice(t_19);
                                                          }
                                                        else
                                                          {
                                                            t = s_19;
                                                            t = x_11;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = x_11;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = o_19;
                                                    {
                                                      ATerm u_19 = t;
                                                      int v_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm w_19 = ATgetArgument(t, 0);
                                                              v_11 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(v_19);
                                                          {
                                                            ATerm x_19 = t;
                                                            int z_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = v_11;
                                                                t = fetch_1_0(k_1, t);
                                                                t = term_w_5;
                                                                t = bottomup_1_0(q_0, t);
                                                                ;
                                                                LocalPopChoice(z_19);
                                                              }
                                                            else
                                                              {
                                                                t = x_19;
                                                                t = x_11;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = u_19;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              w_11 = ATgetArgument(t, 0);
                                                              v_11 = ATgetArgument(t, 1);
                                                              t = v_11;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = w_11;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = v_11;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          t_11 = ATgetArgument(t, 0);
                                                                          u_11 = ATgetArgument(t, 1);
                                                                          t = w_11;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = w_11;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = w_11;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = v_11;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          t_11 = ATgetArgument(t, 0);
                                                                          u_11 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm a_20 = t;
                                                                            int b_20 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm g_44 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, u_11, v_11);
                                                                                t = q_0(t);
                                                                                g_44 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, t_11, g_44);
                                                                                t = q_0(t);
                                                                                ;
                                                                                LocalPopChoice(b_20);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = a_20;
                                                                                {
                                                                                  ATerm d_20 = t;
                                                                                  int e_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = v_11;
                                                                                      if((w_11 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      ;
                                                                                      LocalPopChoice(e_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = d_20;
                                                                                      t = x_11;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm f_20 = t;
                                                                          int h_20 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = v_11;
                                                                              if((w_11 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              ;
                                                                              LocalPopChoice(h_20);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_20;
                                                                              t = x_11;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  w_11 = ATgetArgument(t, 0);
                                                                  v_11 = ATgetArgument(t, 1);
                                                                  r_10 = ATgetArgument(t, 2);
                                                                  t = r_10;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm i_20 = t;
                                                                      int j_20 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, v_11);
                                                                          t = q_0(t);
                                                                          ;
                                                                          LocalPopChoice(j_20);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = i_20;
                                                                          t = x_11;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = x_11;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      w_11 = ATgetArgument(t, 0);
                                                                      v_11 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm k_20 = t;
                                                                        int m_20 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, w_11, v_11);
                                                                            t = q_0(t);
                                                                            ;
                                                                            LocalPopChoice(m_20);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = k_20;
                                                                            t = x_11;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          w_11 = ATgetArgument(t, 0);
                                                                          t = w_11;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              t_11 = ATgetFirst((ATermList) t);
                                                                              u_11 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm n_20 = t;
                                                                                int o_20 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm v_44 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, u_11);
                                                                                    t = q_0(t);
                                                                                    v_44 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, t_11, v_44);
                                                                                    t = q_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(o_20);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = n_20;
                                                                                    t = x_11;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm p_20 = t;
                                                                                  int q_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_w_5;
                                                                                      t = q_0(t);
                                                                                      ;
                                                                                      LocalPopChoice(q_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = p_20;
                                                                                      t = x_11;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = x_11;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              w_11 = ATgetArgument(t, 0);
                                                                              t = w_11;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  t_11 = ATgetFirst((ATermList) t);
                                                                                  u_11 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm r_20 = t;
                                                                                    int s_20 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm b_45 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, u_11);
                                                                                        t = q_0(t);
                                                                                        b_45 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, t_11, b_45);
                                                                                        t = q_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(s_20);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = r_20;
                                                                                        t = x_11;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm t_20 = t;
                                                                                      int v_20 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_w_5;
                                                                                          t = q_0(t);
                                                                                          ;
                                                                                          LocalPopChoice(v_20);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = t_20;
                                                                                          t = x_11;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = x_11;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  w_11 = ATgetArgument(t, 0);
                                                                                  t = w_11;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      t_11 = ATgetFirst((ATermList) t);
                                                                                      u_11 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm w_20 = t;
                                                                                        int x_20 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm h_45 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, u_11);
                                                                                            t = q_0(t);
                                                                                            h_45 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, t_11, h_45);
                                                                                            t = q_0(t);
                                                                                            ;
                                                                                            LocalPopChoice(x_20);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = w_20;
                                                                                            t = x_11;
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
                                                                                              t = term_q_5;
                                                                                              t = q_0(t);
                                                                                              ;
                                                                                              LocalPopChoice(a_21);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = z_20;
                                                                                              t = x_11;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = x_11;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      w_11 = ATgetArgument(t, 0);
                                                                                      v_11 = ATgetArgument(t, 1);
                                                                                      r_10 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm b_21 = t;
                                                                                        int e_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL;
                                                                                            t = term_f_21;
                                                                                            t = bottomup_1_0(q_0, t);
                                                                                            p_45 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = q_0(t);
                                                                                            s_45 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(s_45), r_10);
                                                                                            t = q_0(t);
                                                                                            r_45 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(r_45), w_11);
                                                                                            t = q_0(t);
                                                                                            q_45 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, p_45, q_45);
                                                                                            t = q_0(t);
                                                                                            o_45 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, v_11, o_45);
                                                                                            t = q_0(t);
                                                                                            ;
                                                                                            LocalPopChoice(e_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = b_21;
                                                                                            t = x_11;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          w_11 = ATgetArgument(t, 0);
                                                                                          v_11 = ATgetArgument(t, 1);
                                                                                          r_10 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm g_21 = t;
                                                                                            int h_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, v_11);
                                                                                                t = q_0(t);
                                                                                                b_46 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, r_10);
                                                                                                t = q_0(t);
                                                                                                e_46 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = q_0(t);
                                                                                                f_46 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(f_46), e_46);
                                                                                                t = q_0(t);
                                                                                                d_46 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(d_46), w_11);
                                                                                                t = q_0(t);
                                                                                                c_46 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(c_46), b_46);
                                                                                                t = q_0(t);
                                                                                                a_46 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, a_46);
                                                                                                t = q_0(t);
                                                                                                ;
                                                                                                LocalPopChoice(h_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = g_21;
                                                                                                t = x_11;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              w_11 = ATgetArgument(t, 0);
                                                                                              v_11 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm i_21 = t;
                                                                                                int j_21 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm j_46 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, v_11);
                                                                                                    t = q_0(t);
                                                                                                    j_46 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, j_46);
                                                                                                    t = q_0(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(j_21);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = i_21;
                                                                                                    t = x_11;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  w_11 = ATgetArgument(t, 0);
                                                                                                  v_11 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm k_21 = t;
                                                                                                    int l_21 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm n_46 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, w_11);
                                                                                                        t = q_0(t);
                                                                                                        n_46 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, n_46, v_11);
                                                                                                        t = q_0(t);
                                                                                                        ;
                                                                                                        LocalPopChoice(l_21);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = k_21;
                                                                                                        t = x_11;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      w_11 = ATgetArgument(t, 0);
                                                                                                      v_11 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm m_21 = t;
                                                                                                        int n_21 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm r_46 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, v_11);
                                                                                                            t = q_0(t);
                                                                                                            r_46 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, r_46, w_11);
                                                                                                            t = q_0(t);
                                                                                                            ;
                                                                                                            LocalPopChoice(n_21);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = m_21;
                                                                                                            t = x_11;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          w_11 = ATgetArgument(t, 0);
                                                                                                          v_11 = ATgetArgument(t, 1);
                                                                                                          t = v_11;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              r_11 = ATgetArgument(t, 0);
                                                                                                              s_11 = ATgetArgument(t, 1);
                                                                                                              t = w_11;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = v_11;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm o_21 = t;
                                                                                                                  int p_21 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm c_47 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, w_11, r_11);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      c_47 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, c_47, s_11);
                                                                                                                      t = bottomup_1_0(q_0, t);
                                                                                                                      ;
                                                                                                                      LocalPopChoice(p_21);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = o_21;
                                                                                                                      t = x_11;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  r_11 = ATgetArgument(t, 0);
                                                                                                                  s_11 = ATgetArgument(t, 1);
                                                                                                                  n_11 = ATgetArgument(t, 2);
                                                                                                                  t = n_11;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = s_11;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = r_11;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              q_11 = ATgetArgument(t, 0);
                                                                                                                              t = w_11;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = v_11;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      t_11 = ATgetFirst((ATermList) t);
                                                                                                                                      u_11 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = u_11;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = t_11;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              p_11 = ATgetArgument(t, 0);
                                                                                                                                              g_11 = ATgetArgument(t, 1);
                                                                                                                                              v_10 = ATgetArgument(t, 2);
                                                                                                                                              w_10 = ATgetArgument(t, 3);
                                                                                                                                              t = v_10;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = g_11;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm q_21 = t;
                                                                                                                                                      int s_21 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = q_11;
                                                                                                                                                          if((p_11 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = w_10;
                                                                                                                                                          {
                                                                                                                                                            ATerm t_21 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                ATerm m_1 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm u_21 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(u_21, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((p_11 != ATgetArgument(u_21, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(u_21, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm v_21 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(v_21) != AT_LIST) || !(ATisEmpty(v_21))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm w_21 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(w_21) != AT_LIST) || !(ATisEmpty(w_21))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  return(t);
                                                                                                                                                                }
                                                                                                                                                                t = oncetd_1_0(m_1, t);
                                                                                                                                                                PopChoice();
                                                                                                                                                                _fail(t);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                t = t_21;
                                                                                                                                                              }
                                                                                                                                                            t = w_10;
                                                                                                                                                            t = bottomup_1_0(q_0, t);
                                                                                                                                                          }
                                                                                                                                                          ;
                                                                                                                                                          LocalPopChoice(s_21);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = q_21;
                                                                                                                                                          t = x_11;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = x_11;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = x_11;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = x_11;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = x_11;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = x_11;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = w_11;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = v_11;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = x_11;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = w_11;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = v_11;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = x_11;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = w_11;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = v_11;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = x_11;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = w_11;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = v_11;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = x_11;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              w_11 = ATgetArgument(t, 0);
                                                                                                              v_11 = ATgetArgument(t, 1);
                                                                                                              t = w_11;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = v_11;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = x_11;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = x_11;
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
ATerm map_1_0 (ATerm y_106 (ATerm), ATerm t)
{
  ATerm x_48 (ATerm t)
  {
    ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL;
    u_48 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_48;
      }
    else
      {
        ATerm e_3 = NULL,h_3 = NULL,i_3 = NULL,v_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_48 = ATgetFirst((ATermList) t);
            w_48 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_48);
        e_3 = t;
        t = v_48;
        t = y_106(t);
        h_3 = t;
        t = w_48;
        t = x_48(t);
        i_3 = t;
        t = (ATerm) ATinsert(CheckATermList(i_3), h_3);
        v_0 = t;
        t = SSLsetAnnotations(v_0, e_3);
      }
    return(t);
  }
  t = x_48(t);
  return(t);
}
ATerm x_10 (ATerm y_48, ATerm z_48, ATerm t)
{
  ATerm f_49 = NULL;
  t = SSL_fputc(y_48, z_48);
  f_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_49);
  return(t);
}
ATerm y_10 (ATerm m_52, ATerm n_52, ATerm t)
{
  ATerm g_49 = NULL;
  t = SSL_write_term_to_stream_text(m_52, n_52);
  g_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_49);
  return(t);
}
ATerm a_11 (ATerm z_112 (ATerm), ATerm h_474, ATerm q_52, ATerm t)
{
  ATerm h_49 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_474, term_x_21);
  t = d_11(t);
  h_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_49, q_52);
  t = z_112(t);
  t = fclose_0_0(t);
  t = q_52;
  return(t);
}
ATerm z_10 (ATerm i_52, ATerm j_52, ATerm t)
{
  ATerm i_49 = NULL;
  t = SSL_write_term_to_stream_baf(i_52, j_52);
  i_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_49);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_21 = ATgetArgument(t, 0);
      if(match_cons(y_21, sym_Stream_1))
        {
          l_49 = ATgetArgument(y_21, 0);
        }
      else
        _fail(t);
      m_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(l_49, m_49, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_21 = ATgetArgument(t, 0);
      if(match_cons(z_21, sym_Stream_1))
        {
          q_49 = ATgetArgument(z_21, 0);
        }
      else
        _fail(t);
      r_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10(q_49, r_49, t);
  n_49 = t;
  t = term_a_22;
  o_49 = t;
  t = n_49;
  if(match_cons(t, sym_Stream_1))
    {
      p_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_22, n_49);
  t = x_10(o_49, p_49, t);
  return(t);
}
ATerm output_1_0 (ATerm i_117 (ATerm), ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL;
  t = i_117(t);
  k_49 = t;
  {
    ATerm b_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_22;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(d_22);
      }
    else
      {
        t = b_22;
        t = term_f_22;
      }
    j_49 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_49, k_49);
    {
      ATerm g_22 = t;
      int h_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_i_22;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, j_49, k_49);
          LocalPopChoice(h_22);
          if(match_cons(t, sym__2))
            {
              ATerm j_22 = ATgetArgument(t, 0);
              ATerm k_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_11(n_1, j_49, k_49, t);
        }
      else
        {
          t = g_22;
          if(match_cons(t, sym__2))
            {
              ATerm l_22 = ATgetArgument(t, 0);
              ATerm n_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_11(o_1, j_49, k_49, t);
        }
    }
  }
  return(t);
}
ATerm g_50 (ATerm z_49, ATerm t)
{
  t = SSL_fclose(z_49);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL;
  e_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_50 = ATgetArgument(t, 0);
      {
        ATerm o_22 = t;
        int p_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_50);
            ;
            LocalPopChoice(p_22);
          }
        else
          {
            t = o_22;
            t = g_50(e_50, t);
          }
      }
    }
  else
    {
      t = g_50(e_50, t);
    }
  return(t);
}
ATerm b_11 (ATerm o_52, ATerm t)
{
  t = SSL_read_term_from_stream(o_52);
  return(t);
}
ATerm c_11 (ATerm a_49, ATerm b_49, ATerm t)
{
  ATerm h_50 = NULL;
  t = SSL_fopen(a_49, b_49);
  h_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_50);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_50 = NULL;
  t = SSL_stdin_stream();
  i_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_50);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_50 = NULL;
  t = SSL_stdout_stream();
  j_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_50);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_50 = NULL;
  t = SSL_stderr_stream();
  k_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_50);
  return(t);
}
ATerm s_51 (ATerm q_50, ATerm t)
{
  ATerm r_50 = NULL;
  t = SSL_explode_term(q_50);
  if(match_cons(t, sym__2))
    {
      ATerm q_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_22 = ATgetArgument(t, 1);
        if(((ATgetType(s_22) == AT_LIST) && !(ATisEmpty(s_22))))
          {
            r_50 = ATgetFirst((ATermList) s_22);
            {
              ATerm t_22 = (ATerm) ATgetNext((ATermList) s_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_50;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_50;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_50;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_50;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm t_51 (ATerm u_50, ATerm v_50, ATerm w_50, ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL,c_51 = NULL,x_0 = NULL;
  t = SSLgetAnnotations(w_50);
  z_50 = t;
  t = u_50;
  if(match_cons(t, sym_Path_1))
    {
      c_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_51, v_50);
  x_0 = t;
  t = SSLsetAnnotations(x_0, z_50);
  if(match_cons(t, sym__2))
    {
      x_50 = ATgetArgument(t, 0);
      y_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_11(x_50, y_50, t);
  return(t);
}
ATerm u_51 (ATerm e_51, ATerm f_51, ATerm g_51, ATerm t)
{
  ATerm h_51 = NULL,j_51 = NULL,k_51 = NULL,n_51 = NULL,a_1 = NULL;
  t = SSLgetAnnotations(g_51);
  k_51 = t;
  t = SSL_is_string(e_51);
  n_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_51, f_51);
  a_1 = t;
  t = SSLsetAnnotations(a_1, k_51);
  if(match_cons(t, sym__2))
    {
      h_51 = ATgetArgument(t, 0);
      j_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_11(h_51, j_51, t);
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
  p_51 = t;
  if(match_cons(t, sym__2))
    {
      q_51 = ATgetArgument(t, 0);
      r_51 = ATgetArgument(t, 1);
      {
        ATerm u_22 = t;
        int v_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_51(p_51, t);
            ;
            LocalPopChoice(v_22);
          }
        else
          {
            t = u_22;
            {
              ATerm w_22 = t;
              int x_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_51(q_51, r_51, p_51, t);
                  ;
                  LocalPopChoice(x_22);
                }
              else
                {
                  t = w_22;
                  t = u_51(q_51, r_51, p_51, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_51(p_51, t);
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_y_22;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL;
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_51 = NULL;
      y_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_51, term_b_23);
      t = d_11(t);
      ;
      LocalPopChoice(a_23);
    }
  else
    {
      t = z_22;
      t = debug_1_0(p_1, t);
      _fail(t);
    }
  w_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(x_51, t);
  v_51 = t;
  t = w_51;
  t = fclose_0_0(t);
  t = v_51;
  return(t);
}
ATerm input_1_0 (ATerm j_117 (ATerm), ATerm t)
{
  ATerm d_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_23);
    }
  else
    {
      t = d_23;
      t = term_g_23;
    }
  t = ReadFromFile_0_0(t);
  t = j_117(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL;
  a_52 = t;
  t = term_h_23;
  t = whoami_0_0(t);
  b_52 = t;
  t = term_j_23;
  d_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_23), b_52), term_k_23);
  e_52 = t;
  t = SSL_printnl(d_52, e_52);
  t = term_m_23;
  c_52 = t;
  t = SSL_exit(c_52);
  t = a_52;
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm g_52 = NULL;
  g_52 = t;
  if(match_string(t, "-k"))
    {
      t = g_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_52;
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm h_52 = NULL,k_52 = NULL,l_52 = NULL;
  h_52 = t;
  t = SSL_string_to_int(h_52);
  k_52 = t;
  t = term_o_23;
  l_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_23, k_52);
  t = l_11(l_52, k_52, t);
  t = h_52;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_p_23;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_1, s_1, v_1, t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm s_52 = NULL;
  s_52 = t;
  if(match_string(t, "-S"))
    {
      t = s_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_52;
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL;
  t = term_q_23;
  t_52 = t;
  t = term_r_23;
  u_52 = t;
  t = term_s_23;
  t = l_11(t_52, u_52, t);
  t = term_t_23;
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_u_23;
  return(t);
}
ATerm c_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL;
  v_52 = t;
  t = SSL_string_to_int(v_52);
  w_52 = t;
  t = term_q_23;
  x_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_23, w_52);
  t = l_11(x_52, w_52, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_52);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_v_23;
  return(t);
}
ATerm p_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL;
  t = term_x_23;
  z_52 = t;
  t = term_h_23;
  a_53 = t;
  t = term_y_23;
  t = l_11(z_52, a_53, t);
  t = term_z_23;
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_a_24;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_1, a_2, b_2, t);
      ;
      LocalPopChoice(d_24);
    }
  else
    {
      t = c_24;
      {
        ATerm e_24 = t;
        int f_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_2, f_2, n_2, t);
            ;
            LocalPopChoice(f_24);
          }
        else
          {
            t = e_24;
            t = Option_3_0(p_2, q_2, r_2, t);
          }
      }
    }
  return(t);
}
ATerm l_11 (ATerm p_53, ATerm q_53, ATerm t)
{
  ATerm c_53 = NULL;
  t = term_g_24;
  c_53 = t;
  t = SSL_table_put(c_53, p_53, q_53);
  t = (ATerm) ATmakeAppl(sym__3, term_g_24, p_53, q_53);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL;
      t = term_h_23;
      t = e_0(t);
      i_53 = t;
      t = term_h_24;
      j_53 = t;
      t = term_i_24;
      k_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_24, term_i_24, i_53);
      t = j_11(j_53, k_53, i_53, t);
      _fail(t);
    }
  else
    {
      ATerm n_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_53 = ATgetFirst((ATermList) t);
          h_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_53;
      t = c_0(t);
      t = term_h_23;
      t = d_0(t);
      n_53 = t;
      t = (ATerm) ATinsert(CheckATermList(h_53), n_53);
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm r_53 = NULL;
  r_53 = t;
  if(match_string(t, "-o"))
    {
      t = r_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_53;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm s_53 = NULL,t_53 = NULL;
  s_53 = t;
  t = term_e_22;
  t_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_22, s_53);
  t = l_11(t_53, s_53, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_53);
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_j_24;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_2, t_2, u_2, t);
  return(t);
}
ATerm j_11 (ATerm n_58, ATerm o_58, ATerm m_58, ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL;
  v_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_58, o_58);
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_24 = ATgetArgument(t, 0);
            ATerm n_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_58, o_58);
        t = i_11(n_58, o_58, t);
        ;
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        t = (ATerm) ATempty;
      }
    w_53 = t;
    t = (ATerm) ATinsert(CheckATermList(w_53), m_58);
    x_53 = t;
    t = SSL_table_put(n_58, o_58, x_53);
    t = v_53;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL;
      t = term_h_23;
      t = k_0(t);
      n_54 = t;
      t = term_h_24;
      o_54 = t;
      t = term_i_24;
      p_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_24, term_i_24, n_54);
      t = j_11(o_54, p_54, n_54, t);
      _fail(t);
    }
  else
    {
      ATerm t_54 = NULL;
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
      t = i_0(t);
      t = l_54;
      t = j_0(t);
      t_54 = t;
      t = (ATerm) ATinsert(CheckATermList(m_54), t_54);
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm v_54 = NULL;
  v_54 = t;
  if(match_string(t, "-i"))
    {
      t = v_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_54;
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm w_54 = NULL,x_54 = NULL;
  w_54 = t;
  t = term_f_23;
  x_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_23, w_54);
  t = l_11(x_54, w_54, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_54);
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_o_24;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_2, w_2, x_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_23;
  t = whoami_0_0(t);
  y_54 = t;
  t = term_j_23;
  a_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_24), y_54);
  b_55 = t;
  t = SSL_printnl(a_55, b_55);
  t = term_m_23;
  z_54 = t;
  t = SSL_exit(z_54);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_q_24;
  t = get_config_0_0(t);
  return(t);
}
ATerm e_11 (ATerm y_45, ATerm z_45, ATerm t)
{
  ATerm s_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_45, z_45);
      ;
      LocalPopChoice(t_24);
    }
  else
    {
      t = s_24;
      t = SSL_addr(y_45, z_45);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL;
  d_55 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_55;
      t = o_105(t);
    }
  else
    {
      ATerm i_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_55 = ATgetFirst((ATermList) t);
          f_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_55;
      t = foldr_2_0(o_105, p_105, t);
      i_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_55, i_55);
      t = p_105(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_r_23;
  return(t);
}
ATerm z_2 (ATerm t)
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
  ATerm l_55 = NULL,t_3 = NULL,u_3 = NULL;
  t = times_0_0(t);
  u_3 = t;
  t = SSL_explode_term(u_3);
  if(match_cons(t, sym__2))
    {
      ATerm u_24 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_3;
  t = foldr_2_0(y_2, z_2, t);
  l_55 = t;
  t = SSL_TicksToSeconds(l_55);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL;
  w_55 = t;
  if(match_cons(t, sym__2))
    {
      x_55 = ATgetArgument(t, 0);
      y_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_55;
        if((x_55 != t))
          {
            _fail(t);
          }
        t = w_55;
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        t = (ATerm) ATmakeAppl(sym__2, x_55, y_55);
        {
          ATerm x_24 = t;
          int y_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_55, y_55);
              ;
              LocalPopChoice(y_24);
            }
          else
            {
              t = x_24;
              t = SSL_gtr(x_55, y_55);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_55, y_55);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_114 (ATerm), ATerm t)
{
  ATerm c_56 = NULL;
  c_56 = t;
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_56 = NULL;
        t = term_q_23;
        t = get_config_0_0(t);
        e_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_56, term_m_23);
        t = geq_0_0(t);
        t = c_56;
        t = j_114(t);
        ;
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        t = c_56;
      }
  }
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL,j_56 = NULL,k_56 = NULL;
  t = run_time_0_0(t);
  g_56 = t;
  t = term_h_23;
  t = whoami_0_0(t);
  h_56 = t;
  t = term_j_23;
  j_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_25), g_56), term_e_25), h_56);
  k_56 = t;
  t = SSL_printnl(j_56, k_56);
  t = (ATerm) ATmakeAppl(sym__2, term_j_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_25), g_56), term_e_25), h_56));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_23;
  l_56 = t;
  t = SSL_exit(l_56);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm t_56 = NULL,u_56 = NULL;
  u_56 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_56;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_56 = ATgetArgument(t, 0);
          {
            ATerm k_4 = NULL,w_3 = NULL;
            t = SSLgetAnnotations(u_56);
            k_4 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_56);
            w_3 = t;
            t = SSLsetAnnotations(w_3, k_4);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_56;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_116 (ATerm), ATerm t)
{
  ATerm g_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_25);
    }
  else
    {
      t = g_25;
      t = fetch_1_0(b_3, t);
    }
  t = z_116(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_56 = ATgetFirst((ATermList) t);
      y_56 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_57 = NULL,d_57 = NULL;
        ATerm c_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(c_57)), not_null(d_57));
          return(t);
        }
        t = y_56;
        t = h_0(t);
        if(((c_57 != NULL) && (c_57 != t)))
          _fail(t);
        else
          c_57 = t;
        t = x_56;
        t = g_0(t);
        if(((d_57 != NULL) && (d_57 != t)))
          _fail(t);
        else
          d_57 = t;
        t = y_56;
        t = reverse_acc_2_0(g_0, c_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_23;
      t = h_0(t);
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL,t_6 = NULL;
  j_57 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_57);
  h_57 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_57);
  t_6 = t;
  t = SSLsetAnnotations(t_6, h_57);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm l_57 = NULL;
  l_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_57), term_l_25);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL;
  ATerm n_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_25);
    }
  else
    {
      t = n_25;
      t = fetch_1_0(d_3, t);
    }
  t = term_q_25;
  t = echo_0_0(t);
  t = term_h_24;
  f_57 = t;
  t = term_i_24;
  g_57 = t;
  t = term_r_25;
  t = i_11(f_57, g_57, t);
  t = reverse_acc_2_0(_id, f_3, t);
  t = map_1_0(g_3, t);
  return(t);
}
ATerm fetch_1_0 (ATerm i_107 (ATerm), ATerm t)
{
  ATerm r_58 (ATerm t)
  {
    ATerm l_58 = NULL,p_58 = NULL,q_58 = NULL;
    l_58 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_58 = ATgetFirst((ATermList) t);
        q_58 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_25 = t;
      int v_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_4 = NULL,v_4 = NULL,v_6 = NULL;
          t = SSLgetAnnotations(l_58);
          s_4 = t;
          t = p_58;
          t = i_107(t);
          v_4 = t;
          t = (ATerm) ATinsert(CheckATermList(q_58), v_4);
          v_6 = t;
          t = SSLsetAnnotations(v_6, s_4);
          ;
          LocalPopChoice(v_25);
        }
      else
        {
          t = u_25;
          {
            ATerm d_5 = NULL,g_5 = NULL,w_6 = NULL;
            t = SSLgetAnnotations(l_58);
            d_5 = t;
            t = q_58;
            t = r_58(t);
            g_5 = t;
            t = (ATerm) ATinsert(CheckATermList(g_5), p_58);
            w_6 = t;
            t = SSLsetAnnotations(w_6, d_5);
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
    ATerm w_25 = t;
    int x_25 = stack_ptr;
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
                ATerm y_25 = ATgetFirst((ATermList) t);
                ATerm z_25 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_58;
          }
        ;
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        t = (ATerm) ATinsert(ATempty, v_58);
      }
    w_58 = t;
    t = term_f_22;
    x_58 = t;
    t = SSL_printnl(x_58, w_58);
    t = v_58;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_q_24;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm h_11 (ATerm y_39, ATerm z_39, ATerm t)
{
  t = SSL_strcat(y_39, z_39);
  return(t);
}
ATerm debug_1_0 (ATerm x_112 (ATerm), ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL;
  b_59 = t;
  t = x_112(t);
  c_59 = t;
  t = term_j_23;
  d_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_59), c_59);
  e_59 = t;
  t = SSL_printnl(d_59, e_59);
  t = b_59;
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(b_26);
    }
  else
    {
      t = a_26;
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm d_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_59 = NULL;
      l_59 = t;
      t = SSL_is_string(l_59);
      ;
      LocalPopChoice(f_26);
    }
  else
    {
      t = d_26;
      {
        ATerm g_26 = t;
        int h_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(j_3, t);
            ;
            LocalPopChoice(h_26);
          }
        else
          {
            t = g_26;
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
                        ATerm i_26 = t;
                        int j_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(j_26);
                          }
                        else
                          {
                            t = i_26;
                            t = debug_1_0(k_3, t);
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
                      t = h_11(x_59, y_59, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm i_11 (ATerm e_60, ATerm f_60, ATerm t)
{
  t = SSL_table_get(e_60, f_60);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL;
  c_60 = t;
  t = term_g_24;
  d_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_24, c_60);
  t = i_11(d_60, c_60, t);
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_60 = NULL,h_60 = NULL;
        t = eval_config_0_0(t);
        g_60 = t;
        t = term_g_24;
        h_60 = t;
        t = SSL_table_put(h_60, c_60, g_60);
        t = g_60;
        ;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
      }
  }
  return(t);
}
ATerm l_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm k_60 = NULL,l_60 = NULL;
  t = term_m_26;
  k_60 = t;
  t = term_h_23;
  l_60 = t;
  t = term_o_26;
  t = l_11(k_60, l_60, t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm o_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL;
  t = term_m_26;
  o_60 = t;
  t = term_h_23;
  p_60 = t;
  t = term_o_26;
  t = l_11(o_60, p_60, t);
  t = term_q_26;
  m_60 = t;
  t = term_h_23;
  n_60 = t;
  t = term_r_26;
  t = l_11(m_60, n_60, t);
  t = term_s_26;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_t_26;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_3, m_3, n_3, t);
      ;
      LocalPopChoice(v_26);
    }
  else
    {
      t = u_26;
      t = Option_3_0(o_3, p_3, q_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,z_6 = NULL;
  v_60 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_60 = ATgetFirst((ATermList) t);
      s_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_60);
  q_60 = t;
  t = r_60;
  t = q_75(t);
  t_60 = t;
  t = s_60;
  t = r_75(t);
  u_60 = t;
  t = (ATerm) ATinsert(CheckATermList(u_60), t_60);
  z_6 = t;
  t = SSLsetAnnotations(z_6, q_60);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_119 (ATerm), ATerm t)
{
  ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,f_61 = NULL,g_61 = NULL,b_7 = NULL;
  a_61 = t;
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_26;
        t = c_119(t);
        ;
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
      }
    t = a_61;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_61 = ATgetFirst((ATermList) t);
        d_61 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_61);
    b_61 = t;
    t = term_q_24;
    g_61 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_q_24, c_61);
    t = l_11(g_61, c_61, t);
    t = d_61;
    {
      ATerm q_61 (ATerm t)
      {
        ATerm a_27 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_27 = t;
            int d_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_61 = NULL;
                j_61 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = j_61;
                ;
                LocalPopChoice(d_27);
              }
            else
              {
                t = c_27;
                t = c_119(t);
                t = Cons_2_0(_id, q_61, t);
              }
            ;
            LocalPopChoice(b_27);
          }
        else
          {
            t = a_27;
            {
              ATerm m_61 = NULL,n_61 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_61 = ATgetFirst((ATermList) t);
                  n_61 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(n_61), (ATerm) ATmakeAppl(sym_Undefined_1, m_61));
            }
          }
        return(t);
      }
      t = q_61(t);
      f_61 = t;
      t = (ATerm) ATinsert(CheckATermList(f_61), (ATerm) ATmakeAppl(sym_Program_1, c_61));
      b_7 = t;
      t = SSLsetAnnotations(b_7, b_61);
    }
  }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm c_62 = NULL;
  c_62 = t;
  if(match_string(t, "--help"))
    {
      t = c_62;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_62;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_62;
        }
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm d_62 = NULL,e_62 = NULL;
  t = term_k_25;
  d_62 = t;
  t = term_h_23;
  e_62 = t;
  t = term_e_27;
  t = l_11(d_62, e_62, t);
  t = term_f_27;
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm a_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_119 (ATerm), ATerm t)
{
  ATerm v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL;
  x_61 = t;
  t = term_h_24;
  z_61 = t;
  t = term_i_24;
  a_62 = t;
  t = (ATerm) ATempty;
  b_62 = t;
  t = SSL_table_put(z_61, a_62, b_62);
  t = x_61;
  {
    ATerm r_3 (ATerm t)
    {
      ATerm h_27 = t;
      int i_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_119(t);
          ;
          LocalPopChoice(i_27);
        }
      else
        {
          t = h_27;
          {
            ATerm j_27 = t;
            int k_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_3, v_3, z_3, t);
                ;
                LocalPopChoice(k_27);
              }
            else
              {
                t = j_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_3, t);
    {
      ATerm l_27 = t;
      int m_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_62 = NULL;
          l_62 = t;
          {
            ATerm o_27 = t;
            int p_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_5 = NULL;
                t = l_62;
                {
                  ATerm q_27 = t;
                  int r_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_k_25;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(r_27);
                    }
                  else
                    {
                      t = q_27;
                      t = fetch_1_0(a_4, t);
                    }
                  t = l_62;
                  t = default_system_usage_0_0(t);
                  t = term_r_23;
                  v_5 = t;
                  t = SSL_exit(v_5);
                }
                ;
                LocalPopChoice(p_27);
              }
            else
              {
                t = o_27;
                {
                  ATerm z_5 = NULL;
                  t = term_m_26;
                  t = get_config_0_0(t);
                  t = l_62;
                  t = default_system_about_0_0(t);
                  t = term_r_23;
                  z_5 = t;
                  t = SSL_exit(z_5);
                }
              }
          }
          ;
          LocalPopChoice(m_27);
        }
      else
        {
          t = l_27;
          {
            ATerm s_27 = t;
            int t_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL;
                ATerm b_4 (ATerm t)
                {
                  ATerm p_62 = NULL,q_62 = NULL,r_62 = NULL,d_7 = NULL;
                  r_62 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      q_62 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_62);
                  p_62 = t;
                  t = q_62;
                  if(((v_61 != NULL) && (v_61 != t)))
                    _fail(t);
                  else
                    v_61 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, q_62);
                  d_7 = t;
                  t = SSLsetAnnotations(d_7, p_62);
                  return(t);
                }
                t = fetch_1_0(b_4, t);
                t = term_j_23;
                n_62 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_61)), term_u_27);
                o_62 = t;
                t = SSL_printnl(n_62, o_62);
                t = (ATerm) ATmakeAppl(sym__2, term_j_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_61)), term_u_27));
                t = default_system_usage_0_0(t);
                t = term_m_23;
                m_62 = t;
                t = SSL_exit(m_62);
                ;
                LocalPopChoice(t_27);
              }
            else
              {
                t = s_27;
              }
          }
        }
      w_61 = t;
      t = term_h_24;
      y_61 = t;
      t = SSL_table_destroy(y_61);
      t = w_61;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm t)
{
  ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL;
  t = parse_options_1_0(b_117, t);
  w_62 = t;
  t = term_v_27;
  z_62 = t;
  t = SSL_table_create(z_62);
  t = term_v_27;
  x_62 = t;
  t = term_x_27;
  y_62 = t;
  t = SSL_table_put(x_62, y_62, w_62);
  t = w_62;
  t = d_117(t);
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_117, t);
        ;
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
              t = e_117(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(b_28);
            }
          else
            {
              t = a_28;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
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
            t = output_option_0_0(t);
            ;
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
                  t = Option_3_0(e_4, f_4, g_4, t);
                  ;
                  LocalPopChoice(i_28);
                }
              else
                {
                  t = h_28;
                  {
                    ATerm j_28 = t;
                    int k_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(k_28);
                      }
                    else
                      {
                        t = j_28;
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
ATerm d_4 (ATerm t)
{
  t = input_1_0(h_4, t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm e_63 = NULL,f_63 = NULL;
  t = term_i_22;
  e_63 = t;
  t = term_h_23;
  f_63 = t;
  t = term_l_28;
  t = l_11(e_63, f_63, t);
  t = term_m_28;
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_n_28;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = output_1_0(i_4, t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,j_7 = NULL,i_7 = NULL,h_7 = NULL,g_7 = NULL;
  v_63 = t;
  if(match_cons(t, sym_Specification_1))
    {
      i_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_63);
  h_63 = t;
  t = i_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_63 = ATgetFirst((ATermList) t);
      l_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_63);
  j_63 = t;
  t = l_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_63 = ATgetFirst((ATermList) t);
      p_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_63);
  n_63 = t;
  t = o_63;
  if(match_cons(t, sym_Strategies_1))
    {
      s_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_63);
  r_63 = t;
  t = s_63;
  t = map_1_0(j_4, t);
  t_63 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, t_63);
  g_7 = t;
  t = SSLsetAnnotations(g_7, r_63);
  u_63 = t;
  t = p_63;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_63), u_63);
  h_7 = t;
  t = SSLsetAnnotations(h_7, n_63);
  q_63 = t;
  t = (ATerm) ATinsert(CheckATermList(q_63), k_63);
  i_7 = t;
  t = SSLsetAnnotations(i_7, j_63);
  m_63 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, m_63);
  j_7 = t;
  t = SSLsetAnnotations(j_7, h_63);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL;
  m_64 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      i_64 = ATgetArgument(t, 0);
      j_64 = ATgetArgument(t, 1);
      k_64 = ATgetArgument(t, 2);
      l_64 = ATgetArgument(t, 3);
      {
        ATerm o_28 = t;
        int p_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_6 = NULL,l_6 = NULL,f_7 = NULL;
            t = SSLgetAnnotations(m_64);
            g_6 = t;
            t = l_64;
            t = simplify_0_0(t);
            l_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, i_64, j_64, k_64, l_6);
            f_7 = t;
            t = SSLsetAnnotations(f_7, g_6);
            ;
            LocalPopChoice(p_28);
          }
        else
          {
            t = o_28;
            t = m_64;
          }
      }
    }
  else
    {
      t = m_64;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(c_4, default_usage_0_0, _id, d_4, t);
  return(t);
}
