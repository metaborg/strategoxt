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
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_m_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_e_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_i_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_b_24;
ATerm term_a_24;
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
ATerm term_h_23;
ATerm term_e_23;
ATerm term_o_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_g_22;
ATerm term_c_22;
ATerm term_k_21;
ATerm term_z_5;
ATerm term_t_5;
void init_constant_terms (void)
{
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_stderr_0);
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
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_v_23, term_w_23);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_23);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym__2, term_d_24, term_n_23);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym__2, term_m_24, term_o_24);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym__2, term_s_26, term_n_23);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym__2, term_v_26, term_n_23);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym__2, term_t_25, term_n_23);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym__2, term_o_22, term_n_23);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm alltd_1_0 (ATerm w_93 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm f_92 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm i_93 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm p_107 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm e_2 (ATerm u_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm topdown_1_0 (ATerm e_92 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm);
ATerm t_0 (ATerm);
ATerm v_0 (ATerm);
ATerm x_0 (ATerm);
ATerm a_1 (ATerm);
ATerm c_1 (ATerm);
ATerm f_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm simplify_0_0 (ATerm);
ATerm map_1_0 (ATerm z_106 (ATerm), ATerm);
ATerm y_10 (ATerm z_48, ATerm a_49, ATerm);
ATerm z_10 (ATerm n_52, ATerm o_52, ATerm);
ATerm b_11 (ATerm a_113 (ATerm), ATerm x_474, ATerm r_52, ATerm);
ATerm a_11 (ATerm j_52, ATerm k_52, ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm output_1_0 (ATerm j_117 (ATerm), ATerm);
ATerm j_50 (ATerm c_50, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_11 (ATerm p_52, ATerm);
ATerm d_11 (ATerm b_49, ATerm c_49, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm v_51 (ATerm t_50, ATerm);
ATerm w_51 (ATerm x_50, ATerm y_50, ATerm z_50, ATerm);
ATerm x_51 (ATerm h_51, ATerm i_51, ATerm j_51, ATerm);
ATerm e_11 (ATerm);
ATerm q_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm k_117 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm w_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm x_1 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm g_2 (ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm m_11 (ATerm q_53, ATerm r_53, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm k_11 (ATerm o_58, ATerm p_58, ATerm n_58, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm f_11 (ATerm z_45, ATerm a_46, ATerm);
ATerm foldr_2_0 (ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm k_114 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm c_3 (ATerm);
ATerm need_help_1_0 (ATerm a_117 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm e_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm j_107 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm i_11 (ATerm z_39, ATerm a_40, ATerm);
ATerm debug_1_0 (ATerm y_112 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm j_11 (ATerm f_60, ATerm g_60, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm r_75 (ATerm), ATerm s_75 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm d_119 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm w_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm parse_options_1_0 (ATerm c_119 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm m_4 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm alltd_1_0 (ATerm w_93 (ATerm), ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    ATerm p_0 = t;
    int n_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_93(t);
        ;
        LocalPopChoice(n_4);
      }
    else
      {
        t = p_0;
        t = SRTS_all(a_0, t);
      }
    return(t);
  }
  t = a_0(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm f_92 (ATerm), ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = bottomup_1_0(f_92, t);
    return(t);
  }
  t = SRTS_all(b_0, t);
  t = f_92(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm i_93 (ATerm), ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm o_4 = t;
    int p_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_93(t);
        ;
        LocalPopChoice(p_4);
      }
    else
      {
        t = o_4;
        t = SRTS_one(n_2, t);
      }
    return(t);
  }
  t = n_2(t);
  return(t);
}
ATerm at_end_1_0 (ATerm p_107 (ATerm), ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm d_1 = NULL,g_1 = NULL,h_1 = NULL;
    h_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_1 = ATgetFirst((ATermList) t);
        g_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm z_0 = NULL,e_1 = NULL,s_0 = NULL;
          t = SSLgetAnnotations(h_1);
          z_0 = t;
          t = g_1;
          t = m_1(t);
          e_1 = t;
          t = (ATerm) ATinsert(CheckATermList(e_1), d_1);
          s_0 = t;
          t = SSLsetAnnotations(s_0, z_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_1;
        t = p_107(t);
      }
    return(t);
  }
  t = m_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_0 = NULL,l_0 = NULL,m_0 = NULL;
  f_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_0;
    }
  else
    {
      ATerm n_0 (ATerm t)
      {
        t = not_null(m_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_0 = ATgetFirst((ATermList) t);
          if(((m_0 != NULL) && (m_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_0;
      t = at_end_1_0(n_0, t);
    }
  return(t);
}
ATerm e_2 (ATerm u_1, ATerm t)
{
  ATerm v_1 = NULL;
  t = SSL_explode_term(u_1);
  if(match_cons(t, sym__2))
    {
      ATerm q_4 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_4) != ATmakeSymbol("", 0, ATtrue)))
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
        ATerm r_4 = t;
        int s_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_0 (ATerm t)
            {
              t = z_1;
              return(t);
            }
            t = y_1;
            t = at_end_1_0(o_0, t);
            ;
            LocalPopChoice(s_4);
          }
        else
          {
            t = r_4;
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
ATerm topdown_1_0 (ATerm e_92 (ATerm), ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    t = topdown_1_0(e_92, t);
    return(t);
  }
  t = e_92(t);
  t = SRTS_all(q_0, t);
  return(t);
}
ATerm genzip_4_0 (ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm u_4 = t;
    int v_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_96(t);
        ;
        LocalPopChoice(v_4);
      }
    else
      {
        t = u_4;
        {
          ATerm f_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,u_0 = NULL;
          t = r_96(t);
          l_2 = t;
          if(match_cons(t, sym__2))
            {
              h_2 = ATgetArgument(t, 0);
              i_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_2);
          f_2 = t;
          t = h_2;
          t = t_96(t);
          j_2 = t;
          t = i_2;
          t = m_2(t);
          k_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_2, k_2);
          u_0 = t;
          t = SSLsetAnnotations(u_0, f_2);
          t = s_96(t);
        }
      }
    return(t);
  }
  t = m_2(t);
  return(t);
}
ATerm t_0 (ATerm t)
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
ATerm v_0 (ATerm t)
{
  ATerm w_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_4 = ATgetArgument(t, 0);
      if(((ATgetType(z_4) == AT_LIST) && !(ATisEmpty(z_4))))
        {
          w_17 = ATgetFirst((ATermList) z_4);
          y_17 = (ATerm) ATgetNext((ATermList) z_4);
        }
      else
        _fail(t);
      {
        ATerm a_5 = ATgetArgument(t, 1);
        if(((ATgetType(a_5) == AT_LIST) && !(ATisEmpty(a_5))))
          {
            z_17 = ATgetFirst((ATermList) a_5);
            a_18 = (ATerm) ATgetNext((ATermList) a_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_17, z_17), (ATerm) ATmakeAppl(sym__2, y_17, a_18));
  return(t);
}
ATerm x_0 (ATerm t)
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
ATerm a_1 (ATerm t)
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
ATerm c_1 (ATerm t)
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
ATerm f_1 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_5 = ATgetArgument(t, 0);
      if(((ATgetType(d_5) == AT_LIST) && !(ATisEmpty(d_5))))
        {
          a_25 = ATgetFirst((ATermList) d_5);
          b_25 = (ATerm) ATgetNext((ATermList) d_5);
        }
      else
        _fail(t);
      {
        ATerm f_5 = ATgetArgument(t, 1);
        if(((ATgetType(f_5) == AT_LIST) && !(ATisEmpty(f_5))))
          {
            c_25 = ATgetFirst((ATermList) f_5);
            d_25 = (ATerm) ATgetNext((ATermList) f_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_25, c_25), (ATerm) ATmakeAppl(sym__2, b_25, d_25));
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL;
  if(match_cons(t, sym__2))
    {
      h_25 = ATgetArgument(t, 0);
      i_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_25), h_25);
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm j_25 = NULL,n_25 = NULL;
  if(match_cons(t, sym__2))
    {
      j_25 = ATgetArgument(t, 0);
      n_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_25), (ATerm) ATmakeAppl(sym_Match_1, n_25));
  return(t);
}
ATerm k_1 (ATerm t)
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
        ATerm c_36 = NULL,d_36 = NULL;
        c_36 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm k_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        d_36 = t;
        t = SSLgetAnnotations(c_36);
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
        t = d_36;
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
ATerm l_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,g_11 = NULL,h_11 = NULL,l_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
    y_11 = t;
    if(match_cons(t, sym_Test_1))
      {
        x_11 = ATgetArgument(t, 0);
        t = x_11;
        if(match_cons(t, sym_Id_0))
          {
            ATerm r_5 = t;
            int s_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_t_5;
                t = r_0(t);
                ;
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
                      ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
                      t = y_11;
                      t = new_0_0(t);
                      a_12 = t;
                      t = bottomup_1_0(r_0, t);
                      l_12 = t;
                      t = (ATerm) ATempty;
                      t = r_0(t);
                      m_12 = t;
                      t = (ATerm) ATinsert(CheckATermList(m_12), l_12);
                      t = r_0(t);
                      b_12 = t;
                      t = a_12;
                      t = bottomup_1_0(r_0, t);
                      k_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, k_12);
                      t = r_0(t);
                      j_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, j_12);
                      t = r_0(t);
                      d_12 = t;
                      t = x_11;
                      t = bottomup_1_0(r_0, t);
                      f_12 = t;
                      t = a_12;
                      t = bottomup_1_0(r_0, t);
                      i_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, i_12);
                      t = r_0(t);
                      h_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, h_12);
                      t = r_0(t);
                      g_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                      t = r_0(t);
                      e_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                      t = r_0(t);
                      c_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, b_12, c_12);
                      t = r_0(t);
                      ;
                      LocalPopChoice(v_5);
                    }
                  else
                    {
                      t = u_5;
                      t = y_11;
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
                    ;
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
                          ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
                          t = y_11;
                          t = new_0_0(t);
                          p_12 = t;
                          t = bottomup_1_0(r_0, t);
                          a_13 = t;
                          t = (ATerm) ATempty;
                          t = r_0(t);
                          b_13 = t;
                          t = (ATerm) ATinsert(CheckATermList(b_13), a_13);
                          t = r_0(t);
                          q_12 = t;
                          t = p_12;
                          t = bottomup_1_0(r_0, t);
                          z_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, z_12);
                          t = r_0(t);
                          y_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, y_12);
                          t = r_0(t);
                          s_12 = t;
                          t = x_11;
                          t = bottomup_1_0(r_0, t);
                          u_12 = t;
                          t = p_12;
                          t = bottomup_1_0(r_0, t);
                          x_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, x_12);
                          t = r_0(t);
                          w_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, w_12);
                          t = r_0(t);
                          v_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_12, v_12);
                          t = r_0(t);
                          t_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, s_12, t_12);
                          t = r_0(t);
                          r_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, q_12, r_12);
                          t = r_0(t);
                          ;
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
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    u_11 = ATgetArgument(t, 0);
                    {
                      ATerm d_6 = t;
                      int e_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, u_11);
                          t = r_0(t);
                          ;
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
                                ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,s_13 = NULL,v_13 = NULL,w_13 = NULL;
                                t = y_11;
                                t = new_0_0(t);
                                f_13 = t;
                                t = bottomup_1_0(r_0, t);
                                v_13 = t;
                                t = (ATerm) ATempty;
                                t = r_0(t);
                                w_13 = t;
                                t = (ATerm) ATinsert(CheckATermList(w_13), v_13);
                                t = r_0(t);
                                g_13 = t;
                                t = f_13;
                                t = bottomup_1_0(r_0, t);
                                s_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, s_13);
                                t = r_0(t);
                                o_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, o_13);
                                t = r_0(t);
                                i_13 = t;
                                t = x_11;
                                t = bottomup_1_0(r_0, t);
                                k_13 = t;
                                t = f_13;
                                t = bottomup_1_0(r_0, t);
                                n_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, n_13);
                                t = r_0(t);
                                m_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, m_13);
                                t = r_0(t);
                                l_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, k_13, l_13);
                                t = r_0(t);
                                j_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_13, j_13);
                                t = r_0(t);
                                h_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, g_13, h_13);
                                t = r_0(t);
                                ;
                                LocalPopChoice(g_6);
                              }
                            else
                              {
                                t = f_6;
                                t = y_11;
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
                        ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,s_14 = NULL,v_14 = NULL,w_14 = NULL,y_14 = NULL,d_15 = NULL,f_15 = NULL,g_15 = NULL;
                        t = y_11;
                        t = new_0_0(t);
                        f_14 = t;
                        t = bottomup_1_0(r_0, t);
                        f_15 = t;
                        t = (ATerm) ATempty;
                        t = r_0(t);
                        g_15 = t;
                        t = (ATerm) ATinsert(CheckATermList(g_15), f_15);
                        t = r_0(t);
                        g_14 = t;
                        t = f_14;
                        t = bottomup_1_0(r_0, t);
                        d_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, d_15);
                        t = r_0(t);
                        y_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, y_14);
                        t = r_0(t);
                        o_14 = t;
                        t = x_11;
                        t = bottomup_1_0(r_0, t);
                        q_14 = t;
                        t = f_14;
                        t = bottomup_1_0(r_0, t);
                        w_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, w_14);
                        t = r_0(t);
                        v_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, v_14);
                        t = r_0(t);
                        s_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, q_14, s_14);
                        t = r_0(t);
                        p_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, o_14, p_14);
                        t = r_0(t);
                        h_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, g_14, h_14);
                        t = r_0(t);
                        ;
                        LocalPopChoice(j_6);
                      }
                    else
                      {
                        t = i_6;
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
                ATerm k_6 = t;
                int l_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_z_5;
                    t = r_0(t);
                    ;
                    LocalPopChoice(l_6);
                  }
                else
                  {
                    t = k_6;
                    t = y_11;
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
                        ;
                        LocalPopChoice(q_6);
                      }
                    else
                      {
                        t = n_6;
                        t = y_11;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        u_11 = ATgetArgument(t, 0);
                        {
                          ATerm r_6 = t;
                          int s_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, u_11);
                              t = r_0(t);
                              ;
                              LocalPopChoice(s_6);
                            }
                          else
                            {
                              t = r_6;
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
                                        ATerm t_6 = t;
                                        int u_6 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_z_5;
                                            t = r_0(t);
                                            ;
                                            LocalPopChoice(u_6);
                                          }
                                        else
                                          {
                                            t = t_6;
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
                                              ATerm v_6 = t;
                                              int x_6 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm n_17 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                  t = r_0(t);
                                                  n_17 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, n_17);
                                                  t = r_0(t);
                                                  ;
                                                  LocalPopChoice(x_6);
                                                }
                                              else
                                                {
                                                  t = v_6;
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
                                                    h_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm a_7 = t;
                                                      int b_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, q_11, p_11);
                                                          {
                                                            ATerm d_7 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm r_1 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    r_1 = ATgetArgument(t, 0);
                                                                    if((r_1 != ATgetArgument(t, 1)))
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
                                                            t = term_z_5;
                                                            t = bottomup_1_0(r_0, t);
                                                          }
                                                          ;
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
                                                                ATerm t_17 = NULL;
                                                                t = p_11;
                                                                if((q_11 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, h_11, g_11);
                                                                t = genzip_4_0(t_0, v_0, x_0, a_1, t);
                                                                t_17 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_17), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, q_11, h_11)), t_11));
                                                                t = bottomup_1_0(r_0, t);
                                                                ;
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
                                                                      ATerm u_18 = NULL;
                                                                      t = r_11;
                                                                      if((u_11 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                                                                      t = r_0(t);
                                                                      u_18 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_18, t_11);
                                                                      t = r_0(t);
                                                                      ;
                                                                      LocalPopChoice(o_7);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = n_7;
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
                                                    ATerm p_7 = t;
                                                    int q_7 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm d_19 = NULL;
                                                        t = r_11;
                                                        if((u_11 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                                                        t = r_0(t);
                                                        d_19 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, d_19, t_11);
                                                        t = r_0(t);
                                                        ;
                                                        LocalPopChoice(q_7);
                                                      }
                                                    else
                                                      {
                                                        t = p_7;
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
                                                      ATerm r_7 = t;
                                                      int s_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm l_19 = NULL;
                                                          t = r_11;
                                                          if((u_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, u_11);
                                                          t = r_0(t);
                                                          l_19 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, l_19, t_11);
                                                          t = r_0(t);
                                                          ;
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
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_7 = t;
                                                          int u_7 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_19 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = r_0(t);
                                                              q_19 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, q_19);
                                                              t = r_0(t);
                                                              ;
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
                                        ATerm v_7 = t;
                                        int w_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_z_5;
                                            t = r_0(t);
                                            ;
                                            LocalPopChoice(w_7);
                                          }
                                        else
                                          {
                                            t = v_7;
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
                                              ATerm x_7 = t;
                                              int y_7 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm z_19 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                  t = r_0(t);
                                                  z_19 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, z_19);
                                                  t = r_0(t);
                                                  ;
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
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                u_11 = ATgetArgument(t, 0);
                                                {
                                                  ATerm z_7 = t;
                                                  int a_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm d_20 = NULL;
                                                      t = r_11;
                                                      if((u_11 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, u_11);
                                                      t = r_0(t);
                                                      d_20 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_20, t_11);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(a_8);
                                                    }
                                                  else
                                                    {
                                                      t = z_7;
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
                                                      ATerm b_8 = t;
                                                      int c_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm h_20 = NULL;
                                                          t = r_11;
                                                          if((u_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                                                          t = r_0(t);
                                                          h_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_20, t_11);
                                                          t = r_0(t);
                                                          ;
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
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm d_8 = t;
                                                          int e_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm m_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = r_0(t);
                                                              m_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, m_20);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(e_8);
                                                            }
                                                          else
                                                            {
                                                              t = d_8;
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
                                            ATerm f_8 = t;
                                            int g_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_5;
                                                t = r_0(t);
                                                ;
                                                LocalPopChoice(g_8);
                                              }
                                            else
                                              {
                                                t = f_8;
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
                                                  ATerm h_8 = t;
                                                  int i_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm v_20 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                      t = r_0(t);
                                                      v_20 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, v_20);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(i_8);
                                                    }
                                                  else
                                                    {
                                                      t = h_8;
                                                      t = y_11;
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
                                                          ATerm z_20 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, r_11);
                                                          t = r_0(t);
                                                          z_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_20, t_11);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(n_8);
                                                        }
                                                      else
                                                        {
                                                          t = m_8;
                                                          t = y_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = j_8;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        t = u_11;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            q_11 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm o_8 = t;
                                                              int p_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm d_21 = NULL,e_21 = NULL;
                                                                  t = p_11;
                                                                  if((q_11 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, q_11);
                                                                  t = r_0(t);
                                                                  e_21 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, e_21);
                                                                  t = r_0(t);
                                                                  d_21 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, d_21, t_11);
                                                                  t = r_0(t);
                                                                  ;
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
                                                              ATerm q_8 = t;
                                                              int r_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm s_21 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                                  t = r_0(t);
                                                                  s_21 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, s_21);
                                                                  t = r_0(t);
                                                                  ;
                                                                  LocalPopChoice(r_8);
                                                                }
                                                              else
                                                                {
                                                                  t = q_8;
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
                                            ATerm s_8 = t;
                                            int t_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_5;
                                                t = r_0(t);
                                                ;
                                                LocalPopChoice(t_8);
                                              }
                                            else
                                              {
                                                t = s_8;
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
                                                  ATerm u_8 = t;
                                                  int v_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm d_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                      t = r_0(t);
                                                      d_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, d_22);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(v_8);
                                                    }
                                                  else
                                                    {
                                                      t = u_8;
                                                      t = y_11;
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
                                                          ATerm n_22 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, r_11);
                                                          t = r_0(t);
                                                          n_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, t_11);
                                                          t = r_0(t);
                                                          ;
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
                                                    t = w_8;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_9 = t;
                                                          int c_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm s_22 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = r_0(t);
                                                              s_22 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, s_22);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(c_9);
                                                            }
                                                          else
                                                            {
                                                              t = b_9;
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
                                    l_11 = ATgetArgument(t, 1);
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
                                            ATerm d_9 = t;
                                            int e_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_5;
                                                t = r_0(t);
                                                ;
                                                LocalPopChoice(e_9);
                                              }
                                            else
                                              {
                                                t = d_9;
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
                                                  ATerm f_9 = t;
                                                  int g_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm d_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                      t = r_0(t);
                                                      d_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, d_23);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(g_9);
                                                    }
                                                  else
                                                    {
                                                      t = f_9;
                                                      t = y_11;
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
                                                          ATerm j_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, r_11, l_11, n_11);
                                                          t = r_0(t);
                                                          j_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_23, t_11);
                                                          t = r_0(t);
                                                          ;
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
                                                    t = h_9;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm m_9 = t;
                                                          int n_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm o_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = r_0(t);
                                                              o_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, o_23);
                                                              t = r_0(t);
                                                              ;
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
                                            ATerm o_9 = t;
                                            int p_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_5;
                                                t = r_0(t);
                                                ;
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
                                                      ATerm x_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                      t = r_0(t);
                                                      x_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, x_23);
                                                      t = r_0(t);
                                                      ;
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
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    u_11 = ATgetArgument(t, 0);
                                                    v_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm s_9 = t;
                                                      int t_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm c_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                          t = r_0(t);
                                                          c_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, c_24);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(t_9);
                                                        }
                                                      else
                                                        {
                                                          t = s_9;
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
                                l_11 = ATgetArgument(t, 1);
                                t = x_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = w_11;
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
                                            ;
                                            LocalPopChoice(v_9);
                                          }
                                        else
                                          {
                                            t = u_9;
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
                                              ATerm w_9 = t;
                                              int x_9 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm n_24 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                  t = r_0(t);
                                                  n_24 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, n_24);
                                                  t = r_0(t);
                                                  ;
                                                  LocalPopChoice(x_9);
                                                }
                                              else
                                                {
                                                  t = w_9;
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
                                                    h_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm y_9 = t;
                                                      int z_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, q_11, r_11);
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
                                                            t = term_z_5;
                                                            t = bottomup_1_0(r_0, t);
                                                          }
                                                          ;
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
                                                                ATerm x_24 = NULL;
                                                                t = r_11;
                                                                if((q_11 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, h_11, l_11);
                                                                t = genzip_4_0(c_1, f_1, i_1, j_1, t);
                                                                x_24 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_24), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, q_11, h_11)));
                                                                t = bottomup_1_0(r_0, t);
                                                                ;
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
                                                                      t = s_11;
                                                                      if((u_11 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                                                                      t = r_0(t);
                                                                      ;
                                                                      LocalPopChoice(e_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = d_10;
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
                                                    ATerm f_10 = t;
                                                    int g_10 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = s_11;
                                                        if((u_11 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                                                        t = r_0(t);
                                                        ;
                                                        LocalPopChoice(g_10);
                                                      }
                                                    else
                                                      {
                                                        t = f_10;
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
                                                      ATerm h_10 = t;
                                                      int i_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = s_11;
                                                          if((u_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, u_11);
                                                          t = r_0(t);
                                                          ;
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
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_10 = t;
                                                          int k_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm d_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = r_0(t);
                                                              d_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, d_26);
                                                              t = r_0(t);
                                                              ;
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
                                        ATerm l_10 = t;
                                        int m_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_z_5;
                                            t = r_0(t);
                                            ;
                                            LocalPopChoice(m_10);
                                          }
                                        else
                                          {
                                            t = l_10;
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
                                              ATerm n_10 = t;
                                              int o_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm n_26 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                  t = r_0(t);
                                                  n_26 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, n_26);
                                                  t = r_0(t);
                                                  ;
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
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                u_11 = ATgetArgument(t, 0);
                                                {
                                                  ATerm p_10 = t;
                                                  int q_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = s_11;
                                                      if((u_11 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, u_11);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(q_10);
                                                    }
                                                  else
                                                    {
                                                      t = p_10;
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
                                                      ATerm r_10 = t;
                                                      int z_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = s_11;
                                                          if((u_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                                                          t = r_0(t);
                                                          ;
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
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm n_12 = t;
                                                          int o_12 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm x_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = r_0(t);
                                                              x_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, x_26);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(o_12);
                                                            }
                                                          else
                                                            {
                                                              t = n_12;
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
                                            ATerm c_13 = t;
                                            int d_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_5;
                                                t = r_0(t);
                                                ;
                                                LocalPopChoice(d_13);
                                              }
                                            else
                                              {
                                                t = c_13;
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
                                                  ATerm e_13 = t;
                                                  int p_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm l_27 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                      t = r_0(t);
                                                      l_27 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, l_27);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(p_13);
                                                    }
                                                  else
                                                    {
                                                      t = e_13;
                                                      t = y_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm q_13 = t;
                                                int r_13 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm t_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(r_13);
                                                    {
                                                      ATerm u_13 = t;
                                                      int x_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_11);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(x_13);
                                                        }
                                                      else
                                                        {
                                                          t = u_13;
                                                          t = y_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = q_13;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        t = u_11;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            q_11 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm y_13 = t;
                                                              int z_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm t_27 = NULL;
                                                                  t = r_11;
                                                                  if((q_11 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, q_11);
                                                                  t = r_0(t);
                                                                  t_27 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, t_27);
                                                                  t = r_0(t);
                                                                  ;
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
                                                              ATerm a_14 = t;
                                                              int b_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm d_28 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                                  t = r_0(t);
                                                                  d_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, d_28);
                                                                  t = r_0(t);
                                                                  ;
                                                                  LocalPopChoice(b_14);
                                                                }
                                                              else
                                                                {
                                                                  t = a_14;
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
                                            ATerm c_14 = t;
                                            int d_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_5;
                                                t = r_0(t);
                                                ;
                                                LocalPopChoice(d_14);
                                              }
                                            else
                                              {
                                                t = c_14;
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
                                                  ATerm e_14 = t;
                                                  int i_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm q_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                      t = r_0(t);
                                                      q_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, q_28);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(i_14);
                                                    }
                                                  else
                                                    {
                                                      t = e_14;
                                                      t = y_11;
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
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_11);
                                                          t = r_0(t);
                                                          ;
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
                                                    t = j_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm r_14 = t;
                                                          int t_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = r_0(t);
                                                              a_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, a_29);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(t_14);
                                                            }
                                                          else
                                                            {
                                                              t = r_14;
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
                                            ATerm u_14 = t;
                                            int x_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_5;
                                                t = r_0(t);
                                                ;
                                                LocalPopChoice(x_14);
                                              }
                                            else
                                              {
                                                t = u_14;
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
                                                  ATerm z_14 = t;
                                                  int a_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm j_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                      t = r_0(t);
                                                      j_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, j_29);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(a_15);
                                                    }
                                                  else
                                                    {
                                                      t = z_14;
                                                      t = y_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm b_15 = t;
                                                int c_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm e_15 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(c_15);
                                                    {
                                                      ATerm h_15 = t;
                                                      int i_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, s_11, t_11, o_11);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(i_15);
                                                        }
                                                      else
                                                        {
                                                          t = h_15;
                                                          t = y_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = b_15;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_15 = t;
                                                          int k_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = r_0(t);
                                                              u_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, u_29);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(k_15);
                                                            }
                                                          else
                                                            {
                                                              t = j_15;
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
                                                ATerm l_15 = t;
                                                int m_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_z_5;
                                                    t = r_0(t);
                                                    ;
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
                                                          ATerm h_30 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                          t = r_0(t);
                                                          h_30 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, s_11, h_30);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(o_15);
                                                        }
                                                      else
                                                        {
                                                          t = n_15;
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
                                                      ATerm p_15 = t;
                                                      int q_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm m_30 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                          t = r_0(t);
                                                          m_30 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, m_30);
                                                          t = r_0(t);
                                                          ;
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
                                                                ATerm s_30 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                                t = r_0(t);
                                                                s_30 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, s_11, s_30);
                                                                t = r_0(t);
                                                                ;
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
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_11 = ATgetArgument(t, 0);
                                                        v_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_15 = t;
                                                          int u_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                              t = r_0(t);
                                                              z_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, s_11, z_30);
                                                              t = r_0(t);
                                                              ;
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
                                                                    ATerm f_31 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                                    t = r_0(t);
                                                                    f_31 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, f_31);
                                                                    t = r_0(t);
                                                                    ;
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
                                                      }
                                                    else
                                                      {
                                                        ATerm x_15 = t;
                                                        int y_15 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm r_31 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                            t = r_0(t);
                                                            r_31 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, s_11, r_31);
                                                            t = r_0(t);
                                                            ;
                                                            LocalPopChoice(y_15);
                                                          }
                                                        else
                                                          {
                                                            t = x_15;
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
                                                    ATerm z_15 = t;
                                                    int a_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_z_5;
                                                        t = r_0(t);
                                                        ;
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
                                                              ATerm f_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                              t = r_0(t);
                                                              f_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, s_11, f_32);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(c_16);
                                                            }
                                                          else
                                                            {
                                                              t = b_16;
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
                                                          ATerm d_16 = t;
                                                          int e_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm l_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = r_0(t);
                                                              l_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, l_32);
                                                              t = r_0(t);
                                                              ;
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
                                                                    ATerm p_32 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                                    t = r_0(t);
                                                                    p_32 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, s_11, p_32);
                                                                    t = r_0(t);
                                                                    ;
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
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            u_11 = ATgetArgument(t, 0);
                                                            v_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm h_16 = t;
                                                              int i_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm v_32 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                                  t = r_0(t);
                                                                  v_32 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, s_11, v_32);
                                                                  t = r_0(t);
                                                                  ;
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
                                                                        ATerm z_32 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                                        t = r_0(t);
                                                                        z_32 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, z_32);
                                                                        t = r_0(t);
                                                                        ;
                                                                        LocalPopChoice(k_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = j_16;
                                                                        t = y_11;
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
                                                                ATerm e_33 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, t_11);
                                                                t = r_0(t);
                                                                e_33 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, s_11, e_33);
                                                                t = r_0(t);
                                                                ;
                                                                LocalPopChoice(m_16);
                                                              }
                                                            else
                                                              {
                                                                t = l_16;
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
                                                    ATerm n_16 = t;
                                                    int o_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_z_5;
                                                        t = r_0(t);
                                                        ;
                                                        LocalPopChoice(o_16);
                                                      }
                                                    else
                                                      {
                                                        t = n_16;
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
                                                          ATerm p_16 = t;
                                                          int q_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm w_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                              t = r_0(t);
                                                              w_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, w_33);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(q_16);
                                                            }
                                                          else
                                                            {
                                                              t = p_16;
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
                                                              ATerm r_16 = t;
                                                              int s_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm f_34 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, w_11);
                                                                  t = r_0(t);
                                                                  f_34 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, f_34);
                                                                  t = r_0(t);
                                                                  ;
                                                                  LocalPopChoice(s_16);
                                                                }
                                                              else
                                                                {
                                                                  t = r_16;
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
                            ATerm t_16 = t;
                            int u_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_t_5;
                                t = r_0(t);
                                ;
                                LocalPopChoice(u_16);
                              }
                            else
                              {
                                t = t_16;
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
                            ATerm v_16 = t;
                            int w_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_t_5;
                                t = r_0(t);
                                ;
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
                                      t = w_11;
                                      if((x_11 != t))
                                        {
                                          _fail(t);
                                        }
                                      ;
                                      LocalPopChoice(y_16);
                                    }
                                  else
                                    {
                                      t = x_16;
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
                                      ATerm z_16 = t;
                                      int a_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm x_35 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, v_11, w_11);
                                          t = r_0(t);
                                          x_35 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, u_11, x_35);
                                          t = r_0(t);
                                          ;
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
                                                t = w_11;
                                                if((x_11 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                ;
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
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        u_11 = ATgetArgument(t, 0);
                                        {
                                          ATerm d_17 = t;
                                          int e_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = w_11;
                                              if((x_11 != t))
                                                {
                                                  _fail(t);
                                                }
                                              ;
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
                                                    t = u_11;
                                                    t = topdown_1_0(k_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                                                    t = bottomup_1_0(r_0, t);
                                                    ;
                                                    LocalPopChoice(g_17);
                                                  }
                                                else
                                                  {
                                                    t = f_17;
                                                    t = y_11;
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
                                            t = w_11;
                                            if((x_11 != t))
                                              {
                                                _fail(t);
                                              }
                                            ;
                                            LocalPopChoice(i_17);
                                          }
                                        else
                                          {
                                            t = h_17;
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
                                ATerm j_17 = t;
                                int k_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_t_5;
                                    t = r_0(t);
                                    ;
                                    LocalPopChoice(k_17);
                                  }
                                else
                                  {
                                    t = j_17;
                                    t = w_11;
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
                                    ;
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
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = x_11;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm o_17 = t;
                                    int p_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_z_5;
                                        t = r_0(t);
                                        ;
                                        LocalPopChoice(p_17);
                                      }
                                    else
                                      {
                                        t = o_17;
                                        t = w_11;
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
                                        ;
                                        LocalPopChoice(r_17);
                                      }
                                    else
                                      {
                                        t = q_17;
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
                                        ATerm s_17 = t;
                                        int u_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm b_37 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, x_11, s_11);
                                            t = conc_0_0(t);
                                            b_37 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, b_37, t_11);
                                            t = bottomup_1_0(r_0, t);
                                            ;
                                            LocalPopChoice(u_17);
                                          }
                                        else
                                          {
                                            t = s_17;
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
                        ATerm v_17 = t;
                        int x_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm c_18 = ATgetArgument(t, 0);
                                w_11 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(x_17);
                            t = w_11;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm d_18 = t;
                                int e_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_t_5;
                                    t = r_0(t);
                                    ;
                                    LocalPopChoice(e_18);
                                  }
                                else
                                  {
                                    t = d_18;
                                    t = y_11;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm f_18 = t;
                                    int g_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_z_5;
                                        t = r_0(t);
                                        ;
                                        LocalPopChoice(g_18);
                                      }
                                    else
                                      {
                                        t = f_18;
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
                            t = v_17;
                            if(match_cons(t, sym_All_1))
                              {
                                x_11 = ATgetArgument(t, 0);
                                t = x_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm k_18 = t;
                                    int l_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_t_5;
                                        t = r_0(t);
                                        ;
                                        LocalPopChoice(l_18);
                                      }
                                    else
                                      {
                                        t = k_18;
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
                                        ATerm m_18 = t;
                                        int n_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_t_5;
                                            t = r_0(t);
                                            ;
                                            LocalPopChoice(n_18);
                                          }
                                        else
                                          {
                                            t = m_18;
                                            {
                                              ATerm o_18 = t;
                                              int p_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,a_38 = NULL,b_38 = NULL;
                                                  t = y_11;
                                                  t = new_0_0(t);
                                                  o_37 = t;
                                                  t = bottomup_1_0(r_0, t);
                                                  a_38 = t;
                                                  t = (ATerm) ATempty;
                                                  t = r_0(t);
                                                  b_38 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(b_38), a_38);
                                                  t = r_0(t);
                                                  p_37 = t;
                                                  t = o_37;
                                                  t = bottomup_1_0(r_0, t);
                                                  y_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, y_37);
                                                  t = r_0(t);
                                                  x_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, x_37);
                                                  t = r_0(t);
                                                  r_37 = t;
                                                  t = x_11;
                                                  t = bottomup_1_0(r_0, t);
                                                  t_37 = t;
                                                  t = o_37;
                                                  t = bottomup_1_0(r_0, t);
                                                  w_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, w_37);
                                                  t = r_0(t);
                                                  v_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, v_37);
                                                  t = r_0(t);
                                                  u_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_37, u_37);
                                                  t = r_0(t);
                                                  s_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, r_37, s_37);
                                                  t = r_0(t);
                                                  q_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, p_37, q_37);
                                                  t = r_0(t);
                                                  ;
                                                  LocalPopChoice(p_18);
                                                }
                                              else
                                                {
                                                  t = o_18;
                                                  t = y_11;
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
                                                ;
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
                                                      ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL;
                                                      t = y_11;
                                                      t = new_0_0(t);
                                                      g_38 = t;
                                                      t = bottomup_1_0(r_0, t);
                                                      r_38 = t;
                                                      t = (ATerm) ATempty;
                                                      t = r_0(t);
                                                      s_38 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(s_38), r_38);
                                                      t = r_0(t);
                                                      h_38 = t;
                                                      t = g_38;
                                                      t = bottomup_1_0(r_0, t);
                                                      q_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, q_38);
                                                      t = r_0(t);
                                                      p_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, p_38);
                                                      t = r_0(t);
                                                      j_38 = t;
                                                      t = x_11;
                                                      t = bottomup_1_0(r_0, t);
                                                      l_38 = t;
                                                      t = g_38;
                                                      t = bottomup_1_0(r_0, t);
                                                      o_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, o_38);
                                                      t = r_0(t);
                                                      n_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, n_38);
                                                      t = r_0(t);
                                                      m_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_38, m_38);
                                                      t = r_0(t);
                                                      k_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_38, k_38);
                                                      t = r_0(t);
                                                      i_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, h_38, i_38);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(t_18);
                                                    }
                                                  else
                                                    {
                                                      t = s_18;
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
                                                              ATerm v_18 = t;
                                                              int w_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, u_10);
                                                                  t = r_0(t);
                                                                  z_38 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_38, v_10);
                                                                  t = r_0(t);
                                                                  y_38 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_11, y_38);
                                                                  t = r_0(t);
                                                                  x_38 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, x_38);
                                                                  t = r_0(t);
                                                                  ;
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
                                                                        ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL;
                                                                        t = y_11;
                                                                        t = new_0_0(t);
                                                                        b_39 = t;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        m_39 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = r_0(t);
                                                                        n_39 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(n_39), m_39);
                                                                        t = r_0(t);
                                                                        c_39 = t;
                                                                        t = b_39;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        l_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, l_39);
                                                                        t = r_0(t);
                                                                        k_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, k_39);
                                                                        t = r_0(t);
                                                                        e_39 = t;
                                                                        t = x_11;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        g_39 = t;
                                                                        t = b_39;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        j_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, j_39);
                                                                        t = r_0(t);
                                                                        i_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, i_39);
                                                                        t = r_0(t);
                                                                        h_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_39, h_39);
                                                                        t = r_0(t);
                                                                        f_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, e_39, f_39);
                                                                        t = r_0(t);
                                                                        d_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, c_39, d_39);
                                                                        t = r_0(t);
                                                                        ;
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
                                                          }
                                                        else
                                                          {
                                                            ATerm z_18 = t;
                                                            int a_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL;
                                                                t = y_11;
                                                                t = new_0_0(t);
                                                                q_39 = t;
                                                                t = bottomup_1_0(r_0, t);
                                                                d_40 = t;
                                                                t = (ATerm) ATempty;
                                                                t = r_0(t);
                                                                e_40 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(e_40), d_40);
                                                                t = r_0(t);
                                                                r_39 = t;
                                                                t = q_39;
                                                                t = bottomup_1_0(r_0, t);
                                                                c_40 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, c_40);
                                                                t = r_0(t);
                                                                b_40 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, b_40);
                                                                t = r_0(t);
                                                                t_39 = t;
                                                                t = x_11;
                                                                t = bottomup_1_0(r_0, t);
                                                                v_39 = t;
                                                                t = q_39;
                                                                t = bottomup_1_0(r_0, t);
                                                                y_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, y_39);
                                                                t = r_0(t);
                                                                x_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, x_39);
                                                                t = r_0(t);
                                                                w_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, v_39, w_39);
                                                                t = r_0(t);
                                                                u_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, t_39, u_39);
                                                                t = r_0(t);
                                                                s_39 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, r_39, s_39);
                                                                t = r_0(t);
                                                                ;
                                                                LocalPopChoice(a_19);
                                                              }
                                                            else
                                                              {
                                                                t = z_18;
                                                                t = y_11;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = u_11;
                                                        {
                                                          ATerm b_19 = t;
                                                          int c_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,s_40 = NULL,u_40 = NULL,v_40 = NULL,x_40 = NULL,y_40 = NULL;
                                                              t = y_11;
                                                              t = new_0_0(t);
                                                              h_40 = t;
                                                              t = bottomup_1_0(r_0, t);
                                                              x_40 = t;
                                                              t = (ATerm) ATempty;
                                                              t = r_0(t);
                                                              y_40 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(y_40), x_40);
                                                              t = r_0(t);
                                                              j_40 = t;
                                                              t = h_40;
                                                              t = bottomup_1_0(r_0, t);
                                                              v_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, v_40);
                                                              t = r_0(t);
                                                              u_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, u_40);
                                                              t = r_0(t);
                                                              l_40 = t;
                                                              t = x_11;
                                                              t = bottomup_1_0(r_0, t);
                                                              n_40 = t;
                                                              t = h_40;
                                                              t = bottomup_1_0(r_0, t);
                                                              s_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, s_40);
                                                              t = r_0(t);
                                                              p_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, p_40);
                                                              t = r_0(t);
                                                              o_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_40, o_40);
                                                              t = r_0(t);
                                                              m_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, l_40, m_40);
                                                              t = r_0(t);
                                                              k_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, j_40, k_40);
                                                              t = r_0(t);
                                                              ;
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
                                                else
                                                  {
                                                    t = u_11;
                                                    {
                                                      ATerm e_19 = t;
                                                      int f_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,j_41 = NULL,k_41 = NULL,m_41 = NULL,n_41 = NULL,p_41 = NULL,q_41 = NULL;
                                                          t = y_11;
                                                          t = new_0_0(t);
                                                          b_41 = t;
                                                          t = bottomup_1_0(r_0, t);
                                                          p_41 = t;
                                                          t = (ATerm) ATempty;
                                                          t = r_0(t);
                                                          q_41 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(q_41), p_41);
                                                          t = r_0(t);
                                                          c_41 = t;
                                                          t = b_41;
                                                          t = bottomup_1_0(r_0, t);
                                                          n_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, n_41);
                                                          t = r_0(t);
                                                          m_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, m_41);
                                                          t = r_0(t);
                                                          e_41 = t;
                                                          t = x_11;
                                                          t = bottomup_1_0(r_0, t);
                                                          g_41 = t;
                                                          t = b_41;
                                                          t = bottomup_1_0(r_0, t);
                                                          k_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, k_41);
                                                          t = r_0(t);
                                                          j_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, j_41);
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
                                                          ;
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
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    u_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm g_19 = t;
                                                      int h_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, u_11);
                                                          t = r_0(t);
                                                          ;
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
                                                                ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL;
                                                                t = y_11;
                                                                t = new_0_0(t);
                                                                u_41 = t;
                                                                t = bottomup_1_0(r_0, t);
                                                                l_42 = t;
                                                                t = (ATerm) ATempty;
                                                                t = r_0(t);
                                                                m_42 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(m_42), l_42);
                                                                t = r_0(t);
                                                                v_41 = t;
                                                                t = u_41;
                                                                t = bottomup_1_0(r_0, t);
                                                                k_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, k_42);
                                                                t = r_0(t);
                                                                j_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, j_42);
                                                                t = r_0(t);
                                                                x_41 = t;
                                                                t = x_11;
                                                                t = bottomup_1_0(r_0, t);
                                                                z_41 = t;
                                                                t = u_41;
                                                                t = bottomup_1_0(r_0, t);
                                                                d_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, d_42);
                                                                t = r_0(t);
                                                                c_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, c_42);
                                                                t = r_0(t);
                                                                b_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, z_41, b_42);
                                                                t = r_0(t);
                                                                y_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, x_41, y_41);
                                                                t = r_0(t);
                                                                w_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, v_41, w_41);
                                                                t = r_0(t);
                                                                ;
                                                                LocalPopChoice(j_19);
                                                              }
                                                            else
                                                              {
                                                                t = i_19;
                                                                t = y_11;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm k_19 = t;
                                                    int m_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL;
                                                        t = y_11;
                                                        t = new_0_0(t);
                                                        p_42 = t;
                                                        t = bottomup_1_0(r_0, t);
                                                        c_43 = t;
                                                        t = (ATerm) ATempty;
                                                        t = r_0(t);
                                                        d_43 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(d_43), c_43);
                                                        t = r_0(t);
                                                        q_42 = t;
                                                        t = p_42;
                                                        t = bottomup_1_0(r_0, t);
                                                        b_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, b_43);
                                                        t = r_0(t);
                                                        a_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, a_43);
                                                        t = r_0(t);
                                                        s_42 = t;
                                                        t = x_11;
                                                        t = bottomup_1_0(r_0, t);
                                                        u_42 = t;
                                                        t = p_42;
                                                        t = bottomup_1_0(r_0, t);
                                                        z_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, z_42);
                                                        t = r_0(t);
                                                        w_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, w_42);
                                                        t = r_0(t);
                                                        v_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, u_42, v_42);
                                                        t = r_0(t);
                                                        t_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, s_42, t_42);
                                                        t = r_0(t);
                                                        r_42 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, q_42, r_42);
                                                        t = r_0(t);
                                                        ;
                                                        LocalPopChoice(m_19);
                                                      }
                                                    else
                                                      {
                                                        t = k_19;
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
                                            ATerm n_19 = t;
                                            int o_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_t_5;
                                                t = r_0(t);
                                                ;
                                                LocalPopChoice(o_19);
                                              }
                                            else
                                              {
                                                t = n_19;
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
                                                ATerm p_19 = t;
                                                int r_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_z_5;
                                                    t = r_0(t);
                                                    ;
                                                    LocalPopChoice(r_19);
                                                  }
                                                else
                                                  {
                                                    t = p_19;
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
                                                    ATerm s_19 = t;
                                                    int t_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_z_5;
                                                        t = r_0(t);
                                                        ;
                                                        LocalPopChoice(t_19);
                                                      }
                                                    else
                                                      {
                                                        t = s_19;
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
                                                ATerm u_19 = t;
                                                int v_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm w_19 = ATgetArgument(t, 0);
                                                        w_11 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(v_19);
                                                    t = w_11;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm x_19 = t;
                                                        int y_19 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_z_5;
                                                            t = r_0(t);
                                                            ;
                                                            LocalPopChoice(y_19);
                                                          }
                                                        else
                                                          {
                                                            t = x_19;
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
                                                    t = u_19;
                                                    {
                                                      ATerm a_20 = t;
                                                      int b_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm c_20 = ATgetArgument(t, 0);
                                                              w_11 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(b_20);
                                                          {
                                                            ATerm e_20 = t;
                                                            int f_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = w_11;
                                                                t = fetch_1_0(l_1, t);
                                                                t = term_z_5;
                                                                t = bottomup_1_0(r_0, t);
                                                                ;
                                                                LocalPopChoice(f_20);
                                                              }
                                                            else
                                                              {
                                                                t = e_20;
                                                                t = y_11;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = a_20;
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
                                                                            ATerm g_20 = t;
                                                                            int i_20 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm j_44 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, v_11, w_11);
                                                                                t = r_0(t);
                                                                                j_44 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, u_11, j_44);
                                                                                t = r_0(t);
                                                                                ;
                                                                                LocalPopChoice(i_20);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = g_20;
                                                                                {
                                                                                  ATerm j_20 = t;
                                                                                  int k_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = w_11;
                                                                                      if((x_11 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      ;
                                                                                      LocalPopChoice(k_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = j_20;
                                                                                      t = y_11;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm l_20 = t;
                                                                          int n_20 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = w_11;
                                                                              if((x_11 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              ;
                                                                              LocalPopChoice(n_20);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = l_20;
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
                                                                      ATerm o_20 = t;
                                                                      int p_20 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, w_11);
                                                                          t = r_0(t);
                                                                          ;
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
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      x_11 = ATgetArgument(t, 0);
                                                                      w_11 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm q_20 = t;
                                                                        int r_20 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, x_11, w_11);
                                                                            t = r_0(t);
                                                                            ;
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
                                                                      if(match_cons(t, sym_LChoices_1))
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
                                                                                    ATerm y_44 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, v_11);
                                                                                    t = r_0(t);
                                                                                    y_44 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, u_11, y_44);
                                                                                    t = r_0(t);
                                                                                    ;
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
                                                                                  ATerm u_20 = t;
                                                                                  int w_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_z_5;
                                                                                      t = r_0(t);
                                                                                      ;
                                                                                      LocalPopChoice(w_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = u_20;
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
                                                                                    ATerm x_20 = t;
                                                                                    int y_20 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm e_45 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, v_11);
                                                                                        t = r_0(t);
                                                                                        e_45 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, u_11, e_45);
                                                                                        t = r_0(t);
                                                                                        ;
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
                                                                                      ATerm a_21 = t;
                                                                                      int b_21 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_z_5;
                                                                                          t = r_0(t);
                                                                                          ;
                                                                                          LocalPopChoice(b_21);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = a_21;
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
                                                                                        ATerm c_21 = t;
                                                                                        int f_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm k_45 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, v_11);
                                                                                            t = r_0(t);
                                                                                            k_45 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, k_45);
                                                                                            t = r_0(t);
                                                                                            ;
                                                                                            LocalPopChoice(f_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = c_21;
                                                                                            t = y_11;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm g_21 = t;
                                                                                          int h_21 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_t_5;
                                                                                              t = r_0(t);
                                                                                              ;
                                                                                              LocalPopChoice(h_21);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = g_21;
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
                                                                                        ATerm i_21 = t;
                                                                                        int j_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL;
                                                                                            t = term_k_21;
                                                                                            t = bottomup_1_0(r_0, t);
                                                                                            s_45 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = r_0(t);
                                                                                            v_45 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(v_45), s_10);
                                                                                            t = r_0(t);
                                                                                            u_45 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(u_45), x_11);
                                                                                            t = r_0(t);
                                                                                            t_45 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, s_45, t_45);
                                                                                            t = r_0(t);
                                                                                            r_45 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, w_11, r_45);
                                                                                            t = r_0(t);
                                                                                            ;
                                                                                            LocalPopChoice(j_21);
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
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          x_11 = ATgetArgument(t, 0);
                                                                                          w_11 = ATgetArgument(t, 1);
                                                                                          s_10 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm l_21 = t;
                                                                                            int m_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, w_11);
                                                                                                t = r_0(t);
                                                                                                e_46 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, s_10);
                                                                                                t = r_0(t);
                                                                                                h_46 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = r_0(t);
                                                                                                i_46 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(i_46), h_46);
                                                                                                t = r_0(t);
                                                                                                g_46 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(g_46), x_11);
                                                                                                t = r_0(t);
                                                                                                f_46 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(f_46), e_46);
                                                                                                t = r_0(t);
                                                                                                d_46 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, d_46);
                                                                                                t = r_0(t);
                                                                                                ;
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
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              x_11 = ATgetArgument(t, 0);
                                                                                              w_11 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm n_21 = t;
                                                                                                int o_21 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm m_46 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, w_11);
                                                                                                    t = r_0(t);
                                                                                                    m_46 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, m_46);
                                                                                                    t = r_0(t);
                                                                                                    ;
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
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  x_11 = ATgetArgument(t, 0);
                                                                                                  w_11 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm p_21 = t;
                                                                                                    int q_21 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm q_46 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, x_11);
                                                                                                        t = r_0(t);
                                                                                                        q_46 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, q_46, w_11);
                                                                                                        t = r_0(t);
                                                                                                        ;
                                                                                                        LocalPopChoice(q_21);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = p_21;
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
                                                                                                        ATerm r_21 = t;
                                                                                                        int t_21 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm u_46 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, w_11);
                                                                                                            t = r_0(t);
                                                                                                            u_46 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, u_46, x_11);
                                                                                                            t = r_0(t);
                                                                                                            ;
                                                                                                            LocalPopChoice(t_21);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = r_21;
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
                                                                                                                  ATerm u_21 = t;
                                                                                                                  int v_21 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm g_47 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, x_11, s_11);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      g_47 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, g_47, t_11);
                                                                                                                      t = bottomup_1_0(r_0, t);
                                                                                                                      ;
                                                                                                                      LocalPopChoice(v_21);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = u_21;
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
                                                                                                                                              h_11 = ATgetArgument(t, 1);
                                                                                                                                              w_10 = ATgetArgument(t, 2);
                                                                                                                                              x_10 = ATgetArgument(t, 3);
                                                                                                                                              t = w_10;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = h_11;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm w_21 = t;
                                                                                                                                                      int x_21 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = r_11;
                                                                                                                                                          if((q_11 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = x_10;
                                                                                                                                                          {
                                                                                                                                                            ATerm y_21 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                ATerm n_1 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm z_21 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(z_21, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((q_11 != ATgetArgument(z_21, 0)))
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
                                                                                                                                                                t = oncetd_1_0(n_1, t);
                                                                                                                                                                PopChoice();
                                                                                                                                                                _fail(t);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                t = y_21;
                                                                                                                                                              }
                                                                                                                                                            t = x_10;
                                                                                                                                                            t = bottomup_1_0(r_0, t);
                                                                                                                                                          }
                                                                                                                                                          ;
                                                                                                                                                          LocalPopChoice(x_21);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = w_21;
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
  t = bottomup_1_0(r_0, t);
  return(t);
}
ATerm map_1_0 (ATerm z_106 (ATerm), ATerm t)
{
  ATerm g_49 (ATerm t)
  {
    ATerm x_48 = NULL,y_48 = NULL,f_49 = NULL;
    x_48 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_48;
      }
    else
      {
        ATerm f_3 = NULL,i_3 = NULL,j_3 = NULL,w_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_48 = ATgetFirst((ATermList) t);
            f_49 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_48);
        f_3 = t;
        t = y_48;
        t = z_106(t);
        i_3 = t;
        t = f_49;
        t = g_49(t);
        j_3 = t;
        t = (ATerm) ATinsert(CheckATermList(j_3), i_3);
        w_0 = t;
        t = SSLsetAnnotations(w_0, f_3);
      }
    return(t);
  }
  t = g_49(t);
  return(t);
}
ATerm y_10 (ATerm z_48, ATerm a_49, ATerm t)
{
  ATerm i_49 = NULL;
  t = SSL_fputc(z_48, a_49);
  i_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_49);
  return(t);
}
ATerm z_10 (ATerm n_52, ATerm o_52, ATerm t)
{
  ATerm j_49 = NULL;
  t = SSL_write_term_to_stream_text(n_52, o_52);
  j_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_49);
  return(t);
}
ATerm b_11 (ATerm a_113 (ATerm), ATerm x_474, ATerm r_52, ATerm t)
{
  ATerm k_49 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_474, term_c_22);
  t = e_11(t);
  k_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_49, r_52);
  t = a_113(t);
  t = fclose_0_0(t);
  t = r_52;
  return(t);
}
ATerm a_11 (ATerm j_52, ATerm k_52, ATerm t)
{
  ATerm l_49 = NULL;
  t = SSL_write_term_to_stream_baf(j_52, k_52);
  l_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_49);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_22 = ATgetArgument(t, 0);
      if(match_cons(e_22, sym_Stream_1))
        {
          o_49 = ATgetArgument(e_22, 0);
        }
      else
        _fail(t);
      p_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(o_49, p_49, t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_22 = ATgetArgument(t, 0);
      if(match_cons(f_22, sym_Stream_1))
        {
          t_49 = ATgetArgument(f_22, 0);
        }
      else
        _fail(t);
      u_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(t_49, u_49, t);
  q_49 = t;
  t = term_g_22;
  r_49 = t;
  t = q_49;
  if(match_cons(t, sym_Stream_1))
    {
      s_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_22, q_49);
  t = y_10(r_49, s_49, t);
  return(t);
}
ATerm output_1_0 (ATerm j_117 (ATerm), ATerm t)
{
  ATerm m_49 = NULL,n_49 = NULL;
  t = j_117(t);
  n_49 = t;
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_22;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
        t = term_k_22;
      }
    m_49 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_49, n_49);
    {
      ATerm l_22 = t;
      int m_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_o_22;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, m_49, n_49);
          LocalPopChoice(m_22);
          if(match_cons(t, sym__2))
            {
              ATerm p_22 = ATgetArgument(t, 0);
              ATerm q_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_11(o_1, m_49, n_49, t);
        }
      else
        {
          t = l_22;
          if(match_cons(t, sym__2))
            {
              ATerm r_22 = ATgetArgument(t, 0);
              ATerm t_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_11(p_1, m_49, n_49, t);
        }
    }
  }
  return(t);
}
ATerm j_50 (ATerm c_50, ATerm t)
{
  t = SSL_fclose(c_50);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL;
  h_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_50 = ATgetArgument(t, 0);
      {
        ATerm u_22 = t;
        int v_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_50);
            ;
            LocalPopChoice(v_22);
          }
        else
          {
            t = u_22;
            t = j_50(h_50, t);
          }
      }
    }
  else
    {
      t = j_50(h_50, t);
    }
  return(t);
}
ATerm c_11 (ATerm p_52, ATerm t)
{
  t = SSL_read_term_from_stream(p_52);
  return(t);
}
ATerm d_11 (ATerm b_49, ATerm c_49, ATerm t)
{
  ATerm k_50 = NULL;
  t = SSL_fopen(b_49, c_49);
  k_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_50);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_50 = NULL;
  t = SSL_stdin_stream();
  l_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_50);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_50 = NULL;
  t = SSL_stdout_stream();
  m_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_50);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_50 = NULL;
  t = SSL_stderr_stream();
  n_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_50);
  return(t);
}
ATerm v_51 (ATerm t_50, ATerm t)
{
  ATerm u_50 = NULL;
  t = SSL_explode_term(t_50);
  if(match_cons(t, sym__2))
    {
      ATerm w_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_22 = ATgetArgument(t, 1);
        if(((ATgetType(x_22) == AT_LIST) && !(ATisEmpty(x_22))))
          {
            u_50 = ATgetFirst((ATermList) x_22);
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
  t = u_50;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_50;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_50;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_50;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm w_51 (ATerm x_50, ATerm y_50, ATerm z_50, ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL,f_51 = NULL,y_0 = NULL;
  t = SSLgetAnnotations(z_50);
  c_51 = t;
  t = x_50;
  if(match_cons(t, sym_Path_1))
    {
      f_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_51, y_50);
  y_0 = t;
  t = SSLsetAnnotations(y_0, c_51);
  if(match_cons(t, sym__2))
    {
      a_51 = ATgetArgument(t, 0);
      b_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11(a_51, b_51, t);
  return(t);
}
ATerm x_51 (ATerm h_51, ATerm i_51, ATerm j_51, ATerm t)
{
  ATerm k_51 = NULL,m_51 = NULL,n_51 = NULL,q_51 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(j_51);
  n_51 = t;
  t = SSL_is_string(h_51);
  q_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_51, i_51);
  b_1 = t;
  t = SSLsetAnnotations(b_1, n_51);
  if(match_cons(t, sym__2))
    {
      k_51 = ATgetArgument(t, 0);
      m_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11(k_51, m_51, t);
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL;
  s_51 = t;
  if(match_cons(t, sym__2))
    {
      t_51 = ATgetArgument(t, 0);
      u_51 = ATgetArgument(t, 1);
      {
        ATerm z_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_51(s_51, t);
            ;
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
                  t = w_51(t_51, u_51, s_51, t);
                  ;
                  LocalPopChoice(c_23);
                }
              else
                {
                  t = b_23;
                  t = x_51(t_51, u_51, s_51, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_51(s_51, t);
    }
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_e_23;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL;
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_52 = NULL;
      b_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_52, term_h_23);
      t = e_11(t);
      ;
      LocalPopChoice(g_23);
    }
  else
    {
      t = f_23;
      t = debug_1_0(q_1, t);
      _fail(t);
    }
  z_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(a_52, t);
  y_51 = t;
  t = z_51;
  t = fclose_0_0(t);
  t = y_51;
  return(t);
}
ATerm input_1_0 (ATerm k_117 (ATerm), ATerm t)
{
  ATerm i_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_23);
    }
  else
    {
      t = i_23;
      t = term_m_23;
    }
  t = ReadFromFile_0_0(t);
  t = k_117(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL;
  d_52 = t;
  t = term_n_23;
  t = whoami_0_0(t);
  e_52 = t;
  t = term_p_23;
  g_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_23), e_52), term_q_23);
  h_52 = t;
  t = SSL_printnl(g_52, h_52);
  t = term_s_23;
  f_52 = t;
  t = SSL_exit(f_52);
  t = d_52;
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm l_52 = NULL;
  l_52 = t;
  if(match_string(t, "-k"))
    {
      t = l_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_52;
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm m_52 = NULL,s_52 = NULL,t_52 = NULL;
  m_52 = t;
  t = SSL_string_to_int(m_52);
  s_52 = t;
  t = term_t_23;
  t_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_23, s_52);
  t = m_11(t_52, s_52, t);
  t = m_52;
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_u_23;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_1, t_1, w_1, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm v_52 = NULL;
  v_52 = t;
  if(match_string(t, "-S"))
    {
      t = v_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_52;
    }
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL;
  t = term_v_23;
  w_52 = t;
  t = term_w_23;
  x_52 = t;
  t = term_y_23;
  t = m_11(w_52, x_52, t);
  t = term_z_23;
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_a_24;
  return(t);
}
ATerm d_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL;
  y_52 = t;
  t = SSL_string_to_int(y_52);
  z_52 = t;
  t = term_v_23;
  a_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_23, z_52);
  t = m_11(a_53, z_52, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_52);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_b_24;
  return(t);
}
ATerm q_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL;
  t = term_d_24;
  c_53 = t;
  t = term_n_23;
  d_53 = t;
  t = term_e_24;
  t = m_11(c_53, d_53, t);
  t = term_f_24;
  return(t);
}
ATerm s_2 (ATerm t)
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
      t = Option_3_0(x_1, b_2, c_2, t);
      ;
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
            t = ArgOption_3_0(d_2, g_2, o_2, t);
            ;
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
ATerm m_11 (ATerm q_53, ATerm r_53, ATerm t)
{
  ATerm f_53 = NULL;
  t = term_l_24;
  f_53 = t;
  t = SSL_table_put(f_53, q_53, r_53);
  t = (ATerm) ATmakeAppl(sym__3, term_l_24, q_53, r_53);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL;
      t = term_n_23;
      t = e_0(t);
      l_53 = t;
      t = term_m_24;
      m_53 = t;
      t = term_o_24;
      n_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_24, term_o_24, l_53);
      t = k_11(m_53, n_53, l_53, t);
      _fail(t);
    }
  else
    {
      ATerm s_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_53 = ATgetFirst((ATermList) t);
          k_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_53;
      t = c_0(t);
      t = term_n_23;
      t = d_0(t);
      s_53 = t;
      t = (ATerm) ATinsert(CheckATermList(k_53), s_53);
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm u_53 = NULL;
  u_53 = t;
  if(match_string(t, "-o"))
    {
      t = u_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_53;
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL;
  v_53 = t;
  t = term_j_22;
  w_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_22, v_53);
  t = m_11(w_53, v_53, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_53);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_p_24;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_2, u_2, v_2, t);
  return(t);
}
ATerm k_11 (ATerm o_58, ATerm p_58, ATerm n_58, ATerm t)
{
  ATerm y_53 = NULL,e_54 = NULL,f_54 = NULL;
  y_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_58, p_58);
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
        t = (ATerm) ATmakeAppl(sym__2, o_58, p_58);
        t = j_11(o_58, p_58, t);
        ;
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        t = (ATerm) ATempty;
      }
    e_54 = t;
    t = (ATerm) ATinsert(CheckATermList(e_54), n_58);
    f_54 = t;
    t = SSL_table_put(o_58, p_58, f_54);
    t = y_53;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_54 = NULL,r_54 = NULL,s_54 = NULL;
      t = term_n_23;
      t = k_0(t);
      q_54 = t;
      t = term_m_24;
      r_54 = t;
      t = term_o_24;
      s_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_24, term_o_24, q_54);
      t = k_11(r_54, s_54, q_54, t);
      _fail(t);
    }
  else
    {
      ATerm w_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_54 = ATgetFirst((ATermList) t);
          n_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_54;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_54 = ATgetFirst((ATermList) t);
          p_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_54;
      t = i_0(t);
      t = o_54;
      t = j_0(t);
      w_54 = t;
      t = (ATerm) ATinsert(CheckATermList(p_54), w_54);
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm y_54 = NULL;
  y_54 = t;
  if(match_string(t, "-i"))
    {
      t = y_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_54;
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm z_54 = NULL,a_55 = NULL;
  z_54 = t;
  t = term_l_23;
  a_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_23, z_54);
  t = m_11(a_55, z_54, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_54);
  return(t);
}
ATerm y_2 (ATerm t)
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
  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_23;
  t = whoami_0_0(t);
  b_55 = t;
  t = term_p_23;
  d_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_24), b_55);
  e_55 = t;
  t = SSL_printnl(d_55, e_55);
  t = term_s_23;
  c_55 = t;
  t = SSL_exit(c_55);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_w_24;
  t = get_config_0_0(t);
  return(t);
}
ATerm f_11 (ATerm z_45, ATerm a_46, ATerm t)
{
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_45, a_46);
      ;
      LocalPopChoice(z_24);
    }
  else
    {
      t = y_24;
      t = SSL_addr(z_45, a_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm t)
{
  ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL;
  g_55 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_55;
      t = p_105(t);
    }
  else
    {
      ATerm l_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_55 = ATgetFirst((ATermList) t);
          i_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_55;
      t = foldr_2_0(p_105, q_105, t);
      l_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_55, l_55);
      t = q_105(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_w_23;
  return(t);
}
ATerm a_3 (ATerm t)
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
  ATerm o_55 = NULL,u_3 = NULL,v_3 = NULL;
  t = times_0_0(t);
  v_3 = t;
  t = SSL_explode_term(v_3);
  if(match_cons(t, sym__2))
    {
      ATerm e_25 = ATgetArgument(t, 0);
      u_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3;
  t = foldr_2_0(z_2, a_3, t);
  o_55 = t;
  t = SSL_TicksToSeconds(o_55);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL;
  z_55 = t;
  if(match_cons(t, sym__2))
    {
      a_56 = ATgetArgument(t, 0);
      b_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_56;
        if((a_56 != t))
          {
            _fail(t);
          }
        t = z_55;
        ;
        LocalPopChoice(g_25);
      }
    else
      {
        t = f_25;
        t = (ATerm) ATmakeAppl(sym__2, a_56, b_56);
        {
          ATerm k_25 = t;
          int l_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_56, b_56);
              ;
              LocalPopChoice(l_25);
            }
          else
            {
              t = k_25;
              t = SSL_gtr(a_56, b_56);
            }
          t = (ATerm) ATmakeAppl(sym__2, a_56, b_56);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_114 (ATerm), ATerm t)
{
  ATerm f_56 = NULL;
  f_56 = t;
  {
    ATerm m_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_56 = NULL;
        t = term_v_23;
        t = get_config_0_0(t);
        h_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_56, term_s_23);
        t = geq_0_0(t);
        t = f_56;
        t = k_114(t);
        ;
        LocalPopChoice(o_25);
      }
    else
      {
        t = m_25;
        t = f_56;
      }
  }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL,m_56 = NULL,n_56 = NULL;
  t = run_time_0_0(t);
  j_56 = t;
  t = term_n_23;
  t = whoami_0_0(t);
  k_56 = t;
  t = term_p_23;
  m_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_25), j_56), term_p_25), k_56);
  n_56 = t;
  t = SSL_printnl(m_56, n_56);
  t = (ATerm) ATmakeAppl(sym__2, term_p_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_25), j_56), term_p_25), k_56));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_23;
  o_56 = t;
  t = SSL_exit(o_56);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL;
  x_56 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = x_56;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          w_56 = ATgetArgument(t, 0);
          {
            ATerm l_4 = NULL,x_3 = NULL;
            t = SSLgetAnnotations(x_56);
            l_4 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, w_56);
            x_3 = t;
            t = SSLsetAnnotations(x_3, l_4);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = x_56;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_117 (ATerm), ATerm t)
{
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      t = fetch_1_0(c_3, t);
    }
  t = a_117(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_57 = ATgetFirst((ATermList) t);
      b_57 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_57 = NULL,g_57 = NULL;
        ATerm d_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_57)), not_null(g_57));
          return(t);
        }
        t = b_57;
        t = h_0(t);
        if(((f_57 != NULL) && (f_57 != t)))
          _fail(t);
        else
          f_57 = t;
        t = a_57;
        t = g_0(t);
        if(((g_57 != NULL) && (g_57 != t)))
          _fail(t);
        else
          g_57 = t;
        t = b_57;
        t = reverse_acc_2_0(g_0, d_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_23;
      t = h_0(t);
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL,w_6 = NULL;
  m_57 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_57);
  k_57 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_57);
  w_6 = t;
  t = SSLsetAnnotations(w_6, k_57);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm o_57 = NULL;
  o_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_57), term_u_25);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL;
  ATerm v_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_24;
      t = get_config_0_0(t);
      ;
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
  i_57 = t;
  t = term_o_24;
  j_57 = t;
  t = term_y_25;
  t = j_11(i_57, j_57, t);
  t = reverse_acc_2_0(_id, g_3, t);
  t = map_1_0(h_3, t);
  return(t);
}
ATerm fetch_1_0 (ATerm j_107 (ATerm), ATerm t)
{
  ATerm u_58 (ATerm t)
  {
    ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL;
    r_58 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_58 = ATgetFirst((ATermList) t);
        t_58 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_25 = t;
      int a_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_4 = NULL,w_4 = NULL,y_6 = NULL;
          t = SSLgetAnnotations(r_58);
          t_4 = t;
          t = s_58;
          t = j_107(t);
          w_4 = t;
          t = (ATerm) ATinsert(CheckATermList(t_58), w_4);
          y_6 = t;
          t = SSLsetAnnotations(y_6, t_4);
          ;
          LocalPopChoice(a_26);
        }
      else
        {
          t = z_25;
          {
            ATerm e_5 = NULL,h_5 = NULL,z_6 = NULL;
            t = SSLgetAnnotations(r_58);
            e_5 = t;
            t = t_58;
            t = u_58(t);
            h_5 = t;
            t = (ATerm) ATinsert(CheckATermList(h_5), s_58);
            z_6 = t;
            t = SSLsetAnnotations(z_6, e_5);
          }
        }
    }
    return(t);
  }
  t = u_58(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_58 = NULL,z_58 = NULL,a_59 = NULL;
  y_58 = t;
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_58;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_26 = ATgetFirst((ATermList) t);
                ATerm f_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_58;
          }
        ;
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        t = (ATerm) ATinsert(ATempty, y_58);
      }
    z_58 = t;
    t = term_k_22;
    a_59 = t;
    t = SSL_printnl(a_59, z_58);
    t = y_58;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_w_24;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm i_11 (ATerm z_39, ATerm a_40, ATerm t)
{
  t = SSL_strcat(z_39, a_40);
  return(t);
}
ATerm debug_1_0 (ATerm y_112 (ATerm), ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL;
  e_59 = t;
  t = y_112(t);
  f_59 = t;
  t = term_p_23;
  g_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_59), f_59);
  h_59 = t;
  t = SSL_printnl(g_59, h_59);
  t = e_59;
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(h_26);
    }
  else
    {
      t = g_26;
    }
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_i_26;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_59 = NULL;
      o_59 = t;
      t = SSL_is_string(o_59);
      ;
      LocalPopChoice(k_26);
    }
  else
    {
      t = j_26;
      {
        ATerm l_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_3, t);
            ;
            LocalPopChoice(m_26);
          }
        else
          {
            t = l_26;
            {
              ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL;
              u_59 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_59 = ATgetArgument(t, 0);
                  t = v_59;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_59 = ATgetArgument(t, 0);
                      t = v_59;
                      {
                        ATerm o_26 = t;
                        int p_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_26);
                          }
                        else
                          {
                            t = o_26;
                            t = debug_1_0(l_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_60 = NULL,b_60 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_59 = ATgetArgument(t, 0);
                          w_59 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_59;
                      t = eval_config_0_0(t);
                      a_60 = t;
                      t = w_59;
                      t = eval_config_0_0(t);
                      b_60 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_60, b_60);
                      t = i_11(a_60, b_60, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm j_11 (ATerm f_60, ATerm g_60, ATerm t)
{
  t = SSL_table_get(f_60, g_60);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm h_60 = NULL,i_60 = NULL;
  h_60 = t;
  t = term_l_24;
  i_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_24, h_60);
  t = j_11(i_60, h_60, t);
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_60 = NULL,k_60 = NULL;
        t = eval_config_0_0(t);
        j_60 = t;
        t = term_l_24;
        k_60 = t;
        t = SSL_table_put(k_60, h_60, j_60);
        t = j_60;
        ;
        LocalPopChoice(r_26);
      }
    else
      {
        t = q_26;
      }
  }
  return(t);
}
ATerm m_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL;
  t = term_s_26;
  n_60 = t;
  t = term_n_23;
  o_60 = t;
  t = term_t_26;
  t = m_11(n_60, o_60, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_u_26;
  return(t);
}
ATerm p_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL;
  t = term_s_26;
  r_60 = t;
  t = term_n_23;
  s_60 = t;
  t = term_t_26;
  t = m_11(r_60, s_60, t);
  t = term_v_26;
  p_60 = t;
  t = term_n_23;
  q_60 = t;
  t = term_w_26;
  t = m_11(p_60, q_60, t);
  t = term_y_26;
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_z_26;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_3, n_3, o_3, t);
      ;
      LocalPopChoice(b_27);
    }
  else
    {
      t = a_27;
      t = Option_3_0(p_3, q_3, r_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_75 (ATerm), ATerm s_75 (ATerm), ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,c_7 = NULL;
  y_60 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_60 = ATgetFirst((ATermList) t);
      v_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_60);
  t_60 = t;
  t = u_60;
  t = r_75(t);
  w_60 = t;
  t = v_60;
  t = s_75(t);
  x_60 = t;
  t = (ATerm) ATinsert(CheckATermList(x_60), w_60);
  c_7 = t;
  t = SSLsetAnnotations(c_7, t_60);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_119 (ATerm), ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,i_61 = NULL,j_61 = NULL,e_7 = NULL;
  d_61 = t;
  {
    ATerm c_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_27;
        t = d_119(t);
        ;
        LocalPopChoice(d_27);
      }
    else
      {
        t = c_27;
      }
    t = d_61;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_61 = ATgetFirst((ATermList) t);
        g_61 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_61);
    e_61 = t;
    t = term_w_24;
    j_61 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_24, f_61);
    t = m_11(j_61, f_61, t);
    t = g_61;
    {
      ATerm t_61 (ATerm t)
      {
        ATerm f_27 = t;
        int g_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_27 = t;
            int i_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_61 = NULL;
                m_61 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_61;
                ;
                LocalPopChoice(i_27);
              }
            else
              {
                t = h_27;
                t = d_119(t);
                t = Cons_2_0(_id, t_61, t);
              }
            ;
            LocalPopChoice(g_27);
          }
        else
          {
            t = f_27;
            {
              ATerm p_61 = NULL,q_61 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_61 = ATgetFirst((ATermList) t);
                  q_61 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_61), (ATerm) ATmakeAppl(sym_Undefined_1, p_61));
            }
          }
        return(t);
      }
      t = t_61(t);
      i_61 = t;
      t = (ATerm) ATinsert(CheckATermList(i_61), (ATerm) ATmakeAppl(sym_Program_1, f_61));
      e_7 = t;
      t = SSLsetAnnotations(e_7, e_61);
    }
  }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm f_62 = NULL;
  f_62 = t;
  if(match_string(t, "--help"))
    {
      t = f_62;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_62;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_62;
        }
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm g_62 = NULL,h_62 = NULL;
  t = term_t_25;
  g_62 = t;
  t = term_n_23;
  h_62 = t;
  t = term_j_27;
  t = m_11(g_62, h_62, t);
  t = term_k_27;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_m_27;
  return(t);
}
ATerm b_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_119 (ATerm), ATerm t)
{
  ATerm y_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL;
  a_62 = t;
  t = term_m_24;
  c_62 = t;
  t = term_o_24;
  d_62 = t;
  t = (ATerm) ATempty;
  e_62 = t;
  t = SSL_table_put(c_62, d_62, e_62);
  t = a_62;
  {
    ATerm s_3 (ATerm t)
    {
      ATerm n_27 = t;
      int o_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_119(t);
          ;
          LocalPopChoice(o_27);
        }
      else
        {
          t = n_27;
          {
            ATerm p_27 = t;
            int q_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_3, w_3, a_4, t);
                ;
                LocalPopChoice(q_27);
              }
            else
              {
                t = p_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_3, t);
    {
      ATerm r_27 = t;
      int s_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_62 = NULL;
          o_62 = t;
          {
            ATerm u_27 = t;
            int v_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_5 = NULL;
                t = o_62;
                {
                  ATerm w_27 = t;
                  int x_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_t_25;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(x_27);
                    }
                  else
                    {
                      t = w_27;
                      t = fetch_1_0(b_4, t);
                    }
                  t = o_62;
                  t = default_system_usage_0_0(t);
                  t = term_w_23;
                  w_5 = t;
                  t = SSL_exit(w_5);
                }
                ;
                LocalPopChoice(v_27);
              }
            else
              {
                t = u_27;
                {
                  ATerm a_6 = NULL;
                  t = term_s_26;
                  t = get_config_0_0(t);
                  t = o_62;
                  t = default_system_about_0_0(t);
                  t = term_w_23;
                  a_6 = t;
                  t = SSL_exit(a_6);
                }
              }
          }
          ;
          LocalPopChoice(s_27);
        }
      else
        {
          t = r_27;
          {
            ATerm y_27 = t;
            int z_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_62 = NULL,q_62 = NULL,r_62 = NULL;
                ATerm c_4 (ATerm t)
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
                  if(((y_61 != NULL) && (y_61 != t)))
                    _fail(t);
                  else
                    y_61 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, t_62);
                  g_7 = t;
                  t = SSLsetAnnotations(g_7, s_62);
                  return(t);
                }
                t = fetch_1_0(c_4, t);
                t = term_p_23;
                q_62 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_61)), term_a_28);
                r_62 = t;
                t = SSL_printnl(q_62, r_62);
                t = (ATerm) ATmakeAppl(sym__2, term_p_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_61)), term_a_28));
                t = default_system_usage_0_0(t);
                t = term_s_23;
                p_62 = t;
                t = SSL_exit(p_62);
                ;
                LocalPopChoice(z_27);
              }
            else
              {
                t = y_27;
              }
          }
        }
      z_61 = t;
      t = term_m_24;
      b_62 = t;
      t = SSL_table_destroy(b_62);
      t = z_61;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm t)
{
  ATerm z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL;
  t = parse_options_1_0(c_117, t);
  z_62 = t;
  t = term_b_28;
  c_63 = t;
  t = SSL_table_create(c_63);
  t = term_b_28;
  a_63 = t;
  t = term_c_28;
  b_63 = t;
  t = SSL_table_put(a_63, b_63, z_62);
  t = z_62;
  t = e_117(t);
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_117, t);
        ;
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
        {
          ATerm g_28 = t;
          int h_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_117(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_28);
            }
          else
            {
              t = g_28;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm i_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(j_28);
    }
  else
    {
      t = i_28;
      {
        ATerm k_28 = t;
        int l_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
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
                  ;
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
                        ;
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
ATerm e_4 (ATerm t)
{
  t = input_1_0(i_4, t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm h_63 = NULL,i_63 = NULL;
  t = term_o_22;
  h_63 = t;
  t = term_n_23;
  i_63 = t;
  t = term_r_28;
  t = m_11(h_63, i_63, t);
  t = term_s_28;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_t_28;
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = output_1_0(j_4, t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,m_7 = NULL,l_7 = NULL,k_7 = NULL,j_7 = NULL;
  y_63 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_63);
  k_63 = t;
  t = l_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_63 = ATgetFirst((ATermList) t);
      o_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_63);
  m_63 = t;
  t = o_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_63 = ATgetFirst((ATermList) t);
      s_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_63);
  q_63 = t;
  t = r_63;
  if(match_cons(t, sym_Strategies_1))
    {
      v_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_63);
  u_63 = t;
  t = v_63;
  t = map_1_0(k_4, t);
  w_63 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, w_63);
  j_7 = t;
  t = SSLsetAnnotations(j_7, u_63);
  x_63 = t;
  t = s_63;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_63), x_63);
  k_7 = t;
  t = SSLsetAnnotations(k_7, q_63);
  t_63 = t;
  t = (ATerm) ATinsert(CheckATermList(t_63), n_63);
  l_7 = t;
  t = SSLsetAnnotations(l_7, m_63);
  p_63 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, p_63);
  m_7 = t;
  t = SSLsetAnnotations(m_7, k_63);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL;
  r_64 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      n_64 = ATgetArgument(t, 0);
      o_64 = ATgetArgument(t, 1);
      p_64 = ATgetArgument(t, 2);
      q_64 = ATgetArgument(t, 3);
      {
        ATerm u_28 = t;
        int v_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_6 = NULL,m_6 = NULL,i_7 = NULL;
            t = SSLgetAnnotations(r_64);
            h_6 = t;
            t = q_64;
            t = simplify_0_0(t);
            t = alltd_1_0(m_4, t);
            m_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, n_64, o_64, p_64, m_6);
            i_7 = t;
            t = SSLsetAnnotations(i_7, h_6);
            ;
            LocalPopChoice(v_28);
          }
        else
          {
            t = u_28;
            t = r_64;
          }
      }
    }
  else
    {
      t = r_64;
    }
  return(t);
}
ATerm m_4 (ATerm t)
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
