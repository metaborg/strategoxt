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
Symbol sym_Anno_2;
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
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
ATerm term_m_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_f_28;
ATerm term_c_28;
ATerm term_u_27;
ATerm term_r_27;
ATerm term_t_26;
ATerm term_w_22;
ATerm term_w_6;
ATerm term_p_6;
void init_constant_terms (void)
{
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
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
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym__2, term_m_28, term_m_29);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm b_0 (ATerm);
ATerm f_0 (ATerm);
ATerm l_0 (ATerm);
ATerm o_0 (ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm r_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm v_0 (ATerm);
ATerm simplify_0_0 (ATerm);
ATerm topdown_1_0 (ATerm d_92 (ATerm), ATerm);
ATerm y_0 (ATerm);
ATerm b_5 (ATerm c_69, ATerm b_69, ATerm);
ATerm MatchBuildIdemVar_0_0 (ATerm);
ATerm BuildMatchIdem_0_0 (ATerm);
ATerm MatchIdem_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildBuild_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm h_93 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm i_1 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm q_11 (ATerm d_68, ATerm j_68, ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm at_end_1_0 (ATerm o_107 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm a_74 (ATerm s_73, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm u_11 (ATerm o_68, ATerm w_68, ATerm v_68, ATerm);
ATerm pat_td_1_0 (ATerm j_90 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm q_2 (ATerm);
ATerm MatchingCongruence_0_0 (ATerm);
ATerm repeat_1_0 (ATerm x_101 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm e_92 (ATerm), ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm define_congruences_0_0 (ATerm);
ATerm map_1_0 (ATerm y_106 (ATerm), ATerm);
ATerm v_11 (ATerm y_48, ATerm z_48, ATerm);
ATerm w_11 (ATerm m_52, ATerm n_52, ATerm);
ATerm y_11 (ATerm z_112 (ATerm), ATerm h_474, ATerm q_52, ATerm);
ATerm x_11 (ATerm i_52, ATerm j_52, ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm output_1_0 (ATerm i_117 (ATerm), ATerm);
ATerm k_82 (ATerm d_82, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm z_11 (ATerm o_52, ATerm);
ATerm a_12 (ATerm a_49, ATerm b_49, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm v_83 (ATerm u_82, ATerm);
ATerm w_83 (ATerm y_82, ATerm z_82, ATerm a_83, ATerm);
ATerm x_83 (ATerm i_83, ATerm j_83, ATerm k_83, ATerm);
ATerm b_12 (ATerm);
ATerm w_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm j_117 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm b_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm m_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm j_12 (ATerm p_53, ATerm q_53, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm h_12 (ATerm n_58, ATerm o_58, ATerm m_58, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm c_12 (ATerm y_45, ATerm z_45, ATerm);
ATerm foldr_2_0 (ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm j_114 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm y_3 (ATerm);
ATerm need_help_1_0 (ATerm z_116 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm i_107 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm f_12 (ATerm y_39, ATerm z_39, ATerm);
ATerm debug_1_0 (ATerm x_112 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm g_12 (ATerm e_60, ATerm f_60, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm c_119 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm s_4 (ATerm);
ATerm v_4 (ATerm);
ATerm y_4 (ATerm);
ATerm parse_options_1_0 (ATerm b_119 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm o_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm b_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_5 = ATgetArgument(t, 0);
      if(((ATgetType(r_5) != AT_LIST) || !(ATisEmpty(r_5))))
        _fail(t);
      {
        ATerm s_5 = ATgetArgument(t, 1);
        if(((ATgetType(s_5) != AT_LIST) || !(ATisEmpty(s_5))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_0 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_5 = ATgetArgument(t, 0);
      if(((ATgetType(t_5) == AT_LIST) && !(ATisEmpty(t_5))))
        {
          d_15 = ATgetFirst((ATermList) t_5);
          e_15 = (ATerm) ATgetNext((ATermList) t_5);
        }
      else
        _fail(t);
      {
        ATerm v_5 = ATgetArgument(t, 1);
        if(((ATgetType(v_5) == AT_LIST) && !(ATisEmpty(v_5))))
          {
            f_15 = ATgetFirst((ATermList) v_5);
            g_15 = (ATerm) ATgetNext((ATermList) v_5);
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
ATerm l_0 (ATerm t)
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
ATerm o_0 (ATerm t)
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
ATerm p_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_5 = ATgetArgument(t, 0);
      if(((ATgetType(w_5) != AT_LIST) || !(ATisEmpty(w_5))))
        _fail(t);
      {
        ATerm x_5 = ATgetArgument(t, 1);
        if(((ATgetType(x_5) != AT_LIST) || !(ATisEmpty(x_5))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,c_25 = NULL,d_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_5 = ATgetArgument(t, 0);
      if(((ATgetType(y_5) == AT_LIST) && !(ATisEmpty(y_5))))
        {
          p_24 = ATgetFirst((ATermList) y_5);
          q_24 = (ATerm) ATgetNext((ATermList) y_5);
        }
      else
        _fail(t);
      {
        ATerm z_5 = ATgetArgument(t, 1);
        if(((ATgetType(z_5) == AT_LIST) && !(ATisEmpty(z_5))))
          {
            c_25 = ATgetFirst((ATermList) z_5);
            d_25 = (ATerm) ATgetNext((ATermList) z_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_24, c_25), (ATerm) ATmakeAppl(sym__2, q_24, d_25));
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL;
  if(match_cons(t, sym__2))
    {
      e_25 = ATgetArgument(t, 0);
      f_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_25), e_25);
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm g_25 = NULL,i_25 = NULL;
  if(match_cons(t, sym__2))
    {
      g_25 = ATgetArgument(t, 0);
      i_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_25), (ATerm) ATmakeAppl(sym_Match_1, i_25));
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm a_6 = t;
  int b_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm c_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(b_6);
      {
        ATerm s_41 = NULL,t_41 = NULL;
        s_41 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm e_6 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t_41 = t;
        t = SSLgetAnnotations(s_41);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_6 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) f_6) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm h_6 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(h_6) != AT_LIST) || !(ATisEmpty(h_6))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = t_41;
      }
    }
  else
    {
      t = a_6;
      {
        ATerm i_6 = t;
        int j_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm k_6 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) k_6) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm l_6 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(j_6);
            _fail(t);
          }
        else
          {
            t = i_6;
          }
      }
    }
  return(t);
}
ATerm v_0 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,p_5 = NULL,n_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,a_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL;
    q_8 = t;
    if(match_cons(t, sym_Test_1))
      {
        p_8 = ATgetArgument(t, 0);
        t = p_8;
        if(match_cons(t, sym_Id_0))
          {
            ATerm m_6 = t;
            int n_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_p_6;
                t = a_0(t);
                ;
                LocalPopChoice(n_6);
              }
            else
              {
                t = m_6;
                {
                  ATerm q_6 = t;
                  int t_6 = stack_ptr;
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
                      ;
                      LocalPopChoice(t_6);
                    }
                  else
                    {
                      t = q_6;
                      t = q_8;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm u_6 = t;
                int v_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_w_6;
                    t = a_0(t);
                    ;
                    LocalPopChoice(v_6);
                  }
                else
                  {
                    t = u_6;
                    {
                      ATerm x_6 = t;
                      int y_6 = stack_ptr;
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
                          ;
                          LocalPopChoice(y_6);
                        }
                      else
                        {
                          t = x_6;
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
                      ATerm z_6 = t;
                      int a_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, i_8);
                          t = a_0(t);
                          ;
                          LocalPopChoice(a_7);
                        }
                      else
                        {
                          t = z_6;
                          {
                            ATerm b_7 = t;
                            int c_7 = stack_ptr;
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
                                ;
                                LocalPopChoice(c_7);
                              }
                            else
                              {
                                t = b_7;
                                t = q_8;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm f_7 = t;
                    int j_7 = stack_ptr;
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
                        ;
                        LocalPopChoice(j_7);
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
                ATerm k_7 = t;
                int l_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_w_6;
                    t = a_0(t);
                    ;
                    LocalPopChoice(l_7);
                  }
                else
                  {
                    t = k_7;
                    t = q_8;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm m_7 = t;
                    int o_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_p_6;
                        t = a_0(t);
                        ;
                        LocalPopChoice(o_7);
                      }
                    else
                      {
                        t = m_7;
                        t = q_8;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        i_8 = ATgetArgument(t, 0);
                        {
                          ATerm p_7 = t;
                          int t_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, i_8);
                              t = a_0(t);
                              ;
                              LocalPopChoice(t_7);
                            }
                          else
                            {
                              t = p_7;
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
                                        ATerm u_7 = t;
                                        int y_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_w_6;
                                            t = a_0(t);
                                            ;
                                            LocalPopChoice(y_7);
                                          }
                                        else
                                          {
                                            t = u_7;
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
                                              ATerm z_7 = t;
                                              int b_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm o_14 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                  t = a_0(t);
                                                  o_14 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, o_14);
                                                  t = a_0(t);
                                                  ;
                                                  LocalPopChoice(b_8);
                                                }
                                              else
                                                {
                                                  t = z_7;
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
                                                      ATerm d_8 = t;
                                                      int e_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, x_7, w_7);
                                                          {
                                                            ATerm f_8 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm m_0 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    m_0 = ATgetArgument(t, 0);
                                                                    if((m_0 != ATgetArgument(t, 1)))
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
                                                                t = f_8;
                                                              }
                                                            t = term_w_6;
                                                            t = bottomup_1_0(a_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(e_8);
                                                        }
                                                      else
                                                        {
                                                          t = d_8;
                                                          {
                                                            ATerm j_8 = t;
                                                            int k_8 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm w_14 = NULL;
                                                                t = w_7;
                                                                if((x_7 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, q_7, n_7);
                                                                t = genzip_4_0(b_0, f_0, l_0, o_0, t);
                                                                w_14 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_14), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, x_7, q_7)), h_8));
                                                                t = bottomup_1_0(a_0, t);
                                                                ;
                                                                LocalPopChoice(k_8);
                                                              }
                                                            else
                                                              {
                                                                t = j_8;
                                                                {
                                                                  ATerm l_8 = t;
                                                                  int m_8 = stack_ptr;
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
                                                                      ;
                                                                      LocalPopChoice(m_8);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = l_8;
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
                                                    ATerm s_8 = t;
                                                    int t_8 = stack_ptr;
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
                                                        ;
                                                        LocalPopChoice(t_8);
                                                      }
                                                    else
                                                      {
                                                        t = s_8;
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
                                                      ATerm u_8 = t;
                                                      int x_8 = stack_ptr;
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
                                                          ;
                                                          LocalPopChoice(x_8);
                                                        }
                                                      else
                                                        {
                                                          t = u_8;
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
                                                          ATerm y_8 = t;
                                                          int z_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_16 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                              t = a_0(t);
                                                              i_16 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_8, i_16);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(z_8);
                                                            }
                                                          else
                                                            {
                                                              t = y_8;
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
                                        ATerm b_9 = t;
                                        int c_9 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_w_6;
                                            t = a_0(t);
                                            ;
                                            LocalPopChoice(c_9);
                                          }
                                        else
                                          {
                                            t = b_9;
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
                                              ATerm d_9 = t;
                                              int e_9 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm t_16 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                  t = a_0(t);
                                                  t_16 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, t_16);
                                                  t = a_0(t);
                                                  ;
                                                  LocalPopChoice(e_9);
                                                }
                                              else
                                                {
                                                  t = d_9;
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
                                                  ATerm g_9 = t;
                                                  int h_9 = stack_ptr;
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
                                                      ;
                                                      LocalPopChoice(h_9);
                                                    }
                                                  else
                                                    {
                                                      t = g_9;
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
                                                      ATerm j_9 = t;
                                                      int k_9 = stack_ptr;
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
                                                          ;
                                                          LocalPopChoice(k_9);
                                                        }
                                                      else
                                                        {
                                                          t = j_9;
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
                                                          ATerm l_9 = t;
                                                          int m_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm o_17 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                              t = a_0(t);
                                                              o_17 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_8, o_17);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(m_9);
                                                            }
                                                          else
                                                            {
                                                              t = l_9;
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
                                            ATerm o_9 = t;
                                            int q_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_6;
                                                t = a_0(t);
                                                ;
                                                LocalPopChoice(q_9);
                                              }
                                            else
                                              {
                                                t = o_9;
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
                                                  ATerm r_9 = t;
                                                  int s_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm z_17 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                      t = a_0(t);
                                                      z_17 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, z_17);
                                                      t = a_0(t);
                                                      ;
                                                      LocalPopChoice(s_9);
                                                    }
                                                  else
                                                    {
                                                      t = r_9;
                                                      t = q_8;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm t_9 = t;
                                                int u_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm v_9 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(u_9);
                                                    {
                                                      ATerm w_9 = t;
                                                      int x_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm d_18 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, a_8);
                                                          t = a_0(t);
                                                          d_18 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_18, h_8);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(x_9);
                                                        }
                                                      else
                                                        {
                                                          t = w_9;
                                                          t = q_8;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = t_9;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        i_8 = ATgetArgument(t, 0);
                                                        t = i_8;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            x_7 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm y_9 = t;
                                                              int b_10 = stack_ptr;
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
                                                                  ;
                                                                  LocalPopChoice(b_10);
                                                                }
                                                              else
                                                                {
                                                                  t = y_9;
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
                                                              ATerm c_10 = t;
                                                              int d_10 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm a_19 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                                  t = a_0(t);
                                                                  a_19 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, i_8, a_19);
                                                                  t = a_0(t);
                                                                  ;
                                                                  LocalPopChoice(d_10);
                                                                }
                                                              else
                                                                {
                                                                  t = c_10;
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
                                            ATerm f_10 = t;
                                            int g_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_6;
                                                t = a_0(t);
                                                ;
                                                LocalPopChoice(g_10);
                                              }
                                            else
                                              {
                                                t = f_10;
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
                                                  ATerm h_10 = t;
                                                  int i_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm u_19 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                      t = a_0(t);
                                                      u_19 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, u_19);
                                                      t = a_0(t);
                                                      ;
                                                      LocalPopChoice(i_10);
                                                    }
                                                  else
                                                    {
                                                      t = h_10;
                                                      t = q_8;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm k_10 = t;
                                                int l_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm t_10 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(l_10);
                                                    {
                                                      ATerm u_10 = t;
                                                      int i_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm c_20 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, a_8);
                                                          t = a_0(t);
                                                          c_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_20, h_8);
                                                          t = a_0(t);
                                                          ;
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
                                                    t = k_10;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_8 = ATgetArgument(t, 0);
                                                        n_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_11 = t;
                                                          int k_11 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                              t = a_0(t);
                                                              r_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_8, r_20);
                                                              t = a_0(t);
                                                              ;
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
                                                t = term_w_6;
                                                t = a_0(t);
                                                ;
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
                                                      ATerm d_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                      t = a_0(t);
                                                      d_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, d_21);
                                                      t = a_0(t);
                                                      ;
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
                                                          ATerm r_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, a_8, r_7, s_7);
                                                          t = a_0(t);
                                                          r_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, r_21, h_8);
                                                          t = a_0(t);
                                                          ;
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
                                                              ATerm y_21 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                              t = a_0(t);
                                                              y_21 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_8, y_21);
                                                              t = a_0(t);
                                                              ;
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
                                                t = term_w_6;
                                                t = a_0(t);
                                                ;
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
                                                      ;
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
                                                          ;
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
                                            t = term_w_6;
                                            t = a_0(t);
                                            ;
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
                                                  ATerm e_24 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                  t = a_0(t);
                                                  e_24 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, e_24);
                                                  t = a_0(t);
                                                  ;
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
                                                                ATerm u_0 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    u_0 = ATgetArgument(t, 0);
                                                                    if((u_0 != ATgetArgument(t, 1)))
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
                                                            t = term_w_6;
                                                            t = bottomup_1_0(a_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(v_13);
                                                        }
                                                      else
                                                        {
                                                          t = u_13;
                                                          {
                                                            ATerm x_13 = t;
                                                            int z_13 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm j_24 = NULL;
                                                                t = a_8;
                                                                if((x_7 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, q_7, r_7);
                                                                t = genzip_4_0(p_0, q_0, r_0, s_0, t);
                                                                j_24 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_24), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, x_7, q_7)));
                                                                t = bottomup_1_0(a_0, t);
                                                                ;
                                                                LocalPopChoice(z_13);
                                                              }
                                                            else
                                                              {
                                                                t = x_13;
                                                                {
                                                                  ATerm a_14 = t;
                                                                  int b_14 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = g_8;
                                                                      if((i_8 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, i_8);
                                                                      t = a_0(t);
                                                                      ;
                                                                      LocalPopChoice(b_14);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = a_14;
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
                                                    ATerm c_14 = t;
                                                    int d_14 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = g_8;
                                                        if((i_8 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, i_8);
                                                        t = a_0(t);
                                                        ;
                                                        LocalPopChoice(d_14);
                                                      }
                                                    else
                                                      {
                                                        t = c_14;
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
                                                      ATerm f_14 = t;
                                                      int g_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = g_8;
                                                          if((i_8 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, i_8);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(g_14);
                                                        }
                                                      else
                                                        {
                                                          t = f_14;
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
                                                          ATerm h_14 = t;
                                                          int i_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm e_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                              t = a_0(t);
                                                              e_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_8, e_27);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(i_14);
                                                            }
                                                          else
                                                            {
                                                              t = h_14;
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
                                        ATerm j_14 = t;
                                        int k_14 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_w_6;
                                            t = a_0(t);
                                            ;
                                            LocalPopChoice(k_14);
                                          }
                                        else
                                          {
                                            t = j_14;
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
                                              ATerm l_14 = t;
                                              int m_14 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm w_27 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                  t = a_0(t);
                                                  w_27 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, w_27);
                                                  t = a_0(t);
                                                  ;
                                                  LocalPopChoice(m_14);
                                                }
                                              else
                                                {
                                                  t = l_14;
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
                                                  ATerm n_14 = t;
                                                  int p_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = g_8;
                                                      if((i_8 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, i_8);
                                                      t = a_0(t);
                                                      ;
                                                      LocalPopChoice(p_14);
                                                    }
                                                  else
                                                    {
                                                      t = n_14;
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
                                                      ATerm q_14 = t;
                                                      int r_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = g_8;
                                                          if((i_8 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, i_8);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(r_14);
                                                        }
                                                      else
                                                        {
                                                          t = q_14;
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
                                                          ATerm s_14 = t;
                                                          int t_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm o_28 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                              t = a_0(t);
                                                              o_28 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_8, o_28);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(t_14);
                                                            }
                                                          else
                                                            {
                                                              t = s_14;
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
                                            ATerm u_14 = t;
                                            int v_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_6;
                                                t = a_0(t);
                                                ;
                                                LocalPopChoice(v_14);
                                              }
                                            else
                                              {
                                                t = u_14;
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
                                                  ATerm x_14 = t;
                                                  int y_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm z_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                      t = a_0(t);
                                                      z_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, z_28);
                                                      t = a_0(t);
                                                      ;
                                                      LocalPopChoice(y_14);
                                                    }
                                                  else
                                                    {
                                                      t = x_14;
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
                                                          ;
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
                                                                  ;
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
                                                                  ;
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
                                                t = term_w_6;
                                                t = a_0(t);
                                                ;
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
                                                      ;
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
                                                          ;
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
                                                              ;
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
                                                t = term_w_6;
                                                t = a_0(t);
                                                ;
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
                                                      ;
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
                                                          ;
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
                                                              ;
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
                                                    t = term_w_6;
                                                    t = a_0(t);
                                                    ;
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
                                                          ATerm e_33 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_8, h_8);
                                                          t = a_0(t);
                                                          e_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, g_8, e_33);
                                                          t = a_0(t);
                                                          ;
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
                                                          ATerm p_33 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_8, o_8);
                                                          t = a_0(t);
                                                          p_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, p_33);
                                                          t = a_0(t);
                                                          ;
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
                                                                ATerm w_33 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_8, h_8);
                                                                t = a_0(t);
                                                                w_33 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, g_8, w_33);
                                                                t = a_0(t);
                                                                ;
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
                                                              ATerm d_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_8, h_8);
                                                              t = a_0(t);
                                                              d_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, g_8, d_34);
                                                              t = a_0(t);
                                                              ;
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
                                                                    ;
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
                                                            ;
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
                                                        t = term_w_6;
                                                        t = a_0(t);
                                                        ;
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
                                                              ;
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
                                                              ;
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
                                                                    ;
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
                                                                  ;
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
                                                                        ;
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
                                                                ;
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
                                                        t = term_w_6;
                                                        t = a_0(t);
                                                        ;
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
                                                              ;
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
                                                                  ;
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
                                t = term_p_6;
                                t = a_0(t);
                                ;
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
                                t = term_p_6;
                                t = a_0(t);
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
                                      t = o_8;
                                      if((p_8 != t))
                                        {
                                          _fail(t);
                                        }
                                      ;
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
                                          ATerm d_41 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, n_8, o_8);
                                          t = a_0(t);
                                          d_41 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, i_8, d_41);
                                          t = a_0(t);
                                          ;
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
                                                ;
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
                                                    t = i_8;
                                                    t = topdown_1_0(t_0, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, i_8);
                                                    t = bottomup_1_0(a_0, t);
                                                    ;
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
                                            ;
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
                                    t = term_p_6;
                                    t = a_0(t);
                                    ;
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
                                    t = term_p_6;
                                    t = a_0(t);
                                    ;
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
                                    ATerm o_19 = t;
                                    int p_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_w_6;
                                        t = a_0(t);
                                        ;
                                        LocalPopChoice(p_19);
                                      }
                                    else
                                      {
                                        t = o_19;
                                        t = o_8;
                                      }
                                  }
                                else
                                  {
                                    ATerm q_19 = t;
                                    int r_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_w_6;
                                        t = a_0(t);
                                        ;
                                        LocalPopChoice(r_19);
                                      }
                                    else
                                      {
                                        t = q_19;
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
                                        ATerm s_19 = t;
                                        int t_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm c_43 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, p_8, g_8);
                                            t = conc_0_0(t);
                                            c_43 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, c_43, h_8);
                                            t = bottomup_1_0(a_0, t);
                                            ;
                                            LocalPopChoice(t_19);
                                          }
                                        else
                                          {
                                            t = s_19;
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
                        ATerm v_19 = t;
                        int w_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm x_19 = ATgetArgument(t, 0);
                                o_8 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(w_19);
                            t = o_8;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm y_19 = t;
                                int z_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_p_6;
                                    t = a_0(t);
                                    ;
                                    LocalPopChoice(z_19);
                                  }
                                else
                                  {
                                    t = y_19;
                                    t = q_8;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm a_20 = t;
                                    int b_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_w_6;
                                        t = a_0(t);
                                        ;
                                        LocalPopChoice(b_20);
                                      }
                                    else
                                      {
                                        t = a_20;
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
                            t = v_19;
                            if(match_cons(t, sym_All_1))
                              {
                                p_8 = ATgetArgument(t, 0);
                                t = p_8;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm d_20 = t;
                                    int e_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_p_6;
                                        t = a_0(t);
                                        ;
                                        LocalPopChoice(e_20);
                                      }
                                    else
                                      {
                                        t = d_20;
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
                                        ATerm f_20 = t;
                                        int g_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_p_6;
                                            t = a_0(t);
                                            ;
                                            LocalPopChoice(g_20);
                                          }
                                        else
                                          {
                                            t = f_20;
                                            {
                                              ATerm h_20 = t;
                                              int i_20 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm p_43 = NULL,q_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL;
                                                  t = q_8;
                                                  t = new_0_0(t);
                                                  p_43 = t;
                                                  t = bottomup_1_0(a_0, t);
                                                  b_44 = t;
                                                  t = (ATerm) ATempty;
                                                  t = a_0(t);
                                                  c_44 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(c_44), b_44);
                                                  t = a_0(t);
                                                  q_43 = t;
                                                  t = p_43;
                                                  t = bottomup_1_0(a_0, t);
                                                  a_44 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, a_44);
                                                  t = a_0(t);
                                                  z_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, z_43);
                                                  t = a_0(t);
                                                  t_43 = t;
                                                  t = p_8;
                                                  t = bottomup_1_0(a_0, t);
                                                  v_43 = t;
                                                  t = p_43;
                                                  t = bottomup_1_0(a_0, t);
                                                  y_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, y_43);
                                                  t = a_0(t);
                                                  x_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, x_43);
                                                  t = a_0(t);
                                                  w_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_43, w_43);
                                                  t = a_0(t);
                                                  u_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_43, u_43);
                                                  t = a_0(t);
                                                  s_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, q_43, s_43);
                                                  t = a_0(t);
                                                  ;
                                                  LocalPopChoice(i_20);
                                                }
                                              else
                                                {
                                                  t = h_20;
                                                  t = q_8;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm j_20 = t;
                                            int k_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_6;
                                                t = a_0(t);
                                                ;
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
                                                      ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL;
                                                      t = q_8;
                                                      t = new_0_0(t);
                                                      g_44 = t;
                                                      t = bottomup_1_0(a_0, t);
                                                      r_44 = t;
                                                      t = (ATerm) ATempty;
                                                      t = a_0(t);
                                                      s_44 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(s_44), r_44);
                                                      t = a_0(t);
                                                      h_44 = t;
                                                      t = g_44;
                                                      t = bottomup_1_0(a_0, t);
                                                      q_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, q_44);
                                                      t = a_0(t);
                                                      p_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, p_44);
                                                      t = a_0(t);
                                                      j_44 = t;
                                                      t = p_8;
                                                      t = bottomup_1_0(a_0, t);
                                                      l_44 = t;
                                                      t = g_44;
                                                      t = bottomup_1_0(a_0, t);
                                                      o_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, o_44);
                                                      t = a_0(t);
                                                      n_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, n_44);
                                                      t = a_0(t);
                                                      m_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_44, m_44);
                                                      t = a_0(t);
                                                      k_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_44, k_44);
                                                      t = a_0(t);
                                                      i_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, h_44, i_44);
                                                      t = a_0(t);
                                                      ;
                                                      LocalPopChoice(m_20);
                                                    }
                                                  else
                                                    {
                                                      t = l_20;
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
                                                              ATerm n_20 = t;
                                                              int o_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, l_5);
                                                                  t = a_0(t);
                                                                  z_44 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_44, m_5);
                                                                  t = a_0(t);
                                                                  y_44 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_7, y_44);
                                                                  t = a_0(t);
                                                                  x_44 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, x_44);
                                                                  t = a_0(t);
                                                                  ;
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
                                                                        ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
                                                                        t = q_8;
                                                                        t = new_0_0(t);
                                                                        b_45 = t;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        m_45 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = a_0(t);
                                                                        n_45 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(n_45), m_45);
                                                                        t = a_0(t);
                                                                        c_45 = t;
                                                                        t = b_45;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        l_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, l_45);
                                                                        t = a_0(t);
                                                                        k_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, k_45);
                                                                        t = a_0(t);
                                                                        e_45 = t;
                                                                        t = p_8;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        g_45 = t;
                                                                        t = b_45;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        j_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, j_45);
                                                                        t = a_0(t);
                                                                        i_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, i_45);
                                                                        t = a_0(t);
                                                                        h_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_45, h_45);
                                                                        t = a_0(t);
                                                                        f_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, e_45, f_45);
                                                                        t = a_0(t);
                                                                        d_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, c_45, d_45);
                                                                        t = a_0(t);
                                                                        ;
                                                                        LocalPopChoice(q_20);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = p_20;
                                                                        t = q_8;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm s_20 = t;
                                                            int t_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL;
                                                                t = q_8;
                                                                t = new_0_0(t);
                                                                q_45 = t;
                                                                t = bottomup_1_0(a_0, t);
                                                                d_46 = t;
                                                                t = (ATerm) ATempty;
                                                                t = a_0(t);
                                                                e_46 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(e_46), d_46);
                                                                t = a_0(t);
                                                                r_45 = t;
                                                                t = q_45;
                                                                t = bottomup_1_0(a_0, t);
                                                                c_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, c_46);
                                                                t = a_0(t);
                                                                b_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, b_46);
                                                                t = a_0(t);
                                                                t_45 = t;
                                                                t = p_8;
                                                                t = bottomup_1_0(a_0, t);
                                                                v_45 = t;
                                                                t = q_45;
                                                                t = bottomup_1_0(a_0, t);
                                                                a_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, a_46);
                                                                t = a_0(t);
                                                                x_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, x_45);
                                                                t = a_0(t);
                                                                w_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, v_45, w_45);
                                                                t = a_0(t);
                                                                u_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, t_45, u_45);
                                                                t = a_0(t);
                                                                s_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, r_45, s_45);
                                                                t = a_0(t);
                                                                ;
                                                                LocalPopChoice(t_20);
                                                              }
                                                            else
                                                              {
                                                                t = s_20;
                                                                t = q_8;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = i_8;
                                                        {
                                                          ATerm u_20 = t;
                                                          int v_20 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL;
                                                              t = q_8;
                                                              t = new_0_0(t);
                                                              h_46 = t;
                                                              t = bottomup_1_0(a_0, t);
                                                              t_46 = t;
                                                              t = (ATerm) ATempty;
                                                              t = a_0(t);
                                                              u_46 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(u_46), t_46);
                                                              t = a_0(t);
                                                              i_46 = t;
                                                              t = h_46;
                                                              t = bottomup_1_0(a_0, t);
                                                              s_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, s_46);
                                                              t = a_0(t);
                                                              r_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, r_46);
                                                              t = a_0(t);
                                                              k_46 = t;
                                                              t = p_8;
                                                              t = bottomup_1_0(a_0, t);
                                                              m_46 = t;
                                                              t = h_46;
                                                              t = bottomup_1_0(a_0, t);
                                                              q_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, q_46);
                                                              t = a_0(t);
                                                              p_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, p_46);
                                                              t = a_0(t);
                                                              n_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_46, n_46);
                                                              t = a_0(t);
                                                              l_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, k_46, l_46);
                                                              t = a_0(t);
                                                              j_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_46, j_46);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(v_20);
                                                            }
                                                          else
                                                            {
                                                              t = u_20;
                                                              t = q_8;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = i_8;
                                                    {
                                                      ATerm w_20 = t;
                                                      int x_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL;
                                                          t = q_8;
                                                          t = new_0_0(t);
                                                          x_46 = t;
                                                          t = bottomup_1_0(a_0, t);
                                                          j_47 = t;
                                                          t = (ATerm) ATempty;
                                                          t = a_0(t);
                                                          k_47 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(k_47), j_47);
                                                          t = a_0(t);
                                                          y_46 = t;
                                                          t = x_46;
                                                          t = bottomup_1_0(a_0, t);
                                                          i_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, i_47);
                                                          t = a_0(t);
                                                          h_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, h_47);
                                                          t = a_0(t);
                                                          a_47 = t;
                                                          t = p_8;
                                                          t = bottomup_1_0(a_0, t);
                                                          c_47 = t;
                                                          t = x_46;
                                                          t = bottomup_1_0(a_0, t);
                                                          g_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, g_47);
                                                          t = a_0(t);
                                                          f_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, f_47);
                                                          t = a_0(t);
                                                          d_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_47, d_47);
                                                          t = a_0(t);
                                                          b_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_47, b_47);
                                                          t = a_0(t);
                                                          z_46 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, y_46, z_46);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(x_20);
                                                        }
                                                      else
                                                        {
                                                          t = w_20;
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
                                                      ATerm y_20 = t;
                                                      int z_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, i_8);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(z_20);
                                                        }
                                                      else
                                                        {
                                                          t = y_20;
                                                          {
                                                            ATerm a_21 = t;
                                                            int b_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL;
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
                                                                x_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, x_47);
                                                                t = a_0(t);
                                                                r_47 = t;
                                                                t = p_8;
                                                                t = bottomup_1_0(a_0, t);
                                                                t_47 = t;
                                                                t = o_47;
                                                                t = bottomup_1_0(a_0, t);
                                                                w_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, w_47);
                                                                t = a_0(t);
                                                                v_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, v_47);
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
                                                                ;
                                                                LocalPopChoice(b_21);
                                                              }
                                                            else
                                                              {
                                                                t = a_21;
                                                                t = q_8;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm c_21 = t;
                                                    int e_21 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL;
                                                        t = q_8;
                                                        t = new_0_0(t);
                                                        e_48 = t;
                                                        t = bottomup_1_0(a_0, t);
                                                        p_48 = t;
                                                        t = (ATerm) ATempty;
                                                        t = a_0(t);
                                                        q_48 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(q_48), p_48);
                                                        t = a_0(t);
                                                        f_48 = t;
                                                        t = e_48;
                                                        t = bottomup_1_0(a_0, t);
                                                        o_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, o_48);
                                                        t = a_0(t);
                                                        n_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, n_48);
                                                        t = a_0(t);
                                                        h_48 = t;
                                                        t = p_8;
                                                        t = bottomup_1_0(a_0, t);
                                                        j_48 = t;
                                                        t = e_48;
                                                        t = bottomup_1_0(a_0, t);
                                                        m_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, m_48);
                                                        t = a_0(t);
                                                        l_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, l_48);
                                                        t = a_0(t);
                                                        k_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, j_48, k_48);
                                                        t = a_0(t);
                                                        i_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, h_48, i_48);
                                                        t = a_0(t);
                                                        g_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, f_48, g_48);
                                                        t = a_0(t);
                                                        ;
                                                        LocalPopChoice(e_21);
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
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Match_1))
                                      {
                                        p_8 = ATgetArgument(t, 0);
                                        t = p_8;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm f_21 = t;
                                            int g_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_p_6;
                                                t = a_0(t);
                                                ;
                                                LocalPopChoice(g_21);
                                              }
                                            else
                                              {
                                                t = f_21;
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
                                                ATerm h_21 = t;
                                                int i_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_w_6;
                                                    t = a_0(t);
                                                    ;
                                                    LocalPopChoice(i_21);
                                                  }
                                                else
                                                  {
                                                    t = h_21;
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
                                                    ATerm j_21 = t;
                                                    int k_21 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_w_6;
                                                        t = a_0(t);
                                                        ;
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
                                                ATerm l_21 = t;
                                                int m_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm n_21 = ATgetArgument(t, 0);
                                                        o_8 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(m_21);
                                                    t = o_8;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm o_21 = t;
                                                        int p_21 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_w_6;
                                                            t = a_0(t);
                                                            ;
                                                            LocalPopChoice(p_21);
                                                          }
                                                        else
                                                          {
                                                            t = o_21;
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
                                                    t = l_21;
                                                    {
                                                      ATerm q_21 = t;
                                                      int s_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm t_21 = ATgetArgument(t, 0);
                                                              o_8 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(s_21);
                                                          {
                                                            ATerm u_21 = t;
                                                            int v_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = o_8;
                                                                t = fetch_1_0(v_0, t);
                                                                t = term_w_6;
                                                                t = bottomup_1_0(a_0, t);
                                                                ;
                                                                LocalPopChoice(v_21);
                                                              }
                                                            else
                                                              {
                                                                t = u_21;
                                                                t = q_8;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = q_21;
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
                                                                            ATerm w_21 = t;
                                                                            int x_21 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm d_50 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, n_8, o_8);
                                                                                t = a_0(t);
                                                                                d_50 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, i_8, d_50);
                                                                                t = a_0(t);
                                                                                ;
                                                                                LocalPopChoice(x_21);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = w_21;
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
                                                                                      ;
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
                                                                              ;
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
                                                                          ;
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
                                                                            ;
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
                                                                                    ATerm r_50 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, n_8);
                                                                                    t = a_0(t);
                                                                                    r_50 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, i_8, r_50);
                                                                                    t = a_0(t);
                                                                                    ;
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
                                                                                      t = term_w_6;
                                                                                      t = a_0(t);
                                                                                      ;
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
                                                                                        ATerm y_50 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, n_8);
                                                                                        t = a_0(t);
                                                                                        y_50 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, i_8, y_50);
                                                                                        t = a_0(t);
                                                                                        ;
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
                                                                                          t = term_w_6;
                                                                                          t = a_0(t);
                                                                                          ;
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
                                                                                            ATerm e_51 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, n_8);
                                                                                            t = a_0(t);
                                                                                            e_51 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, i_8, e_51);
                                                                                            t = a_0(t);
                                                                                            ;
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
                                                                                              t = term_p_6;
                                                                                              t = a_0(t);
                                                                                              ;
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
                                                                                            ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL;
                                                                                            t = term_w_22;
                                                                                            t = bottomup_1_0(a_0, t);
                                                                                            m_51 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = a_0(t);
                                                                                            p_51 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(p_51), j_5);
                                                                                            t = a_0(t);
                                                                                            o_51 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(o_51), p_8);
                                                                                            t = a_0(t);
                                                                                            n_51 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, m_51, n_51);
                                                                                            t = a_0(t);
                                                                                            l_51 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, o_8, l_51);
                                                                                            t = a_0(t);
                                                                                            ;
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
                                                                                                ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL,a_52 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, o_8);
                                                                                                t = a_0(t);
                                                                                                v_51 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, j_5);
                                                                                                t = a_0(t);
                                                                                                y_51 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = a_0(t);
                                                                                                a_52 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(a_52), y_51);
                                                                                                t = a_0(t);
                                                                                                x_51 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(x_51), p_8);
                                                                                                t = a_0(t);
                                                                                                w_51 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(w_51), v_51);
                                                                                                t = a_0(t);
                                                                                                u_51 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, u_51);
                                                                                                t = a_0(t);
                                                                                                ;
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
                                                                                                    ATerm e_52 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, o_8);
                                                                                                    t = a_0(t);
                                                                                                    e_52 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, p_8, e_52);
                                                                                                    t = a_0(t);
                                                                                                    ;
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
                                                                                                        ATerm k_52 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, p_8);
                                                                                                        t = a_0(t);
                                                                                                        k_52 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, k_52, o_8);
                                                                                                        t = a_0(t);
                                                                                                        ;
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
                                                                                                            ;
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
                                                                                                                      ATerm e_53 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, p_8, g_8);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      e_53 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, e_53, h_8);
                                                                                                                      t = bottomup_1_0(a_0, t);
                                                                                                                      ;
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
                                                                                                                                                                ATerm w_0 (ATerm t)
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
                                                                                                                                                                t = oncetd_1_0(w_0, t);
                                                                                                                                                                PopChoice();
                                                                                                                                                                _fail(t);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                t = k_23;
                                                                                                                                                              }
                                                                                                                                                            t = p_5;
                                                                                                                                                            t = bottomup_1_0(a_0, t);
                                                                                                                                                          }
                                                                                                                                                          ;
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
ATerm topdown_1_0 (ATerm d_92 (ATerm), ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    t = topdown_1_0(d_92, t);
    return(t);
  }
  t = d_92(t);
  t = SRTS_all(x_0, t);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm o_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm q_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(p_23);
      {
        ATerm r_54 = NULL,s_54 = NULL;
        r_54 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm r_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        s_54 = t;
        t = SSLgetAnnotations(r_54);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_23 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) s_23) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm t_23 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(t_23) != AT_LIST) || !(ATisEmpty(t_23))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = s_54;
      }
    }
  else
    {
      t = o_23;
      {
        ATerm u_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm w_23 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) w_23) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm x_23 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(v_23);
            _fail(t);
          }
        else
          {
            t = u_23;
          }
      }
    }
  return(t);
}
ATerm b_5 (ATerm c_69, ATerm b_69, ATerm t)
{
  t = c_69;
  t = topdown_1_0(y_0, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, c_69);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL,f_55 = NULL,g_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL,m_55 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      f_55 = ATgetArgument(t, 0);
      j_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_55;
  if(match_cons(t, sym_Match_1))
    {
      g_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_55;
  if(match_cons(t, sym_Var_1))
    {
      i_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_55;
  if(match_cons(t, sym_Seq_2))
    {
      k_55 = ATgetArgument(t, 0);
      c_55 = ATgetArgument(t, 1);
      t = k_55;
      if(match_cons(t, sym_Build_1))
        {
          m_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_55;
      if(match_cons(t, sym_Var_1))
        {
          b_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_55;
      if((i_55 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_55)), c_55);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          k_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_55;
      if(match_cons(t, sym_Var_1))
        {
          m_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_55;
      if((i_55 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_55));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm u_55 = NULL,v_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      x_55 = ATgetArgument(t, 0);
      z_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_55;
  if(match_cons(t, sym_Build_1))
    {
      y_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_55;
  if(match_cons(t, sym_Seq_2))
    {
      a_56 = ATgetArgument(t, 0);
      v_55 = ATgetArgument(t, 1);
      t = a_56;
      if(match_cons(t, sym_Match_1))
        {
          u_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_55;
      if((y_55 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_55), v_55);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          a_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_56;
      if((y_55 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, y_55);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      l_56 = ATgetArgument(t, 0);
      n_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_56;
  if(match_cons(t, sym_Match_1))
    {
      m_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_56;
  if(match_cons(t, sym_Seq_2))
    {
      o_56 = ATgetArgument(t, 0);
      j_56 = ATgetArgument(t, 1);
      t = o_56;
      if(match_cons(t, sym_Match_1))
        {
          i_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_56;
      if((m_56 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_56), j_56);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          o_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_56;
      if((m_56 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, m_56);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL,a_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      a_57 = ATgetArgument(t, 0);
      c_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_57;
  if(match_cons(t, sym_Build_1))
    {
      ATerm y_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_57;
  if(match_cons(t, sym_Seq_2))
    {
      d_57 = ATgetArgument(t, 0);
      e_57 = ATgetArgument(t, 1);
      t = d_57;
      if(match_cons(t, sym_PrimT_3))
        {
          w_56 = ATgetArgument(t, 0);
          x_56 = ATgetArgument(t, 1);
          y_56 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, w_56, x_56, y_56), e_57);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          d_57 = ATgetArgument(t, 0);
          e_57 = ATgetArgument(t, 1);
          f_57 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, d_57, e_57, f_57);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm r_57 = NULL,s_57 = NULL,u_57 = NULL,b_58 = NULL,c_58 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      u_57 = ATgetArgument(t, 0);
      b_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_57;
  if(match_cons(t, sym_Build_1))
    {
      ATerm z_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_58;
  if(match_cons(t, sym_Seq_2))
    {
      c_58 = ATgetArgument(t, 0);
      s_57 = ATgetArgument(t, 1);
      t = c_58;
      if(match_cons(t, sym_Build_1))
        {
          r_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, r_57), s_57);
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
ATerm z_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_24 = ATgetArgument(t, 0);
      if(((ATgetType(a_24) != AT_LIST) || !(ATisEmpty(a_24))))
        _fail(t);
      {
        ATerm b_24 = ATgetArgument(t, 1);
        if(((ATgetType(b_24) != AT_LIST) || !(ATisEmpty(b_24))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_24 = ATgetArgument(t, 0);
      if(((ATgetType(c_24) == AT_LIST) && !(ATisEmpty(c_24))))
        {
          i_59 = ATgetFirst((ATermList) c_24);
          j_59 = (ATerm) ATgetNext((ATermList) c_24);
        }
      else
        _fail(t);
      {
        ATerm d_24 = ATgetArgument(t, 1);
        if(((ATgetType(d_24) == AT_LIST) && !(ATisEmpty(d_24))))
          {
            k_59 = ATgetFirst((ATermList) d_24);
            l_59 = (ATerm) ATgetNext((ATermList) d_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_59, k_59), (ATerm) ATmakeAppl(sym__2, j_59, l_59));
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm m_59 = NULL,n_59 = NULL;
  if(match_cons(t, sym__2))
    {
      m_59 = ATgetArgument(t, 0);
      n_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_59), m_59);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm o_59 = NULL,p_59 = NULL;
  if(match_cons(t, sym__2))
    {
      o_59 = ATgetArgument(t, 0);
      p_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_59), (ATerm) ATmakeAppl(sym_Match_1, p_59));
  return(t);
}
ATerm d_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_24 = ATgetArgument(t, 0);
      if(((ATgetType(f_24) != AT_LIST) || !(ATisEmpty(f_24))))
        _fail(t);
      {
        ATerm g_24 = ATgetArgument(t, 1);
        if(((ATgetType(g_24) != AT_LIST) || !(ATisEmpty(g_24))))
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
  ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_24 = ATgetArgument(t, 0);
      if(((ATgetType(h_24) == AT_LIST) && !(ATisEmpty(h_24))))
        {
          u_59 = ATgetFirst((ATermList) h_24);
          v_59 = (ATerm) ATgetNext((ATermList) h_24);
        }
      else
        _fail(t);
      {
        ATerm i_24 = ATgetArgument(t, 1);
        if(((ATgetType(i_24) == AT_LIST) && !(ATisEmpty(i_24))))
          {
            w_59 = ATgetFirst((ATermList) i_24);
            x_59 = (ATerm) ATgetNext((ATermList) i_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_59, w_59), (ATerm) ATmakeAppl(sym__2, v_59, x_59));
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm y_59 = NULL,z_59 = NULL;
  if(match_cons(t, sym__2))
    {
      y_59 = ATgetArgument(t, 0);
      z_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_59), y_59);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm a_60 = NULL,b_60 = NULL;
  if(match_cons(t, sym__2))
    {
      a_60 = ATgetArgument(t, 0);
      b_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_60), (ATerm) ATmakeAppl(sym_Match_1, b_60));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      v_58 = ATgetArgument(t, 0);
      z_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_58;
  if(match_cons(t, sym_Build_1))
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
  t = z_58;
  if(match_cons(t, sym_Seq_2))
    {
      a_59 = ATgetArgument(t, 0);
      t_58 = ATgetArgument(t, 1);
      {
        ATerm h_59 = NULL;
        t = a_59;
        if(match_cons(t, sym_Match_1))
          {
            b_59 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_59;
        if(match_cons(t, sym_Op_2))
          {
            r_58 = ATgetArgument(t, 0);
            s_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_58;
        if((x_58 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, y_58, s_58);
        t = genzip_4_0(z_0, a_1, b_1, c_1, t);
        h_59 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, h_59), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, x_58, y_58)), t_58));
      }
    }
  else
    {
      ATerm t_59 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          a_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_59;
      if(match_cons(t, sym_Op_2))
        {
          b_59 = ATgetArgument(t, 0);
          c_59 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_59;
      if((x_58 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, y_58, c_59);
      t = genzip_4_0(d_1, e_1, f_1, g_1, t);
      t_59 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_59), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, x_58, y_58)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm z_60 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL;
  c_61 = t;
  if(match_cons(t, sym_Seq_2))
    {
      d_61 = ATgetArgument(t, 0);
      h_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_61;
  if(match_cons(t, sym_Build_1))
    {
      e_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_61;
  if(match_cons(t, sym_Op_2))
    {
      f_61 = ATgetArgument(t, 0);
      {
        ATerm k_24 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = h_61;
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            i_61 = ATgetArgument(t, 0);
            {
              ATerm n_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(m_24);
        t = i_61;
        if(match_cons(t, sym_Match_1))
          {
            j_61 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_61;
        if(match_cons(t, sym_Op_2))
          {
            z_60 = ATgetArgument(t, 0);
            {
              ATerm o_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_61, z_60);
        {
          ATerm r_24 = t;
          if((PushChoice() == 0))
            {
              ATerm m_1 = NULL;
              if(match_cons(t, sym__2))
                {
                  m_1 = ATgetArgument(t, 0);
                  if((m_1 != ATgetArgument(t, 1)))
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
              t = r_24;
            }
          t = term_w_6;
        }
      }
    else
      {
        t = l_24;
        if(match_cons(t, sym_Match_1))
          {
            i_61 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_61;
        if(match_cons(t, sym_Op_2))
          {
            j_61 = ATgetArgument(t, 0);
            {
              ATerm s_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_61, j_61);
        {
          ATerm t_24 = t;
          if((PushChoice() == 0))
            {
              ATerm v_1 = NULL;
              if(match_cons(t, sym__2))
                {
                  v_1 = ATgetArgument(t, 0);
                  if((v_1 != ATgetArgument(t, 1)))
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
              t = t_24;
            }
          t = term_w_6;
        }
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm h_93 (ATerm), ATerm t)
{
  ATerm n_61 (ATerm t)
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_93(t);
        ;
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        t = SRTS_one(n_61, t);
      }
    return(t);
  }
  t = n_61(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL;
  g_62 = t;
  if(match_cons(t, sym_Let_2))
    {
      h_62 = ATgetArgument(t, 0);
      o_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_62;
  if(match_cons(t, sym_Let_2))
    {
      p_62 = ATgetArgument(t, 0);
      r_62 = ATgetArgument(t, 1);
      {
        ATerm w_62 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, h_62, p_62);
        t = conc_0_0(t);
        w_62 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, w_62, r_62);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          p_62 = ATgetArgument(t, 0);
          r_62 = ATgetArgument(t, 1);
          s_62 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = h_62;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_62 = ATgetFirst((ATermList) t);
          n_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_62;
      if(match_cons(t, sym_SDefT_4))
        {
          j_62 = ATgetArgument(t, 0);
          k_62 = ATgetArgument(t, 1);
          l_62 = ATgetArgument(t, 2);
          m_62 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = k_62;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_62;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_62;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_62;
      if(match_cons(t, sym_SVar_1))
        {
          q_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_62;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_62;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_62;
      if((j_62 != t))
        {
          _fail(t);
        }
      t = m_62;
      {
        ATerm w_24 = t;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm x_24 = ATgetArgument(t, 0);
                  if(match_cons(x_24, sym_SVar_1))
                    {
                      if((j_62 != ATgetArgument(x_24, 0)))
                        {
                          _fail(ATgetArgument(x_24, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm y_24 = ATgetArgument(t, 1);
                    if(((ATgetType(y_24) != AT_LIST) || !(ATisEmpty(y_24))))
                      _fail(t);
                  }
                  {
                    ATerm z_24 = ATgetArgument(t, 2);
                    if(((ATgetType(z_24) != AT_LIST) || !(ATisEmpty(z_24))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(h_1, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = w_24;
          }
        t = m_62;
      }
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
              t = term_w_6;
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
                  t = term_w_6;
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
                      t = term_p_6;
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
ATerm i_1 (ATerm t)
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
      t = term_w_6;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          k_66 = ATgetArgument(t, 0);
          t = k_66;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_p_6;
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
              t = term_w_6;
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
                  t = term_w_6;
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
                      t = term_w_6;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          k_66 = ATgetArgument(t, 0);
                          t = k_66;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_w_6;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              k_66 = ATgetArgument(t, 0);
                              t = k_66;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_w_6;
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
                                  t = term_w_6;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      k_66 = ATgetArgument(t, 0);
                                      l_66 = ATgetArgument(t, 1);
                                      t = l_66;
                                      t = fetch_1_0(i_1, t);
                                      t = term_w_6;
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
                                                  t = term_w_6;
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
  ATerm u_67 = NULL,w_67 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      w_67 = ATgetArgument(t, 0);
      t = w_67;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_p_6;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          w_67 = ATgetArgument(t, 0);
          t = w_67;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_w_6;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              w_67 = ATgetArgument(t, 0);
              u_67 = ATgetArgument(t, 1);
              t = u_67;
              if(match_cons(t, sym_Id_0))
                {
                  t = w_67;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = u_67;
                    }
                  else
                    {
                      t = w_67;
                    }
                }
              else
                {
                  t = w_67;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = u_67;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  w_67 = ATgetArgument(t, 0);
                  u_67 = ATgetArgument(t, 1);
                  t = w_67;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_p_6;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      w_67 = ATgetArgument(t, 0);
                      u_67 = ATgetArgument(t, 1);
                      t = u_67;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_p_6;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          w_67 = ATgetArgument(t, 0);
                          u_67 = ATgetArgument(t, 1);
                          t = u_67;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_p_6;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              w_67 = ATgetArgument(t, 0);
                              t = w_67;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_p_6;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  w_67 = ATgetArgument(t, 0);
                                  t = w_67;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_p_6;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      w_67 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = w_67;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_p_6;
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
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(b_25);
    }
  else
    {
      t = a_25;
      {
        ATerm h_25 = t;
        int j_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(j_25);
          }
        else
          {
            t = h_25;
            {
              ATerm k_25 = t;
              int l_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(l_25);
                }
              else
                {
                  t = k_25;
                  {
                    ATerm m_25 = t;
                    int n_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(n_25);
                      }
                    else
                      {
                        t = m_25;
                        {
                          ATerm o_25 = t;
                          int p_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(p_25);
                            }
                          else
                            {
                              t = o_25;
                              {
                                ATerm q_25 = t;
                                int r_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm k_69 = NULL,l_69 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        k_69 = ATgetArgument(t, 0);
                                        l_69 = ATgetArgument(t, 1);
                                        t = k_69;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = l_69;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            k_69 = ATgetArgument(t, 0);
                                            l_69 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = k_69;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = l_69;
                                      }
                                    ;
                                    LocalPopChoice(r_25);
                                  }
                                else
                                  {
                                    t = q_25;
                                    {
                                      ATerm s_25 = t;
                                      int t_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
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
                                                t = MisMatch_0_0(t);
                                                ;
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
                                                      t = BuildMatchFusion_0_0(t);
                                                      ;
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
                                                            t = BuildBuild_0_0(t);
                                                            ;
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
                                                                  t = BuildPrim_0_0(t);
                                                                  ;
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
                                                                        t = MatchIdem_0_0(t);
                                                                        ;
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
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              ;
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
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(h_26);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = g_26;
                                                                                    {
                                                                                      ATerm v_69 = NULL,w_69 = NULL,b_70 = NULL,c_70 = NULL;
                                                                                      w_69 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          b_70 = ATgetArgument(t, 0);
                                                                                          c_70 = ATgetArgument(t, 1);
                                                                                          t = b_70;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              v_69 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = w_69;
                                                                                          t = b_5(v_69, c_70, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              b_70 = ATgetArgument(t, 0);
                                                                                              c_70 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = b_70;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = c_70;
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
ATerm j_1 (ATerm t)
{
  ATerm l_71 = NULL;
  l_71 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, l_71);
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm m_71 = NULL;
  m_71 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_71);
  return(t);
}
ATerm l_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_26 = ATgetArgument(t, 0);
      if(((ATgetType(i_26) != AT_LIST) || !(ATisEmpty(i_26))))
        _fail(t);
      {
        ATerm j_26 = ATgetArgument(t, 1);
        if(((ATgetType(j_26) != AT_LIST) || !(ATisEmpty(j_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_26 = ATgetArgument(t, 0);
      if(((ATgetType(k_26) == AT_LIST) && !(ATisEmpty(k_26))))
        {
          n_71 = ATgetFirst((ATermList) k_26);
          o_71 = (ATerm) ATgetNext((ATermList) k_26);
        }
      else
        _fail(t);
      {
        ATerm l_26 = ATgetArgument(t, 1);
        if(((ATgetType(l_26) == AT_LIST) && !(ATisEmpty(l_26))))
          {
            p_71 = ATgetFirst((ATermList) l_26);
            q_71 = (ATerm) ATgetNext((ATermList) l_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_71, p_71), (ATerm) ATmakeAppl(sym__2, o_71, q_71));
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm r_71 = NULL,s_71 = NULL;
  if(match_cons(t, sym__2))
    {
      r_71 = ATgetArgument(t, 0);
      s_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_71), r_71);
  return(t);
}
ATerm p_1 (ATerm t)
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
ATerm q_1 (ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_26 = ATgetArgument(t, 0);
      if(((ATgetType(o_26) == AT_LIST) && !(ATisEmpty(o_26))))
        {
          u_71 = ATgetFirst((ATermList) o_26);
          v_71 = (ATerm) ATgetNext((ATermList) o_26);
        }
      else
        _fail(t);
      {
        ATerm p_26 = ATgetArgument(t, 1);
        if(((ATgetType(p_26) == AT_LIST) && !(ATisEmpty(p_26))))
          {
            w_71 = ATgetFirst((ATermList) p_26);
            x_71 = (ATerm) ATgetNext((ATermList) p_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_71, w_71), (ATerm) ATmakeAppl(sym__2, v_71, x_71));
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm y_71 = NULL,z_71 = NULL;
  if(match_cons(t, sym__2))
    {
      y_71 = ATgetArgument(t, 0);
      z_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_71), y_71);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm a_72 = NULL,b_72 = NULL,c_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_26 = ATgetArgument(t, 0);
      if(match_cons(q_26, sym__2))
        {
          a_72 = ATgetArgument(q_26, 0);
          b_72 = ATgetArgument(q_26, 1);
        }
      else
        _fail(t);
      c_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, a_72)), (ATerm) ATmakeAppl(sym_Seq_2, c_72, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_72))));
  return(t);
}
ATerm q_11 (ATerm d_68, ATerm j_68, ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,k_71 = NULL;
  t = j_68;
  t = map_1_0(new_0_0, t);
  d_71 = t;
  t = map_1_0(j_1, t);
  a_71 = t;
  t = new_0_0(t);
  b_71 = t;
  t = j_68;
  t = map_1_0(new_0_0, t);
  e_71 = t;
  t = map_1_0(k_1, t);
  c_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_71, e_71);
  t = genzip_4_0(l_1, n_1, o_1, _id, t);
  k_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_71, j_68);
  t = genzip_4_0(p_1, q_1, r_1, s_1, t);
  f_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_71, e_71);
  t = conc_0_0(t);
  g_71 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, d_68, a_71), (ATerm) ATmakeAppl(sym_Var_1, b_71)));
  t = Mapp2_0_0(t);
  h_71 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, d_68, c_71), (ATerm) ATmakeAppl(sym_Var_1, b_71)));
  t = Bapp_0_0(t);
  i_71 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(g_71), b_71), (ATerm) ATmakeAppl(sym_Seq_2, h_71, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, f_71), i_71)));
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm e_72 = NULL,f_72 = NULL;
  e_72 = t;
  if(match_cons(t, sym_Build_1))
    {
      f_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_72 = NULL,h_72 = NULL,j_72 = NULL,k_72 = NULL;
        t = e_72;
        t = new_0_0(t);
        j_72 = t;
        t = f_72;
        {
          ATerm t_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((g_72 != NULL) && (g_72 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_72 = ATgetArgument(t, 0);
                if(((h_72 != NULL) && (h_72 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  h_72 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, j_72);
            return(t);
          }
          t = pat_td_1_0(t_1, t);
          k_72 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_72), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_t_26, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_72)), not_null(g_72))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_72)))), (ATerm) ATmakeAppl(sym_Build_1, k_72)));
        }
        ;
        LocalPopChoice(s_26);
      }
    else
      {
        t = r_26;
        {
          ATerm u_26 = t;
          int v_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_72 = NULL,n_72 = NULL,o_72 = NULL;
              t = e_72;
              t = new_0_0(t);
              n_72 = t;
              t = f_72;
              {
                ATerm u_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((l_72 != NULL) && (l_72 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        l_72 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, n_72);
                  return(t);
                }
                t = pat_td_1_0(u_1, t);
                o_72 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_72), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_72), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_72)))), (ATerm) ATmakeAppl(sym_Build_1, o_72)));
              }
              ;
              LocalPopChoice(v_26);
            }
          else
            {
              t = u_26;
              {
                ATerm p_72 = NULL,q_72 = NULL,s_72 = NULL,t_72 = NULL;
                t = e_72;
                t = new_0_0(t);
                s_72 = t;
                t = f_72;
                {
                  ATerm w_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((p_72 != NULL) && (p_72 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          p_72 = ATgetArgument(t, 0);
                        if(((q_72 != NULL) && (q_72 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          q_72 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, s_72);
                    return(t);
                  }
                  t = pat_td_1_0(w_1, t);
                  t_72 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_72), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(p_72), not_null(q_72), (ATerm) ATmakeAppl(sym_Var_1, s_72))), (ATerm) ATmakeAppl(sym_Build_1, t_72)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm o_107 (ATerm), ATerm t)
{
  ATerm o_73 (ATerm t)
  {
    ATerm l_73 = NULL,m_73 = NULL,n_73 = NULL;
    n_73 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_73 = ATgetFirst((ATermList) t);
        m_73 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm m_2 = NULL,p_2 = NULL,n_0 = NULL;
          t = SSLgetAnnotations(n_73);
          m_2 = t;
          t = m_73;
          t = o_73(t);
          p_2 = t;
          t = (ATerm) ATinsert(CheckATermList(p_2), l_73);
          n_0 = t;
          t = SSLsetAnnotations(n_0, m_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_73;
        t = o_107(t);
      }
    return(t);
  }
  t = o_73(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_72 = NULL,w_72 = NULL,x_72 = NULL;
  v_72 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_72;
    }
  else
    {
      ATerm x_1 (ATerm t)
      {
        t = not_null(x_72);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_72 = ATgetFirst((ATermList) t);
          if(((x_72 != NULL) && (x_72 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_72 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_72;
      t = at_end_1_0(x_1, t);
    }
  return(t);
}
ATerm a_74 (ATerm s_73, ATerm t)
{
  ATerm t_73 = NULL;
  t = SSL_explode_term(s_73);
  if(match_cons(t, sym__2))
    {
      ATerm w_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_26) != ATmakeSymbol("", 0, ATtrue)))
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
        ATerm x_26 = t;
        int y_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_1 (ATerm t)
            {
              t = w_73;
              return(t);
            }
            t = v_73;
            t = at_end_1_0(y_1, t);
            ;
            LocalPopChoice(y_26);
          }
        else
          {
            t = x_26;
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
ATerm genzip_4_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm t)
{
  ATerm h_74 (ATerm t)
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_96(t);
        ;
        LocalPopChoice(a_27);
      }
    else
      {
        t = z_26;
        {
          ATerm b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,o_4 = NULL;
          t = q_96(t);
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
          t = s_96(t);
          e_74 = t;
          t = d_74;
          t = h_74(t);
          f_74 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_74, f_74);
          o_4 = t;
          t = SSLsetAnnotations(o_4, b_74);
          t = r_96(t);
        }
      }
    return(t);
  }
  t = h_74(t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm v_74 = NULL;
  v_74 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_74);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm w_74 = NULL;
  w_74 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_74);
  return(t);
}
ATerm b_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_27 = ATgetArgument(t, 0);
      if(((ATgetType(b_27) != AT_LIST) || !(ATisEmpty(b_27))))
        _fail(t);
      {
        ATerm c_27 = ATgetArgument(t, 1);
        if(((ATgetType(c_27) != AT_LIST) || !(ATisEmpty(c_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      if(((ATgetType(d_27) == AT_LIST) && !(ATisEmpty(d_27))))
        {
          x_74 = ATgetFirst((ATermList) d_27);
          y_74 = (ATerm) ATgetNext((ATermList) d_27);
        }
      else
        _fail(t);
      {
        ATerm f_27 = ATgetArgument(t, 1);
        if(((ATgetType(f_27) == AT_LIST) && !(ATisEmpty(f_27))))
          {
            z_74 = ATgetFirst((ATermList) f_27);
            a_75 = (ATerm) ATgetNext((ATermList) f_27);
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
ATerm d_2 (ATerm t)
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
ATerm e_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_27 = ATgetArgument(t, 0);
      if(((ATgetType(g_27) != AT_LIST) || !(ATisEmpty(g_27))))
        _fail(t);
      {
        ATerm h_27 = ATgetArgument(t, 1);
        if(((ATgetType(h_27) != AT_LIST) || !(ATisEmpty(h_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm e_75 = NULL,f_75 = NULL,g_75 = NULL,h_75 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_27 = ATgetArgument(t, 0);
      if(((ATgetType(i_27) == AT_LIST) && !(ATisEmpty(i_27))))
        {
          e_75 = ATgetFirst((ATermList) i_27);
          f_75 = (ATerm) ATgetNext((ATermList) i_27);
        }
      else
        _fail(t);
      {
        ATerm j_27 = ATgetArgument(t, 1);
        if(((ATgetType(j_27) == AT_LIST) && !(ATisEmpty(j_27))))
          {
            g_75 = ATgetFirst((ATermList) j_27);
            h_75 = (ATerm) ATgetNext((ATermList) j_27);
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
ATerm g_2 (ATerm t)
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
ATerm h_2 (ATerm t)
{
  ATerm k_75 = NULL,l_75 = NULL,m_75 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_27 = ATgetArgument(t, 0);
      if(match_cons(k_27, sym__2))
        {
          k_75 = ATgetArgument(k_27, 0);
          l_75 = ATgetArgument(k_27, 1);
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
ATerm u_11 (ATerm o_68, ATerm w_68, ATerm v_68, ATerm t)
{
  ATerm j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL,u_74 = NULL;
  t = (ATerm) ATinsert(CheckATermList(w_68), v_68);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_74 = ATgetFirst((ATermList) t);
      n_74 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = map_1_0(z_1, t);
  k_74 = t;
  t = (ATerm) ATinsert(CheckATermList(w_68), v_68);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_74 = ATgetFirst((ATermList) t);
      o_74 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = map_1_0(a_2, t);
  m_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_74, o_74);
  t = genzip_4_0(b_2, c_2, d_2, _id, t);
  u_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_74, (ATerm) ATinsert(CheckATermList(w_68), v_68));
  t = genzip_4_0(e_2, f_2, g_2, h_2, t);
  p_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_74, o_74);
  t = conc_0_0(t);
  q_74 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, o_68, k_74), (ATerm) ATmakeAppl(sym_Var_1, j_74)));
  t = Mapp2_0_0(t);
  r_74 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, o_68, m_74), (ATerm) ATmakeAppl(sym_Var_1, l_74)));
  t = Bapp_0_0(t);
  s_74 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(q_74), l_74), j_74), (ATerm) ATmakeAppl(sym_Seq_2, r_74, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_74), s_74)));
  return(t);
}
ATerm pat_td_1_0 (ATerm j_90 (ATerm), ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_90(t);
      ;
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      {
        ATerm w_77 = NULL,x_77 = NULL,y_77 = NULL,a_78 = NULL;
        x_77 = t;
        if(match_cons(t, sym_Op_2))
          {
            y_77 = ATgetArgument(t, 0);
            a_78 = ATgetArgument(t, 1);
            {
              ATerm x_2 = NULL,a_3 = NULL,q_4 = NULL;
              t = SSLgetAnnotations(x_77);
              x_2 = t;
              t = a_78;
              {
                ATerm i_2 (ATerm t)
                {
                  t = pat_td_1_0(j_90, t);
                  return(t);
                }
                t = fetch_1_0(i_2, t);
                a_3 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, y_77, a_3);
                q_4 = t;
                t = SSLsetAnnotations(q_4, x_2);
              }
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                y_77 = ATgetArgument(t, 0);
                a_78 = ATgetArgument(t, 1);
                {
                  ATerm n_27 = t;
                  int o_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_3 = NULL,l_3 = NULL,r_4 = NULL;
                      t = SSLgetAnnotations(x_77);
                      i_3 = t;
                      t = a_78;
                      t = pat_td_1_0(j_90, t);
                      l_3 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, y_77, l_3);
                      r_4 = t;
                      t = SSLsetAnnotations(r_4, i_3);
                      ;
                      LocalPopChoice(o_27);
                    }
                  else
                    {
                      t = n_27;
                      {
                        ATerm t_3 = NULL,w_3 = NULL,t_4 = NULL;
                        t = SSLgetAnnotations(x_77);
                        t_3 = t;
                        t = y_77;
                        t = pat_td_1_0(j_90, t);
                        w_3 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, w_3, a_78);
                        t_4 = t;
                        t = SSLsetAnnotations(t_4, t_3);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    y_77 = ATgetArgument(t, 0);
                    a_78 = ATgetArgument(t, 1);
                    w_77 = ATgetArgument(t, 2);
                    {
                      ATerm f_4 = NULL,j_4 = NULL,u_4 = NULL;
                      t = SSLgetAnnotations(x_77);
                      f_4 = t;
                      t = w_77;
                      {
                        ATerm j_2 (ATerm t)
                        {
                          t = pat_td_1_0(j_90, t);
                          return(t);
                        }
                        t = fetch_1_0(j_2, t);
                        j_4 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, y_77, a_78, j_4);
                        u_4 = t;
                        t = SSLsetAnnotations(u_4, f_4);
                      }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        y_77 = ATgetArgument(t, 0);
                        a_78 = ATgetArgument(t, 1);
                        w_77 = ATgetArgument(t, 2);
                        {
                          ATerm q_5 = NULL,u_5 = NULL,w_4 = NULL;
                          t = SSLgetAnnotations(x_77);
                          q_5 = t;
                          t = w_77;
                          {
                            ATerm k_2 (ATerm t)
                            {
                              t = pat_td_1_0(j_90, t);
                              return(t);
                            }
                            t = fetch_1_0(k_2, t);
                            u_5 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, y_77, a_78, u_5);
                            w_4 = t;
                            t = SSLsetAnnotations(w_4, q_5);
                          }
                        }
                      }
                    else
                      {
                        ATerm d_6 = NULL,g_6 = NULL,x_4 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            y_77 = ATgetArgument(t, 0);
                            a_78 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(x_77);
                        d_6 = t;
                        t = a_78;
                        t = pat_td_1_0(j_90, t);
                        g_6 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, y_77, g_6);
                        x_4 = t;
                        t = SSLsetAnnotations(x_4, d_6);
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
  ATerm i_78 = NULL,j_78 = NULL;
  i_78 = t;
  if(match_cons(t, sym_Match_1))
    {
      j_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL;
        t = i_78;
        t = new_0_0(t);
        n_78 = t;
        t = j_78;
        {
          ATerm l_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((l_78 != NULL) && (l_78 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_78 = ATgetArgument(t, 0);
                if(((m_78 != NULL) && (m_78 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  m_78 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, n_78), l_78);
            return(t);
          }
          t = pat_td_1_0(l_2, t);
          o_78 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_78), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_r_27, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, n_78))), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_78))))));
        }
        ;
        LocalPopChoice(q_27);
      }
    else
      {
        t = p_27;
        {
          ATerm s_27 = t;
          int t_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_78 = NULL,r_78 = NULL,s_78 = NULL;
              t = i_78;
              t = new_0_0(t);
              r_78 = t;
              t = j_78;
              {
                ATerm n_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((q_78 != NULL) && (q_78 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        q_78 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, r_78);
                  return(t);
                }
                t = pat_td_1_0(n_2, t);
                s_78 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, r_78)), not_null(q_78))));
              }
              ;
              LocalPopChoice(t_27);
            }
          else
            {
              t = s_27;
              {
                ATerm u_78 = NULL,v_78 = NULL,w_78 = NULL,x_78 = NULL;
                t = i_78;
                t = new_0_0(t);
                w_78 = t;
                t = j_78;
                {
                  ATerm o_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((v_78 != NULL) && (v_78 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          v_78 = ATgetArgument(t, 0);
                        if(((u_78 != NULL) && (u_78 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          u_78 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, w_78);
                    return(t);
                  }
                  t = pat_td_1_0(o_2, t);
                  x_78 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, w_78)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_78)), not_null(v_78)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm p_79 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      p_79 = ATgetArgument(t, 0);
      t = p_79;
    }
  else
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_u_27;
    }
  return(t);
}
ATerm MatchingCongruence_0_0 (ATerm t)
{
  ATerm d_79 = NULL,e_79 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      d_79 = ATgetArgument(t, 0);
      e_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_79;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, d_79, (ATerm) ATempty));
    }
  else
    {
      ATerm o_79 = NULL;
      t = e_79;
      t = map_1_0(q_2, t);
      o_79 = t;
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, d_79, o_79));
      t = Mapp2_0_0(t);
    }
  return(t);
}
ATerm repeat_1_0 (ATerm x_101 (ATerm), ATerm t)
{
  ATerm v_79 (ATerm t)
  {
    ATerm v_27 = t;
    int x_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_101(t);
        t = v_79(t);
        ;
        LocalPopChoice(x_27);
      }
    else
      {
        t = v_27;
      }
    return(t);
  }
  t = v_79(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm e_92 (ATerm), ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = bottomup_1_0(e_92, t);
    return(t);
  }
  t = SRTS_all(r_2, t);
  t = e_92(t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = repeat_1_0(t_2, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm y_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_28 = t;
      int b_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MatchingCongruence_0_0(t);
          ;
          LocalPopChoice(b_28);
        }
      else
        {
          t = a_28;
          {
            ATerm e_80 = NULL,f_80 = NULL,g_80 = NULL,h_80 = NULL,i_80 = NULL,j_80 = NULL,k_80 = NULL,l_80 = NULL,m_80 = NULL,n_80 = NULL;
            l_80 = t;
            if(match_cons(t, sym_Call_2))
              {
                m_80 = ATgetArgument(t, 0);
                n_80 = ATgetArgument(t, 1);
                t = m_80;
                if(match_cons(t, sym_SVar_1))
                  {
                    e_80 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = e_80;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
                  _fail(t);
                t = n_80;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_80 = ATgetFirst((ATermList) t);
                    i_80 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = f_80;
                if(match_cons(t, sym_Cong_2))
                  {
                    g_80 = ATgetArgument(t, 0);
                    h_80 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = i_80;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    j_80 = ATgetFirst((ATermList) t);
                    k_80 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = k_80;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_80;
                t = u_11(g_80, h_80, j_80, t);
              }
            else
              {
                if(match_cons(t, sym_Cong_2))
                  {
                    m_80 = ATgetArgument(t, 0);
                    n_80 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_80;
                t = q_11(m_80, n_80, t);
              }
          }
        }
      ;
      LocalPopChoice(z_27);
    }
  else
    {
      t = y_27;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm define_congruences_0_0 (ATerm t)
{
  t = bottomup_1_0(s_2, t);
  t = simplify_0_0(t);
  return(t);
}
ATerm map_1_0 (ATerm y_106 (ATerm), ATerm t)
{
  ATerm h_81 (ATerm t)
  {
    ATerm e_81 = NULL,f_81 = NULL,g_81 = NULL;
    e_81 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_81;
      }
    else
      {
        ATerm o_6 = NULL,r_6 = NULL,s_6 = NULL,i_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_81 = ATgetFirst((ATermList) t);
            g_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_81);
        o_6 = t;
        t = f_81;
        t = y_106(t);
        r_6 = t;
        t = g_81;
        t = h_81(t);
        s_6 = t;
        t = (ATerm) ATinsert(CheckATermList(s_6), r_6);
        i_5 = t;
        t = SSLsetAnnotations(i_5, o_6);
      }
    return(t);
  }
  t = h_81(t);
  return(t);
}
ATerm v_11 (ATerm y_48, ATerm z_48, ATerm t)
{
  ATerm j_81 = NULL;
  t = SSL_fputc(y_48, z_48);
  j_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_81);
  return(t);
}
ATerm w_11 (ATerm m_52, ATerm n_52, ATerm t)
{
  ATerm k_81 = NULL;
  t = SSL_write_term_to_stream_text(m_52, n_52);
  k_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_81);
  return(t);
}
ATerm y_11 (ATerm z_112 (ATerm), ATerm h_474, ATerm q_52, ATerm t)
{
  ATerm l_81 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_474, term_c_28);
  t = b_12(t);
  l_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_81, q_52);
  t = z_112(t);
  t = fclose_0_0(t);
  t = q_52;
  return(t);
}
ATerm x_11 (ATerm i_52, ATerm j_52, ATerm t)
{
  ATerm m_81 = NULL;
  t = SSL_write_term_to_stream_baf(i_52, j_52);
  m_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_81);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm p_81 = NULL,q_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_28 = ATgetArgument(t, 0);
      if(match_cons(d_28, sym_Stream_1))
        {
          p_81 = ATgetArgument(d_28, 0);
        }
      else
        _fail(t);
      q_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(p_81, q_81, t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm r_81 = NULL,s_81 = NULL,t_81 = NULL,u_81 = NULL,v_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_28 = ATgetArgument(t, 0);
      if(match_cons(e_28, sym_Stream_1))
        {
          u_81 = ATgetArgument(e_28, 0);
        }
      else
        _fail(t);
      v_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_11(u_81, v_81, t);
  r_81 = t;
  t = term_f_28;
  s_81 = t;
  t = r_81;
  if(match_cons(t, sym_Stream_1))
    {
      t_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_f_28, r_81);
  t = v_11(s_81, t_81, t);
  return(t);
}
ATerm output_1_0 (ATerm i_117 (ATerm), ATerm t)
{
  ATerm n_81 = NULL,o_81 = NULL;
  t = i_117(t);
  o_81 = t;
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_28;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(h_28);
      }
    else
      {
        t = g_28;
        t = term_j_28;
      }
    n_81 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_81, o_81);
    {
      ATerm k_28 = t;
      int l_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_m_28;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, n_81, o_81);
          LocalPopChoice(l_28);
          if(match_cons(t, sym__2))
            {
              ATerm n_28 = ATgetArgument(t, 0);
              ATerm p_28 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_11(u_2, n_81, o_81, t);
        }
      else
        {
          t = k_28;
          if(match_cons(t, sym__2))
            {
              ATerm q_28 = ATgetArgument(t, 0);
              ATerm r_28 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_11(v_2, n_81, o_81, t);
        }
    }
  }
  return(t);
}
ATerm k_82 (ATerm d_82, ATerm t)
{
  t = SSL_fclose(d_82);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_82 = NULL,h_82 = NULL;
  h_82 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_82 = ATgetArgument(t, 0);
      {
        ATerm s_28 = t;
        int t_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_82);
            ;
            LocalPopChoice(t_28);
          }
        else
          {
            t = s_28;
            t = k_82(h_82, t);
          }
      }
    }
  else
    {
      t = k_82(h_82, t);
    }
  return(t);
}
ATerm z_11 (ATerm o_52, ATerm t)
{
  t = SSL_read_term_from_stream(o_52);
  return(t);
}
ATerm a_12 (ATerm a_49, ATerm b_49, ATerm t)
{
  ATerm l_82 = NULL;
  t = SSL_fopen(a_49, b_49);
  l_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_82);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_82 = NULL;
  t = SSL_stdin_stream();
  m_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_82);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_82 = NULL;
  t = SSL_stdout_stream();
  n_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_82);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_82 = NULL;
  t = SSL_stderr_stream();
  o_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_82);
  return(t);
}
ATerm v_83 (ATerm u_82, ATerm t)
{
  ATerm v_82 = NULL;
  t = SSL_explode_term(u_82);
  if(match_cons(t, sym__2))
    {
      ATerm u_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_28 = ATgetArgument(t, 1);
        if(((ATgetType(v_28) == AT_LIST) && !(ATisEmpty(v_28))))
          {
            v_82 = ATgetFirst((ATermList) v_28);
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
  t = v_82;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_82;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_82;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_82;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm w_83 (ATerm y_82, ATerm z_82, ATerm a_83, ATerm t)
{
  ATerm b_83 = NULL,c_83 = NULL,d_83 = NULL,g_83 = NULL,g_7 = NULL;
  t = SSLgetAnnotations(a_83);
  d_83 = t;
  t = y_82;
  if(match_cons(t, sym_Path_1))
    {
      g_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_83, z_82);
  g_7 = t;
  t = SSLsetAnnotations(g_7, d_83);
  if(match_cons(t, sym__2))
    {
      b_83 = ATgetArgument(t, 0);
      c_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12(b_83, c_83, t);
  return(t);
}
ATerm x_83 (ATerm i_83, ATerm j_83, ATerm k_83, ATerm t)
{
  ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL,q_83 = NULL,z_14 = NULL;
  t = SSLgetAnnotations(k_83);
  n_83 = t;
  t = SSL_is_string(i_83);
  q_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_83, j_83);
  z_14 = t;
  t = SSLsetAnnotations(z_14, n_83);
  if(match_cons(t, sym__2))
    {
      l_83 = ATgetArgument(t, 0);
      m_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12(l_83, m_83, t);
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm s_83 = NULL,t_83 = NULL,u_83 = NULL;
  s_83 = t;
  if(match_cons(t, sym__2))
    {
      t_83 = ATgetArgument(t, 0);
      u_83 = ATgetArgument(t, 1);
      {
        ATerm x_28 = t;
        int y_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_83(s_83, t);
            ;
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
                  t = w_83(t_83, u_83, s_83, t);
                  ;
                  LocalPopChoice(b_29);
                }
              else
                {
                  t = a_29;
                  t = x_83(t_83, u_83, s_83, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_83(s_83, t);
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_83 = NULL,z_83 = NULL,a_84 = NULL;
  ATerm d_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_84 = NULL;
      b_84 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_84, term_g_29);
      t = b_12(t);
      ;
      LocalPopChoice(f_29);
    }
  else
    {
      t = d_29;
      t = debug_1_0(w_2, t);
      _fail(t);
    }
  z_83 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(a_84, t);
  y_83 = t;
  t = z_83;
  t = fclose_0_0(t);
  t = y_83;
  return(t);
}
ATerm input_1_0 (ATerm j_117 (ATerm), ATerm t)
{
  ATerm h_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_29);
    }
  else
    {
      t = h_29;
      t = term_l_29;
    }
  t = ReadFromFile_0_0(t);
  t = j_117(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_84 = NULL,e_84 = NULL,f_84 = NULL,g_84 = NULL,h_84 = NULL;
  d_84 = t;
  t = term_m_29;
  t = whoami_0_0(t);
  e_84 = t;
  t = term_n_29;
  g_84 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_29), e_84), term_o_29);
  h_84 = t;
  t = SSL_printnl(g_84, h_84);
  t = term_q_29;
  f_84 = t;
  t = SSL_exit(f_84);
  t = d_84;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm j_84 = NULL;
  j_84 = t;
  if(match_string(t, "-k"))
    {
      t = j_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_84;
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm k_84 = NULL,l_84 = NULL,m_84 = NULL;
  k_84 = t;
  t = SSL_string_to_int(k_84);
  l_84 = t;
  t = term_r_29;
  m_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_29, l_84);
  t = j_12(m_84, l_84, t);
  t = k_84;
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_s_29;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_2, z_2, b_3, t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm o_84 = NULL;
  o_84 = t;
  if(match_string(t, "-S"))
    {
      t = o_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_84;
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm q_84 = NULL,r_84 = NULL;
  t = term_t_29;
  q_84 = t;
  t = term_u_29;
  r_84 = t;
  t = term_v_29;
  t = j_12(q_84, r_84, t);
  t = term_w_29;
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_x_29;
  return(t);
}
ATerm f_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm s_84 = NULL,t_84 = NULL,u_84 = NULL;
  s_84 = t;
  t = SSL_string_to_int(s_84);
  t_84 = t;
  t = term_t_29;
  u_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_29, t_84);
  t = j_12(u_84, t_84, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_84);
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_y_29;
  return(t);
}
ATerm j_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm v_84 = NULL,w_84 = NULL;
  t = term_z_29;
  v_84 = t;
  t = term_m_29;
  w_84 = t;
  t = term_a_30;
  t = j_12(v_84, w_84, t);
  t = term_b_30;
  return(t);
}
ATerm m_3 (ATerm t)
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
      t = Option_3_0(c_3, d_3, e_3, t);
      ;
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
            t = ArgOption_3_0(f_3, g_3, h_3, t);
            ;
            LocalPopChoice(g_30);
          }
        else
          {
            t = f_30;
            t = Option_3_0(j_3, k_3, m_3, t);
          }
      }
    }
  return(t);
}
ATerm j_12 (ATerm p_53, ATerm q_53, ATerm t)
{
  ATerm x_84 = NULL;
  t = term_h_30;
  x_84 = t;
  t = SSL_table_put(x_84, p_53, q_53);
  t = (ATerm) ATmakeAppl(sym__3, term_h_30, p_53, q_53);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm a_85 = NULL,b_85 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_85 = NULL,d_85 = NULL,e_85 = NULL;
      t = term_m_29;
      t = e_0(t);
      c_85 = t;
      t = term_i_30;
      d_85 = t;
      t = term_j_30;
      e_85 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_30, term_j_30, c_85);
      t = h_12(d_85, e_85, c_85, t);
      _fail(t);
    }
  else
    {
      ATerm h_85 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_85 = ATgetFirst((ATermList) t);
          b_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_85;
      t = c_0(t);
      t = term_m_29;
      t = d_0(t);
      h_85 = t;
      t = (ATerm) ATinsert(CheckATermList(b_85), h_85);
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm j_85 = NULL;
  j_85 = t;
  if(match_string(t, "-o"))
    {
      t = j_85;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = j_85;
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm k_85 = NULL,l_85 = NULL;
  k_85 = t;
  t = term_i_28;
  l_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_28, k_85);
  t = j_12(l_85, k_85, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_85);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_k_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_3, o_3, p_3, t);
  return(t);
}
ATerm h_12 (ATerm n_58, ATerm o_58, ATerm m_58, ATerm t)
{
  ATerm n_85 = NULL,o_85 = NULL,p_85 = NULL;
  n_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_58, o_58);
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
        t = (ATerm) ATmakeAppl(sym__2, n_58, o_58);
        t = g_12(n_58, o_58, t);
        ;
        LocalPopChoice(n_30);
      }
    else
      {
        t = l_30;
        t = (ATerm) ATempty;
      }
    o_85 = t;
    t = (ATerm) ATinsert(CheckATermList(o_85), m_58);
    p_85 = t;
    t = SSL_table_put(n_58, o_58, p_85);
    t = n_85;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm w_85 = NULL,x_85 = NULL,y_85 = NULL,z_85 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_86 = NULL,b_86 = NULL,c_86 = NULL;
      t = term_m_29;
      t = k_0(t);
      a_86 = t;
      t = term_i_30;
      b_86 = t;
      t = term_j_30;
      c_86 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_30, term_j_30, a_86);
      t = h_12(b_86, c_86, a_86, t);
      _fail(t);
    }
  else
    {
      ATerm g_86 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_85 = ATgetFirst((ATermList) t);
          x_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_85;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_85 = ATgetFirst((ATermList) t);
          z_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_85;
      t = i_0(t);
      t = y_85;
      t = j_0(t);
      g_86 = t;
      t = (ATerm) ATinsert(CheckATermList(z_85), g_86);
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm i_86 = NULL;
  i_86 = t;
  if(match_string(t, "-i"))
    {
      t = i_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_86;
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm j_86 = NULL,k_86 = NULL;
  j_86 = t;
  t = term_j_29;
  k_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_29, j_86);
  t = j_12(k_86, j_86, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_86);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_q_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_3, r_3, s_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_86 = NULL,m_86 = NULL,n_86 = NULL,o_86 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_29;
  t = whoami_0_0(t);
  l_86 = t;
  t = term_n_29;
  n_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_30), l_86);
  o_86 = t;
  t = SSL_printnl(n_86, o_86);
  t = term_q_29;
  m_86 = t;
  t = SSL_exit(m_86);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_s_30;
  t = get_config_0_0(t);
  return(t);
}
ATerm c_12 (ATerm y_45, ATerm z_45, ATerm t)
{
  ATerm t_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_45, z_45);
      ;
      LocalPopChoice(v_30);
    }
  else
    {
      t = t_30;
      t = SSL_addr(y_45, z_45);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm t)
{
  ATerm q_86 = NULL,s_86 = NULL,t_86 = NULL;
  q_86 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_86;
      t = o_105(t);
    }
  else
    {
      ATerm x_86 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_86 = ATgetFirst((ATermList) t);
          t_86 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_86;
      t = foldr_2_0(o_105, p_105, t);
      x_86 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_86, x_86);
      t = p_105(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_u_29;
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL;
  if(match_cons(t, sym__2))
    {
      h_7 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_12(h_7, i_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_87 = NULL,d_7 = NULL,e_7 = NULL;
  t = times_0_0(t);
  e_7 = t;
  t = SSL_explode_term(e_7);
  if(match_cons(t, sym__2))
    {
      ATerm w_30 = ATgetArgument(t, 0);
      d_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7;
  t = foldr_2_0(u_3, v_3, t);
  a_87 = t;
  t = SSL_TicksToSeconds(a_87);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_87 = NULL,m_87 = NULL,n_87 = NULL;
  l_87 = t;
  if(match_cons(t, sym__2))
    {
      m_87 = ATgetArgument(t, 0);
      n_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_87;
        if((m_87 != t))
          {
            _fail(t);
          }
        t = l_87;
        ;
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
        t = (ATerm) ATmakeAppl(sym__2, m_87, n_87);
        {
          ATerm z_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_87, n_87);
              ;
              LocalPopChoice(a_31);
            }
          else
            {
              t = z_30;
              t = SSL_gtr(m_87, n_87);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_87, n_87);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_114 (ATerm), ATerm t)
{
  ATerm r_87 = NULL;
  r_87 = t;
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_87 = NULL;
        t = term_t_29;
        t = get_config_0_0(t);
        t_87 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_87, term_q_29);
        t = geq_0_0(t);
        t = r_87;
        t = j_114(t);
        ;
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
        t = r_87;
      }
  }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm v_87 = NULL,w_87 = NULL,y_87 = NULL,z_87 = NULL;
  t = run_time_0_0(t);
  v_87 = t;
  t = term_m_29;
  t = whoami_0_0(t);
  w_87 = t;
  t = term_n_29;
  y_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_31), v_87), term_d_31), w_87);
  z_87 = t;
  t = SSL_printnl(y_87, z_87);
  t = (ATerm) ATmakeAppl(sym__2, term_n_29, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_31), v_87), term_d_31), w_87));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_88 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_29;
  a_88 = t;
  t = SSL_exit(a_88);
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm i_88 = NULL,j_88 = NULL;
  j_88 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = j_88;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          i_88 = ATgetArgument(t, 0);
          {
            ATerm c_8 = NULL,c_15 = NULL;
            t = SSLgetAnnotations(j_88);
            c_8 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, i_88);
            c_15 = t;
            t = SSLsetAnnotations(c_15, c_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = j_88;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_116 (ATerm), ATerm t)
{
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_31);
    }
  else
    {
      t = f_31;
      t = fetch_1_0(y_3, t);
    }
  t = z_116(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm n_88 = NULL,o_88 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_88 = ATgetFirst((ATermList) t);
      o_88 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_88 = NULL,t_88 = NULL;
        ATerm z_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_88)), not_null(t_88));
          return(t);
        }
        t = o_88;
        t = h_0(t);
        if(((s_88 != NULL) && (s_88 != t)))
          _fail(t);
        else
          s_88 = t;
        t = n_88;
        t = g_0(t);
        if(((t_88 != NULL) && (t_88 != t)))
          _fail(t);
        else
          t_88 = t;
        t = o_88;
        t = reverse_acc_2_0(g_0, z_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_29;
      t = h_0(t);
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm x_88 = NULL,y_88 = NULL,z_88 = NULL,m_15 = NULL;
  z_88 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_88);
  x_88 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, y_88);
  m_15 = t;
  t = SSLsetAnnotations(m_15, x_88);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm b_89 = NULL;
  b_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_89), term_j_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_88 = NULL,w_88 = NULL;
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_31);
    }
  else
    {
      t = k_31;
      t = fetch_1_0(a_4, t);
    }
  t = term_m_31;
  t = echo_0_0(t);
  t = term_i_30;
  v_88 = t;
  t = term_j_30;
  w_88 = t;
  t = term_n_31;
  t = g_12(v_88, w_88, t);
  t = reverse_acc_2_0(_id, b_4, t);
  t = map_1_0(c_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm i_107 (ATerm), ATerm t)
{
  ATerm y_89 (ATerm t)
  {
    ATerm v_89 = NULL,w_89 = NULL,x_89 = NULL;
    v_89 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_89 = ATgetFirst((ATermList) t);
        x_89 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_31 = t;
      int p_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_8 = NULL,w_8 = NULL,z_15 = NULL;
          t = SSLgetAnnotations(v_89);
          r_8 = t;
          t = w_89;
          t = i_107(t);
          w_8 = t;
          t = (ATerm) ATinsert(CheckATermList(x_89), w_8);
          z_15 = t;
          t = SSLsetAnnotations(z_15, r_8);
          ;
          LocalPopChoice(p_31);
        }
      else
        {
          t = o_31;
          {
            ATerm f_9 = NULL,i_9 = NULL,a_16 = NULL;
            t = SSLgetAnnotations(v_89);
            f_9 = t;
            t = x_89;
            t = y_89(t);
            i_9 = t;
            t = (ATerm) ATinsert(CheckATermList(i_9), w_89);
            a_16 = t;
            t = SSLsetAnnotations(a_16, f_9);
          }
        }
    }
    return(t);
  }
  t = y_89(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_90 = NULL,d_90 = NULL,e_90 = NULL;
  c_90 = t;
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_90;
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
            t = c_90;
          }
        ;
        LocalPopChoice(r_31);
      }
    else
      {
        t = q_31;
        t = (ATerm) ATinsert(ATempty, c_90);
      }
    d_90 = t;
    t = term_j_28;
    e_90 = t;
    t = SSL_printnl(e_90, d_90);
    t = c_90;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_s_30;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm f_12 (ATerm y_39, ATerm z_39, ATerm t)
{
  t = SSL_strcat(y_39, z_39);
  return(t);
}
ATerm debug_1_0 (ATerm x_112 (ATerm), ATerm t)
{
  ATerm i_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL;
  i_90 = t;
  t = x_112(t);
  k_90 = t;
  t = term_n_29;
  l_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_90), k_90);
  m_90 = t;
  t = SSL_printnl(l_90, m_90);
  t = i_90;
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
    }
  return(t);
}
ATerm e_4 (ATerm t)
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
      ATerm t_90 = NULL;
      t_90 = t;
      t = SSL_is_string(t_90);
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
            t = map_1_0(d_4, t);
            ;
            LocalPopChoice(a_32);
          }
        else
          {
            t = z_31;
            {
              ATerm z_90 = NULL,a_91 = NULL,b_91 = NULL;
              z_90 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_91 = ATgetArgument(t, 0);
                  t = a_91;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_91 = ATgetArgument(t, 0);
                      t = a_91;
                      {
                        ATerm c_32 = t;
                        int d_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(d_32);
                          }
                        else
                          {
                            t = c_32;
                            t = debug_1_0(e_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm f_91 = NULL,g_91 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_91 = ATgetArgument(t, 0);
                          b_91 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_91;
                      t = eval_config_0_0(t);
                      f_91 = t;
                      t = b_91;
                      t = eval_config_0_0(t);
                      g_91 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_91, g_91);
                      t = f_12(f_91, g_91, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm g_12 (ATerm e_60, ATerm f_60, ATerm t)
{
  t = SSL_table_get(e_60, f_60);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm k_91 = NULL,l_91 = NULL;
  k_91 = t;
  t = term_h_30;
  l_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_30, k_91);
  t = g_12(l_91, k_91, t);
  {
    ATerm e_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_91 = NULL,n_91 = NULL;
        t = eval_config_0_0(t);
        m_91 = t;
        t = term_h_30;
        n_91 = t;
        t = SSL_table_put(n_91, k_91, m_91);
        t = m_91;
        ;
        LocalPopChoice(f_32);
      }
    else
      {
        t = e_32;
      }
  }
  return(t);
}
ATerm g_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm q_91 = NULL,r_91 = NULL;
  t = term_g_32;
  q_91 = t;
  t = term_m_29;
  r_91 = t;
  t = term_h_32;
  t = j_12(q_91, r_91, t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_i_32;
  return(t);
}
ATerm k_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm s_91 = NULL,t_91 = NULL,u_91 = NULL,v_91 = NULL;
  t = term_g_32;
  u_91 = t;
  t = term_m_29;
  v_91 = t;
  t = term_h_32;
  t = j_12(u_91, v_91, t);
  t = term_j_32;
  s_91 = t;
  t = term_m_29;
  t_91 = t;
  t = term_k_32;
  t = j_12(s_91, t_91, t);
  t = term_l_32;
  return(t);
}
ATerm m_4 (ATerm t)
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
      t = Option_3_0(g_4, h_4, i_4, t);
      ;
      LocalPopChoice(o_32);
    }
  else
    {
      t = n_32;
      t = Option_3_0(k_4, l_4, m_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm t)
{
  ATerm w_91 = NULL,x_91 = NULL,y_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL,d_16 = NULL;
  b_92 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_91 = ATgetFirst((ATermList) t);
      y_91 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_92);
  w_91 = t;
  t = x_91;
  t = q_75(t);
  z_91 = t;
  t = y_91;
  t = r_75(t);
  a_92 = t;
  t = (ATerm) ATinsert(CheckATermList(a_92), z_91);
  d_16 = t;
  t = SSLsetAnnotations(d_16, w_91);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_119 (ATerm), ATerm t)
{
  ATerm i_92 = NULL,j_92 = NULL,k_92 = NULL,l_92 = NULL,n_92 = NULL,o_92 = NULL,o_16 = NULL;
  i_92 = t;
  {
    ATerm p_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_32;
        t = c_119(t);
        ;
        LocalPopChoice(q_32);
      }
    else
      {
        t = p_32;
      }
    t = i_92;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_92 = ATgetFirst((ATermList) t);
        l_92 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_92);
    j_92 = t;
    t = term_s_30;
    o_92 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_s_30, k_92);
    t = j_12(o_92, k_92, t);
    t = l_92;
    {
      ATerm z_92 (ATerm t)
      {
        ATerm s_32 = t;
        int t_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_32 = t;
            int v_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_92 = NULL;
                r_92 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = r_92;
                ;
                LocalPopChoice(v_32);
              }
            else
              {
                t = u_32;
                t = c_119(t);
                t = Cons_2_0(_id, z_92, t);
              }
            ;
            LocalPopChoice(t_32);
          }
        else
          {
            t = s_32;
            {
              ATerm u_92 = NULL,v_92 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_92 = ATgetFirst((ATermList) t);
                  v_92 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_92), (ATerm) ATmakeAppl(sym_Undefined_1, u_92));
            }
          }
        return(t);
      }
      t = z_92(t);
      n_92 = t;
      t = (ATerm) ATinsert(CheckATermList(n_92), (ATerm) ATmakeAppl(sym_Program_1, k_92));
      o_16 = t;
      t = SSLsetAnnotations(o_16, j_92);
    }
  }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm n_93 = NULL;
  n_93 = t;
  if(match_string(t, "--help"))
    {
      t = n_93;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_93;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_93;
        }
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm o_93 = NULL,p_93 = NULL;
  t = term_h_31;
  o_93 = t;
  t = term_m_29;
  p_93 = t;
  t = term_w_32;
  t = j_12(o_93, p_93, t);
  t = term_x_32;
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_y_32;
  return(t);
}
ATerm y_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_119 (ATerm), ATerm t)
{
  ATerm e_93 = NULL,f_93 = NULL,g_93 = NULL,j_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL;
  g_93 = t;
  t = term_i_30;
  k_93 = t;
  t = term_j_30;
  l_93 = t;
  t = (ATerm) ATempty;
  m_93 = t;
  t = SSL_table_put(k_93, l_93, m_93);
  t = g_93;
  {
    ATerm n_4 (ATerm t)
    {
      ATerm z_32 = t;
      int a_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_119(t);
          ;
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
                t = Option_3_0(p_4, s_4, v_4, t);
                ;
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
    {
      ATerm d_33 = t;
      int f_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_93 = NULL;
          w_93 = t;
          {
            ATerm g_33 = t;
            int h_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_9 = NULL;
                t = w_93;
                {
                  ATerm i_33 = t;
                  int j_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_h_31;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(j_33);
                    }
                  else
                    {
                      t = i_33;
                      t = fetch_1_0(y_4, t);
                    }
                  t = w_93;
                  t = default_system_usage_0_0(t);
                  t = term_u_29;
                  z_9 = t;
                  t = SSL_exit(z_9);
                }
                ;
                LocalPopChoice(h_33);
              }
            else
              {
                t = g_33;
                {
                  ATerm e_10 = NULL;
                  t = term_g_32;
                  t = get_config_0_0(t);
                  t = w_93;
                  t = default_system_about_0_0(t);
                  t = term_u_29;
                  e_10 = t;
                  t = SSL_exit(e_10);
                }
              }
          }
          ;
          LocalPopChoice(f_33);
        }
      else
        {
          t = d_33;
          {
            ATerm k_33 = t;
            int l_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_93 = NULL,y_93 = NULL,z_93 = NULL;
                ATerm z_4 (ATerm t)
                {
                  ATerm a_94 = NULL,b_94 = NULL,c_94 = NULL,v_16 = NULL;
                  c_94 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      b_94 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(c_94);
                  a_94 = t;
                  t = b_94;
                  if(((e_93 != NULL) && (e_93 != t)))
                    _fail(t);
                  else
                    e_93 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, b_94);
                  v_16 = t;
                  t = SSLsetAnnotations(v_16, a_94);
                  return(t);
                }
                t = fetch_1_0(z_4, t);
                t = term_n_29;
                y_93 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_93)), term_m_33);
                z_93 = t;
                t = SSL_printnl(y_93, z_93);
                t = (ATerm) ATmakeAppl(sym__2, term_n_29, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_93)), term_m_33));
                t = default_system_usage_0_0(t);
                t = term_q_29;
                x_93 = t;
                t = SSL_exit(x_93);
                ;
                LocalPopChoice(l_33);
              }
            else
              {
                t = k_33;
              }
          }
        }
      f_93 = t;
      t = term_i_30;
      j_93 = t;
      t = SSL_table_destroy(j_93);
      t = f_93;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm t)
{
  ATerm h_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL;
  t = parse_options_1_0(b_117, t);
  h_94 = t;
  t = term_n_33;
  k_94 = t;
  t = SSL_table_create(k_94);
  t = term_n_33;
  i_94 = t;
  t = term_o_33;
  j_94 = t;
  t = SSL_table_put(i_94, j_94, h_94);
  t = h_94;
  t = d_117(t);
  {
    ATerm q_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_117, t);
        ;
        LocalPopChoice(r_33);
      }
    else
      {
        t = q_33;
        {
          ATerm s_33 = t;
          int t_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_117(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(t_33);
            }
          else
            {
              t = s_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm u_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(v_33);
    }
  else
    {
      t = u_33;
      {
        ATerm x_33 = t;
        int y_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
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
                  ;
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
                        ;
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
ATerm c_5 (ATerm t)
{
  t = input_1_0(g_5, t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm p_94 = NULL,q_94 = NULL;
  t = term_m_28;
  p_94 = t;
  t = term_m_29;
  q_94 = t;
  t = term_e_34;
  t = j_12(p_94, q_94, t);
  t = term_f_34;
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_g_34;
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = output_1_0(h_5, t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL,w_94 = NULL,x_94 = NULL,y_94 = NULL,z_94 = NULL,a_95 = NULL,b_95 = NULL,c_95 = NULL,d_95 = NULL,e_95 = NULL,f_95 = NULL,g_95 = NULL,k_17 = NULL,j_17 = NULL,z_16 = NULL,y_16 = NULL;
  g_95 = t;
  if(match_cons(t, sym_Specification_1))
    {
      t_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_95);
  s_94 = t;
  t = t_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_94 = ATgetFirst((ATermList) t);
      w_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_94);
  u_94 = t;
  t = w_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_94 = ATgetFirst((ATermList) t);
      a_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_94);
  y_94 = t;
  t = z_94;
  if(match_cons(t, sym_Strategies_1))
    {
      d_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_94);
  c_95 = t;
  t = d_95;
  t = map_1_0(o_5, t);
  e_95 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, e_95);
  y_16 = t;
  t = SSLsetAnnotations(y_16, c_95);
  f_95 = t;
  t = a_95;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_95), f_95);
  z_16 = t;
  t = SSLsetAnnotations(z_16, y_94);
  b_95 = t;
  t = (ATerm) ATinsert(CheckATermList(b_95), v_94);
  j_17 = t;
  t = SSLsetAnnotations(j_17, u_94);
  x_94 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, x_94);
  k_17 = t;
  t = SSLsetAnnotations(k_17, s_94);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm t_95 = NULL,u_95 = NULL,v_95 = NULL,w_95 = NULL,x_95 = NULL;
  x_95 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      t_95 = ATgetArgument(t, 0);
      u_95 = ATgetArgument(t, 1);
      v_95 = ATgetArgument(t, 2);
      w_95 = ATgetArgument(t, 3);
      {
        ATerm h_34 = t;
        int i_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_13 = NULL,e_14 = NULL,x_16 = NULL;
            t = SSLgetAnnotations(x_95);
            y_13 = t;
            t = w_95;
            t = define_congruences_0_0(t);
            e_14 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, t_95, u_95, v_95, e_14);
            x_16 = t;
            t = SSLsetAnnotations(x_16, y_13);
            ;
            LocalPopChoice(i_34);
          }
        else
          {
            t = h_34;
            t = x_95;
          }
      }
    }
  else
    {
      t = x_95;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(a_5, default_usage_0_0, _id, c_5, t);
  return(t);
}
