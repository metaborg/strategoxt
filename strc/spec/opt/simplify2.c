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
ATerm term_o_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_e_31;
ATerm term_d_31;
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
ATerm term_p_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
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
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_g_27;
ATerm term_d_27;
ATerm term_n_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_g_26;
ATerm term_c_26;
ATerm term_w_24;
ATerm term_b_24;
ATerm term_z_7;
ATerm term_t_7;
void init_constant_terms (void)
{
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym__2, term_u_27, term_v_27);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_27);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym__2, term_b_28, term_m_27);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
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
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym__2, term_l_28, term_m_28);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym__2, term_j_30, term_m_27);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym__2, term_m_30, term_m_27);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym__2, term_k_29, term_m_27);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym__2, term_n_26, term_m_27);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm bottomup_1_0 (ATerm e_92 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm h_93 (ATerm), ATerm);
ATerm s_0 (ATerm f_0, ATerm);
ATerm conc_0_0 (ATerm);
ATerm q_0 (ATerm);
ATerm r_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm simplify_0_0 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm b_11 (ATerm n_25, ATerm o_25, ATerm p_25, ATerm);
ATerm genzip_4_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm o_107 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm x_53 (ATerm m_53, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm topdown_1_0 (ATerm d_92 (ATerm), ATerm);
ATerm map_1_0 (ATerm y_106 (ATerm), ATerm);
ATerm f_11 (ATerm y_48, ATerm z_48, ATerm);
ATerm g_11 (ATerm m_52, ATerm n_52, ATerm);
ATerm i_11 (ATerm z_112 (ATerm), ATerm h_474, ATerm q_52, ATerm);
ATerm h_11 (ATerm i_52, ATerm j_52, ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm output_1_0 (ATerm i_117 (ATerm), ATerm);
ATerm a_59 (ATerm u_58, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm j_11 (ATerm o_52, ATerm);
ATerm k_11 (ATerm a_49, ATerm b_49, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm n_60 (ATerm k_59, ATerm);
ATerm o_60 (ATerm o_59, ATerm p_59, ATerm q_59, ATerm);
ATerm p_60 (ATerm y_59, ATerm z_59, ATerm a_60, ATerm);
ATerm l_11 (ATerm);
ATerm g_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm j_117 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm h_2 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm o_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm t_11 (ATerm p_53, ATerm q_53, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm r_11 (ATerm n_58, ATerm o_58, ATerm m_58, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm m_11 (ATerm y_45, ATerm z_45, ATerm);
ATerm foldr_2_0 (ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm j_114 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm b_5 (ATerm);
ATerm need_help_1_0 (ATerm z_116 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm i_107 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm p_11 (ATerm y_39, ATerm z_39, ATerm);
ATerm debug_1_0 (ATerm x_112 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm q_11 (ATerm e_60, ATerm f_60, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm c_119 (ATerm), ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm parse_options_1_0 (ATerm b_119 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm k_6 (ATerm);
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
  ATerm t_0 (ATerm t)
  {
    ATerm l_6 = t;
    int n_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_93(t);
        ;
        LocalPopChoice(n_6);
      }
    else
      {
        t = l_6;
        t = SRTS_one(t_0, t);
      }
    return(t);
  }
  t = t_0(t);
  return(t);
}
ATerm s_0 (ATerm f_0, ATerm t)
{
  ATerm l_0 = NULL;
  t = SSL_explode_term(f_0);
  if(match_cons(t, sym__2))
    {
      ATerm o_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      l_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_0;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm n_0 = NULL,o_0 = NULL,p_0 = NULL;
  p_0 = t;
  if(match_cons(t, sym__2))
    {
      n_0 = ATgetArgument(t, 0);
      o_0 = ATgetArgument(t, 1);
      {
        ATerm p_6 = t;
        int q_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_0 (ATerm t)
            {
              t = o_0;
              return(t);
            }
            t = n_0;
            t = at_end_1_0(b_0, t);
            ;
            LocalPopChoice(q_6);
          }
        else
          {
            t = p_6;
            t = s_0(p_0, t);
          }
      }
    }
  else
    {
      t = s_0(p_0, t);
    }
  return(t);
}
ATerm q_0 (ATerm t)
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
ATerm r_0 (ATerm t)
{
  ATerm m_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_6 = ATgetArgument(t, 0);
      if(((ATgetType(t_6) == AT_LIST) && !(ATisEmpty(t_6))))
        {
          m_15 = ATgetFirst((ATermList) t_6);
          o_15 = (ATerm) ATgetNext((ATermList) t_6);
        }
      else
        _fail(t);
      {
        ATerm v_6 = ATgetArgument(t, 1);
        if(((ATgetType(v_6) == AT_LIST) && !(ATisEmpty(v_6))))
          {
            p_15 = ATgetFirst((ATermList) v_6);
            q_15 = (ATerm) ATgetNext((ATermList) v_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_15, p_15), (ATerm) ATmakeAppl(sym__2, o_15, q_15));
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL;
  if(match_cons(t, sym__2))
    {
      r_15 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_15), r_15);
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL;
  if(match_cons(t, sym__2))
    {
      t_15 = ATgetArgument(t, 0);
      u_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_15), (ATerm) ATmakeAppl(sym_Match_1, u_15));
  return(t);
}
ATerm x_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_6 = ATgetArgument(t, 0);
      if(((ATgetType(w_6) != AT_LIST) || !(ATisEmpty(w_6))))
        _fail(t);
      {
        ATerm x_6 = ATgetArgument(t, 1);
        if(((ATgetType(x_6) != AT_LIST) || !(ATisEmpty(x_6))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm u_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_6 = ATgetArgument(t, 0);
      if(((ATgetType(y_6) == AT_LIST) && !(ATisEmpty(y_6))))
        {
          u_24 = ATgetFirst((ATermList) y_6);
          x_24 = (ATerm) ATgetNext((ATermList) y_6);
        }
      else
        _fail(t);
      {
        ATerm a_7 = ATgetArgument(t, 1);
        if(((ATgetType(a_7) == AT_LIST) && !(ATisEmpty(a_7))))
          {
            y_24 = ATgetFirst((ATermList) a_7);
            z_24 = (ATerm) ATgetNext((ATermList) a_7);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_24, y_24), (ATerm) ATmakeAppl(sym__2, x_24, z_24));
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL;
  if(match_cons(t, sym__2))
    {
      y_25 = ATgetArgument(t, 0);
      z_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_25), y_25);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm a_26 = NULL,e_26 = NULL;
  if(match_cons(t, sym__2))
    {
      a_26 = ATgetArgument(t, 0);
      e_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_26), (ATerm) ATmakeAppl(sym_Match_1, e_26));
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm c_7 = t;
  int e_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm g_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(e_7);
      {
        ATerm p_36 = NULL,q_36 = NULL;
        p_36 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm h_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        q_36 = t;
        t = SSLgetAnnotations(p_36);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_7 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) i_7) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm j_7 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(j_7) != AT_LIST) || !(ATisEmpty(j_7))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = q_36;
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
ATerm c_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  ATerm m_0 (ATerm t)
  {
    ATerm d_8 = NULL,i_8 = NULL,v_8 = NULL,x_8 = NULL,i_9 = NULL,r_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL;
    i_10 = t;
    if(match_cons(t, sym_Test_1))
      {
        h_10 = ATgetArgument(t, 0);
        t = h_10;
        if(match_cons(t, sym_Id_0))
          {
            ATerm r_7 = t;
            int s_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_t_7;
                t = m_0(t);
                ;
                LocalPopChoice(s_7);
              }
            else
              {
                t = r_7;
                {
                  ATerm u_7 = t;
                  int w_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL;
                      t = i_10;
                      t = new_0_0(t);
                      k_10 = t;
                      t = bottomup_1_0(m_0, t);
                      v_10 = t;
                      t = (ATerm) ATempty;
                      t = m_0(t);
                      w_10 = t;
                      t = (ATerm) ATinsert(CheckATermList(w_10), v_10);
                      t = m_0(t);
                      l_10 = t;
                      t = k_10;
                      t = bottomup_1_0(m_0, t);
                      u_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, u_10);
                      t = m_0(t);
                      t_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, t_10);
                      t = m_0(t);
                      n_10 = t;
                      t = h_10;
                      t = bottomup_1_0(m_0, t);
                      p_10 = t;
                      t = k_10;
                      t = bottomup_1_0(m_0, t);
                      s_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, s_10);
                      t = m_0(t);
                      r_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, r_10);
                      t = m_0(t);
                      q_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_10, q_10);
                      t = m_0(t);
                      o_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                      t = m_0(t);
                      m_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, l_10, m_10);
                      t = m_0(t);
                      ;
                      LocalPopChoice(w_7);
                    }
                  else
                    {
                      t = u_7;
                      t = i_10;
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
                    t = m_0(t);
                    ;
                    LocalPopChoice(y_7);
                  }
                else
                  {
                    t = x_7;
                    {
                      ATerm a_8 = t;
                      int b_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_10 = NULL,a_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,n_11 = NULL,o_11 = NULL,s_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
                          t = i_10;
                          t = new_0_0(t);
                          z_10 = t;
                          t = bottomup_1_0(m_0, t);
                          x_11 = t;
                          t = (ATerm) ATempty;
                          t = m_0(t);
                          y_11 = t;
                          t = (ATerm) ATinsert(CheckATermList(y_11), x_11);
                          t = m_0(t);
                          a_11 = t;
                          t = z_10;
                          t = bottomup_1_0(m_0, t);
                          w_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, w_11);
                          t = m_0(t);
                          v_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, v_11);
                          t = m_0(t);
                          d_11 = t;
                          t = h_10;
                          t = bottomup_1_0(m_0, t);
                          n_11 = t;
                          t = z_10;
                          t = bottomup_1_0(m_0, t);
                          u_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, u_11);
                          t = m_0(t);
                          s_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, s_11);
                          t = m_0(t);
                          o_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                          t = m_0(t);
                          e_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_11, e_11);
                          t = m_0(t);
                          c_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, a_11, c_11);
                          t = m_0(t);
                          ;
                          LocalPopChoice(b_8);
                        }
                      else
                        {
                          t = a_8;
                          t = i_10;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    e_10 = ATgetArgument(t, 0);
                    {
                      ATerm e_8 = t;
                      int f_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, e_10);
                          t = m_0(t);
                          ;
                          LocalPopChoice(f_8);
                        }
                      else
                        {
                          t = e_8;
                          {
                            ATerm g_8 = t;
                            int j_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL;
                                t = i_10;
                                t = new_0_0(t);
                                c_12 = t;
                                t = bottomup_1_0(m_0, t);
                                n_12 = t;
                                t = (ATerm) ATempty;
                                t = m_0(t);
                                o_12 = t;
                                t = (ATerm) ATinsert(CheckATermList(o_12), n_12);
                                t = m_0(t);
                                d_12 = t;
                                t = c_12;
                                t = bottomup_1_0(m_0, t);
                                m_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, m_12);
                                t = m_0(t);
                                l_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, l_12);
                                t = m_0(t);
                                f_12 = t;
                                t = h_10;
                                t = bottomup_1_0(m_0, t);
                                h_12 = t;
                                t = c_12;
                                t = bottomup_1_0(m_0, t);
                                k_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, k_12);
                                t = m_0(t);
                                j_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, j_12);
                                t = m_0(t);
                                i_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                t = m_0(t);
                                g_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                t = m_0(t);
                                e_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, d_12, e_12);
                                t = m_0(t);
                                ;
                                LocalPopChoice(j_8);
                              }
                            else
                              {
                                t = g_8;
                                t = i_10;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm k_8 = t;
                    int l_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
                        t = i_10;
                        t = new_0_0(t);
                        r_12 = t;
                        t = bottomup_1_0(m_0, t);
                        c_13 = t;
                        t = (ATerm) ATempty;
                        t = m_0(t);
                        d_13 = t;
                        t = (ATerm) ATinsert(CheckATermList(d_13), c_13);
                        t = m_0(t);
                        s_12 = t;
                        t = r_12;
                        t = bottomup_1_0(m_0, t);
                        b_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, b_13);
                        t = m_0(t);
                        a_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, a_13);
                        t = m_0(t);
                        u_12 = t;
                        t = h_10;
                        t = bottomup_1_0(m_0, t);
                        w_12 = t;
                        t = r_12;
                        t = bottomup_1_0(m_0, t);
                        z_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, z_12);
                        t = m_0(t);
                        y_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, y_12);
                        t = m_0(t);
                        x_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, w_12, x_12);
                        t = m_0(t);
                        v_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, u_12, v_12);
                        t = m_0(t);
                        t_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, s_12, t_12);
                        t = m_0(t);
                        ;
                        LocalPopChoice(l_8);
                      }
                    else
                      {
                        t = k_8;
                        t = i_10;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            h_10 = ATgetArgument(t, 0);
            t = h_10;
            if(match_cons(t, sym_Id_0))
              {
                ATerm m_8 = t;
                int n_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_z_7;
                    t = m_0(t);
                    ;
                    LocalPopChoice(n_8);
                  }
                else
                  {
                    t = m_8;
                    t = i_10;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm o_8 = t;
                    int q_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_t_7;
                        t = m_0(t);
                        ;
                        LocalPopChoice(q_8);
                      }
                    else
                      {
                        t = o_8;
                        t = i_10;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        e_10 = ATgetArgument(t, 0);
                        {
                          ATerm r_8 = t;
                          int s_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, e_10);
                              t = m_0(t);
                              ;
                              LocalPopChoice(s_8);
                            }
                          else
                            {
                              t = r_8;
                              t = i_10;
                            }
                        }
                      }
                    else
                      {
                        t = i_10;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                h_10 = ATgetArgument(t, 0);
                g_10 = ATgetArgument(t, 1);
                t = g_10;
                if(match_cons(t, sym_Id_0))
                  {
                    t = h_10;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = g_10;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = h_10;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                e_10 = ATgetArgument(t, 0);
                                f_10 = ATgetArgument(t, 1);
                                t = h_10;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    e_10 = ATgetArgument(t, 0);
                                    f_10 = ATgetArgument(t, 1);
                                    t = h_10;
                                  }
                                else
                                  {
                                    t = h_10;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        c_10 = ATgetArgument(t, 0);
                        d_10 = ATgetArgument(t, 1);
                        t = c_10;
                        if(match_cons(t, sym_Match_1))
                          {
                            b_10 = ATgetArgument(t, 0);
                            t = b_10;
                            if(match_cons(t, sym_Op_2))
                              {
                                z_9 = ATgetArgument(t, 0);
                                u_9 = ATgetArgument(t, 1);
                                t = h_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = g_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm t_8 = t;
                                        int w_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_z_7;
                                            t = m_0(t);
                                            ;
                                            LocalPopChoice(w_8);
                                          }
                                        else
                                          {
                                            t = t_8;
                                            t = i_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            e_10 = ATgetArgument(t, 0);
                                            f_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm c_9 = t;
                                              int d_9 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm b_15 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                  t = m_0(t);
                                                  b_15 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_10, b_15);
                                                  t = m_0(t);
                                                  ;
                                                  LocalPopChoice(d_9);
                                                }
                                              else
                                                {
                                                  t = c_9;
                                                  t = i_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                e_10 = ATgetArgument(t, 0);
                                                t = e_10;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    a_10 = ATgetArgument(t, 0);
                                                    v_9 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm e_9 = t;
                                                      int f_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, a_10, z_9);
                                                          {
                                                            ATerm g_9 = t;
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
                                                                t = g_9;
                                                              }
                                                            t = term_z_7;
                                                            t = bottomup_1_0(m_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(f_9);
                                                        }
                                                      else
                                                        {
                                                          t = e_9;
                                                          {
                                                            ATerm h_9 = t;
                                                            int j_9 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm j_15 = NULL;
                                                                t = z_9;
                                                                if((a_10 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, v_9, u_9);
                                                                t = genzip_4_0(q_0, r_0, u_0, v_0, t);
                                                                j_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_15), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, a_10, v_9)), d_10));
                                                                t = bottomup_1_0(m_0, t);
                                                                ;
                                                                LocalPopChoice(j_9);
                                                              }
                                                            else
                                                              {
                                                                t = h_9;
                                                                {
                                                                  ATerm k_9 = t;
                                                                  int l_9 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm g_16 = NULL;
                                                                      t = b_10;
                                                                      if((e_10 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, e_10);
                                                                      t = m_0(t);
                                                                      g_16 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_16, d_10);
                                                                      t = m_0(t);
                                                                      ;
                                                                      LocalPopChoice(l_9);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = k_9;
                                                                      t = i_10;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm m_9 = t;
                                                    int o_9 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm l_16 = NULL;
                                                        t = b_10;
                                                        if((e_10 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, e_10);
                                                        t = m_0(t);
                                                        l_16 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, l_16, d_10);
                                                        t = m_0(t);
                                                        ;
                                                        LocalPopChoice(o_9);
                                                      }
                                                    else
                                                      {
                                                        t = m_9;
                                                        t = i_10;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    e_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm s_9 = t;
                                                      int t_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_16 = NULL;
                                                          t = b_10;
                                                          if((e_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, e_10);
                                                          t = m_0(t);
                                                          x_16 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_16, d_10);
                                                          t = m_0(t);
                                                          ;
                                                          LocalPopChoice(t_9);
                                                        }
                                                      else
                                                        {
                                                          t = s_9;
                                                          t = i_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        e_10 = ATgetArgument(t, 0);
                                                        f_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_10 = t;
                                                          int x_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm c_17 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                              t = m_0(t);
                                                              c_17 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_10, c_17);
                                                              t = m_0(t);
                                                              ;
                                                              LocalPopChoice(x_10);
                                                            }
                                                          else
                                                            {
                                                              t = j_10;
                                                              t = i_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = i_10;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = h_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = g_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm y_10 = t;
                                        int z_11 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_z_7;
                                            t = m_0(t);
                                            ;
                                            LocalPopChoice(z_11);
                                          }
                                        else
                                          {
                                            t = y_10;
                                            t = i_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            e_10 = ATgetArgument(t, 0);
                                            f_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm a_12 = t;
                                              int b_12 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm v_17 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                  t = m_0(t);
                                                  v_17 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_10, v_17);
                                                  t = m_0(t);
                                                  ;
                                                  LocalPopChoice(b_12);
                                                }
                                              else
                                                {
                                                  t = a_12;
                                                  t = i_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                e_10 = ATgetArgument(t, 0);
                                                {
                                                  ATerm p_12 = t;
                                                  int q_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_18 = NULL;
                                                      t = b_10;
                                                      if((e_10 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, e_10);
                                                      t = m_0(t);
                                                      e_18 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_18, d_10);
                                                      t = m_0(t);
                                                      ;
                                                      LocalPopChoice(q_12);
                                                    }
                                                  else
                                                    {
                                                      t = p_12;
                                                      t = i_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    e_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm e_13 = t;
                                                      int f_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm i_18 = NULL;
                                                          t = b_10;
                                                          if((e_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, e_10);
                                                          t = m_0(t);
                                                          i_18 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_18, d_10);
                                                          t = m_0(t);
                                                          ;
                                                          LocalPopChoice(f_13);
                                                        }
                                                      else
                                                        {
                                                          t = e_13;
                                                          t = i_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        e_10 = ATgetArgument(t, 0);
                                                        f_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm g_13 = t;
                                                          int h_13 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_18 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                              t = m_0(t);
                                                              q_18 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_10, q_18);
                                                              t = m_0(t);
                                                              ;
                                                              LocalPopChoice(h_13);
                                                            }
                                                          else
                                                            {
                                                              t = g_13;
                                                              t = i_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = i_10;
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
                                b_10 = ATgetArgument(t, 0);
                                t = b_10;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    z_9 = ATgetArgument(t, 0);
                                    t = h_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = g_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm i_13 = t;
                                            int j_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_7;
                                                t = m_0(t);
                                                ;
                                                LocalPopChoice(j_13);
                                              }
                                            else
                                              {
                                                t = i_13;
                                                t = i_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                e_10 = ATgetArgument(t, 0);
                                                f_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm k_13 = t;
                                                  int l_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm c_19 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                      t = m_0(t);
                                                      c_19 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_10, c_19);
                                                      t = m_0(t);
                                                      ;
                                                      LocalPopChoice(l_13);
                                                    }
                                                  else
                                                    {
                                                      t = k_13;
                                                      t = i_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm m_13 = t;
                                                int n_13 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm o_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(n_13);
                                                    {
                                                      ATerm p_13 = t;
                                                      int q_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm q_19 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, b_10);
                                                          t = m_0(t);
                                                          q_19 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, q_19, d_10);
                                                          t = m_0(t);
                                                          ;
                                                          LocalPopChoice(q_13);
                                                        }
                                                      else
                                                        {
                                                          t = p_13;
                                                          t = i_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = m_13;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        e_10 = ATgetArgument(t, 0);
                                                        t = e_10;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            a_10 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm r_13 = t;
                                                              int s_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm u_19 = NULL,a_20 = NULL;
                                                                  t = z_9;
                                                                  if((a_10 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, a_10);
                                                                  t = m_0(t);
                                                                  a_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, a_20);
                                                                  t = m_0(t);
                                                                  u_19 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_19, d_10);
                                                                  t = m_0(t);
                                                                  ;
                                                                  LocalPopChoice(s_13);
                                                                }
                                                              else
                                                                {
                                                                  t = r_13;
                                                                  t = i_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = i_10;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            e_10 = ATgetArgument(t, 0);
                                                            f_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm t_13 = t;
                                                              int u_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm m_20 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                                  t = m_0(t);
                                                                  m_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, e_10, m_20);
                                                                  t = m_0(t);
                                                                  ;
                                                                  LocalPopChoice(u_13);
                                                                }
                                                              else
                                                                {
                                                                  t = t_13;
                                                                  t = i_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = i_10;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = h_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = g_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm v_13 = t;
                                            int w_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_7;
                                                t = m_0(t);
                                                ;
                                                LocalPopChoice(w_13);
                                              }
                                            else
                                              {
                                                t = v_13;
                                                t = i_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                e_10 = ATgetArgument(t, 0);
                                                f_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm y_13 = t;
                                                  int z_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm d_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                      t = m_0(t);
                                                      d_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_10, d_21);
                                                      t = m_0(t);
                                                      ;
                                                      LocalPopChoice(z_13);
                                                    }
                                                  else
                                                    {
                                                      t = y_13;
                                                      t = i_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm a_14 = t;
                                                int c_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm d_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(c_14);
                                                    {
                                                      ATerm g_14 = t;
                                                      int h_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm l_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, b_10);
                                                          t = m_0(t);
                                                          l_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, l_21, d_10);
                                                          t = m_0(t);
                                                          ;
                                                          LocalPopChoice(h_14);
                                                        }
                                                      else
                                                        {
                                                          t = g_14;
                                                          t = i_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = a_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        e_10 = ATgetArgument(t, 0);
                                                        f_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_14 = t;
                                                          int k_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm w_21 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                              t = m_0(t);
                                                              w_21 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_10, w_21);
                                                              t = m_0(t);
                                                              ;
                                                              LocalPopChoice(k_14);
                                                            }
                                                          else
                                                            {
                                                              t = j_14;
                                                              t = i_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = i_10;
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
                                    b_10 = ATgetArgument(t, 0);
                                    w_9 = ATgetArgument(t, 1);
                                    x_9 = ATgetArgument(t, 2);
                                    t = h_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = g_10;
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
                                                t = m_0(t);
                                                ;
                                                LocalPopChoice(m_14);
                                              }
                                            else
                                              {
                                                t = l_14;
                                                t = i_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                e_10 = ATgetArgument(t, 0);
                                                f_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm n_14 = t;
                                                  int o_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                      t = m_0(t);
                                                      o_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_10, o_22);
                                                      t = m_0(t);
                                                      ;
                                                      LocalPopChoice(o_14);
                                                    }
                                                  else
                                                    {
                                                      t = n_14;
                                                      t = i_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm q_14 = t;
                                                int s_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm u_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(s_14);
                                                    {
                                                      ATerm v_14 = t;
                                                      int w_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm u_22 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, b_10, w_9, x_9);
                                                          t = m_0(t);
                                                          u_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_22, d_10);
                                                          t = m_0(t);
                                                          ;
                                                          LocalPopChoice(w_14);
                                                        }
                                                      else
                                                        {
                                                          t = v_14;
                                                          t = i_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = q_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        e_10 = ATgetArgument(t, 0);
                                                        f_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm x_14 = t;
                                                          int d_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                              t = m_0(t);
                                                              b_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_10, b_23);
                                                              t = m_0(t);
                                                              ;
                                                              LocalPopChoice(d_15);
                                                            }
                                                          else
                                                            {
                                                              t = x_14;
                                                              t = i_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = i_10;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = h_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = g_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm e_15 = t;
                                            int f_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_7;
                                                t = m_0(t);
                                                ;
                                                LocalPopChoice(f_15);
                                              }
                                            else
                                              {
                                                t = e_15;
                                                t = i_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                e_10 = ATgetArgument(t, 0);
                                                f_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm g_15 = t;
                                                  int h_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm s_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                      t = m_0(t);
                                                      s_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_10, s_23);
                                                      t = m_0(t);
                                                      ;
                                                      LocalPopChoice(h_15);
                                                    }
                                                  else
                                                    {
                                                      t = g_15;
                                                      t = i_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    e_10 = ATgetArgument(t, 0);
                                                    f_10 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm i_15 = t;
                                                      int k_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                          t = m_0(t);
                                                          x_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, e_10, x_23);
                                                          t = m_0(t);
                                                          ;
                                                          LocalPopChoice(k_15);
                                                        }
                                                      else
                                                        {
                                                          t = i_15;
                                                          t = i_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = i_10;
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
                            c_10 = ATgetArgument(t, 0);
                            t = c_10;
                            if(match_cons(t, sym_Op_2))
                              {
                                b_10 = ATgetArgument(t, 0);
                                w_9 = ATgetArgument(t, 1);
                                t = h_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = g_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm l_15 = t;
                                        int n_15 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_z_7;
                                            t = m_0(t);
                                            ;
                                            LocalPopChoice(n_15);
                                          }
                                        else
                                          {
                                            t = l_15;
                                            t = i_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            e_10 = ATgetArgument(t, 0);
                                            f_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm v_15 = t;
                                              int w_15 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm o_24 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                  t = m_0(t);
                                                  o_24 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_10, o_24);
                                                  t = m_0(t);
                                                  ;
                                                  LocalPopChoice(w_15);
                                                }
                                              else
                                                {
                                                  t = v_15;
                                                  t = i_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                e_10 = ATgetArgument(t, 0);
                                                t = e_10;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    a_10 = ATgetArgument(t, 0);
                                                    v_9 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm x_15 = t;
                                                      int y_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, a_10, b_10);
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
                                                            t = term_z_7;
                                                            t = bottomup_1_0(m_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(y_15);
                                                        }
                                                      else
                                                        {
                                                          t = x_15;
                                                          {
                                                            ATerm a_16 = t;
                                                            int b_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm t_24 = NULL;
                                                                t = b_10;
                                                                if((a_10 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, v_9, w_9);
                                                                t = genzip_4_0(x_0, y_0, z_0, a_1, t);
                                                                t_24 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_24), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, a_10, v_9)));
                                                                t = bottomup_1_0(m_0, t);
                                                                ;
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
                                                                      t = c_10;
                                                                      if((e_10 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, e_10);
                                                                      t = m_0(t);
                                                                      ;
                                                                      LocalPopChoice(d_16);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = c_16;
                                                                      t = i_10;
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
                                                        t = c_10;
                                                        if((e_10 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, e_10);
                                                        t = m_0(t);
                                                        ;
                                                        LocalPopChoice(f_16);
                                                      }
                                                    else
                                                      {
                                                        t = e_16;
                                                        t = i_10;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    e_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm h_16 = t;
                                                      int i_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = c_10;
                                                          if((e_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, e_10);
                                                          t = m_0(t);
                                                          ;
                                                          LocalPopChoice(i_16);
                                                        }
                                                      else
                                                        {
                                                          t = h_16;
                                                          t = i_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        e_10 = ATgetArgument(t, 0);
                                                        f_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_16 = t;
                                                          int k_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                              t = m_0(t);
                                                              p_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_10, p_26);
                                                              t = m_0(t);
                                                              ;
                                                              LocalPopChoice(k_16);
                                                            }
                                                          else
                                                            {
                                                              t = j_16;
                                                              t = i_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = i_10;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = h_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = g_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm m_16 = t;
                                        int n_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_z_7;
                                            t = m_0(t);
                                            ;
                                            LocalPopChoice(n_16);
                                          }
                                        else
                                          {
                                            t = m_16;
                                            t = i_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            e_10 = ATgetArgument(t, 0);
                                            f_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm o_16 = t;
                                              int p_16 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm y_26 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                  t = m_0(t);
                                                  y_26 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_10, y_26);
                                                  t = m_0(t);
                                                  ;
                                                  LocalPopChoice(p_16);
                                                }
                                              else
                                                {
                                                  t = o_16;
                                                  t = i_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                e_10 = ATgetArgument(t, 0);
                                                {
                                                  ATerm q_16 = t;
                                                  int r_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = c_10;
                                                      if((e_10 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, e_10);
                                                      t = m_0(t);
                                                      ;
                                                      LocalPopChoice(r_16);
                                                    }
                                                  else
                                                    {
                                                      t = q_16;
                                                      t = i_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    e_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm s_16 = t;
                                                      int t_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = c_10;
                                                          if((e_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, e_10);
                                                          t = m_0(t);
                                                          ;
                                                          LocalPopChoice(t_16);
                                                        }
                                                      else
                                                        {
                                                          t = s_16;
                                                          t = i_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        e_10 = ATgetArgument(t, 0);
                                                        f_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm u_16 = t;
                                                          int v_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                              t = m_0(t);
                                                              h_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_10, h_27);
                                                              t = m_0(t);
                                                              ;
                                                              LocalPopChoice(v_16);
                                                            }
                                                          else
                                                            {
                                                              t = u_16;
                                                              t = i_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = i_10;
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
                                    b_10 = ATgetArgument(t, 0);
                                    t = h_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = g_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm w_16 = t;
                                            int y_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_7;
                                                t = m_0(t);
                                                ;
                                                LocalPopChoice(y_16);
                                              }
                                            else
                                              {
                                                t = w_16;
                                                t = i_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                e_10 = ATgetArgument(t, 0);
                                                f_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm z_16 = t;
                                                  int a_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm q_27 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                      t = m_0(t);
                                                      q_27 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_10, q_27);
                                                      t = m_0(t);
                                                      ;
                                                      LocalPopChoice(a_17);
                                                    }
                                                  else
                                                    {
                                                      t = z_16;
                                                      t = i_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm b_17 = t;
                                                int d_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm e_17 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(d_17);
                                                    {
                                                      ATerm f_17 = t;
                                                      int g_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_10);
                                                          t = m_0(t);
                                                          ;
                                                          LocalPopChoice(g_17);
                                                        }
                                                      else
                                                        {
                                                          t = f_17;
                                                          t = i_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = b_17;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        e_10 = ATgetArgument(t, 0);
                                                        t = e_10;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            a_10 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm h_17 = t;
                                                              int i_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm x_27 = NULL;
                                                                  t = b_10;
                                                                  if((a_10 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, a_10);
                                                                  t = m_0(t);
                                                                  x_27 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, x_27);
                                                                  t = m_0(t);
                                                                  ;
                                                                  LocalPopChoice(i_17);
                                                                }
                                                              else
                                                                {
                                                                  t = h_17;
                                                                  t = i_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = i_10;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            e_10 = ATgetArgument(t, 0);
                                                            f_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm j_17 = t;
                                                              int k_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm h_28 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                                  t = m_0(t);
                                                                  h_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, e_10, h_28);
                                                                  t = m_0(t);
                                                                  ;
                                                                  LocalPopChoice(k_17);
                                                                }
                                                              else
                                                                {
                                                                  t = j_17;
                                                                  t = i_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = i_10;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = h_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = g_10;
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
                                                t = m_0(t);
                                                ;
                                                LocalPopChoice(m_17);
                                              }
                                            else
                                              {
                                                t = l_17;
                                                t = i_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                e_10 = ATgetArgument(t, 0);
                                                f_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm n_17 = t;
                                                  int o_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm s_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                      t = m_0(t);
                                                      s_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_10, s_28);
                                                      t = m_0(t);
                                                      ;
                                                      LocalPopChoice(o_17);
                                                    }
                                                  else
                                                    {
                                                      t = n_17;
                                                      t = i_10;
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
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_10);
                                                          t = m_0(t);
                                                          ;
                                                          LocalPopChoice(t_17);
                                                        }
                                                      else
                                                        {
                                                          t = s_17;
                                                          t = i_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = p_17;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        e_10 = ATgetArgument(t, 0);
                                                        f_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm u_17 = t;
                                                          int w_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm d_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                              t = m_0(t);
                                                              d_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_10, d_29);
                                                              t = m_0(t);
                                                              ;
                                                              LocalPopChoice(w_17);
                                                            }
                                                          else
                                                            {
                                                              t = u_17;
                                                              t = i_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = i_10;
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
                                    d_10 = ATgetArgument(t, 1);
                                    y_9 = ATgetArgument(t, 2);
                                    t = h_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = g_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm x_17 = t;
                                            int y_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_z_7;
                                                t = m_0(t);
                                                ;
                                                LocalPopChoice(y_17);
                                              }
                                            else
                                              {
                                                t = x_17;
                                                t = i_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                e_10 = ATgetArgument(t, 0);
                                                f_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm z_17 = t;
                                                  int a_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                      t = m_0(t);
                                                      o_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_10, o_29);
                                                      t = m_0(t);
                                                      ;
                                                      LocalPopChoice(a_18);
                                                    }
                                                  else
                                                    {
                                                      t = z_17;
                                                      t = i_10;
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
                                                      ATerm f_18 = t;
                                                      int g_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, c_10, d_10, y_9);
                                                          t = m_0(t);
                                                          ;
                                                          LocalPopChoice(g_18);
                                                        }
                                                      else
                                                        {
                                                          t = f_18;
                                                          t = i_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = b_18;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        e_10 = ATgetArgument(t, 0);
                                                        f_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_18 = t;
                                                          int j_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                              t = m_0(t);
                                                              b_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_10, b_30);
                                                              t = m_0(t);
                                                              ;
                                                              LocalPopChoice(j_18);
                                                            }
                                                          else
                                                            {
                                                              t = h_18;
                                                              t = i_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = i_10;
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
                                        c_10 = ATgetArgument(t, 0);
                                        d_10 = ATgetArgument(t, 1);
                                        t = h_10;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = g_10;
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
                                                    t = m_0(t);
                                                    ;
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
                                                          ATerm t_30 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_10, d_10);
                                                          t = m_0(t);
                                                          t_30 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, c_10, t_30);
                                                          t = m_0(t);
                                                          ;
                                                          LocalPopChoice(n_18);
                                                        }
                                                      else
                                                        {
                                                          t = m_18;
                                                          t = i_10;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    e_10 = ATgetArgument(t, 0);
                                                    f_10 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm o_18 = t;
                                                      int p_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm y_30 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                          t = m_0(t);
                                                          y_30 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_10, y_30);
                                                          t = m_0(t);
                                                          ;
                                                          LocalPopChoice(p_18);
                                                        }
                                                      else
                                                        {
                                                          t = o_18;
                                                          {
                                                            ATerm r_18 = t;
                                                            int s_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm c_31 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, h_10, d_10);
                                                                t = m_0(t);
                                                                c_31 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, c_10, c_31);
                                                                t = m_0(t);
                                                                ;
                                                                LocalPopChoice(s_18);
                                                              }
                                                            else
                                                              {
                                                                t = r_18;
                                                                t = i_10;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        e_10 = ATgetArgument(t, 0);
                                                        f_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_18 = t;
                                                          int u_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_10, d_10);
                                                              t = m_0(t);
                                                              h_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, c_10, h_31);
                                                              t = m_0(t);
                                                              ;
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
                                                                    ATerm l_31 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                                    t = m_0(t);
                                                                    l_31 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, e_10, l_31);
                                                                    t = m_0(t);
                                                                    ;
                                                                    LocalPopChoice(w_18);
                                                                  }
                                                                else
                                                                  {
                                                                    t = v_18;
                                                                    t = i_10;
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
                                                            ATerm q_31 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, h_10, d_10);
                                                            t = m_0(t);
                                                            q_31 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, c_10, q_31);
                                                            t = m_0(t);
                                                            ;
                                                            LocalPopChoice(y_18);
                                                          }
                                                        else
                                                          {
                                                            t = x_18;
                                                            t = i_10;
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
                                            c_10 = ATgetArgument(t, 0);
                                            d_10 = ATgetArgument(t, 1);
                                            t = h_10;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = g_10;
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
                                                        t = m_0(t);
                                                        ;
                                                        LocalPopChoice(a_19);
                                                      }
                                                    else
                                                      {
                                                        t = z_18;
                                                        {
                                                          ATerm b_19 = t;
                                                          int d_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm c_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_10, d_10);
                                                              t = m_0(t);
                                                              c_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, c_10, c_32);
                                                              t = m_0(t);
                                                              ;
                                                              LocalPopChoice(d_19);
                                                            }
                                                          else
                                                            {
                                                              t = b_19;
                                                              t = i_10;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        e_10 = ATgetArgument(t, 0);
                                                        f_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm e_19 = t;
                                                          int f_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                              t = m_0(t);
                                                              h_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, e_10, h_32);
                                                              t = m_0(t);
                                                              ;
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
                                                                    ATerm l_32 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, h_10, d_10);
                                                                    t = m_0(t);
                                                                    l_32 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, c_10, l_32);
                                                                    t = m_0(t);
                                                                    ;
                                                                    LocalPopChoice(h_19);
                                                                  }
                                                                else
                                                                  {
                                                                    t = g_19;
                                                                    t = i_10;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            e_10 = ATgetArgument(t, 0);
                                                            f_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm i_19 = t;
                                                              int j_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm q_32 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_10, d_10);
                                                                  t = m_0(t);
                                                                  q_32 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, c_10, q_32);
                                                                  t = m_0(t);
                                                                  ;
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
                                                                        ATerm u_32 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                                        t = m_0(t);
                                                                        u_32 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, e_10, u_32);
                                                                        t = m_0(t);
                                                                        ;
                                                                        LocalPopChoice(l_19);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = k_19;
                                                                        t = i_10;
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
                                                                ATerm b_33 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, h_10, d_10);
                                                                t = m_0(t);
                                                                b_33 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, c_10, b_33);
                                                                t = m_0(t);
                                                                ;
                                                                LocalPopChoice(n_19);
                                                              }
                                                            else
                                                              {
                                                                t = m_19;
                                                                t = i_10;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = h_10;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = g_10;
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
                                                        t = m_0(t);
                                                        ;
                                                        LocalPopChoice(p_19);
                                                      }
                                                    else
                                                      {
                                                        t = o_19;
                                                        t = i_10;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        e_10 = ATgetArgument(t, 0);
                                                        f_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm r_19 = t;
                                                          int s_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                              t = m_0(t);
                                                              q_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, e_10, q_33);
                                                              t = m_0(t);
                                                              ;
                                                              LocalPopChoice(s_19);
                                                            }
                                                          else
                                                            {
                                                              t = r_19;
                                                              t = i_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            e_10 = ATgetArgument(t, 0);
                                                            f_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm t_19 = t;
                                                              int v_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_33 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_10);
                                                                  t = m_0(t);
                                                                  y_33 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, e_10, y_33);
                                                                  t = m_0(t);
                                                                  ;
                                                                  LocalPopChoice(v_19);
                                                                }
                                                              else
                                                                {
                                                                  t = t_19;
                                                                  t = i_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = i_10;
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
                    h_10 = ATgetArgument(t, 0);
                    g_10 = ATgetArgument(t, 1);
                    t = g_10;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = h_10;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm w_19 = t;
                            int x_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_t_7;
                                t = m_0(t);
                                ;
                                LocalPopChoice(x_19);
                              }
                            else
                              {
                                t = w_19;
                                t = h_10;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = g_10;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    e_10 = ATgetArgument(t, 0);
                                    f_10 = ATgetArgument(t, 1);
                                    t = h_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        e_10 = ATgetArgument(t, 0);
                                        t = h_10;
                                      }
                                    else
                                      {
                                        t = h_10;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = h_10;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm y_19 = t;
                            int z_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_t_7;
                                t = m_0(t);
                                ;
                                LocalPopChoice(z_19);
                              }
                            else
                              {
                                t = y_19;
                                {
                                  ATerm b_20 = t;
                                  int c_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = g_10;
                                      if((h_10 != t))
                                        {
                                          _fail(t);
                                        }
                                      ;
                                      LocalPopChoice(c_20);
                                    }
                                  else
                                    {
                                      t = b_20;
                                      t = i_10;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = g_10;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    e_10 = ATgetArgument(t, 0);
                                    f_10 = ATgetArgument(t, 1);
                                    {
                                      ATerm d_20 = t;
                                      int e_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm h_36 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, f_10, g_10);
                                          t = m_0(t);
                                          h_36 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, e_10, h_36);
                                          t = m_0(t);
                                          ;
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
                                                t = g_10;
                                                if((h_10 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                ;
                                                LocalPopChoice(g_20);
                                              }
                                            else
                                              {
                                                t = f_20;
                                                t = i_10;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        e_10 = ATgetArgument(t, 0);
                                        {
                                          ATerm h_20 = t;
                                          int i_20 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = g_10;
                                              if((h_10 != t))
                                                {
                                                  _fail(t);
                                                }
                                              ;
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
                                                    t = e_10;
                                                    t = topdown_1_0(b_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, e_10);
                                                    t = bottomup_1_0(m_0, t);
                                                    ;
                                                    LocalPopChoice(k_20);
                                                  }
                                                else
                                                  {
                                                    t = j_20;
                                                    t = i_10;
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
                                            t = g_10;
                                            if((h_10 != t))
                                              {
                                                _fail(t);
                                              }
                                            ;
                                            LocalPopChoice(n_20);
                                          }
                                        else
                                          {
                                            t = l_20;
                                            t = i_10;
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
                        h_10 = ATgetArgument(t, 0);
                        g_10 = ATgetArgument(t, 1);
                        t = g_10;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = h_10;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm o_20 = t;
                                int p_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_t_7;
                                    t = m_0(t);
                                    ;
                                    LocalPopChoice(p_20);
                                  }
                                else
                                  {
                                    t = o_20;
                                    t = g_10;
                                  }
                              }
                            else
                              {
                                ATerm q_20 = t;
                                int r_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_t_7;
                                    t = m_0(t);
                                    ;
                                    LocalPopChoice(r_20);
                                  }
                                else
                                  {
                                    t = q_20;
                                    t = i_10;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = h_10;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm s_20 = t;
                                    int t_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_z_7;
                                        t = m_0(t);
                                        ;
                                        LocalPopChoice(t_20);
                                      }
                                    else
                                      {
                                        t = s_20;
                                        t = g_10;
                                      }
                                  }
                                else
                                  {
                                    ATerm u_20 = t;
                                    int v_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_z_7;
                                        t = m_0(t);
                                        ;
                                        LocalPopChoice(v_20);
                                      }
                                    else
                                      {
                                        t = u_20;
                                        t = i_10;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    c_10 = ATgetArgument(t, 0);
                                    d_10 = ATgetArgument(t, 1);
                                    t = h_10;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = g_10;
                                      }
                                    else
                                      {
                                        ATerm w_20 = t;
                                        int x_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm p_37 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, h_10, c_10);
                                            t = conc_0_0(t);
                                            p_37 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, p_37, d_10);
                                            t = bottomup_1_0(m_0, t);
                                            ;
                                            LocalPopChoice(x_20);
                                          }
                                        else
                                          {
                                            t = w_20;
                                            t = i_10;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = h_10;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = g_10;
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
                        ATerm y_20 = t;
                        int z_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm a_21 = ATgetArgument(t, 0);
                                g_10 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(z_20);
                            t = g_10;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm b_21 = t;
                                int c_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_t_7;
                                    t = m_0(t);
                                    ;
                                    LocalPopChoice(c_21);
                                  }
                                else
                                  {
                                    t = b_21;
                                    t = i_10;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm e_21 = t;
                                    int f_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_z_7;
                                        t = m_0(t);
                                        ;
                                        LocalPopChoice(f_21);
                                      }
                                    else
                                      {
                                        t = e_21;
                                        t = i_10;
                                      }
                                  }
                                else
                                  {
                                    t = i_10;
                                  }
                              }
                          }
                        else
                          {
                            t = y_20;
                            if(match_cons(t, sym_All_1))
                              {
                                h_10 = ATgetArgument(t, 0);
                                t = h_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm g_21 = t;
                                    int h_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_t_7;
                                        t = m_0(t);
                                        ;
                                        LocalPopChoice(h_21);
                                      }
                                    else
                                      {
                                        t = g_21;
                                        t = i_10;
                                      }
                                  }
                                else
                                  {
                                    t = i_10;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    h_10 = ATgetArgument(t, 0);
                                    t = h_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm i_21 = t;
                                        int j_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_t_7;
                                            t = m_0(t);
                                            ;
                                            LocalPopChoice(j_21);
                                          }
                                        else
                                          {
                                            t = i_21;
                                            {
                                              ATerm k_21 = t;
                                              int m_21 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm a_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL;
                                                  t = i_10;
                                                  t = new_0_0(t);
                                                  a_38 = t;
                                                  t = bottomup_1_0(m_0, t);
                                                  q_38 = t;
                                                  t = (ATerm) ATempty;
                                                  t = m_0(t);
                                                  r_38 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(r_38), q_38);
                                                  t = m_0(t);
                                                  c_38 = t;
                                                  t = a_38;
                                                  t = bottomup_1_0(m_0, t);
                                                  p_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, p_38);
                                                  t = m_0(t);
                                                  k_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, k_38);
                                                  t = m_0(t);
                                                  e_38 = t;
                                                  t = h_10;
                                                  t = bottomup_1_0(m_0, t);
                                                  g_38 = t;
                                                  t = a_38;
                                                  t = bottomup_1_0(m_0, t);
                                                  j_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, j_38);
                                                  t = m_0(t);
                                                  i_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, i_38);
                                                  t = m_0(t);
                                                  h_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_38, h_38);
                                                  t = m_0(t);
                                                  f_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_38, f_38);
                                                  t = m_0(t);
                                                  d_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, c_38, d_38);
                                                  t = m_0(t);
                                                  ;
                                                  LocalPopChoice(m_21);
                                                }
                                              else
                                                {
                                                  t = k_21;
                                                  t = i_10;
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
                                                t = m_0(t);
                                                ;
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
                                                      ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL,z_38 = NULL,b_39 = NULL,e_39 = NULL,f_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL;
                                                      t = i_10;
                                                      t = new_0_0(t);
                                                      v_38 = t;
                                                      t = bottomup_1_0(m_0, t);
                                                      s_39 = t;
                                                      t = (ATerm) ATempty;
                                                      t = m_0(t);
                                                      t_39 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(t_39), s_39);
                                                      t = m_0(t);
                                                      w_38 = t;
                                                      t = v_38;
                                                      t = bottomup_1_0(m_0, t);
                                                      r_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, r_39);
                                                      t = m_0(t);
                                                      k_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, k_39);
                                                      t = m_0(t);
                                                      z_38 = t;
                                                      t = h_10;
                                                      t = bottomup_1_0(m_0, t);
                                                      e_39 = t;
                                                      t = v_38;
                                                      t = bottomup_1_0(m_0, t);
                                                      j_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, j_39);
                                                      t = m_0(t);
                                                      i_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, i_39);
                                                      t = m_0(t);
                                                      f_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_39, f_39);
                                                      t = m_0(t);
                                                      b_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_38, b_39);
                                                      t = m_0(t);
                                                      x_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, w_38, x_38);
                                                      t = m_0(t);
                                                      ;
                                                      LocalPopChoice(q_21);
                                                    }
                                                  else
                                                    {
                                                      t = p_21;
                                                      t = i_10;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                e_10 = ATgetArgument(t, 0);
                                                f_10 = ATgetArgument(t, 1);
                                                t = f_10;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    i_8 = ATgetArgument(t, 0);
                                                    x_8 = ATgetArgument(t, 1);
                                                    t = i_8;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        v_8 = ATgetArgument(t, 0);
                                                        t = e_10;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            a_10 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm r_21 = t;
                                                              int s_21 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm b_40 = NULL,c_40 = NULL,e_40 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, v_8);
                                                                  t = m_0(t);
                                                                  e_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_40, x_8);
                                                                  t = m_0(t);
                                                                  c_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_10, c_40);
                                                                  t = m_0(t);
                                                                  b_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, b_40);
                                                                  t = m_0(t);
                                                                  ;
                                                                  LocalPopChoice(s_21);
                                                                }
                                                              else
                                                                {
                                                                  t = r_21;
                                                                  {
                                                                    ATerm t_21 = t;
                                                                    int u_21 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,r_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL;
                                                                        t = i_10;
                                                                        t = new_0_0(t);
                                                                        j_40 = t;
                                                                        t = bottomup_1_0(m_0, t);
                                                                        x_40 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = m_0(t);
                                                                        y_40 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(y_40), x_40);
                                                                        t = m_0(t);
                                                                        k_40 = t;
                                                                        t = j_40;
                                                                        t = bottomup_1_0(m_0, t);
                                                                        w_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, w_40);
                                                                        t = m_0(t);
                                                                        v_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, v_40);
                                                                        t = m_0(t);
                                                                        m_40 = t;
                                                                        t = h_10;
                                                                        t = bottomup_1_0(m_0, t);
                                                                        o_40 = t;
                                                                        t = j_40;
                                                                        t = bottomup_1_0(m_0, t);
                                                                        u_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, u_40);
                                                                        t = m_0(t);
                                                                        t_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, t_40);
                                                                        t = m_0(t);
                                                                        r_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, o_40, r_40);
                                                                        t = m_0(t);
                                                                        n_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, m_40, n_40);
                                                                        t = m_0(t);
                                                                        l_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, k_40, l_40);
                                                                        t = m_0(t);
                                                                        ;
                                                                        LocalPopChoice(u_21);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_21;
                                                                        t = i_10;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm v_21 = t;
                                                            int x_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,g_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,q_41 = NULL,r_41 = NULL,v_41 = NULL,z_41 = NULL,c_42 = NULL;
                                                                t = i_10;
                                                                t = new_0_0(t);
                                                                b_41 = t;
                                                                t = bottomup_1_0(m_0, t);
                                                                z_41 = t;
                                                                t = (ATerm) ATempty;
                                                                t = m_0(t);
                                                                c_42 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(c_42), z_41);
                                                                t = m_0(t);
                                                                c_41 = t;
                                                                t = b_41;
                                                                t = bottomup_1_0(m_0, t);
                                                                v_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, v_41);
                                                                t = m_0(t);
                                                                r_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, r_41);
                                                                t = m_0(t);
                                                                g_41 = t;
                                                                t = h_10;
                                                                t = bottomup_1_0(m_0, t);
                                                                k_41 = t;
                                                                t = b_41;
                                                                t = bottomup_1_0(m_0, t);
                                                                q_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, q_41);
                                                                t = m_0(t);
                                                                m_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, m_41);
                                                                t = m_0(t);
                                                                l_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, k_41, l_41);
                                                                t = m_0(t);
                                                                j_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, g_41, j_41);
                                                                t = m_0(t);
                                                                d_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, c_41, d_41);
                                                                t = m_0(t);
                                                                ;
                                                                LocalPopChoice(x_21);
                                                              }
                                                            else
                                                              {
                                                                t = v_21;
                                                                t = i_10;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = e_10;
                                                        {
                                                          ATerm y_21 = t;
                                                          int z_21 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm k_42 = NULL,n_42 = NULL,p_42 = NULL,q_42 = NULL,y_42 = NULL,z_42 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL,k_43 = NULL;
                                                              t = i_10;
                                                              t = new_0_0(t);
                                                              k_42 = t;
                                                              t = bottomup_1_0(m_0, t);
                                                              i_43 = t;
                                                              t = (ATerm) ATempty;
                                                              t = m_0(t);
                                                              k_43 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(k_43), i_43);
                                                              t = m_0(t);
                                                              n_42 = t;
                                                              t = k_42;
                                                              t = bottomup_1_0(m_0, t);
                                                              h_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, h_43);
                                                              t = m_0(t);
                                                              g_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, g_43);
                                                              t = m_0(t);
                                                              q_42 = t;
                                                              t = h_10;
                                                              t = bottomup_1_0(m_0, t);
                                                              z_42 = t;
                                                              t = k_42;
                                                              t = bottomup_1_0(m_0, t);
                                                              f_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, f_43);
                                                              t = m_0(t);
                                                              e_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, e_43);
                                                              t = m_0(t);
                                                              d_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_42, d_43);
                                                              t = m_0(t);
                                                              y_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, q_42, y_42);
                                                              t = m_0(t);
                                                              p_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, n_42, p_42);
                                                              t = m_0(t);
                                                              ;
                                                              LocalPopChoice(z_21);
                                                            }
                                                          else
                                                            {
                                                              t = y_21;
                                                              t = i_10;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = e_10;
                                                    {
                                                      ATerm a_22 = t;
                                                      int b_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL;
                                                          t = i_10;
                                                          t = new_0_0(t);
                                                          n_43 = t;
                                                          t = bottomup_1_0(m_0, t);
                                                          y_43 = t;
                                                          t = (ATerm) ATempty;
                                                          t = m_0(t);
                                                          z_43 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(z_43), y_43);
                                                          t = m_0(t);
                                                          o_43 = t;
                                                          t = n_43;
                                                          t = bottomup_1_0(m_0, t);
                                                          x_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, x_43);
                                                          t = m_0(t);
                                                          w_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, w_43);
                                                          t = m_0(t);
                                                          q_43 = t;
                                                          t = h_10;
                                                          t = bottomup_1_0(m_0, t);
                                                          s_43 = t;
                                                          t = n_43;
                                                          t = bottomup_1_0(m_0, t);
                                                          v_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, v_43);
                                                          t = m_0(t);
                                                          u_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, u_43);
                                                          t = m_0(t);
                                                          t_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, s_43, t_43);
                                                          t = m_0(t);
                                                          r_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, q_43, r_43);
                                                          t = m_0(t);
                                                          p_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, o_43, p_43);
                                                          t = m_0(t);
                                                          ;
                                                          LocalPopChoice(b_22);
                                                        }
                                                      else
                                                        {
                                                          t = a_22;
                                                          t = i_10;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    e_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm c_22 = t;
                                                      int d_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, e_10);
                                                          t = m_0(t);
                                                          ;
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
                                                                ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL,r_44 = NULL;
                                                                t = i_10;
                                                                t = new_0_0(t);
                                                                d_44 = t;
                                                                t = bottomup_1_0(m_0, t);
                                                                o_44 = t;
                                                                t = (ATerm) ATempty;
                                                                t = m_0(t);
                                                                r_44 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(r_44), o_44);
                                                                t = m_0(t);
                                                                e_44 = t;
                                                                t = d_44;
                                                                t = bottomup_1_0(m_0, t);
                                                                n_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, n_44);
                                                                t = m_0(t);
                                                                m_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, m_44);
                                                                t = m_0(t);
                                                                g_44 = t;
                                                                t = h_10;
                                                                t = bottomup_1_0(m_0, t);
                                                                i_44 = t;
                                                                t = d_44;
                                                                t = bottomup_1_0(m_0, t);
                                                                l_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, l_44);
                                                                t = m_0(t);
                                                                k_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, k_44);
                                                                t = m_0(t);
                                                                j_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_44, j_44);
                                                                t = m_0(t);
                                                                h_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, g_44, h_44);
                                                                t = m_0(t);
                                                                f_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, e_44, f_44);
                                                                t = m_0(t);
                                                                ;
                                                                LocalPopChoice(f_22);
                                                              }
                                                            else
                                                              {
                                                                t = e_22;
                                                                t = i_10;
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
                                                        ATerm u_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL;
                                                        t = i_10;
                                                        t = new_0_0(t);
                                                        u_44 = t;
                                                        t = bottomup_1_0(m_0, t);
                                                        i_45 = t;
                                                        t = (ATerm) ATempty;
                                                        t = m_0(t);
                                                        j_45 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(j_45), i_45);
                                                        t = m_0(t);
                                                        y_44 = t;
                                                        t = u_44;
                                                        t = bottomup_1_0(m_0, t);
                                                        h_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, h_45);
                                                        t = m_0(t);
                                                        g_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, g_45);
                                                        t = m_0(t);
                                                        a_45 = t;
                                                        t = h_10;
                                                        t = bottomup_1_0(m_0, t);
                                                        c_45 = t;
                                                        t = u_44;
                                                        t = bottomup_1_0(m_0, t);
                                                        f_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, f_45);
                                                        t = m_0(t);
                                                        e_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, e_45);
                                                        t = m_0(t);
                                                        d_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, c_45, d_45);
                                                        t = m_0(t);
                                                        b_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, a_45, b_45);
                                                        t = m_0(t);
                                                        z_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, y_44, z_44);
                                                        t = m_0(t);
                                                        ;
                                                        LocalPopChoice(h_22);
                                                      }
                                                    else
                                                      {
                                                        t = g_22;
                                                        t = i_10;
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
                                        h_10 = ATgetArgument(t, 0);
                                        t = h_10;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm i_22 = t;
                                            int j_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_t_7;
                                                t = m_0(t);
                                                ;
                                                LocalPopChoice(j_22);
                                              }
                                            else
                                              {
                                                t = i_22;
                                                t = i_10;
                                              }
                                          }
                                        else
                                          {
                                            t = i_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            h_10 = ATgetArgument(t, 0);
                                            t = h_10;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm k_22 = t;
                                                int l_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_z_7;
                                                    t = m_0(t);
                                                    ;
                                                    LocalPopChoice(l_22);
                                                  }
                                                else
                                                  {
                                                    t = k_22;
                                                    t = i_10;
                                                  }
                                              }
                                            else
                                              {
                                                t = i_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                h_10 = ATgetArgument(t, 0);
                                                t = h_10;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm m_22 = t;
                                                    int n_22 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_z_7;
                                                        t = m_0(t);
                                                        ;
                                                        LocalPopChoice(n_22);
                                                      }
                                                    else
                                                      {
                                                        t = m_22;
                                                        t = i_10;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = i_10;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm p_22 = t;
                                                int q_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm r_22 = ATgetArgument(t, 0);
                                                        g_10 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(q_22);
                                                    t = g_10;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm s_22 = t;
                                                        int t_22 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_z_7;
                                                            t = m_0(t);
                                                            ;
                                                            LocalPopChoice(t_22);
                                                          }
                                                        else
                                                          {
                                                            t = s_22;
                                                            t = i_10;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = i_10;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = p_22;
                                                    {
                                                      ATerm v_22 = t;
                                                      int w_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm x_22 = ATgetArgument(t, 0);
                                                              g_10 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(w_22);
                                                          {
                                                            ATerm y_22 = t;
                                                            int z_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = g_10;
                                                                t = fetch_1_0(c_1, t);
                                                                t = term_z_7;
                                                                t = bottomup_1_0(m_0, t);
                                                                ;
                                                                LocalPopChoice(z_22);
                                                              }
                                                            else
                                                              {
                                                                t = y_22;
                                                                t = i_10;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = v_22;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              h_10 = ATgetArgument(t, 0);
                                                              g_10 = ATgetArgument(t, 1);
                                                              t = g_10;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = h_10;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = g_10;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          e_10 = ATgetArgument(t, 0);
                                                                          f_10 = ATgetArgument(t, 1);
                                                                          t = h_10;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = h_10;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = h_10;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = g_10;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          e_10 = ATgetArgument(t, 0);
                                                                          f_10 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm a_23 = t;
                                                                            int c_23 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm s_46 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, f_10, g_10);
                                                                                t = m_0(t);
                                                                                s_46 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, e_10, s_46);
                                                                                t = m_0(t);
                                                                                ;
                                                                                LocalPopChoice(c_23);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = a_23;
                                                                                {
                                                                                  ATerm d_23 = t;
                                                                                  int e_23 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = g_10;
                                                                                      if((h_10 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      ;
                                                                                      LocalPopChoice(e_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = d_23;
                                                                                      t = i_10;
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
                                                                              t = g_10;
                                                                              if((h_10 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              ;
                                                                              LocalPopChoice(g_23);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_23;
                                                                              t = i_10;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  h_10 = ATgetArgument(t, 0);
                                                                  g_10 = ATgetArgument(t, 1);
                                                                  d_8 = ATgetArgument(t, 2);
                                                                  t = d_8;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm h_23 = t;
                                                                      int i_23 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_10, g_10);
                                                                          t = m_0(t);
                                                                          ;
                                                                          LocalPopChoice(i_23);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = h_23;
                                                                          t = i_10;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = i_10;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      h_10 = ATgetArgument(t, 0);
                                                                      g_10 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm j_23 = t;
                                                                        int k_23 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, h_10, g_10);
                                                                            t = m_0(t);
                                                                            ;
                                                                            LocalPopChoice(k_23);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = j_23;
                                                                            t = i_10;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          h_10 = ATgetArgument(t, 0);
                                                                          t = h_10;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              e_10 = ATgetFirst((ATermList) t);
                                                                              f_10 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm l_23 = t;
                                                                                int m_23 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm i_47 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, f_10);
                                                                                    t = m_0(t);
                                                                                    i_47 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, e_10, i_47);
                                                                                    t = m_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(m_23);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_23;
                                                                                    t = i_10;
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
                                                                                      t = m_0(t);
                                                                                      ;
                                                                                      LocalPopChoice(o_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = n_23;
                                                                                      t = i_10;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = i_10;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              h_10 = ATgetArgument(t, 0);
                                                                              t = h_10;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  e_10 = ATgetFirst((ATermList) t);
                                                                                  f_10 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm p_23 = t;
                                                                                    int q_23 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm o_47 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, f_10);
                                                                                        t = m_0(t);
                                                                                        o_47 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, e_10, o_47);
                                                                                        t = m_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(q_23);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = p_23;
                                                                                        t = i_10;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm r_23 = t;
                                                                                      int t_23 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_z_7;
                                                                                          t = m_0(t);
                                                                                          ;
                                                                                          LocalPopChoice(t_23);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = r_23;
                                                                                          t = i_10;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = i_10;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  h_10 = ATgetArgument(t, 0);
                                                                                  t = h_10;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      e_10 = ATgetFirst((ATermList) t);
                                                                                      f_10 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm u_23 = t;
                                                                                        int v_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm u_47 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, f_10);
                                                                                            t = m_0(t);
                                                                                            u_47 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, e_10, u_47);
                                                                                            t = m_0(t);
                                                                                            ;
                                                                                            LocalPopChoice(v_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = u_23;
                                                                                            t = i_10;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm w_23 = t;
                                                                                          int y_23 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_t_7;
                                                                                              t = m_0(t);
                                                                                              ;
                                                                                              LocalPopChoice(y_23);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = w_23;
                                                                                              t = i_10;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = i_10;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      h_10 = ATgetArgument(t, 0);
                                                                                      g_10 = ATgetArgument(t, 1);
                                                                                      d_8 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm z_23 = t;
                                                                                        int a_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL;
                                                                                            t = term_b_24;
                                                                                            t = bottomup_1_0(m_0, t);
                                                                                            c_48 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = m_0(t);
                                                                                            f_48 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(f_48), d_8);
                                                                                            t = m_0(t);
                                                                                            e_48 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(e_48), h_10);
                                                                                            t = m_0(t);
                                                                                            d_48 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, c_48, d_48);
                                                                                            t = m_0(t);
                                                                                            b_48 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, g_10, b_48);
                                                                                            t = m_0(t);
                                                                                            ;
                                                                                            LocalPopChoice(a_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = z_23;
                                                                                            t = i_10;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          h_10 = ATgetArgument(t, 0);
                                                                                          g_10 = ATgetArgument(t, 1);
                                                                                          d_8 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm c_24 = t;
                                                                                            int d_24 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm k_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, g_10);
                                                                                                t = m_0(t);
                                                                                                m_48 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, d_8);
                                                                                                t = m_0(t);
                                                                                                p_48 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = m_0(t);
                                                                                                q_48 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(q_48), p_48);
                                                                                                t = m_0(t);
                                                                                                o_48 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(o_48), h_10);
                                                                                                t = m_0(t);
                                                                                                n_48 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(n_48), m_48);
                                                                                                t = m_0(t);
                                                                                                k_48 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, k_48);
                                                                                                t = m_0(t);
                                                                                                ;
                                                                                                LocalPopChoice(d_24);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = c_24;
                                                                                                t = i_10;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              h_10 = ATgetArgument(t, 0);
                                                                                              g_10 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm e_24 = t;
                                                                                                int f_24 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm u_48 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, g_10);
                                                                                                    t = m_0(t);
                                                                                                    u_48 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, h_10, u_48);
                                                                                                    t = m_0(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(f_24);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = e_24;
                                                                                                    t = i_10;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  h_10 = ATgetArgument(t, 0);
                                                                                                  g_10 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm g_24 = t;
                                                                                                    int h_24 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm e_49 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, h_10);
                                                                                                        t = m_0(t);
                                                                                                        e_49 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, e_49, g_10);
                                                                                                        t = m_0(t);
                                                                                                        ;
                                                                                                        LocalPopChoice(h_24);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = g_24;
                                                                                                        t = i_10;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      h_10 = ATgetArgument(t, 0);
                                                                                                      g_10 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm i_24 = t;
                                                                                                        int j_24 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm i_49 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, g_10);
                                                                                                            t = m_0(t);
                                                                                                            i_49 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, i_49, h_10);
                                                                                                            t = m_0(t);
                                                                                                            ;
                                                                                                            LocalPopChoice(j_24);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = i_24;
                                                                                                            t = i_10;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          h_10 = ATgetArgument(t, 0);
                                                                                                          g_10 = ATgetArgument(t, 1);
                                                                                                          t = g_10;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              c_10 = ATgetArgument(t, 0);
                                                                                                              d_10 = ATgetArgument(t, 1);
                                                                                                              t = h_10;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = g_10;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm k_24 = t;
                                                                                                                  int l_24 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm t_49 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, h_10, c_10);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      t_49 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, t_49, d_10);
                                                                                                                      t = bottomup_1_0(m_0, t);
                                                                                                                      ;
                                                                                                                      LocalPopChoice(l_24);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = k_24;
                                                                                                                      t = i_10;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  c_10 = ATgetArgument(t, 0);
                                                                                                                  d_10 = ATgetArgument(t, 1);
                                                                                                                  y_9 = ATgetArgument(t, 2);
                                                                                                                  t = y_9;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = d_10;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = c_10;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              b_10 = ATgetArgument(t, 0);
                                                                                                                              t = h_10;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = g_10;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      e_10 = ATgetFirst((ATermList) t);
                                                                                                                                      f_10 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = f_10;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = e_10;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              a_10 = ATgetArgument(t, 0);
                                                                                                                                              v_9 = ATgetArgument(t, 1);
                                                                                                                                              i_9 = ATgetArgument(t, 2);
                                                                                                                                              r_9 = ATgetArgument(t, 3);
                                                                                                                                              t = i_9;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = v_9;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm m_24 = t;
                                                                                                                                                      int n_24 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = b_10;
                                                                                                                                                          if((a_10 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = r_9;
                                                                                                                                                          {
                                                                                                                                                            ATerm p_24 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                ATerm e_1 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm q_24 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(q_24, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((a_10 != ATgetArgument(q_24, 0)))
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
                                                                                                                                                                t = p_24;
                                                                                                                                                              }
                                                                                                                                                            t = r_9;
                                                                                                                                                            t = bottomup_1_0(m_0, t);
                                                                                                                                                          }
                                                                                                                                                          ;
                                                                                                                                                          LocalPopChoice(n_24);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = m_24;
                                                                                                                                                          t = i_10;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = i_10;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = i_10;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = i_10;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = i_10;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = i_10;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = h_10;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = g_10;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = i_10;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = h_10;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = g_10;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = i_10;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = h_10;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = g_10;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = i_10;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = h_10;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = g_10;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = i_10;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              h_10 = ATgetArgument(t, 0);
                                                                                                              g_10 = ATgetArgument(t, 1);
                                                                                                              t = h_10;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = g_10;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = i_10;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = i_10;
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
  t = bottomup_1_0(m_0, t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm v_24 = t;
  if((PushChoice() == 0))
    {
      ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL,m_5 = NULL;
      l_51 = t;
      if(match_cons(t, sym_Var_1))
        {
          k_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_51);
      j_51 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, k_51);
      m_5 = t;
      t = SSLsetAnnotations(m_5, j_51);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_24;
    }
  return(t);
}
ATerm g_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_w_24;
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_51 = ATgetFirst((ATermList) t);
      n_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_51, n_51);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_25 = ATgetArgument(t, 0);
      if(match_cons(a_25, sym__2))
        {
          o_51 = ATgetArgument(a_25, 0);
          p_51 = ATgetArgument(a_25, 1);
        }
      else
        _fail(t);
      {
        ATerm b_25 = ATgetArgument(t, 1);
        if(match_cons(b_25, sym__2))
          {
            q_51 = ATgetArgument(b_25, 0);
            r_51 = ATgetArgument(b_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_51), o_51), (ATerm) ATinsert(CheckATermList(r_51), p_51));
  return(t);
}
ATerm j_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_w_24;
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_51 = ATgetFirst((ATermList) t);
      t_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_51, t_51);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_25 = ATgetArgument(t, 0);
      if(match_cons(c_25, sym__2))
        {
          u_51 = ATgetArgument(c_25, 0);
          v_51 = ATgetArgument(c_25, 1);
        }
      else
        _fail(t);
      {
        ATerm d_25 = ATgetArgument(t, 1);
        if(match_cons(d_25, sym__2))
          {
            w_51 = ATgetArgument(d_25, 0);
            x_51 = ATgetArgument(d_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_51), u_51), (ATerm) ATinsert(CheckATermList(x_51), v_51));
  return(t);
}
ATerm b_11 (ATerm n_25, ATerm o_25, ATerm p_25, ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,n_5 = NULL;
  t = p_25;
  t = fetch_1_0(f_1, t);
  t = p_25;
  t = genzip_4_0(g_1, h_1, i_1, LiftPrimArg_0_0, t);
  i_51 = t;
  if(match_cons(t, sym__2))
    {
      d_51 = ATgetArgument(t, 0);
      e_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_51);
  c_51 = t;
  t = d_51;
  t = concat_0_0(t);
  g_51 = t;
  t = e_51;
  t = genzip_4_0(j_1, k_1, l_1, _id, t);
  h_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_51, h_51);
  n_5 = t;
  t = SSLsetAnnotations(n_5, c_51);
  if(match_cons(t, sym__2))
    {
      z_50 = ATgetArgument(t, 0);
      {
        ATerm e_25 = ATgetArgument(t, 1);
        if(match_cons(e_25, sym__2))
          {
            a_51 = ATgetArgument(e_25, 0);
            b_51 = ATgetArgument(e_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, z_50, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, a_51), (ATerm) ATmakeAppl(sym_CallT_3, n_25, o_25, b_51)));
  return(t);
}
ATerm genzip_4_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm t)
{
  ATerm f_52 (ATerm t)
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_96(t);
        ;
        LocalPopChoice(g_25);
      }
    else
      {
        t = f_25;
        {
          ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,z_6 = NULL;
          t = q_96(t);
          e_52 = t;
          if(match_cons(t, sym__2))
            {
              a_52 = ATgetArgument(t, 0);
              b_52 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_52);
          z_51 = t;
          t = a_52;
          t = s_96(t);
          c_52 = t;
          t = b_52;
          t = f_52(t);
          d_52 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_52, d_52);
          z_6 = t;
          t = SSLsetAnnotations(z_6, z_51);
          t = r_96(t);
        }
      }
    return(t);
  }
  t = f_52(t);
  return(t);
}
ATerm at_end_1_0 (ATerm o_107 (ATerm), ATerm t)
{
  ATerm b_53 (ATerm t)
  {
    ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL;
    a_53 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_52 = ATgetFirst((ATermList) t);
        z_52 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_1 = NULL,w_1 = NULL,d_7 = NULL;
          t = SSLgetAnnotations(a_53);
          t_1 = t;
          t = z_52;
          t = b_53(t);
          w_1 = t;
          t = (ATerm) ATinsert(CheckATermList(w_1), y_52);
          d_7 = t;
          t = SSLsetAnnotations(d_7, t_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_53;
        t = o_107(t);
      }
    return(t);
  }
  t = b_53(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL;
  e_53 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_53;
    }
  else
    {
      ATerm m_1 (ATerm t)
      {
        t = not_null(g_53);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_53 = ATgetFirst((ATermList) t);
          if(((g_53 != NULL) && (g_53 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            g_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_53;
      t = at_end_1_0(m_1, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm x_53 (ATerm m_53, ATerm t)
{
  ATerm o_53 = NULL;
  t = m_53;
  {
    ATerm h_25 = t;
    if((PushChoice() == 0))
      {
        ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL,f_7 = NULL;
        t_53 = t;
        if(match_cons(t, sym_Var_1))
          {
            s_53 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_53);
        r_53 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, s_53);
        f_7 = t;
        t = SSLsetAnnotations(f_7, r_53);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_25;
      }
    t = new_0_0(t);
    o_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, o_53), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_53), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_53)))), (ATerm) ATmakeAppl(sym_Var_1, o_53)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL;
  u_53 = t;
  if(match_cons(t, sym_Var_1))
    {
      v_53 = ATgetArgument(t, 0);
      {
        ATerm i_25 = t;
        int j_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_53(u_53, t);
            ;
            LocalPopChoice(j_25);
          }
        else
          {
            t = i_25;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATmakeAppl(sym_Var_1, v_53)));
          }
      }
    }
  else
    {
      t = x_53(u_53, t);
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm k_25 = t;
  if((PushChoice() == 0))
    {
      ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,o_7 = NULL;
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
      o_7 = t;
      t = SSLsetAnnotations(o_7, r_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_25;
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_w_24;
  return(t);
}
ATerm p_1 (ATerm t)
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
ATerm q_1 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_25 = ATgetArgument(t, 0);
      if(match_cons(l_25, sym__2))
        {
          w_2 = ATgetArgument(l_25, 0);
          x_2 = ATgetArgument(l_25, 1);
        }
      else
        _fail(t);
      {
        ATerm m_25 = ATgetArgument(t, 1);
        if(match_cons(m_25, sym__2))
          {
            y_2 = ATgetArgument(m_25, 0);
            z_2 = ATgetArgument(m_25, 1);
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
ATerm r_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_w_24;
  return(t);
}
ATerm s_1 (ATerm t)
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
ATerm u_1 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_25 = ATgetArgument(t, 0);
      if(match_cons(q_25, sym__2))
        {
          c_3 = ATgetArgument(q_25, 0);
          d_3 = ATgetArgument(q_25, 1);
        }
      else
        _fail(t);
      {
        ATerm r_25 = ATgetArgument(t, 1);
        if(match_cons(r_25, sym__2))
          {
            e_3 = ATgetArgument(r_25, 0);
            f_3 = ATgetArgument(r_25, 1);
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
ATerm v_1 (ATerm t)
{
  ATerm s_25 = t;
  if((PushChoice() == 0))
    {
      ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,q_7 = NULL;
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
      q_7 = t;
      t = SSLsetAnnotations(q_7, z_3);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_25;
    }
  return(t);
}
ATerm x_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_w_24;
  return(t);
}
ATerm y_1 (ATerm t)
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
ATerm z_1 (ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_25 = ATgetArgument(t, 0);
      if(match_cons(t_25, sym__2))
        {
          e_4 = ATgetArgument(t_25, 0);
          f_4 = ATgetArgument(t_25, 1);
        }
      else
        _fail(t);
      {
        ATerm u_25 = ATgetArgument(t, 1);
        if(match_cons(u_25, sym__2))
          {
            g_4 = ATgetArgument(u_25, 0);
            h_4 = ATgetArgument(u_25, 1);
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
ATerm a_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_w_24;
  return(t);
}
ATerm b_2 (ATerm t)
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
ATerm c_2 (ATerm t)
{
  ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_25 = ATgetArgument(t, 0);
      if(match_cons(v_25, sym__2))
        {
          k_4 = ATgetArgument(v_25, 0);
          l_4 = ATgetArgument(v_25, 1);
        }
      else
        _fail(t);
      {
        ATerm w_25 = ATgetArgument(t, 1);
        if(match_cons(w_25, sym__2))
          {
            m_4 = ATgetArgument(w_25, 0);
            n_4 = ATgetArgument(w_25, 1);
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
  ATerm v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL;
  w_56 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      x_56 = ATgetArgument(t, 0);
      y_56 = ATgetArgument(t, 1);
      v_56 = ATgetArgument(t, 2);
      {
        ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,p_7 = NULL;
        t = v_56;
        t = fetch_1_0(n_1, t);
        t = v_56;
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
        p_7 = t;
        t = SSLsetAnnotations(p_7, l_2);
        if(match_cons(t, sym__2))
          {
            i_2 = ATgetArgument(t, 0);
            {
              ATerm x_25 = ATgetArgument(t, 1);
              if(match_cons(x_25, sym__2))
                {
                  j_2 = ATgetArgument(x_25, 0);
                  k_2 = ATgetArgument(x_25, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, i_2, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_2), (ATerm) ATmakeAppl(sym_PrimT_3, x_56, y_56, k_2)));
      }
    }
  else
    {
      ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,v_7 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          x_56 = ATgetArgument(t, 0);
          y_56 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_56;
      t = fetch_1_0(v_1, t);
      t = y_56;
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
      v_7 = t;
      t = SSLsetAnnotations(v_7, t_3);
      if(match_cons(t, sym__2))
        {
          q_3 = ATgetArgument(t, 0);
          {
            ATerm b_26 = ATgetArgument(t, 1);
            if(match_cons(b_26, sym__2))
              {
                r_3 = ATgetArgument(b_26, 0);
                s_3 = ATgetArgument(b_26, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, q_3, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_3), (ATerm) ATmakeAppl(sym_PrimT_3, x_56, (ATerm)ATempty, s_3)));
    }
  return(t);
}
ATerm topdown_1_0 (ATerm d_92 (ATerm), ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    t = topdown_1_0(d_92, t);
    return(t);
  }
  t = d_92(t);
  t = SRTS_all(d_2, t);
  return(t);
}
ATerm map_1_0 (ATerm y_106 (ATerm), ATerm t)
{
  ATerm p_57 (ATerm t)
  {
    ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL;
    m_57 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_57;
      }
    else
      {
        ATerm v_4 = NULL,y_4 = NULL,z_4 = NULL,n_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_57 = ATgetFirst((ATermList) t);
            o_57 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_57);
        v_4 = t;
        t = n_57;
        t = y_106(t);
        y_4 = t;
        t = o_57;
        t = p_57(t);
        z_4 = t;
        t = (ATerm) ATinsert(CheckATermList(z_4), y_4);
        n_9 = t;
        t = SSLsetAnnotations(n_9, v_4);
      }
    return(t);
  }
  t = p_57(t);
  return(t);
}
ATerm f_11 (ATerm y_48, ATerm z_48, ATerm t)
{
  ATerm r_57 = NULL;
  t = SSL_fputc(y_48, z_48);
  r_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_57);
  return(t);
}
ATerm g_11 (ATerm m_52, ATerm n_52, ATerm t)
{
  ATerm s_57 = NULL;
  t = SSL_write_term_to_stream_text(m_52, n_52);
  s_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_57);
  return(t);
}
ATerm i_11 (ATerm z_112 (ATerm), ATerm h_474, ATerm q_52, ATerm t)
{
  ATerm t_57 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_474, term_c_26);
  t = l_11(t);
  t_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_57, q_52);
  t = z_112(t);
  t = fclose_0_0(t);
  t = q_52;
  return(t);
}
ATerm h_11 (ATerm i_52, ATerm j_52, ATerm t)
{
  ATerm u_57 = NULL;
  t = SSL_write_term_to_stream_baf(i_52, j_52);
  u_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_57);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      if(match_cons(d_26, sym_Stream_1))
        {
          c_58 = ATgetArgument(d_26, 0);
        }
      else
        _fail(t);
      d_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(c_58, d_58, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_26 = ATgetArgument(t, 0);
      if(match_cons(f_26, sym_Stream_1))
        {
          h_58 = ATgetArgument(f_26, 0);
        }
      else
        _fail(t);
      i_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_11(h_58, i_58, t);
  e_58 = t;
  t = term_g_26;
  f_58 = t;
  t = e_58;
  if(match_cons(t, sym_Stream_1))
    {
      g_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_26, e_58);
  t = f_11(f_58, g_58, t);
  return(t);
}
ATerm output_1_0 (ATerm i_117 (ATerm), ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL;
  t = i_117(t);
  b_58 = t;
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_26;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        t = term_k_26;
      }
    a_58 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_58, b_58);
    {
      ATerm l_26 = t;
      int m_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_n_26;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, a_58, b_58);
          LocalPopChoice(m_26);
          if(match_cons(t, sym__2))
            {
              ATerm o_26 = ATgetArgument(t, 0);
              ATerm q_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_11(e_2, a_58, b_58, t);
        }
      else
        {
          t = l_26;
          if(match_cons(t, sym__2))
            {
              ATerm r_26 = ATgetArgument(t, 0);
              ATerm s_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_11(f_2, a_58, b_58, t);
        }
    }
  }
  return(t);
}
ATerm a_59 (ATerm u_58, ATerm t)
{
  t = SSL_fclose(u_58);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_58 = NULL,y_58 = NULL;
  y_58 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_58 = ATgetArgument(t, 0);
      {
        ATerm t_26 = t;
        int u_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_58);
            ;
            LocalPopChoice(u_26);
          }
        else
          {
            t = t_26;
            t = a_59(y_58, t);
          }
      }
    }
  else
    {
      t = a_59(y_58, t);
    }
  return(t);
}
ATerm j_11 (ATerm o_52, ATerm t)
{
  t = SSL_read_term_from_stream(o_52);
  return(t);
}
ATerm k_11 (ATerm a_49, ATerm b_49, ATerm t)
{
  ATerm b_59 = NULL;
  t = SSL_fopen(a_49, b_49);
  b_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_59);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_59 = NULL;
  t = SSL_stdin_stream();
  c_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_59);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_59 = NULL;
  t = SSL_stdout_stream();
  d_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_59);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_59 = NULL;
  t = SSL_stderr_stream();
  e_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_59);
  return(t);
}
ATerm n_60 (ATerm k_59, ATerm t)
{
  ATerm l_59 = NULL;
  t = SSL_explode_term(k_59);
  if(match_cons(t, sym__2))
    {
      ATerm v_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_26 = ATgetArgument(t, 1);
        if(((ATgetType(w_26) == AT_LIST) && !(ATisEmpty(w_26))))
          {
            l_59 = ATgetFirst((ATermList) w_26);
            {
              ATerm x_26 = (ATerm) ATgetNext((ATermList) w_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_59;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_59;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_59;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_59;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm o_60 (ATerm o_59, ATerm p_59, ATerm q_59, ATerm t)
{
  ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL,w_59 = NULL,p_9 = NULL;
  t = SSLgetAnnotations(q_59);
  t_59 = t;
  t = o_59;
  if(match_cons(t, sym_Path_1))
    {
      w_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_59, p_59);
  p_9 = t;
  t = SSLsetAnnotations(p_9, t_59);
  if(match_cons(t, sym__2))
    {
      r_59 = ATgetArgument(t, 0);
      s_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(r_59, s_59, t);
  return(t);
}
ATerm p_60 (ATerm y_59, ATerm z_59, ATerm a_60, ATerm t)
{
  ATerm b_60 = NULL,c_60 = NULL,d_60 = NULL,i_60 = NULL,q_9 = NULL;
  t = SSLgetAnnotations(a_60);
  d_60 = t;
  t = SSL_is_string(y_59);
  i_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_60, z_59);
  q_9 = t;
  t = SSLsetAnnotations(q_9, d_60);
  if(match_cons(t, sym__2))
    {
      b_60 = ATgetArgument(t, 0);
      c_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(b_60, c_60, t);
  return(t);
}
ATerm l_11 (ATerm t)
{
  ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL;
  k_60 = t;
  if(match_cons(t, sym__2))
    {
      l_60 = ATgetArgument(t, 0);
      m_60 = ATgetArgument(t, 1);
      {
        ATerm z_26 = t;
        int a_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_60(k_60, t);
            ;
            LocalPopChoice(a_27);
          }
        else
          {
            t = z_26;
            {
              ATerm b_27 = t;
              int c_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_60(l_60, m_60, k_60, t);
                  ;
                  LocalPopChoice(c_27);
                }
              else
                {
                  t = b_27;
                  t = p_60(l_60, m_60, k_60, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_60(k_60, t);
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_d_27;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL;
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_60 = NULL;
      t_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_60, term_g_27);
      t = l_11(t);
      ;
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      t = debug_1_0(g_2, t);
      _fail(t);
    }
  r_60 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_11(s_60, t);
  q_60 = t;
  t = r_60;
  t = fclose_0_0(t);
  t = q_60;
  return(t);
}
ATerm input_1_0 (ATerm j_117 (ATerm), ATerm t)
{
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_27);
    }
  else
    {
      t = i_27;
      t = term_l_27;
    }
  t = ReadFromFile_0_0(t);
  t = j_117(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL;
  v_60 = t;
  t = term_m_27;
  t = whoami_0_0(t);
  w_60 = t;
  t = term_n_27;
  y_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_27), w_60), term_o_27);
  z_60 = t;
  t = SSL_printnl(y_60, z_60);
  t = term_r_27;
  x_60 = t;
  t = SSL_exit(x_60);
  t = v_60;
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm b_61 = NULL;
  b_61 = t;
  if(match_string(t, "-k"))
    {
      t = b_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_61;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL;
  c_61 = t;
  t = SSL_string_to_int(c_61);
  d_61 = t;
  t = term_s_27;
  e_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_27, d_61);
  t = t_11(e_61, d_61, t);
  t = c_61;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_t_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_2, g_3, h_3, t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm g_61 = NULL;
  g_61 = t;
  if(match_string(t, "-S"))
    {
      t = g_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_61;
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm h_61 = NULL,i_61 = NULL;
  t = term_u_27;
  h_61 = t;
  t = term_v_27;
  i_61 = t;
  t = term_w_27;
  t = t_11(h_61, i_61, t);
  t = term_y_27;
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_z_27;
  return(t);
}
ATerm l_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm j_61 = NULL,k_61 = NULL,l_61 = NULL;
  j_61 = t;
  t = SSL_string_to_int(j_61);
  k_61 = t;
  t = term_u_27;
  l_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_27, k_61);
  t = t_11(l_61, k_61, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_61);
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_a_28;
  return(t);
}
ATerm o_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm m_61 = NULL,n_61 = NULL;
  t = term_b_28;
  m_61 = t;
  t = term_m_27;
  n_61 = t;
  t = term_c_28;
  t = t_11(m_61, n_61, t);
  t = term_d_28;
  return(t);
}
ATerm o_4 (ATerm t)
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
      ;
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
      {
        ATerm i_28 = t;
        int j_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_3, m_3, n_3, t);
            ;
            LocalPopChoice(j_28);
          }
        else
          {
            t = i_28;
            t = Option_3_0(o_3, p_3, o_4, t);
          }
      }
    }
  return(t);
}
ATerm t_11 (ATerm p_53, ATerm q_53, ATerm t)
{
  ATerm o_61 = NULL;
  t = term_k_28;
  o_61 = t;
  t = SSL_table_put(o_61, p_53, q_53);
  t = (ATerm) ATmakeAppl(sym__3, term_k_28, p_53, q_53);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL;
      t = term_m_27;
      t = e_0(t);
      t_61 = t;
      t = term_l_28;
      u_61 = t;
      t = term_m_28;
      v_61 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_28, term_m_28, t_61);
      t = r_11(u_61, v_61, t_61, t);
      _fail(t);
    }
  else
    {
      ATerm y_61 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_61 = ATgetFirst((ATermList) t);
          s_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_61;
      t = c_0(t);
      t = term_m_27;
      t = d_0(t);
      y_61 = t;
      t = (ATerm) ATinsert(CheckATermList(s_61), y_61);
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm a_62 = NULL;
  a_62 = t;
  if(match_string(t, "-o"))
    {
      t = a_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_62;
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL;
  b_62 = t;
  t = term_j_26;
  c_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_26, b_62);
  t = t_11(c_62, b_62, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_62);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_n_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_4, q_4, r_4, t);
  return(t);
}
ATerm r_11 (ATerm n_58, ATerm o_58, ATerm m_58, ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL;
  e_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_58, o_58);
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
        t = (ATerm) ATmakeAppl(sym__2, n_58, o_58);
        t = q_11(n_58, o_58, t);
        ;
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
        t = (ATerm) ATempty;
      }
    f_62 = t;
    t = (ATerm) ATinsert(CheckATermList(f_62), m_58);
    g_62 = t;
    t = SSL_table_put(n_58, o_58, g_62);
    t = e_62;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL;
      t = term_m_27;
      t = k_0(t);
      r_62 = t;
      t = term_l_28;
      s_62 = t;
      t = term_m_28;
      t_62 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_28, term_m_28, r_62);
      t = r_11(s_62, t_62, r_62, t);
      _fail(t);
    }
  else
    {
      ATerm x_62 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_62 = ATgetFirst((ATermList) t);
          o_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_62;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_62 = ATgetFirst((ATermList) t);
          q_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_62;
      t = i_0(t);
      t = p_62;
      t = j_0(t);
      x_62 = t;
      t = (ATerm) ATinsert(CheckATermList(q_62), x_62);
    }
  return(t);
}
ATerm s_4 (ATerm t)
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
ATerm t_4 (ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL;
  a_63 = t;
  t = term_k_27;
  b_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_27, a_63);
  t = t_11(b_63, a_63, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_63);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_t_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_4, t_4, u_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_27;
  t = whoami_0_0(t);
  c_63 = t;
  t = term_n_27;
  e_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_28), c_63);
  f_63 = t;
  t = SSL_printnl(e_63, f_63);
  t = term_r_27;
  d_63 = t;
  t = SSL_exit(d_63);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_v_28;
  t = get_config_0_0(t);
  return(t);
}
ATerm m_11 (ATerm y_45, ATerm z_45, ATerm t)
{
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_45, z_45);
      ;
      LocalPopChoice(x_28);
    }
  else
    {
      t = w_28;
      t = SSL_addr(y_45, z_45);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm t)
{
  ATerm h_63 = NULL,i_63 = NULL,j_63 = NULL;
  h_63 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_63;
      t = o_105(t);
    }
  else
    {
      ATerm m_63 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_63 = ATgetFirst((ATermList) t);
          j_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_63;
      t = foldr_2_0(o_105, p_105, t);
      m_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_63, m_63);
      t = p_105(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_v_27;
  return(t);
}
ATerm x_4 (ATerm t)
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
  ATerm p_63 = NULL,k_5 = NULL,l_5 = NULL;
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
  p_63 = t;
  t = SSL_TicksToSeconds(p_63);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL;
  a_64 = t;
  if(match_cons(t, sym__2))
    {
      b_64 = ATgetArgument(t, 0);
      c_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_64;
        if((b_64 != t))
          {
            _fail(t);
          }
        t = a_64;
        ;
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        t = (ATerm) ATmakeAppl(sym__2, b_64, c_64);
        {
          ATerm b_29 = t;
          int c_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_64, c_64);
              ;
              LocalPopChoice(c_29);
            }
          else
            {
              t = b_29;
              t = SSL_gtr(b_64, c_64);
            }
          t = (ATerm) ATmakeAppl(sym__2, b_64, c_64);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_114 (ATerm), ATerm t)
{
  ATerm g_64 = NULL;
  g_64 = t;
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_64 = NULL;
        t = term_u_27;
        t = get_config_0_0(t);
        i_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_64, term_r_27);
        t = geq_0_0(t);
        t = g_64;
        t = j_114(t);
        ;
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
        t = g_64;
      }
  }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm k_64 = NULL,l_64 = NULL,n_64 = NULL,o_64 = NULL;
  t = run_time_0_0(t);
  k_64 = t;
  t = term_m_27;
  t = whoami_0_0(t);
  l_64 = t;
  t = term_n_27;
  n_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_29), k_64), term_g_29), l_64);
  o_64 = t;
  t = SSL_printnl(n_64, o_64);
  t = (ATerm) ATmakeAppl(sym__2, term_n_27, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_29), k_64), term_g_29), l_64));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_64 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_27;
  p_64 = t;
  t = SSL_exit(p_64);
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL;
  y_64 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_64;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_64 = ATgetArgument(t, 0);
          {
            ATerm b_6 = NULL,x_13 = NULL;
            t = SSLgetAnnotations(y_64);
            b_6 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_64);
            x_13 = t;
            t = SSLsetAnnotations(x_13, b_6);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_64;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_116 (ATerm), ATerm t)
{
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
      t = fetch_1_0(b_5, t);
    }
  t = z_116(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm b_65 = NULL,c_65 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_65 = ATgetFirst((ATermList) t);
      c_65 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_65 = NULL,h_65 = NULL;
        ATerm c_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_65)), not_null(h_65));
          return(t);
        }
        t = c_65;
        t = h_0(t);
        if(((g_65 != NULL) && (g_65 != t)))
          _fail(t);
        else
          g_65 = t;
        t = b_65;
        t = g_0(t);
        if(((h_65 != NULL) && (h_65 != t)))
          _fail(t);
        else
          h_65 = t;
        t = c_65;
        t = reverse_acc_2_0(g_0, c_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_27;
      t = h_0(t);
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL,b_14 = NULL;
  n_65 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_65);
  l_65 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_65);
  b_14 = t;
  t = SSLsetAnnotations(b_14, l_65);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm p_65 = NULL;
  p_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_65), term_l_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_65 = NULL,k_65 = NULL;
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
      t = fetch_1_0(d_5, t);
    }
  t = term_p_29;
  t = echo_0_0(t);
  t = term_l_28;
  j_65 = t;
  t = term_m_28;
  k_65 = t;
  t = term_q_29;
  t = q_11(j_65, k_65, t);
  t = reverse_acc_2_0(_id, e_5, t);
  t = map_1_0(f_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm i_107 (ATerm), ATerm t)
{
  ATerm m_66 (ATerm t)
  {
    ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL;
    j_66 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_66 = ATgetFirst((ATermList) t);
        l_66 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_29 = t;
      int s_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_6 = NULL,m_6 = NULL,e_14 = NULL;
          t = SSLgetAnnotations(j_66);
          j_6 = t;
          t = k_66;
          t = i_107(t);
          m_6 = t;
          t = (ATerm) ATinsert(CheckATermList(l_66), m_6);
          e_14 = t;
          t = SSLsetAnnotations(e_14, j_6);
          ;
          LocalPopChoice(s_29);
        }
      else
        {
          t = r_29;
          {
            ATerm u_6 = NULL,b_7 = NULL,f_14 = NULL;
            t = SSLgetAnnotations(j_66);
            u_6 = t;
            t = l_66;
            t = m_66(t);
            b_7 = t;
            t = (ATerm) ATinsert(CheckATermList(b_7), k_66);
            f_14 = t;
            t = SSLsetAnnotations(f_14, u_6);
          }
        }
    }
    return(t);
  }
  t = m_66(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_66 = NULL,r_66 = NULL,s_66 = NULL;
  q_66 = t;
  {
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_66;
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
            t = q_66;
          }
        ;
        LocalPopChoice(u_29);
      }
    else
      {
        t = t_29;
        t = (ATerm) ATinsert(ATempty, q_66);
      }
    r_66 = t;
    t = term_k_26;
    s_66 = t;
    t = SSL_printnl(s_66, r_66);
    t = q_66;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_v_28;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm p_11 (ATerm y_39, ATerm z_39, ATerm t)
{
  t = SSL_strcat(y_39, z_39);
  return(t);
}
ATerm debug_1_0 (ATerm x_112 (ATerm), ATerm t)
{
  ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL;
  w_66 = t;
  t = x_112(t);
  x_66 = t;
  t = term_n_27;
  y_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_66), x_66);
  z_66 = t;
  t = SSL_printnl(y_66, z_66);
  t = w_66;
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm x_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(y_29);
    }
  else
    {
      t = x_29;
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_z_29;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_67 = NULL;
      g_67 = t;
      t = SSL_is_string(g_67);
      ;
      LocalPopChoice(c_30);
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
            ;
            LocalPopChoice(e_30);
          }
        else
          {
            t = d_30;
            {
              ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL;
              m_67 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_67 = ATgetArgument(t, 0);
                  t = n_67;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_67 = ATgetArgument(t, 0);
                      t = n_67;
                      {
                        ATerm f_30 = t;
                        int g_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
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
                      ATerm s_67 = NULL,t_67 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_67 = ATgetArgument(t, 0);
                          o_67 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_67;
                      t = eval_config_0_0(t);
                      s_67 = t;
                      t = o_67;
                      t = eval_config_0_0(t);
                      t_67 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_67, t_67);
                      t = p_11(s_67, t_67, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm q_11 (ATerm e_60, ATerm f_60, ATerm t)
{
  t = SSL_table_get(e_60, f_60);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL;
  x_67 = t;
  t = term_k_28;
  y_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_28, x_67);
  t = q_11(y_67, x_67, t);
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_67 = NULL,a_68 = NULL;
        t = eval_config_0_0(t);
        z_67 = t;
        t = term_k_28;
        a_68 = t;
        t = SSL_table_put(a_68, x_67, z_67);
        t = z_67;
        ;
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
      }
  }
  return(t);
}
ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm d_68 = NULL,e_68 = NULL;
  t = term_j_30;
  d_68 = t;
  t = term_m_27;
  e_68 = t;
  t = term_k_30;
  t = t_11(d_68, e_68, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_l_30;
  return(t);
}
ATerm r_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL;
  t = term_j_30;
  h_68 = t;
  t = term_m_27;
  i_68 = t;
  t = term_k_30;
  t = t_11(h_68, i_68, t);
  t = term_m_30;
  f_68 = t;
  t = term_m_27;
  g_68 = t;
  t = term_n_30;
  t = t_11(f_68, g_68, t);
  t = term_o_30;
  return(t);
}
ATerm t_5 (ATerm t)
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
      ;
      LocalPopChoice(r_30);
    }
  else
    {
      t = q_30;
      t = Option_3_0(r_5, s_5, t_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm t)
{
  ATerm j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,i_14 = NULL;
  o_68 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_68 = ATgetFirst((ATermList) t);
      l_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_68);
  j_68 = t;
  t = k_68;
  t = q_75(t);
  m_68 = t;
  t = l_68;
  t = r_75(t);
  n_68 = t;
  t = (ATerm) ATinsert(CheckATermList(n_68), m_68);
  i_14 = t;
  t = SSLsetAnnotations(i_14, j_68);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_119 (ATerm), ATerm t)
{
  ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,y_68 = NULL,z_68 = NULL,p_14 = NULL;
  t_68 = t;
  {
    ATerm s_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_30;
        t = c_119(t);
        ;
        LocalPopChoice(u_30);
      }
    else
      {
        t = s_30;
      }
    t = t_68;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_68 = ATgetFirst((ATermList) t);
        w_68 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_68);
    u_68 = t;
    t = term_v_28;
    z_68 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_v_28, v_68);
    t = t_11(z_68, v_68, t);
    t = w_68;
    {
      ATerm j_69 (ATerm t)
      {
        ATerm w_30 = t;
        int x_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_30 = t;
            int a_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_69 = NULL;
                c_69 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = c_69;
                ;
                LocalPopChoice(a_31);
              }
            else
              {
                t = z_30;
                t = c_119(t);
                t = Cons_2_0(_id, j_69, t);
              }
            ;
            LocalPopChoice(x_30);
          }
        else
          {
            t = w_30;
            {
              ATerm f_69 = NULL,g_69 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_69 = ATgetFirst((ATermList) t);
                  g_69 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(g_69), (ATerm) ATmakeAppl(sym_Undefined_1, f_69));
            }
          }
        return(t);
      }
      t = j_69(t);
      y_68 = t;
      t = (ATerm) ATinsert(CheckATermList(y_68), (ATerm) ATmakeAppl(sym_Program_1, v_68));
      p_14 = t;
      t = SSLsetAnnotations(p_14, u_68);
    }
  }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm v_69 = NULL;
  v_69 = t;
  if(match_string(t, "--help"))
    {
      t = v_69;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_69;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_69;
        }
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm w_69 = NULL,x_69 = NULL;
  t = term_k_29;
  w_69 = t;
  t = term_m_27;
  x_69 = t;
  t = term_b_31;
  t = t_11(w_69, x_69, t);
  t = term_d_31;
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_e_31;
  return(t);
}
ATerm y_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_119 (ATerm), ATerm t)
{
  ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL;
  q_69 = t;
  t = term_l_28;
  s_69 = t;
  t = term_m_28;
  t_69 = t;
  t = (ATerm) ATempty;
  u_69 = t;
  t = SSL_table_put(s_69, t_69, u_69);
  t = q_69;
  {
    ATerm u_5 (ATerm t)
    {
      ATerm f_31 = t;
      int g_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_119(t);
          ;
          LocalPopChoice(g_31);
        }
      else
        {
          t = f_31;
          {
            ATerm i_31 = t;
            int j_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(v_5, w_5, x_5, t);
                ;
                LocalPopChoice(j_31);
              }
            else
              {
                t = i_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_5, t);
    {
      ATerm k_31 = t;
      int m_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_70 = NULL;
          e_70 = t;
          {
            ATerm n_31 = t;
            int o_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_8 = NULL;
                t = e_70;
                {
                  ATerm p_31 = t;
                  int r_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_k_29;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(r_31);
                    }
                  else
                    {
                      t = p_31;
                      t = fetch_1_0(y_5, t);
                    }
                  t = e_70;
                  t = default_system_usage_0_0(t);
                  t = term_v_27;
                  c_8 = t;
                  t = SSL_exit(c_8);
                }
                ;
                LocalPopChoice(o_31);
              }
            else
              {
                t = n_31;
                {
                  ATerm h_8 = NULL;
                  t = term_j_30;
                  t = get_config_0_0(t);
                  t = e_70;
                  t = default_system_about_0_0(t);
                  t = term_v_27;
                  h_8 = t;
                  t = SSL_exit(h_8);
                }
              }
          }
          ;
          LocalPopChoice(m_31);
        }
      else
        {
          t = k_31;
          {
            ATerm s_31 = t;
            int t_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL;
                ATerm z_5 (ATerm t)
                {
                  ATerm i_70 = NULL,j_70 = NULL,k_70 = NULL,r_14 = NULL;
                  k_70 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      j_70 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(k_70);
                  i_70 = t;
                  t = j_70;
                  if(((o_69 != NULL) && (o_69 != t)))
                    _fail(t);
                  else
                    o_69 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, j_70);
                  r_14 = t;
                  t = SSLsetAnnotations(r_14, i_70);
                  return(t);
                }
                t = fetch_1_0(z_5, t);
                t = term_n_27;
                g_70 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_69)), term_u_31);
                h_70 = t;
                t = SSL_printnl(g_70, h_70);
                t = (ATerm) ATmakeAppl(sym__2, term_n_27, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_69)), term_u_31));
                t = default_system_usage_0_0(t);
                t = term_r_27;
                f_70 = t;
                t = SSL_exit(f_70);
                ;
                LocalPopChoice(t_31);
              }
            else
              {
                t = s_31;
              }
          }
        }
      p_69 = t;
      t = term_l_28;
      r_69 = t;
      t = SSL_table_destroy(r_69);
      t = p_69;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm t)
{
  ATerm p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL;
  t = parse_options_1_0(b_117, t);
  p_70 = t;
  t = term_v_31;
  s_70 = t;
  t = SSL_table_create(s_70);
  t = term_v_31;
  q_70 = t;
  t = term_w_31;
  r_70 = t;
  t = SSL_table_put(q_70, r_70, p_70);
  t = p_70;
  t = d_117(t);
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_117, t);
        ;
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
              t = e_117(t);
              t = report_success_0_0(t);
              ;
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
ATerm a_6 (ATerm t)
{
  ATerm b_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(d_32);
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
            ;
            LocalPopChoice(f_32);
          }
        else
          {
            t = e_32;
            {
              ATerm g_32 = t;
              int i_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(d_6, e_6, f_6, t);
                  ;
                  LocalPopChoice(i_32);
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
                        ;
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
ATerm c_6 (ATerm t)
{
  t = input_1_0(g_6, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm z_70 = NULL,a_71 = NULL;
  t = term_n_26;
  z_70 = t;
  t = term_m_27;
  a_71 = t;
  t = term_m_32;
  t = t_11(z_70, a_71, t);
  t = term_n_32;
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_o_32;
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = output_1_0(h_6, t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,c_15 = NULL,a_15 = NULL,z_14 = NULL,y_14 = NULL;
  q_71 = t;
  if(match_cons(t, sym_Specification_1))
    {
      d_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_71);
  c_71 = t;
  t = d_71;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_71 = ATgetFirst((ATermList) t);
      g_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_71);
  e_71 = t;
  t = g_71;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_71 = ATgetFirst((ATermList) t);
      k_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_71);
  i_71 = t;
  t = j_71;
  if(match_cons(t, sym_Strategies_1))
    {
      n_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_71);
  m_71 = t;
  t = n_71;
  t = map_1_0(i_6, t);
  o_71 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, o_71);
  y_14 = t;
  t = SSLsetAnnotations(y_14, m_71);
  p_71 = t;
  t = k_71;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_71), p_71);
  z_14 = t;
  t = SSLsetAnnotations(z_14, i_71);
  l_71 = t;
  t = (ATerm) ATinsert(CheckATermList(l_71), f_71);
  a_15 = t;
  t = SSLsetAnnotations(a_15, e_71);
  h_71 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, h_71);
  c_15 = t;
  t = SSLsetAnnotations(c_15, c_71);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL;
  q_72 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      m_72 = ATgetArgument(t, 0);
      n_72 = ATgetArgument(t, 1);
      o_72 = ATgetArgument(t, 2);
      p_72 = ATgetArgument(t, 3);
      {
        ATerm p_32 = t;
        int r_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_8 = NULL,u_8 = NULL,t_14 = NULL;
            t = SSLgetAnnotations(q_72);
            p_8 = t;
            t = p_72;
            t = topdown_1_0(k_6, t);
            t = simplify_0_0(t);
            u_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, m_72, n_72, o_72, u_8);
            t_14 = t;
            t = SSLsetAnnotations(t_14, p_8);
            ;
            LocalPopChoice(r_32);
          }
        else
          {
            t = p_32;
            t = q_72;
          }
      }
    }
  else
    {
      t = q_72;
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_32 = t;
      int w_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = LiftPrimArgs_0_0(t);
          ;
          LocalPopChoice(w_32);
        }
      else
        {
          t = v_32;
          {
            ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL;
            y_8 = t;
            if(match_cons(t, sym_CallT_3))
              {
                z_8 = ATgetArgument(t, 0);
                a_9 = ATgetArgument(t, 1);
                b_9 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = y_8;
            t = b_11(z_8, a_9, b_9, t);
          }
        }
      ;
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(a_6, default_usage_0_0, _id, c_6, t);
  return(t);
}
